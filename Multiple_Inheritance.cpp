#include <iostream>
//проблема ромбовидного наследования - класс наследник угловых классов, принимает в себя 2 копии базового класса(соответственно и данных хранящихся в нем) 
//и не понимает как ему взаимодействовать с ними, добавление при наследовании к модификатору public ключевого слова virtual при определении порядка наследованияя классов,
//в резальтате существует только одна копия с которой и работает наследник с множественным наследованием 
class BaseCharacter
{
public:
    BaseCharacter() {
        std::cout << "BaseCharacter constructor" << std::endl;
    }
    virtual int HP_Char(){
        return _HP;
    }
private:
    int _HP = 5;
};
class CharacterWarrior : public virtual BaseCharacter
{
public:
    CharacterWarrior() {
        std::cout << "CharWarrior constructor" << std::endl;
    }
   
};
class CharacterOrck :  public virtual BaseCharacter
{
public:
    CharacterOrck() {
        std::cout << "CharOrck constructor" << std::endl;
   
    }
};
class CharacterWarriorOrck :  public CharacterOrck, public CharacterWarrior
{
public:
    CharacterWarriorOrck() {
        std::cout << "CharWarriorOrck constructor" << std::endl;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
   
    CharacterWarriorOrck chart;
   std::cout << chart.HP_Char() << std::endl;
    
    return 0;
}
