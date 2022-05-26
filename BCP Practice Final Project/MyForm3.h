#pragma once
#include "Credentials.h"
#include "MyForm4.h"
namespace BCPPracticeFinalProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace adminLogin;

	/// <summary>
	/// Summary for MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		MyForm3(void)
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
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	
	private: adminLoginProcess loginObj;
	private: MyForm4^ formObj4 = gcnew MyForm4;
	private: System::Windows::Forms::Label^ usernameLabel;
	private: System::Windows::Forms::TextBox^ usernameInput;

	private: System::Windows::Forms::Label^ passwordLabel;
	private: System::Windows::Forms::TextBox^ passwordInput;

	private: System::Windows::Forms::Button^ loginButton;
	private: System::Windows::Forms::Button^ loginCancelButton;
	private: System::Windows::Forms::Label^ loginPageLabel;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm3::typeid));
			this->usernameLabel = (gcnew System::Windows::Forms::Label());
			this->usernameInput = (gcnew System::Windows::Forms::TextBox());
			this->passwordLabel = (gcnew System::Windows::Forms::Label());
			this->passwordInput = (gcnew System::Windows::Forms::TextBox());
			this->loginButton = (gcnew System::Windows::Forms::Button());
			this->loginCancelButton = (gcnew System::Windows::Forms::Button());
			this->loginPageLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// usernameLabel
			// 
			this->usernameLabel->AutoSize = true;
			this->usernameLabel->BackColor = System::Drawing::Color::Transparent;
			this->usernameLabel->Font = (gcnew System::Drawing::Font(L"ESSTIXThirteen", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usernameLabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->usernameLabel->Location = System::Drawing::Point(500, 177);
			this->usernameLabel->Name = L"usernameLabel";
			this->usernameLabel->Size = System::Drawing::Size(92, 20);
			this->usernameLabel->TabIndex = 40;
			this->usernameLabel->Text = L"Username";
			// 
			// usernameInput
			// 
			this->usernameInput->Location = System::Drawing::Point(503, 224);
			this->usernameInput->Name = L"usernameInput";
			this->usernameInput->Size = System::Drawing::Size(281, 22);
			this->usernameInput->TabIndex = 41;
			// 
			// passwordLabel
			// 
			this->passwordLabel->AutoSize = true;
			this->passwordLabel->BackColor = System::Drawing::Color::Transparent;
			this->passwordLabel->Font = (gcnew System::Drawing::Font(L"ESSTIXThirteen", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordLabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->passwordLabel->Location = System::Drawing::Point(503, 290);
			this->passwordLabel->Name = L"passwordLabel";
			this->passwordLabel->Size = System::Drawing::Size(92, 20);
			this->passwordLabel->TabIndex = 42;
			this->passwordLabel->Text = L"Password";
			// 
			// passwordInput
			// 
			this->passwordInput->Location = System::Drawing::Point(501, 331);
			this->passwordInput->Name = L"passwordInput";
			this->passwordInput->Size = System::Drawing::Size(283, 22);
			this->passwordInput->TabIndex = 43;
			this->passwordInput->UseSystemPasswordChar = true;
			// 
			// loginButton
			// 
			this->loginButton->Location = System::Drawing::Point(501, 375);
			this->loginButton->Name = L"loginButton";
			this->loginButton->Size = System::Drawing::Size(91, 29);
			this->loginButton->TabIndex = 44;
			this->loginButton->Text = L"Login";
			this->loginButton->UseVisualStyleBackColor = true;
			this->loginButton->Click += gcnew System::EventHandler(this, &MyForm3::loginButton_Click);
			// 
			// loginCancelButton
			// 
			this->loginCancelButton->Location = System::Drawing::Point(693, 375);
			this->loginCancelButton->Name = L"loginCancelButton";
			this->loginCancelButton->Size = System::Drawing::Size(91, 29);
			this->loginCancelButton->TabIndex = 62;
			this->loginCancelButton->Text = L"Cancel";
			this->loginCancelButton->UseVisualStyleBackColor = true;
			this->loginCancelButton->Click += gcnew System::EventHandler(this, &MyForm3::loginCancelButton_Click);
			// 
			// loginPageLabel
			// 
			this->loginPageLabel->AutoSize = true;
			this->loginPageLabel->BackColor = System::Drawing::Color::Transparent;
			this->loginPageLabel->Font = (gcnew System::Drawing::Font(L"ESSTIXThirteen", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginPageLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->loginPageLabel->Location = System::Drawing::Point(440, 62);
			this->loginPageLabel->Name = L"loginPageLabel";
			this->loginPageLabel->Size = System::Drawing::Size(445, 78);
			this->loginPageLabel->TabIndex = 63;
			this->loginPageLabel->Text = L"Login Page";
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1366, 768);
			this->Controls->Add(this->loginPageLabel);
			this->Controls->Add(this->loginCancelButton);
			this->Controls->Add(this->loginButton);
			this->Controls->Add(this->passwordInput);
			this->Controls->Add(this->passwordLabel);
			this->Controls->Add(this->usernameInput);
			this->Controls->Add(this->usernameLabel);
			this->Name = L"MyForm3";
			this->Text = L"Login Page";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void loginButton_Click(System::Object^ sender, System::EventArgs^ e) {
		
		loginObj.setCredentials(this->usernameInput->Text, this->passwordInput->Text);

		if (loginObj.checkCredentials()) {
			this->Hide();
			formObj4->ShowDialog();
			this->usernameInput->Text = "";
			this->passwordInput->Text = "";
			this->Hide();
		}
		else {
			MessageBox::Show("Incorrect login credentials! Try again");
		}
		
	}
private: System::Void loginCancelButton_Click(System::Object^ sender, System::EventArgs^ e) {
	
	this->Hide();
}
};
}
