#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;
const int cols = 15, rows = 16;

char words[rows][cols] = {{'t','g','b','w','w','i','n','t','e','r','w','s','e','s','n'},
                           {'a','a','u','n','t','t','m','m','h','f','o','o','d','n','b'},
                           {'j','l','w','c','q','l','d','z','m','p','m','v','d','m','r'},
                           {'a','s','a','g','m','q','u','w','v','v','b','s','o','h','i'},
                           {'b','w','p','l','o','t','a','n','a','d','t','p','g','n','c'},
                           {'r','e','w','n','g','o','d','j','c','p','n','a','t','n','k'},
                           {'e','e','o','t','w','o','s','b','q','h','a','r','r','s','a'},
                           {'a','z','c','g','e','s','w','e','w','n','a','k','n','p','b'},
                           {'d','i','n','n','e','r','q','o','d','l','w','d','c','a','r'},
                           {'o','n','o','p','k','w','m','p','a','r','k','t','z','c','c'},
                           {'q','b','f','r','o','g','m','a','m','w','p','w','e','e','y'},
                           {'l','q','z','q','n','n','m','r','z','j','j','s','c','l','g'},
                           {'m','o','s','g','z','c','z','e','t','d','b','o','o','t' ,'o'},
                           {'p','d','c','r','z','m','s','n','g','r','d','n','r','p','z'},
                           {'o','h','n','k','z','w','a','t','e','r','j','g','t','r','a'}};


bool searchHorizontal(char word[]){
	char *check;
	char dataHurufAcak[15];
	
	for (int i = 0; i < 15; i++)
    {
        check = strstr(words[i], word);
        
	    if(check != NULL){
	        return true;
	    }
		

		for (int j = 0; j < 15; j++)
		{
			dataHurufAcak[j] = words[i][j];
		}
		
		reverse(dataHurufAcak, dataHurufAcak + strlen(dataHurufAcak));

		if(strstr(dataHurufAcak, word) != NULL){
	        return true;
	    }
    }
    
    return false;
}

bool searchVertical(char word[]){
	char dataHurufAcak[15];
	
	for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            dataHurufAcak[j] = words[j][i];
        }
        
        if(strstr(dataHurufAcak, word) != NULL){
	        return true;
	    }

		//cout << dataHurufAcak << " : ";
		reverse(dataHurufAcak, dataHurufAcak + 15);

		if(strstr(dataHurufAcak, word) != NULL){
	        return true;
	    }
    }
    
    return false;
}

int main()
{
    char word[16];
    int n;
    cin>>n;
    cin.ignore();
    for (int i=0;i<n;i++){
        cin.getline(word,16,'\n');
        
