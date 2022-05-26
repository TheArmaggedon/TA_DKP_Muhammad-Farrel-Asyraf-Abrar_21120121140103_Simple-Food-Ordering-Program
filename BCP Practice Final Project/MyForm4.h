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
	/// Summary for MyForm4
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		MyForm4(void)
		{
			InitializeComponent();
			newBurgerPrice = menuObj2.getCurrentPrice();
			newFRicePrice = menuObj2.getCurrentPrice();
			newChickenBiryaniPrice = menuObj2.getCurrentPrice();
			newOrangeJuicePrice = menuObj2.getCurrentPrice();
			newMineralWaterPrice = menuObj2.getCurrentPrice();
			newChocoMilkshakePrice = menuObj2.getCurrentPrice();
			menuObj2.resetIndex();
			this->burgerPriceInput->Text = menuObj2.getCurrentPrice().ToString();
			this->fRicePriceInput->Text = menuObj2.getCurrentPrice().ToString();
			this->chickenBiryaniPriceInput->Text = menuObj2.getCurrentPrice().ToString();
			this->orangeJuicePriceInput->Text = menuObj2.getCurrentPrice().ToString();
			this->mineralWaterPriceInput->Text = menuObj2.getCurrentPrice().ToString();
			this->chocoMilkshakePriceInput->Text = menuObj2.getCurrentPrice().ToString();
			menuObj2.resetIndex();

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: MenuDataProcess::MenuClass menuObj2;
	private: int newBurgerPrice; int newFRicePrice; int newChickenBiryaniPrice; int newOrangeJuicePrice; int newMineralWaterPrice; int newChocoMilkshakePrice;
	private: System::Windows::Forms::TextBox^ burgerPriceInput;
	private: System::Windows::Forms::Label^ newBurgerPriceLabel;
	private: System::Windows::Forms::TextBox^ fRicePriceInput;
	private: System::Windows::Forms::Label^ newFRicePriceLabel;
	private: System::Windows::Forms::Label^ newChickenBiryaniLabel;
	private: System::Windows::Forms::TextBox^ chickenBiryaniPriceInput;
	private: System::Windows::Forms::Label^ newOrangeJuicePriceLabel;
	private: System::Windows::Forms::TextBox^ orangeJuicePriceInput;
	private: System::Windows::Forms::Label^ newMineralWaterPricePrice;
	private: System::Windows::Forms::TextBox^ chocoMilkshakePriceInput;
	private: System::Windows::Forms::Button^ submitNewPriceButton;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ newChocoMilkshakePriceLabel;
	private: System::Windows::Forms::TextBox^ mineralWaterPriceInput;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm4::typeid));
			this->burgerPriceInput = (gcnew System::Windows::Forms::TextBox());
			this->newBurgerPriceLabel = (gcnew System::Windows::Forms::Label());
			this->fRicePriceInput = (gcnew System::Windows::Forms::TextBox());
			this->newFRicePriceLabel = (gcnew System::Windows::Forms::Label());
			this->newChickenBiryaniLabel = (gcnew System::Windows::Forms::Label());
			this->chickenBiryaniPriceInput = (gcnew System::Windows::Forms::TextBox());
			this->newOrangeJuicePriceLabel = (gcnew System::Windows::Forms::Label());
			this->orangeJuicePriceInput = (gcnew System::Windows::Forms::TextBox());
			this->newMineralWaterPricePrice = (gcnew System::Windows::Forms::Label());
			this->chocoMilkshakePriceInput = (gcnew System::Windows::Forms::TextBox());
			this->submitNewPriceButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->newChocoMilkshakePriceLabel = (gcnew System::Windows::Forms::Label());
			this->mineralWaterPriceInput = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// burgerPriceInput
			// 
			this->burgerPriceInput->Location = System::Drawing::Point(582, 185);
			this->burgerPriceInput->Name = L"burgerPriceInput";
			this->burgerPriceInput->Size = System::Drawing::Size(194, 22);
			this->burgerPriceInput->TabIndex = 49;
			this->burgerPriceInput->WordWrap = false;
			// 
			// newBurgerPriceLabel
			// 
			this->newBurgerPriceLabel->AutoSize = true;
			this->newBurgerPriceLabel->BackColor = System::Drawing::Color::Transparent;
			this->newBurgerPriceLabel->Font = (gcnew System::Drawing::Font(L"ESSTIXThirteen", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->newBurgerPriceLabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->newBurgerPriceLabel->Location = System::Drawing::Point(440, 186);
			this->newBurgerPriceLabel->Name = L"newBurgerPriceLabel";
			this->newBurgerPriceLabel->Size = System::Drawing::Size(117, 20);
			this->newBurgerPriceLabel->TabIndex = 55;
			this->newBurgerPriceLabel->Text = L"Burger Price";
			// 
			// fRicePriceInput
			// 
			this->fRicePriceInput->Location = System::Drawing::Point(582, 239);
			this->fRicePriceInput->Name = L"fRicePriceInput";
			this->fRicePriceInput->Size = System::Drawing::Size(195, 22);
			this->fRicePriceInput->TabIndex = 56;
			this->fRicePriceInput->WordWrap = false;
			// 
			// newFRicePriceLabel
			// 
			this->newFRicePriceLabel->AutoSize = true;
			this->newFRicePriceLabel->BackColor = System::Drawing::Color::Transparent;
			this->newFRicePriceLabel->Font = (gcnew System::Drawing::Font(L"ESSTIXThirteen", 12));
			this->newFRicePriceLabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->newFRicePriceLabel->Location = System::Drawing::Point(407, 241);
			this->newFRicePriceLabel->Name = L"newFRicePriceLabel";
			this->newFRicePriceLabel->Size = System::Drawing::Size(150, 20);
			this->newFRicePriceLabel->TabIndex = 57;
			this->newFRicePriceLabel->Text = L"Fried Rice Price";
			// 
			// newChickenBiryaniLabel
			// 
			this->newChickenBiryaniLabel->AutoSize = true;
			this->newChickenBiryaniLabel->BackColor = System::Drawing::Color::Transparent;
			this->newChickenBiryaniLabel->Font = (gcnew System::Drawing::Font(L"ESSTIXThirteen", 12));
			this->newChickenBiryaniLabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->newChickenBiryaniLabel->Location = System::Drawing::Point(360, 283);
			this->newChickenBiryaniLabel->Name = L"newChickenBiryaniLabel";
			this->newChickenBiryaniLabel->Size = System::Drawing::Size(197, 20);
			this->newChickenBiryaniLabel->TabIndex = 58;
			this->newChickenBiryaniLabel->Text = L"Chicken Biryani Price";
			// 
			// chickenBiryaniPriceInput
			// 
			this->chickenBiryaniPriceInput->Location = System::Drawing::Point(582, 283);
			this->chickenBiryaniPriceInput->Name = L"chickenBiryaniPriceInput";
			this->chickenBiryaniPriceInput->Size = System::Drawing::Size(194, 22);
			this->chickenBiryaniPriceInput->TabIndex = 59;
			this->chickenBiryaniPriceInput->WordWrap = false;
			// 
			// newOrangeJuicePriceLabel
			// 
			this->newOrangeJuicePriceLabel->AutoSize = true;
			this->newOrangeJuicePriceLabel->BackColor = System::Drawing::Color::Transparent;
			this->newOrangeJuicePriceLabel->Font = (gcnew System::Drawing::Font(L"ESSTIXThirteen", 12));
			this->newOrangeJuicePriceLabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->newOrangeJuicePriceLabel->Location = System::Drawing::Point(383, 326);
			this->newOrangeJuicePriceLabel->Name = L"newOrangeJuicePriceLabel";
			this->newOrangeJuicePriceLabel->Size = System::Drawing::Size(174, 20);
			this->newOrangeJuicePriceLabel->TabIndex = 60;
			this->newOrangeJuicePriceLabel->Text = L"Orange Juice Price";
			this->newOrangeJuicePriceLabel->Click += gcnew System::EventHandler(this, &MyForm4::newOrangeJuicePriceLabel_Click);
			// 
			// orangeJuicePriceInput
			// 
			this->orangeJuicePriceInput->Location = System::Drawing::Point(582, 324);
			this->orangeJuicePriceInput->Name = L"orangeJuicePriceInput";
			this->orangeJuicePriceInput->Size = System::Drawing::Size(195, 22);
			this->orangeJuicePriceInput->TabIndex = 61;
			this->orangeJuicePriceInput->WordWrap = false;
			// 
			// newMineralWaterPricePrice
			// 
			this->newMineralWaterPricePrice->AutoSize = true;
			this->newMineralWaterPricePrice->BackColor = System::Drawing::Color::Transparent;
			this->newMineralWaterPricePrice->Font = (gcnew System::Drawing::Font(L"ESSTIXThirteen", 12));
			this->newMineralWaterPricePrice->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->newMineralWaterPricePrice->Location = System::Drawing::Point(371, 361);
			this->newMineralWaterPricePrice->Name = L"newMineralWaterPricePrice";
			this->newMineralWaterPricePrice->Size = System::Drawing::Size(186, 20);
			this->newMineralWaterPricePrice->TabIndex = 62;
			this->newMineralWaterPricePrice->Text = L"Mineral Water Price";
			// 
			// chocoMilkshakePriceInput
			// 
			this->chocoMilkshakePriceInput->Location = System::Drawing::Point(582, 395);
			this->chocoMilkshakePriceInput->Name = L"chocoMilkshakePriceInput";
			this->chocoMilkshakePriceInput->Size = System::Drawing::Size(194, 22);
			this->chocoMilkshakePriceInput->TabIndex = 63;
			this->chocoMilkshakePriceInput->WordWrap = false;
			// 
			// submitNewPriceButton
			// 
			this->submitNewPriceButton->BackColor = System::Drawing::Color::Transparent;
			this->submitNewPriceButton->Font = (gcnew System::Drawing::Font(L"ESSTIXThirteen", 12));
			this->submitNewPriceButton->ForeColor = System::Drawing::Color::Black;
			this->submitNewPriceButton->Location = System::Drawing::Point(615, 454);
			this->submitNewPriceButton->Name = L"submitNewPriceButton";
			this->submitNewPriceButton->Size = System::Drawing::Size(135, 34);
			this->submitNewPriceButton->TabIndex = 64;
			this->submitNewPriceButton->Text = L"Submit";
			this->submitNewPriceButton->UseVisualStyleBackColor = false;
			this->submitNewPriceButton->Click += gcnew System::EventHandler(this, &MyForm4::submitNewPriceButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"ESSTIXThirteen", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(538, 119);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(281, 39);
			this->label1->TabIndex = 65;
			this->label1->Text = L"Edit Item Price";
			// 
			// newChocoMilkshakePriceLabel
			// 
			this->newChocoMilkshakePriceLabel->AutoSize = true;
			this->newChocoMilkshakePriceLabel->BackColor = System::Drawing::Color::Transparent;
			this->newChocoMilkshakePriceLabel->Font = (gcnew System::Drawing::Font(L"ESSTIXThirteen", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->newChocoMilkshakePriceLabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->newChocoMilkshakePriceLabel->Location = System::Drawing::Point(314, 396);
			this->newChocoMilkshakePriceLabel->Name = L"newChocoMilkshakePriceLabel";
			this->newChocoMilkshakePriceLabel->Size = System::Drawing::Size(243, 20);
			this->newChocoMilkshakePriceLabel->TabIndex = 66;
			this->newChocoMilkshakePriceLabel->Text = L"Chocolate Milkshake Price";
			// 
			// mineralWaterPriceInput
			// 
			this->mineralWaterPriceInput->Location = System::Drawing::Point(582, 360);
			this->mineralWaterPriceInput->Name = L"mineralWaterPriceInput";
			this->mineralWaterPriceInput->Size = System::Drawing::Size(194, 22);
			this->mineralWaterPriceInput->TabIndex = 67;
			this->mineralWaterPriceInput->WordWrap = false;
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1366, 768);
			this->Controls->Add(this->mineralWaterPriceInput);
			this->Controls->Add(this->newChocoMilkshakePriceLabel);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->submitNewPriceButton);
			this->Controls->Add(this->chocoMilkshakePriceInput);
			this->Controls->Add(this->newMineralWaterPricePrice);
			this->Controls->Add(this->orangeJuicePriceInput);
			this->Controls->Add(this->newOrangeJuicePriceLabel);
			this->Controls->Add(this->chickenBiryaniPriceInput);
			this->Controls->Add(this->newChickenBiryaniLabel);
			this->Controls->Add(this->newFRicePriceLabel);
			this->Controls->Add(this->fRicePriceInput);
			this->Controls->Add(this->newBurgerPriceLabel);
			this->Controls->Add(this->burgerPriceInput);
			this->Name = L"MyForm4";
			this->Text = L"Edit Item Price Page";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void submitNewPriceButton_Click(System::Object^ sender, System::EventArgs^ e) {
		
		



		if (!String::IsNullOrWhiteSpace(this->burgerPriceInput->Text)) {
			newBurgerPrice = int::Parse(this->burgerPriceInput->Text);
		}
		if (!String::IsNullOrWhiteSpace(this->fRicePriceInput->Text)) {
			newFRicePrice = int::Parse(this->fRicePriceInput->Text);
		}
		if (!String::IsNullOrWhiteSpace(this->chickenBiryaniPriceInput->Text)) {
			newChickenBiryaniPrice = int::Parse(this->chickenBiryaniPriceInput->Text);
		}
		if (!String::IsNullOrWhiteSpace(this->orangeJuicePriceInput->Text)) {
			newOrangeJuicePrice = int::Parse(this->orangeJuicePriceInput->Text);
		}
		if (!String::IsNullOrWhiteSpace(this->mineralWaterPriceInput->Text)) {
			newMineralWaterPrice = int::Parse(this->mineralWaterPriceInput->Text);
		}
		if (!String::IsNullOrWhiteSpace(this->chocoMilkshakePriceInput->Text)) {
			newChocoMilkshakePrice = int::Parse(this->chocoMilkshakePriceInput->Text);
		}
		menuObj2.setPrice(newBurgerPrice, newFRicePrice, newChickenBiryaniPrice, newOrangeJuicePrice, newMineralWaterPrice
			, newChocoMilkshakePrice);
		MessageBox::Show("Price update successful");
		this->Hide();
	}
private: System::Void newOrangeJuicePriceLabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
