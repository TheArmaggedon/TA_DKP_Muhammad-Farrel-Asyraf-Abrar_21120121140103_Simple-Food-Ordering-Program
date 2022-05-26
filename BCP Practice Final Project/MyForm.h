#pragma once
#include "Credentials.h"
#include "Menu.h"
#include "MyForm1.h"
#include "MyForm3.h"

namespace BCPPracticeFinalProject {

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

	protected:

	
	









































	private: System::Windows::Forms::Button^ startOrder;










	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ adminLoginButton;
































































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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->startOrder = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->adminLoginButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// startOrder
			// 
			this->startOrder->BackColor = System::Drawing::SystemColors::Control;
			this->startOrder->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"startOrder.BackgroundImage")));
			this->startOrder->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->startOrder->Font = (gcnew System::Drawing::Font(L"ESSTIXThirteen", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->startOrder->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->startOrder->Location = System::Drawing::Point(551, 491);
			this->startOrder->Name = L"startOrder";
			this->startOrder->Size = System::Drawing::Size(321, 99);
			this->startOrder->TabIndex = 34;
			this->startOrder->UseVisualStyleBackColor = false;
			this->startOrder->Click += gcnew System::EventHandler(this, &MyForm::startOrder_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"ESSTIXThirteen", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(467, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(479, 39);
			this->label1->TabIndex = 35;
			this->label1->Text = L"Welcome to Farrel\'s Buffet";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// adminLoginButton
			// 
			this->adminLoginButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"adminLoginButton.BackgroundImage")));
			this->adminLoginButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->adminLoginButton->Location = System::Drawing::Point(22, 698);
			this->adminLoginButton->Name = L"adminLoginButton";
			this->adminLoginButton->Size = System::Drawing::Size(254, 58);
			this->adminLoginButton->TabIndex = 36;
			this->adminLoginButton->UseVisualStyleBackColor = true;
			this->adminLoginButton->Click += gcnew System::EventHandler(this, &MyForm::adminLoginButton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1366, 768);
			this->Controls->Add(this->adminLoginButton);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->startOrder);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

	
	private: System::Void startOrder_Click(System::Object^ sender, System::EventArgs^ e) {
		//when the "I want to order" button is pressed
	    MyForm1^ form1Obj = gcnew MyForm1;
		this->Hide();
		form1Obj->ShowDialog();
		this->Show();










	}
	private: System::Void adminLoginButton_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm3^ form3Obj = gcnew MyForm3; //when the admin login button is pressed
		this->Hide();
		form3Obj->ShowDialog(); //show admin login window
		this->Show(); //when finished with admin login, show the main menu window







	}
	
	

	
	
	

	};
}