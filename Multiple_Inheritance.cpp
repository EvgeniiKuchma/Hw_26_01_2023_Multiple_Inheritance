#include <iostream>
//�������� ������������ ������������ - ����� ��������� ������� �������, ��������� � ���� 2 ����� �������� ������(�������������� � ������ ���������� � ���) 
//� �� �������� ��� ��� ����������������� � ����, ���������� ��� ������������ � ������������ public ��������� ����� virtual ��� ����������� ������� ������������� �������,
//� ���������� ���������� ������ ���� ����� � ������� � �������� ��������� � ������������� ������������� 
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
