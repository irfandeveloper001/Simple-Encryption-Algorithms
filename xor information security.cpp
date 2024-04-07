#include <iostream>
#include <string>
using namespace std;

void xorCipher(const string& msg, string& ciphertext, const string key[], int size) {
    for (int i = 0; msg[i] != 0; i++)
	 {
        char ch = msg[i];
        ch = ch ^ key[i % size];
        ciphertext += ch;
    }
}
int main() {
    const string msg = "HELLOWORLD";
    string ciphertext = "";
    string decryptedMessage = "";

    const string key[3] = "ABC";

    xorCipher(msg, ciphertext, key, 3);
    cout << "Encrypted Message: " << ciphertext << endl;

    xorCipher(ciphertext, decryptedMessage, key, 3);

    cout << "Decrypted Message: " << decryptedMessage << endl;

    return 0;
}

