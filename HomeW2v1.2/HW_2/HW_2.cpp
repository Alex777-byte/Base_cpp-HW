#include <iostream>
#include <cstring>
#include <string.h>

using namespace std; // нужно для идентификации string наряду с библиотекой
//типы переменных, задание 1
short int a = 5;
int b = 5;
long long c = 1'000'000;
char chLength = 'm';
bool d = true;
float e = 9.87654321f;
double massEarth = 5e24;



//-------------------------------------------------------------------------------------------------------------------------
// Перечисление, задание 2, массив задание 3


enum Game
{
    Symbol_X = 'X',
    Symbol_O = '0',
    Field0 = '-',  // пустые ячейки
    Field1 = '|'   // границы между ячейками
};


int task2_3()
{
    Game Symbols[2] = { Symbol_X, Symbol_O };
    Game Fields[2] = { Field0, Field1 };
    std::cout << (char)Symbols[0] << ", " << (char)Symbols[1] << std::endl;
    std::cout << (char)Fields[0] << ", " << (char)Fields[1] << std::endl;
    return 0;
}


//-------------------------------------------------------------------------------------------------------------------------

//задание 4*

enum PlayerMove { Player1ID, Player2ID };

struct Play
{
    string EmptyCell;
    string Field0 = "-";
    string Field1 = "|";
    //PlayerMove Player1ID, Player2ID;
};

//-------------------------------------------------------------------------------------------------------------------------
//задание 5**
//-------------------------------------------------------------------------------------------------------------------------

union MyVariantData
{
    int DataInt;
    float DataFloat;
    char DataChar;
};

struct MyData
{
    MyVariantData data;

    unsigned int isInt : 1;
    unsigned int isFloat : 1;
    unsigned int isChar : 1;
};

int task5()
{
    MyData var;

    var.data.DataFloat = 77.77f;
    var.isInt = 0;
    var.isFloat = 1; //храним float
    var.isChar = 0;
    std::cout << var.isInt << ", " << var.isInt << ", " <<var.isChar<< "\n" << std::endl;
    return 0;
}



int main()
{
    task2_3();
    task5();
    return 0;
}
    /*
    for (int j = 0; j < 5; j++) {
        int i = 0;
        std::cout << positions[i][j];
    }
    std::cout << "\n";
    for (int j = 0; j < 5; j++) {
        int i = 0;
        std::cout << positions[i + 1][j];
    }
    std::cout << "\n";
    for (int j = 0; j < 5; j++) {
        int i = 0;
        std::cout << positions[i + 2][j];
    }
    std::cout << "\n";
    for (int j = 0; j < 5; j++) {
        int i = 0;
        std::cout << positions[i + 3][j];
    }
    std::cout << "\n";
    for (int j = 0; j < 5; j++) {
        int i = 0;
        std::cout << positions[i + 4][j];
    }
    std::cout << "\n";


    int inputSF;
    char inputSS;
    std::cout << "Введите значение ячейки, в которую хотите записать значение";
    std::cin >> inputSF;
    switch (inputSF)
    {
    case (0):
            std::cout << "Введите то, что хотите записать, крестик или нолик";
            std::cin >> inputSS;
        if (inputSS == 'X')
        {
            positions[4][0] = inputSS;
            for (int j = 0; j < 5; j++)
            {
                int i = 0;
                std::cout << positions[i][j];
            }
            std::cout << "\n";
            for (int j = 0; j < 5; j++)
            {
                int i = 0;
                std::cout << positions[i + 1][j];
            }
            std::cout << "\n";
            for (int j = 0; j < 5; j++)
            {
                int i = 0;
                std::cout << positions[i + 2][j];
            }
            std::cout << "\n";
            for (int j = 0; j < 5; j++)
            {
                int i = 0;
                std::cout << positions[i + 3][j];
            }
            std::cout << "\n";
            for (int j = 0; j < 5; j++)
            {
                int i = 0;
                std::cout << positions[i + 4][j];
            }
        }
        else if(inputSS == 'O')
        {
            inputSS = 'O';
            positions[4][0] = inputSS;
            for (int j = 0; j < 5; j++)
            {
                int i = 0;
                std::cout << positions[i][j];
            }
            std::cout << "\n";
            for (int j = 0; j < 5; j++)
            {
                int i = 0;
                std::cout << positions[i + 1][j];
            }
            std::cout << "\n";
            for (int j = 0; j < 5; j++)
            {
                int i = 0;
                std::cout << positions[i + 2][j];
            }
            std::cout << "\n";
            for (int j = 0; j < 5; j++)
            {
                int i = 0;
                std::cout << positions[i + 3][j];
            }
            std::cout << "\n";
            for (int j = 0; j < 5; j++)
            {
                int i = 0;
                std::cout << positions[i + 4][j];
            }
            
        }
        break;
      case (1):
        std::cout << "Введите то, что хотите записать, крестик или нолик";
        std::cin >> inputSS;
        if (inputSS == 'X')
        {
            positions[4][2] = inputSS;
            for (int j = 0; j < 5; j++)
            {
                int i = 0;
                std::cout << positions[i][j];
            }
            std::cout << "\n";
            for (int j = 0; j < 5; j++)
            {
                int i = 0;
                std::cout << positions[i + 1][j];
            }
            std::cout << "\n";
            for (int j = 0; j < 5; j++)
            {
                int i = 0;
                std::cout << positions[i + 2][j];
            }
            std::cout << "\n";
            for (int j = 0; j < 5; j++)
            {
                int i = 0;
                std::cout << positions[i + 3][j];
            }
            std::cout << "\n";
            for (int j = 0; j < 5; j++)
            {
                int i = 0;
                std::cout << positions[i + 4][j];
            }
        }
        else if(inputSS == 'O')
        {
            positions[4][2] = inputSS;
            for (int j = 0; j < 5; j++)
            {
                int i = 0;
                std::cout << positions[i][j];
            }
            std::cout << "\n";
            for (int j = 0; j < 5; j++)
            {
                int i = 0;
                std::cout << positions[i + 1][j];
            }
            std::cout << "\n";
            for (int j = 0; j < 5; j++)
            {
                int i = 0;
                std::cout << positions[i + 2][j];
            }
            std::cout << "\n";
            for (int j = 0; j < 5; j++)
            {
                int i = 0;
                std::cout << positions[i + 3][j];
            }
            std::cout << "\n";
            for (int j = 0; j < 5; j++)
            {
                int i = 0;
                std::cout << positions[i + 4][j];
            }
        }
        break;
      case (2):
          std::cout << "Введите то, что хотите записать, крестик или нолик";
          std::cin >> inputSS;
          if (inputSS == 'X')
          {
              positions[4][5] = inputSS;
              for (int j = 0; j < 5; j++)
              {
                  int i = 0;
                  std::cout << positions[i][j];
              }
              std::cout << "\n";
              for (int j = 0; j < 5; j++)
              {
                  int i = 0;
                  std::cout << positions[i + 1][j];
              }
              std::cout << "\n";
              for (int j = 0; j < 5; j++)
              {
                  int i = 0;
                  std::cout << positions[i + 2][j];
              }
              std::cout << "\n";
              for (int j = 0; j < 5; j++)
              {
                  int i = 0;
                  std::cout << positions[i + 3][j];
              }
              std::cout << "\n";
              for (int j = 0; j < 5; j++)
              {
                  int i = 0;
                  std::cout << positions[i + 4][j];
              }
          }
          else if (inputSS == 'O')
          {
              positions[4][5] = inputSS;
              for (int j = 0; j < 5; j++)
              {
                  int i = 0;
                  std::cout << positions[i][j];
              }
              std::cout << "\n";
              for (int j = 0; j < 5; j++)
              {
                  int i = 0;
                  std::cout << positions[i + 1][j];
              }
              std::cout << "\n";
              for (int j = 0; j < 5; j++)
              {
                  int i = 0;
                  std::cout << positions[i + 2][j];
              }
              std::cout << "\n";
              for (int j = 0; j < 5; j++)
              {
                  int i = 0;
                  std::cout << positions[i + 3][j];
              }
              std::cout << "\n";
              for (int j = 0; j < 5; j++)
              {
                  int i = 0;
                  std::cout << positions[i + 4][j];
              }
          }
          break;
    default:
        std::cout << "Unknown";
        break;
    }
    return 0;
}*/

    //Game Symbol = static_cast<Game>(inputSymbol)
    

    //Switch(Playercell)
   // {
   //     case Playercell = 0:
   //         positions[0][0] = X
   //         std::cout << 

   // }
    //std::cin >> EmptyCell;
    //int i = 1;
    //int g = 0;
    //char positions[5][5];
   // (char)positions[i+1][g+1] = "|";
   


//-------------------------------------------------------------------------------------------------------------------------
//игра в крестики нолики
//-------------------------------------------------------------------------------------------------------------------------



/*
#include <iostream>//стандартная библиотека

using namespace std;



int main()
{
    setlocale(0, "");


    char positions[9] = { '-','-','-','-','-','-','-','-','-', };

    int x;
    int o;

    cout << "Номера клеток:" << endl;
    cout << " 1 " <<'|' << " 2 " << '|' << " 3 " << "|" << endl;
    cout << " 4 " << '|'<< " 5 " << '|' << " 6 " << "|" << endl;
    cout << " 7 " << '|' <<  " 8 " << '|' << " 9 " << "|" << "\n" << endl;


    cout << "Игровое поле (--- пусто):" << endl;
    cout << positions[0] << '|' << positions[1] << '|' << positions[2] << endl;
    cout << positions[3] << '|' << positions[4] << '|' << positions[5] <<  endl;
    cout << positions[6] << '|' << positions[7] << '|' << positions[8] << "\n" << endl;

   for (int o = 0; o <= 9; ++o) {
        cout << "Введите номер клетки, куда ходить  X: ";
        cin >> x;
        positions[x - 1] = 'x';

        cout << positions[0] << '|' << positions[1] << '|' << positions[2] << "|" << endl;
        cout << positions[3] << '|' << positions[4] << '|' << positions[5] << "|" << endl;
        cout << positions[6] << '|' << positions[7] << '|' << positions[8] << "|" << "\n" << endl;



        cout << "Введите номер клетки, куда ходить 0: ";
        cin >> o;
        positions[o - 1] = '0';

        cout << positions[0] << '|' << positions[1] << '|' << positions[2] << "|" << endl;
        cout << positions[3] << '|' << positions[4] << '|' << positions[5] << "|" << endl;
        cout << positions[6] << '|' << positions[7] << '|' << positions[8] << "|" << "\n" << endl;


    }

    system("pause");
    return 0;


}
*/