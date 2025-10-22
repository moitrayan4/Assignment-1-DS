#include <iostream>
using namespace std;

int main(){
    int arr[100];
    int n=0;
    int choice;


    do{ 
        cout << "\n Menu: \n";
        cout << "1.Create\n";
        cout << "2.Display\n";
        cout << "3.Insert\n";
        cout << "4.Delete\n";
        cout << "5.Search\n";
        cout << "6.Exit\n";
        cout << "Enter your choice:";
        cin >> choice;

        if (choice==1){
            cout << "Enter the number of members of the array :";
            cin >> n;
            cout << "Enter the numbers:";
            for (int i=0; i<n; i++){
                cin >> arr[i];
            }
        }
        else if (choice==2) {
            cout << "Numbers are:";
            for (int i=0;i<n;i++){
                cout<< arr[i] << " ";
            }
        }
        else if (choice == 3) {
            int pos, val;
            cout << "Position (1 to " << n+1 << "): ";
            cin >> pos;
            cout << "Number to insert: ";
            cin >> val;
            for (int i = n; i >= pos; i--){
                arr[i] = arr[i-1];
            }
            arr[pos-1] = val;
            n++;
        }
        else if (choice==4){
            int pos;
            cout << "Enter the number's position:";
            cin >> pos;
            for (int i=pos; i<n; i++){
                arr[i]=arr[i+1];
                n--;
            }
        }
        else if (choice ==5){
            int key,found = -1;
            cout << "Enter the number to be searched:";
            cin >> key;
            for (int i=0; i<n; i++){
                if (arr[i]==key){
                    found = i;
                    break;
                }
            }
            if(found !=-1){
                cout << "Found at position:" << found << "";
            }else{
                cout << "Not found";
            }
        }
    }
    while(choice !=6);
    return 0;
}
