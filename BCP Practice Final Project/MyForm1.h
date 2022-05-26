#pragma once
#include "Menu.h"
#include "MyForm2.h"
namespace BCPPracticeFinalProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			int i = 0;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			MenuDataProcess::MenuClass menuObj;
			
			this->burgerPricelabel->Text = menuObj.getDisplayPrice();
			this->fRicePriceLabel->Text = menuObj.getDisplayPrice();
			this->chickenBiryaniPriceLabel->Text = menuObj.getDisplayPrice();
			this->orangeJuicePriceLabel->Text = menuObj.getDisplayPrice();
			this->mineralWaterPriceLabel->Text = menuObj.getDisplayPrice();
			this->chocolateMilkshakePriceLabel->Text = menuObj.getDisplayPrice();
			menuObj.resetIndex();
			for (i = 0; i < 11; i++) { //fills the combobox items

				this->burgerSelect->Items->Add(menuObj.amount[i]);
				this->fRiceSelect->Items->Add(menuObj.amount[i]);
				this->cBiryaniSelect->Items->Add(menuObj.amount[i]);
				this->orangeJuiceSelect->Items->Add(menuObj.amount[i]);
				this->mineralWaterSelect->Items->Add(menuObj.amount[i]);
				this->chocoMilkshakeSelect->Items->Add(menuObj.amount[i]);
			}
			this->burgerSelect->SelectedItem = 0;
			this->fRiceSelect->SelectedItem = 0;
			this->cBiryaniSelect->SelectedItem = 0;
			this->orangeJuiceSelect->SelectedItem = 0;
			this->mineralWaterSelect->SelectedItem = 0;
			this->chocoMilkshakeSelect->SelectedItem = 0;
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	
	private: int burgerSel; int fRiceSel; int chickenBiryaniSel; int orangeJuiceSel; int mineralWaterSel; int chocoMilkshakeSel;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::ComboBox^ burgerSelect;
	private: System::Windows::Forms::ComboBox^ fRiceSelect;
	private: System::Windows::Forms::ComboBox^ cBiryaniSelect;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::ComboBox^ orangeJuiceSelect;
	private: System::Windows::Forms::ComboBox^ mineralWaterSelect;
	private: System::Windows::Forms::ComboBox^ chocoMilkshakeSelect;
	private: System::Windows::Forms::Label^ burgerLabel;
	private: System::Windows::Forms::Label^ fRiceLabel;
	private: System::Windows::Forms::Label^ chickenBiryaniLabel;
	private: System::Windows::Forms::Label^ orangeJuiceLabel;
	private: System::Windows::Forms::Label^ mineralWaterLabel;
	private: System::Windows::Forms::Label^ chocoMilkshakeLabel;
	private: System::Windows::Forms::Button^ confirmOrderButton;
	private: System::Windows::Forms::Label^ burgerPricelabel;
	private: System::Windows::Forms::Label^ fRicePriceLabel;
	private: System::Windows::Forms::Label^ chickenBiryaniPriceLabel;
	private: System::Windows::Forms::Label^ orangeJuicePriceLabel;
	private: System::Windows::Forms::Label^ mineralWaterPriceLabel;
	private: System::Windows::Forms::Label^ chocolateMilkshakePriceLabel;
	private: System::Windows::Forms::Button^ cancelOrderButton;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->burgerSelect = (gcnew System::Windows::Forms::ComboBox());
			this->fRiceSelect = (gcnew System::Windows::Forms::ComboBox());
			this->cBiryaniSelect = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->orangeJuiceSelect = (gcnew System::Windows::Forms::ComboBox());
			this->mineralWaterSelect = (gcnew System::Windows::Forms::ComboBox());
			this->chocoMilkshakeSelect = (gcnew System::Windows::Forms::ComboBox());
			this->burgerLabel = (gcnew System::Windows::Forms::Label());
			this->fRiceLabel = (gcnew System::Windows::Forms::Label());
			this->chickenBiryaniLabel = (gcnew System::Windows::Forms::Label());
			this->orangeJuiceLabel = (gcnew System::Windows::Forms::Label());
			this->mineralWaterLabel = (gcnew System::Windows::Forms::Label());
			this->chocoMilkshakeLabel = (gcnew System::Windows::Forms::Label());
			this->confirmOrderButton = (gcnew System::Windows::Forms::Button());
			this->burgerPricelabel = (gcnew System::Windows::Forms::Label());
			this->fRicePriceLabel = (gcnew System::Windows::Forms::Label());
			this->chickenBiryaniPriceLabel = (gcnew System::Windows::Forms::Label());
			this->orangeJuicePriceLabel = (gcnew System::Windows::Forms::Label());
			this->mineralWaterPriceLabel = (gcnew System::Windows::Forms::Label());
			this->chocolateMilkshakePriceLabel = (gcnew System::Windows::Forms::Label());
			this->cancelOrderButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Location = System::Drawing::Point(262, 77);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(166, 167);
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm1::pictureBox2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox3->Location = System::Drawing::Point(572, 77);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(198, 167);
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox4->Location = System::Drawing::Point(884, 77);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(210, 167);
			this->pictureBox4->TabIndex = 4;
			this->pictureBox4->TabStop = false;
			// 
			// burgerSelect
			// 
			this->burgerSelect->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->burgerSelect->FormattingEnabled = true;
			this->burgerSelect->Location = System::Drawing::Point(245, 311);
			this->burgerSelect->Name = L"burgerSelect";
			this->burgerSelect->Size = System::Drawing::Size(209, 24);
			this->burgerSelect->TabIndex = 12;
			this->burgerSelect->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::burgerSelect_SelectedIndexChanged);
			// 
			// fRiceSelect
			// 
			this->fRiceSelect->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->fRiceSelect->FormattingEnabled = true;
			this->fRiceSelect->Location = System::Drawing::Point(558, 311);
			this->fRiceSelect->Name = L"fRiceSelect";
			this->fRiceSelect->Size = System::Drawing::Size(212, 24);
			this->fRiceSelect->TabIndex = 13;
			// 
			// cBiryaniSelect
			// 
			this->cBiryaniSelect->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cBiryaniSelect->FormattingEnabled = true;
			this->cBiryaniSelect->Location = System::Drawing::Point(891, 311);
			this->cBiryaniSelect->Name = L"cBiryaniSelect";
			this->cBiryaniSelect->Size = System::Drawing::Size(203, 24);
			this->cBiryaniSelect->TabIndex = 14;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.BackgroundImage")));
			this->pictureBox7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox7->Location = System::Drawing::Point(262, 380);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(151, 140);
			this->pictureBox7->TabIndex = 15;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.BackgroundImage")));
			this->pictureBox8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox8->Location = System::Drawing::Point(558, 380);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(212, 140);
			this->pictureBox8->TabIndex = 16;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.BackgroundImage")));
			this->pictureBox9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox9->Location = System::Drawing::Point(928, 376);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(145, 144);
			this->pictureBox9->TabIndex = 17;
			this->pictureBox9->TabStop = false;
			// 
			// orangeJuiceSelect
			// 
			this->orangeJuiceSelect->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->orangeJuiceSelect->FormattingEnabled = true;
			this->orangeJuiceSelect->Location = System::Drawing::Point(245, 602);
			this->orangeJuiceSelect->Name = L"orangeJuiceSelect";
			this->orangeJuiceSelect->Size = System::Drawing::Size(209, 24);
			this->orangeJuiceSelect->TabIndex = 27;
			this->orangeJuiceSelect->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::orangeJuiceSelect_SelectedIndexChanged);
			// 
			// mineralWaterSelect
			// 
			this->mineralWaterSelect->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->mineralWaterSelect->FormattingEnabled = true;
			this->mineralWaterSelect->Location = System::Drawing::Point(558, 602);
			this->mineralWaterSelect->Name = L"mineralWaterSelect";
			this->mineralWaterSelect->Size = System::Drawing::Size(212, 24);
			this->mineralWaterSelect->TabIndex = 28;
			// 
			// chocoMilkshakeSelect
			// 
			this->chocoMilkshakeSelect->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->chocoMilkshakeSelect->FormattingEnabled = true;
			this->chocoMilkshakeSelect->Location = System::Drawing::Point(891, 602);
			this->chocoMilkshakeSelect->Name = L"chocoMilkshakeSelect";
			this->chocoMilkshakeSelect->Size = System::Drawing::Size(203, 24);
			this->chocoMilkshakeSelect->TabIndex = 34;
			// 
			// burgerLabel
			// 
			this->burgerLabel->AutoSize = true;
			this->burgerLabel->BackColor = System::Drawing::Color::Transparent;
			this->burgerLabel->Font = (gcnew System::Drawing::Font(L"ESSTIXThirteen", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->burgerLabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->burgerLabel->Location = System::Drawing::Point(313, 252);
			this->burgerLabel->Name = L"burgerLabel";
			this->burgerLabel->Size = System::Drawing::Size(67, 20);
			this->burgerLabel->TabIndex = 35;
			this->burgerLabel->Text = L"Burger";
			this->burgerLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// fRiceLabel
			// 
			this->fRiceLabel->BackColor = System::Drawing::Color::Transparent;
			this->fRiceLabel->Font = (gcnew System::Drawing::Font(L"ESSTIXThirteen", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fRiceLabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->fRiceLabel->Location = System::Drawing::Point(610, 247);
			this->fRiceLabel->Name = L"fRiceLabel";
			this->fRiceLabel->Size = System::Drawing::Size(129, 31);
			this->fRiceLabel->TabIndex = 36;
			this->fRiceLabel->Text = L"Fried Rice";
			this->fRiceLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// chickenBiryaniLabel
			// 
			this->chickenBiryaniLabel->AutoSize = true;
			this->chickenBiryaniLabel->BackColor = System::Drawing::Color::Transparent;
			this->chickenBiryaniLabel->Font = (gcnew System::Drawing::Font(L"ESSTIXThirteen", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chickenBiryaniLabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->chickenBiryaniLabel->Location = System::Drawing::Point(924, 247);
			this->chickenBiryaniLabel->Name = L"chickenBiryaniLabel";
			this->chickenBiryaniLabel->Size = System::Drawing::Size(147, 20);
			this->chickenBiryaniLabel->TabIndex = 37;
			this->chickenBiryaniLabel->Text = L"Chicken Biryani";
			this->chickenBiryaniLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// orangeJuiceLabel
			// 
			this->orangeJuiceLabel->AutoSize = true;
			this->orangeJuiceLabel->BackColor = System::Drawing::Color::Transparent;
			this->orangeJuiceLabel->Font = (gcnew System::Drawing::Font(L"ESSTIXThirteen", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->orangeJuiceLabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->orangeJuiceLabel->Location = System::Drawing::Point(284, 523);
			this->orangeJuiceLabel->Name = L"orangeJuiceLabel";
			this->orangeJuiceLabel->Size = System::Drawing::Size(124, 20);
			this->orangeJuiceLabel->TabIndex = 38;
			this->orangeJuiceLabel->Text = L"Orange Juice";
			this->orangeJuiceLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// mineralWaterLabel
			// 
			this->mineralWaterLabel->AutoSize = true;
			this->mineralWaterLabel->BackColor = System::Drawing::Color::Transparent;
			this->mineralWaterLabel->Font = (gcnew System::Drawing::Font(L"ESSTIXThirteen", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mineralWaterLabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->mineralWaterLabel->Location = System::Drawing::Point(603, 523);
			this->mineralWaterLabel->Name = L"mineralWaterLabel";
			this->mineralWaterLabel->Size = System::Drawing::Size(136, 20);
			this->mineralWaterLabel->TabIndex = 39;
			this->mineralWaterLabel->Text = L"Mineral Water";
			this->mineralWaterLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->mineralWaterLabel->Click += gcnew System::EventHandler(this, &MyForm1::mineralWaterLabel_Click);
			// 
			// chocoMilkshakeLabel
			// 
			this->chocoMilkshakeLabel->AutoSize = true;
			this->chocoMilkshakeLabel->BackColor = System::Drawing::Color::Transparent;
			this->chocoMilkshakeLabel->Font = (gcnew System::Drawing::Font(L"ESSTIXThirteen", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chocoMilkshakeLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->chocoMilkshakeLabel->Location = System::Drawing::Point(901, 523);
			this->chocoMilkshakeLabel->Name = L"chocoMilkshakeLabel";
			this->chocoMilkshakeLabel->Size = System::Drawing::Size(193, 20);
			this->chocoMilkshakeLabel->TabIndex = 40;
			this->chocoMilkshakeLabel->Text = L"Chocolate Milkshake";
			this->chocoMilkshakeLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// confirmOrderButton
			// 
			this->confirmOrderButton->Location = System::Drawing::Point(887, 670);
			this->confirmOrderButton->Name = L"confirmOrderButton";
			this->confirmOrderButton->Size = System::Drawing::Size(207, 58);
			this->confirmOrderButton->TabIndex = 63;
			this->confirmOrderButton->Text = L"Confirm Order";
			this->confirmOrderButton->UseVisualStyleBackColor = true;
			this->confirmOrderButton->Click += gcnew System::EventHandler(this, &MyForm1::confirmOrderButton_Click);
			// 
			// burgerPricelabel
			// 
			this->burgerPricelabel->AutoSize = true;
			this->burgerPricelabel->BackColor = System::Drawing::Color::Transparent;
			this->burgerPricelabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->burgerPricelabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->burgerPricelabel->Location = System::Drawing::Point(310, 286);
			this->burgerPricelabel->Name = L"burgerPricelabel";
			this->burgerPricelabel->Size = System::Drawing::Size(70, 22);
			this->burgerPricelabel->TabIndex = 64;
			this->burgerPricelabel->Text = L"label10";
			// 
			// fRicePriceLabel
			// 
			this->fRicePriceLabel->AutoSize = true;
			this->fRicePriceLabel->BackColor = System::Drawing::Color::Transparent;
			this->fRicePriceLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fRicePriceLabel->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->fRicePriceLabel->Location = System::Drawing::Point(635, 286);
			this->fRicePriceLabel->Name = L"fRicePriceLabel";
			this->fRicePriceLabel->Size = System::Drawing::Size(69, 22);
			this->fRicePriceLabel->TabIndex = 65;
			this->fRicePriceLabel->Text = L"label11";
			// 
			// chickenBiryaniPriceLabel
			// 
			this->chickenBiryaniPriceLabel->AutoSize = true;
			this->chickenBiryaniPriceLabel->BackColor = System::Drawing::Color::Transparent;
			this->chickenBiryaniPriceLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->chickenBiryaniPriceLabel->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->chickenBiryaniPriceLabel->Location = System::Drawing::Point(959, 286);
			this->chickenBiryaniPriceLabel->Name = L"chickenBiryaniPriceLabel";
			this->chickenBiryaniPriceLabel->Size = System::Drawing::Size(70, 22);
			this->chickenBiryaniPriceLabel->TabIndex = 66;
			this->chickenBiryaniPriceLabel->Text = L"label12";
			// 
			// orangeJuicePriceLabel
			// 
			this->orangeJuicePriceLabel->AutoSize = true;
			this->orangeJuicePriceLabel->BackColor = System::Drawing::Color::Transparent;
			this->orangeJuicePriceLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->orangeJuicePriceLabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->orangeJuicePriceLabel->Location = System::Drawing::Point(310, 565);
			this->orangeJuicePriceLabel->Name = L"orangeJuicePriceLabel";
			this->orangeJuicePriceLabel->Size = System::Drawing::Size(70, 22);
			this->orangeJuicePriceLabel->TabIndex = 67;
			this->orangeJuicePriceLabel->Text = L"label13";
			// 
			// mineralWaterPriceLabel
			// 
			this->mineralWaterPriceLabel->AutoSize = true;
			this->mineralWaterPriceLabel->BackColor = System::Drawing::Color::Transparent;
			this->mineralWaterPriceLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mineralWaterPriceLabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->mineralWaterPriceLabel->Location = System::Drawing::Point(634, 565);
			this->mineralWaterPriceLabel->Name = L"mineralWaterPriceLabel";
			this->mineralWaterPriceLabel->Size = System::Drawing::Size(70, 22);
			this->mineralWaterPriceLabel->TabIndex = 68;
			this->mineralWaterPriceLabel->Text = L"label14";
			// 
			// chocolateMilkshakePriceLabel
			// 
			this->chocolateMilkshakePriceLabel->AutoSize = true;
			this->chocolateMilkshakePriceLabel->BackColor = System::Drawing::Color::Transparent;
			this->chocolateMilkshakePriceLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->chocolateMilkshakePriceLabel->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->chocolateMilkshakePriceLabel->Location = System::Drawing::Point(959, 565);
			this->chocolateMilkshakePriceLabel->Name = L"chocolateMilkshakePriceLabel";
			this->chocolateMilkshakePriceLabel->Size = System::Drawing::Size(70, 22);
			this->chocolateMilkshakePriceLabel->TabIndex = 69;
			this->chocolateMilkshakePriceLabel->Text = L"label15";
			this->chocolateMilkshakePriceLabel->Click += gcnew System::EventHandler(this, &MyForm1::chocolateMilkshakePriceLabel_Click);
			// 
			// cancelOrderButton
			// 
			this->cancelOrderButton->Location = System::Drawing::Point(247, 670);
			this->cancelOrderButton->Name = L"cancelOrderButton";
			this->cancelOrderButton->Size = System::Drawing::Size(207, 58);
			this->cancelOrderButton->TabIndex = 70;
			this->cancelOrderButton->Text = L"Cancel Order";
			this->cancelOrderButton->UseVisualStyleBackColor = true;
			this->cancelOrderButton->Click += gcnew System::EventHandler(this, &MyForm1::cancelOrderButton_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1366, 768);
			this->Controls->Add(this->cancelOrderButton);
			this->Controls->Add(this->chocolateMilkshakePriceLabel);
			this->Controls->Add(this->mineralWaterPriceLabel);
			this->Controls->Add(this->orangeJuicePriceLabel);
			this->Controls->Add(this->chickenBiryaniPriceLabel);
			this->Controls->Add(this->fRicePriceLabel);
			this->Controls->Add(this->burgerPricelabel);
			this->Controls->Add(this->confirmOrderButton);
			this->Controls->Add(this->chocoMilkshakeLabel);
			this->Controls->Add(this->mineralWaterLabel);
			this->Controls->Add(this->orangeJuiceLabel);
			this->Controls->Add(this->chickenBiryaniLabel);
			this->Controls->Add(this->fRiceLabel);
			this->Controls->Add(this->burgerLabel);
			this->Controls->Add(this->chocoMilkshakeSelect);
			this->Controls->Add(this->mineralWaterSelect);
			this->Controls->Add(this->orangeJuiceSelect);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->cBiryaniSelect);
			this->Controls->Add(this->fRiceSelect);
			this->Controls->Add(this->burgerSelect);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Name = L"MyForm1";
			this->Text = L"Order Page";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void burgerSelect_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void orangeJuiceSelect_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void mineralWaterLabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void chocolateMilkshakePriceLabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void confirmOrderButton_Click(System::Object^ sender, System::EventArgs^ e) {

	burgerSel = int::Parse(this->burgerSelect->SelectedItem->ToString());
	fRiceSel = int::Parse(this->fRiceSelect->SelectedItem->ToString());
	chickenBiryaniSel = int::Parse(this->cBiryaniSelect->SelectedItem->ToString());
	orangeJuiceSel = int::Parse(this->orangeJuiceSelect->SelectedItem->ToString());
	mineralWaterSel = int::Parse(this->mineralWaterSelect->SelectedItem->ToString());
	chocoMilkshakeSel = int::Parse(this->chocoMilkshakeSelect->SelectedItem->ToString());
	if (burgerSel + fRiceSel + chickenBiryaniSel + orangeJuiceSel + mineralWaterSel + chocoMilkshakeSel != 0) {
		MyForm2^ formObj2 = gcnew MyForm2(burgerSel, fRiceSel, chickenBiryaniSel, orangeJuiceSel, mineralWaterSel, chocoMilkshakeSel);
		this->Hide();
		formObj2->ShowDialog();
		this->Hide();
	}
	else {
		MessageBox::Show("You haven't selected anything! Please try again");
	}
	
}

private: System::Void cancelOrderButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
};
}
