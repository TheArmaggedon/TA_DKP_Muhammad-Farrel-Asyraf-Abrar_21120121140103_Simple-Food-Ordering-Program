#pragma once
#include "Menu.h"

namespace BCPPracticeFinalProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(int a, int b, int c, int d, int e, int f)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			amount1 = a;
			amount2 = b;
			amount3 = c;
			amount4 = d;
			amount5 = e;
			amount6 = f;
			if (amount1 > 0) {
				line1 = "Burger(x" + amount1 + ") IDR " + menuObj2.calculateBurgerTotal(amount1) + "\n";
			}
			if (amount2 > 0) {
				line2 = "Fried rice(x" + amount2 + ") IDR " + menuObj2.calculateFriedRiceTotal(amount2) + "\n";
			}
			if (amount3 > 0) {
				line3 = "Chicken biryani(x" + amount3 + ") IDR " + menuObj2.calculateChickenBriyaniTotal(amount3) + "\n";
			}
			if (amount4 > 0) {
				line4 = "Orange juice(x" + amount4 + ") IDR " + menuObj2.calculateOrangeJuiceTotal(amount4) + "\n";
			}
			if (amount5 > 0) {
				line5 = "Mineral water(x" + amount5 + ") IDR " + menuObj2.calculateMineralWaterTotal(amount5) + "\n";
			}
			if (amount6 > 0) {
				line6 = "Chocolate milkshake(x" + amount6 + ") IDR " + menuObj2.calculateChocoMilkshakeTotal(amount6) + "\n";
			}
			
			
			
			

			this->theBill->Text = line1 + line2 + line3 + line4 + line5 + line6 + "\n" +
				"Thanks for your order!\n Please proceed to our cashier\n for payment and order retrieval!";

				
			

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: MenuDataProcess::MenuClass menuObj2;
	private: System::Windows::Forms::Label^ orderSummaryLabel;
	protected:
	private: System::Windows::Forms::Label^ theBill;
	private: String^ line1 =""; String^ line2 =""; String^ line3 =""; String^ line4 =""; String^ line5 =""; String^ line6 ="";
	private: int amount1; int amount2; int amount3; int amount4; int amount5; int amount6;
	private: System::Windows::Forms::Button^ okButton;
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->orderSummaryLabel = (gcnew System::Windows::Forms::Label());
			this->theBill = (gcnew System::Windows::Forms::Label());
			this->okButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// orderSummaryLabel
			// 
			this->orderSummaryLabel->AutoSize = true;
			this->orderSummaryLabel->BackColor = System::Drawing::Color::Transparent;
			this->orderSummaryLabel->Font = (gcnew System::Drawing::Font(L"ESSTIXThirteen", 40));
			this->orderSummaryLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->orderSummaryLabel->Location = System::Drawing::Point(438, 9);
			this->orderSummaryLabel->Name = L"orderSummaryLabel";
			this->orderSummaryLabel->Size = System::Drawing::Size(489, 65);
			this->orderSummaryLabel->TabIndex = 0;
			this->orderSummaryLabel->Text = L"Order Summary";
			this->orderSummaryLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// theBill
			// 
			this->theBill->AutoSize = true;
			this->theBill->BackColor = System::Drawing::Color::Transparent;
			this->theBill->Font = (gcnew System::Drawing::Font(L"Ink Free", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->theBill->ForeColor = System::Drawing::SystemColors::Control;
			this->theBill->Location = System::Drawing::Point(439, 127);
			this->theBill->Name = L"theBill";
			this->theBill->Size = System::Drawing::Size(64, 25);
			this->theBill->TabIndex = 1;
			this->theBill->Text = L"label2";
			// 
			// okButton
			// 
			this->okButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"okButton.BackgroundImage")));
			this->okButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->okButton->Location = System::Drawing::Point(560, 569);
			this->okButton->Name = L"okButton";
			this->okButton->Size = System::Drawing::Size(238, 61);
			this->okButton->TabIndex = 2;
			this->okButton->UseVisualStyleBackColor = true;
			this->okButton->Click += gcnew System::EventHandler(this, &MyForm2::okButton_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1366, 768);
			this->Controls->Add(this->okButton);
			this->Controls->Add(this->theBill);
			this->Controls->Add(this->orderSummaryLabel);
			this->Name = L"MyForm2";
			this->Text = L"MyForm2";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void okButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}
};
}
