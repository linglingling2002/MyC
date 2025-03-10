#include <iostream>
#include <string>
#include <vector>

#include <ctime>
#include <random>
#include <algorithm>


class Word{
private:
    std::string letter;
    std::string wordStage;
    std::string meaning;

public:
    Word(std::string letter, std::string wordStage, std::string meaning) 
        : letter(letter), wordStage(wordStage), meaning(meaning){
            ;
        }
    void setLetter(std::string letter){
        this->letter = letter;
    }
    std::string getLetter(){
        return this->letter;
    }
    void setWordStage(std::string wordStage){
        this->wordStage = wordStage;
    }
    std::string getWordStage(){
        return this->wordStage;
    }
    void setMeaning(std::string meaning){
        this->meaning = meaning;
    }
    std::string getMeaning(){
        return this->meaning;
    }
    void printWord(){
        std::cout << getLetter() << " | " << getWordStage() << " | " << getMeaning() << std::endl;
    }
};

void line(){
    for(int i = 0; i < 30; i++){
        std::cout << std::endl;
    }
    std::cout << "-------------------------------------------" << std::endl;
    for(int i = 0; i < 30; i++){
        std::cout << std::endl;
    }
}

int main(){
    int mode = 0;
    std::vector<Word> wordGroup = {{"けんとう", "見当", "估计"}, 
                                    {"こきゅう", "呼吸", "呼吸；窍门"}, 
                                    {"1", "設計", "设计"}, 
                                    {"2", "呼吸", "呼吸；窍门"}, 
                                    {"3", "設計", "设计"}, 
                                    {"4", "呼吸", "呼吸；窍门"}, 
                                    {"57", "設計", "设计"}, 
                                    {"2", "呼吸", "呼吸；窍门"}, 
                                    {"3", "設計", "设计"}, 
                                    {"4", "呼吸", "呼吸；窍门"}, 
                                    {"57", "設計", "设计"}, 
                                    {"2", "呼吸", "呼吸；窍门"}, 
                                    {"3", "設計", "设计"}, 
                                    {"4", "呼吸", "呼吸；窍门"}, 
                                    {"57", "設計", "设计"}, 
                                    {"ぼしゅう", "募集", "募集"}};
    // for(int i = 0; i < wordGroup.size(); i++){
    //     wordGroup[i].printWord();
    // }

    std::vector<int> numbers;
    for (int i = 2; i <= 20; i++) {
        numbers.push_back(i);
    }
    
    // 随机打乱顺序
    std::default_random_engine e(time(0));
    std::shuffle(numbers.begin(), numbers.end(), e);
    
    // 输出前10个数
    // for (int i = 0; i < 10 && i < numbers.size(); i++) {
    //     std::cout << numbers[i] << std::endl;
    // }

    do{
        std::cout << "-------------------------------------------" << std::endl;
        std::cout << "选择模式 输入1，看假名写汉字模式；输入2，看汉字写假名模式；输入3，浏览模式输入0，程序结束:";
        std::cin >> mode;
        if(1 == mode){
            for(int i = 0; i < 10; i++){
                std::cout << wordGroup[numbers[i]].getLetter() << " | " << wordGroup[numbers[i]].getWordStage() << std::endl;
            }
            line();
            for(int i = 0; i < 10; i++){
                std::cout << wordGroup[numbers[i]].getLetter() << std::endl;
            }
        }else if(2 == mode){
            for(int i = 0; i < 10; i++){
                std::cout << wordGroup[numbers[i]].getLetter() << " | " << wordGroup[numbers[i]].getWordStage() << std::endl;
            }
            line();
            for(int i = 0; i < 10; i++){
                std::cout << wordGroup[numbers[i]].getWordStage() << std::endl;
            }
        }else if(3 == mode){
            for(int i = 0; i < wordGroup.size(); i++){
                wordGroup[i].printWord();
            }
        }
    }while(0 != mode);

    std::cout << "程序结束。" << std::endl;

    return 0;
}