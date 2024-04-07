#include <iostream>
using namespace std;
int k=0,j=0;
char encrypted(char  message, int key[], int keySize)
{
	
	
		if(message>= 'a' && message<= 'z')
		{
			message = message+(key[k%keySize] % 26);
			if(message> 'z')
			{
				message = message - 26;
			}
    	}
		else
		{
			message = message;
		}
		return message;
	
	
}
char decrypted(char * message, int key[], int keySize)
{
	if(message[j] >= 'a' && message[j] <= 'z')
	{
		message[j] = message[j] - (key[j%keySize] % keySize);
		if (message[j] < 'a')
		{
			message[j] = message[j] + 26;
		}
	}
		else
		{
			message[j] = message[j];
		}
		return message[j];
		j++;
	
	
}
int main()
{
	int keySize = 3;
	int key[keySize];
	for(int i=0; i<keySize; i++)
	{
		cout<<i+1 <<". Key: ";
		cin>> key[i]; 
	}
	char message;
	int s=0;
	char msg[] = {};
	char de_msg[] = {};
	do 
	{
		cin>>message;
		msg[s] = encrypted(message, key, keySize);
		de_msg[s] = decrypted(msg, key, keySize);
		
		
		++s;
		
    }
	while (message >= 'a' && message <= 'z');
	cout<<"\nEncrypted data\n";
	
	for(int i=0; msg[i] != 0; i++)
	{
		
		cout <<msg[i] <<" , ";
	}
	
	cout<<"\nDecrypted data\n";
	for(int i=0; de_msg[i] != 0; i++)
	{
		
		cout <<de_msg[i] <<" , ";
	}
	
	
}
