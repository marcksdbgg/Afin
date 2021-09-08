#include <iostream>
#include <time.h>
#include "Encryptor.h"

int main(){
    srand(time(NULL));
    int clave_a = 1+rand()%(101-1);
    int clave_b = 1+rand()%(101-1);
    string ms = "Lorem ipsum dolor sit amet consectetur adipiscing elit condimentum laoreet tincidunt, netus eleifend himenaeos inceptos maecenas parturient vulputate phasellus iaculis, montes malesuada mollis et augue vel primis congue lectus. Curabitur augue molestie scelerisque porta vivamus sem porttitor netus hendrerit parturient quisque egestas ultricies tortor vel imperdiet, lacinia potenti neque duis iaculis eu laoreet velit quam consequat elementum eget fermentum massa. Tempus torquent interdum suscipit parturient gravida netus sed sollicitudin, nec sociosqu nascetur viverra dignissim varius in.";
    string aux = "falszztysyjzyjkywjrztyjztyynaryjkyswarztyegyyj";
    encryptor user(7, 22);
    aux = user.decrypted(aux);
    cout<<"Mensje decifrado:" << endl << aux << endl;
}