#include <iostream>
#include <string>
#include <utility> 

class StringSegura {
private:
    std::string* dados;

public:
    StringSegura(const std::string& s) : dados(new std::string(s)) {}
    ~StringSegura() { delete dados; }
    StringSegura(const StringSegura&) = delete;
    StringSegura& operator=(const StringSegura&) = delete;
    
    StringSegura(StringSegura&& outro) noexcept : dados(outro.dados) {
        outro.dados = nullptr; 
    }

    StringSegura& operator=(StringSegura&& outro) noexcept {
        if (this != &outro) {
            delete dados;         
            dados = outro.dados;  
            outro.dados = nullptr;
        }
        return *this;
    }

    void imprimir() const {
        if (dados) std::cout << *dados << std::endl;
    }
};