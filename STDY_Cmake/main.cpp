#include <iostream>
#include <nlohmann/json.hpp>

int main()
{
    std::cout << "Hello World!!!!!!" << std::endl;
    nlohmann::json j;

    j["pi"] = 3.141;
    j["happy"] = true;
    j["name"] = "Niels";
    j["nothing"] = nullptr;
    j["answer"]["everything"] = 42;                        // 存在しないキーを指定するとobjectが構築される
    j["list"] = {1, 0, 2};                                 // [1,0,2]
    j["object"] = {{"currency", "USD"}, {"value", 42.99}}; // {"currentcy": "USD", "value": 42.99}

    std::cout << j << std::endl; // coutに渡せば出力できる。
}
