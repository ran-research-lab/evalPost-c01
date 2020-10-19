// Su nombre aqui

#define CATCH_CONFIG_MAIN  
#include "catch.hpp"
#include <vector>

using namespace std;

// function evalPost: 
//    dado un vector que contiene una expresión en postfix separada 
//    en tokens, donde cada token es una de las siguientes:
//      * una operación de suma, resta, división o multiplicación
//      * un entero (como string)
// devolver el resultado de la evaluación de la expresión

// Por ejemplo, si el vector contiene {"100", "25", "/", "1", "-"} el resultado
// es 3. 

int evalPost(const vector<string> &st) {
	return stoi(st[0]);
}

TEST_CASE( "evalPost", "[evalPost]" ) {
	CHECK( evalPost({"100", "25", "/", "1", "-"})  == 3);
}
