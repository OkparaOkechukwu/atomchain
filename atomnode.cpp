// atom node core program
#include <iostream>
using namespace std;

int main() {
    char choice1;
    cout << "1. Run in: Mainnet, Testnet, Atomnet";
    cout << "2. Run as: Atomic, Atomic Reactor, Element, Atom Creator";
    cout << "3. Word: New, List";
    cout << "4. Listen: IP, Port, Network";
    cout << "5. Database: LevelDB, Path, Restore";
    cout << "6. Node: Peer_list, Peer_id, Peer_host" << endl;
    cin >> choice1;
    switch (choice1) {
        case '1':
            char choice2;
            cout << "1. Main Network" << endl;
            cout << "2. Test Network" << endl;
            cout << "3. Atom Developers Network" << endl;
           cin >> choice2;
	switch (choice2) {
        	case '1':
              cout << "";
        	case '2':
              cout << "";
             case '3':
              cout << "";


	break;
       default:
            // 
            cout << "";
            break;

        case '2':
            cout << "";
            break;
        case '3':
            cout << "";
            break;
        case '4':
            cout << "";
            break;
        case '5':
            cout << "";
            break;
        case '6':
            cout << "";
            break;
       default:
            // 
            cout << "";
            break;
    }

    return 0;
}
