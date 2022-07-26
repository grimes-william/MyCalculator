#pragma once

#include <cctype>
#include <string>
#include <exception>

class Myexception : public std::exception {
public:
	Myexception() noexcept = default;
	~Myexception() = default;
	virtual const char* what() const noexcept {
		return "Invalid input";
	}
};

namespace MyCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ value1_input;
	private: System::Windows::Forms::TextBox^ value2_input;
	private: System::Windows::Forms::Button^ button1;




	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ result_output;

	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::CheckBox^ check_sum;
	private: System::Windows::Forms::CheckBox^ check_sub;
	private: System::Windows::Forms::CheckBox^ check_mult;
	private: System::Windows::Forms::CheckBox^ check_div;




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->value1_input = (gcnew System::Windows::Forms::TextBox());
			this->value2_input = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->result_output = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->check_sum = (gcnew System::Windows::Forms::CheckBox());
			this->check_sub = (gcnew System::Windows::Forms::CheckBox());
			this->check_mult = (gcnew System::Windows::Forms::CheckBox());
			this->check_div = (gcnew System::Windows::Forms::CheckBox());
			this->flowLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(99, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"My Calculator";
			// 
			// value1_input
			// 
			this->value1_input->AcceptsReturn = true;
			this->value1_input->Location = System::Drawing::Point(88, 84);
			this->value1_input->Name = L"value1_input";
			this->value1_input->Size = System::Drawing::Size(100, 20);
			this->value1_input->TabIndex = 1;
			// 
			// value2_input
			// 
			this->value2_input->Location = System::Drawing::Point(88, 151);
			this->value2_input->Name = L"value2_input";
			this->value2_input->Size = System::Drawing::Size(100, 20);
			this->value2_input->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(102, 177);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Calculate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(52, 219);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Result: ";
			// 
			// result_output
			// 
			this->result_output->AutoSize = true;
			this->result_output->Location = System::Drawing::Point(202, 219);
			this->result_output->Name = L"result_output";
			this->result_output->Size = System::Drawing::Size(48, 13);
			this->result_output->TabIndex = 5;
			this->result_output->Text = L"No Input";
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->check_sum);
			this->flowLayoutPanel1->Controls->Add(this->check_sub);
			this->flowLayoutPanel1->Controls->Add(this->check_mult);
			this->flowLayoutPanel1->Controls->Add(this->check_div);
			this->flowLayoutPanel1->Location = System::Drawing::Point(73, 112);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(148, 33);
			this->flowLayoutPanel1->TabIndex = 6;
			// 
			// check_sum
			// 
			this->check_sum->AutoSize = true;
			this->check_sum->Location = System::Drawing::Point(3, 3);
			this->check_sum->Name = L"check_sum";
			this->check_sum->Size = System::Drawing::Size(32, 17);
			this->check_sum->TabIndex = 0;
			this->check_sum->Text = L"+";
			this->check_sum->UseVisualStyleBackColor = true;
			// 
			// check_sub
			// 
			this->check_sub->AutoSize = true;
			this->check_sub->Location = System::Drawing::Point(41, 3);
			this->check_sub->Name = L"check_sub";
			this->check_sub->Size = System::Drawing::Size(29, 17);
			this->check_sub->TabIndex = 1;
			this->check_sub->Text = L"-";
			this->check_sub->UseVisualStyleBackColor = true;
			// 
			// check_mult
			// 
			this->check_mult->AutoSize = true;
			this->check_mult->Location = System::Drawing::Point(76, 3);
			this->check_mult->Name = L"check_mult";
			this->check_mult->Size = System::Drawing::Size(30, 17);
			this->check_mult->TabIndex = 2;
			this->check_mult->Text = L"*";
			this->check_mult->UseVisualStyleBackColor = true;
			// 
			// check_div
			// 
			this->check_div->AutoSize = true;
			this->check_div->Location = System::Drawing::Point(112, 3);
			this->check_div->Name = L"check_div";
			this->check_div->Size = System::Drawing::Size(31, 17);
			this->check_div->TabIndex = 3;
			this->check_div->Text = L"/";
			this->check_div->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->result_output);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->value2_input);
			this->Controls->Add(this->value1_input);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		float value1 = (float)System::Convert::ToDouble(value1_input->Text);
		float value2 = (float)System::Convert::ToDouble(value2_input->Text);

		float result;

		// if more than one checkbox is checked, do not process result
		if (bool(check_sum->CheckState) && (bool(check_sub->CheckState) || bool(check_mult->CheckState) || bool(check_div->CheckState)) ||
			bool(check_sub->CheckState) && (bool(check_mult->CheckState) || bool(check_div->CheckState)) ||
			bool(check_mult->CheckState) && bool(check_div->CheckState))
		{
			result_output->Text = "Too many operators chosen";
		}
		else {
			// + checked
			if (bool(check_sum->CheckState)) {
				result = value1 + value2;
				// update output
				result_output->Text = System::Convert::ToString(result);
			}
			// - checked
			else if (bool(check_sub->CheckState)) {
				result = value1 - value2;
				// update output
				result_output->Text = System::Convert::ToString(result);
			}
			// * checked
			else if (bool(check_mult->CheckState)) {
				result = value1 * value2;
				// update output
				result_output->Text = System::Convert::ToString(result);
			}
			// / checked
			else if (bool(check_div->CheckState)) {
				if (value2 == 0) {
					result_output->Text = "Cannot divide by 0";
				}
				else {
					result = value1 / value2;
					// update output
					result_output->Text = System::Convert::ToString(result);
				}
			}
		}
	}
	};
};

