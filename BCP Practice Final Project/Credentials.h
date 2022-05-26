#pragma once
#include <string>
using namespace System;


namespace adminLogin {

	ref class adminLoginProcess {

	private:
		static array<String^, 2>^ adminCredentials = gcnew array <String^, 2>{ {"OwnerFarrel", "AnExtremelyComplicatedPassword"}, { "ExoAdmin", "ExoPassword" }};
		static String^ userName;
		static String^ password;
		
	public:

		static void setCredentials(String^ a, String^ b) {

			userName = a;
			password = b;
		}

		static bool checkCredentials() {

			for (int i = 0; i < 2; i++) {

				if (userName == adminCredentials[i,0] && password == adminCredentials[i,1]) {

					return true;
				}
				
			}
			return false;
		}
	};
	


}