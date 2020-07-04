
#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;

char c[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

void print()
{
    cout << "+---+---+---+" << endl;
	cout << "│ " << c[0] << " │ " << c[1] << " │ " << c[2] << " │" << endl;
	cout << "+---+---+---+" << endl;
	cout << "│ " << c[3] << " │ " << c[4] << " │ " << c[5] << " │" << endl;
	cout << "+---+---+---+" << endl;
	cout << "│ " << c[6] << " │ " << c[7] << " │ " << c[8] << " │" << endl;
	cout << "+---+---+---+" << endl;
}

int main ()
{
	print();

	for (int i = 1; i <= 9; i++)
	{
    	if (i % 2 == 1)
    	{
    	    cout << "请1号玩家输入下棋位置Please enter the position of player 1：";
    	    int n;
    	    cin >> n;
    	    if (c[n - 1] != ' ')
    	    {
    	        cout << "落子错误Wrong placement" << endl;
    	        sleep(2);
    	        cout <<"不行no"<<endl;
    	        break;    
    	    }
            c[n - 1] = 'o';
    	}
    	else
    	{
    	    cout << "请2号玩家输入下棋位置Please enter the position of player 2：";
    	    int n;
    	    cin >> n;
    	    if (c[n - 1] != ' ')
    	    {
    	        cout << "落子错误Wrong placement" << endl;
    	        sleep(1);
    	        cout <<"不行no"<<endl;
    	        break;    
    	    }
    	    c[n - 1] = 'x';
    	}
    	
	    print();
	    
    	//判断输赢
        //判断8种情况的三角形顶点上的棋子都相同且最后一个棋子不是空格
        //1.判断c[0], c[4], c[6]都相同且最后一个棋子不是空格
        if(c[0]==c[4]&&c[4]==c[6]&&c[6]!=' ')
        {
            break;
        }

        //2.判断c[2], c[4], c[8]都相同且最后一个棋子不是空格
        if(c[2]==c[4]&&c[4]==c[8]&&c[8]!=' ')
        {
            break;
        }


        //3.判断c[0], c[2], c[4]都相同且最后一个棋子不是空格
        if(c[0]==c[2]&&c[2]==c[4]&&c[4]!=' ')
        {
            break;
        }


        //4.判断c[4], c[6], c[8]都相同且最后一个棋子不是空格
        if(c[4]==c[6]&&c[6]==c[8]&&c[8]!=' ')
        {
            break;
        }
        
        
        //5.判断c[1], c[5], c[7]都相同且最后一个棋子不是空格
        if(c[1]==c[5]&&c[5]==c[7]&&c[7]!=' ')
        {
            break;
        }


        //6.判断c[1], c[3], c[7]都相同且最后一个棋子不是空格
        if(c[1]==c[3]&&c[3]==c[7]&&c[7]!=' ')
        {
            break;
        }
        
        
        //7.判断c[3], c[5], c[7]都相同且最后一个棋子不是空格
        if(c[3]==c[5]&&c[5]==c[7]&&c[7]!=' ')
        {
            break;
        }


        //8.判断c[1], c[3], c[5]都相同且最后一个棋子不是空格
        if(c[1]==c[3]&&c[3]==c[5]&&c[5]!=' ')
        {
            break;
        }
        
        
	}
	cout << "游戏结束 game over";
	return 0;
}

