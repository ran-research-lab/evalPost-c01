// Su nombre aqui


#include <vector>
#include <string>

using namespace std;

// Variables and macros for assertions, DO NOT CHANGE ****
int totalAssertions = 0;
int passedAssertions  = 0;
#define expect( chk )  \
    totalAssertions++; \
    if (!(chk)) \
        printf("\x1B[31mAssertion (%s) failed %s at line %d\033[0m\t\t\n", #chk, __FILE__,__LINE__); \
    else { \
        printf("\x1B[32mPassed line %d: %s\033[0m\t\t\n", __LINE__, #chk); \
        passedAssertions++; \
    }
#define assertionReport() { \
     printf("==========================================\n"); \
     printf("Passed %d of %d assertions\n",passedAssertions,totalAssertions); \
     printf("\n"); \
    }
//*******************************************************



// function evalPost: 
//    dado un vector que contiene una expresión en postfix separada 
//    en tokens, donde cada token es una de las siguientes:
//      * una operación de suma, resta, división o multiplicación
//      * un entero (como string)
// devolver el resultado de la evaluación de la expresión

// Por ejemplo, si el vector contiene {"100", "25", "/", "1", "-"} el resultado
// es 3. 

// Puedes usar la implementación del stack que ofrece el STL

int evalPost(const vector<string> &st) {
	return stoi(st[0]);
}

int main() {
	expect( evalPost({"100", "25", "/", "1", "-"})  == 3);
  assertionReport();
}
