#include <iostream>
#include <string>
using namespace std;

void shiftcipherencrypted(const string& msg, string& ciphertext, int key) {
    for (int i = 0; msg[i] != 0; i++) {
        char ch = msg[i];
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + (key % 26);
            if (ch > 'Z') {
                ch = ch - 26;
            }
        } else if (ch >= '0' && ch <= '9') {
            ch = ch + (key % 10);
            if (ch > '9') {
                ch = ch - 10;
            }
        }
        ciphertext += ch;
    }
}
void shiftcipherdecrypted(const string& msg, string& ciphertext, int key)
 {
    for (int i = 0; msg[i] != 0; i++)
	 {
        char ch = msg[i];
        if (ch >= 'A' && ch <= 'Z')
		 {
            ch = ch - (key % 26);
            if (ch < 'A') 
			{
                ch = ch + 26;
            }
        } else if (ch >= '0' && ch <= '9')
		 {
            ch = ch - (key % 10);
            if (ch < '0') 
			{
                ch = ch + 10;
            }
        }
        ciphertext += ch;
    }
}

int main() {
    const string msg = "ZAIN491";
    string ciphertext = ""; 
    string ciphertext2 = "";

    int key = 5;
    shiftcipherencrypted(msg, ciphertext, key);

    cout << "Original Message: " << msg << endl;
    cout << "Key: " << key << endl;
    cout << "Encrypted Message: " << ciphertext << endl;
    
    shiftcipherdecrypted(ciphertext, ciphertext2, key);
    
    cout << "Decrypted Message: " << ciphertext2 << endl;

    return 0;
}

