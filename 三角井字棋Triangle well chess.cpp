
#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;

char c[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

void print()
{
    cout << "+---+---+---+" << endl;
	cout << "�� " << c[0] << " �� " << c[1] << " �� " << c[2] << " ��" << endl;
	cout << "+---+---+---+" << endl;
	cout << "�� " << c[3] << " �� " << c[4] << " �� " << c[5] << " ��" << endl;
	cout << "+---+---+---+" << endl;
	cout << "�� " << c[6] << " �� " << c[7] << " �� " << c[8] << " ��" << endl;
	cout << "+---+---+---+" << endl;
}

int main ()
{
	print();

	for (int i = 1; i <= 9; i++)
	{
    	if (i % 2 == 1)
    	{
    	    cout << "��1�������������λ��Please enter the position of player 1��";
    	    int n;
    	    cin >> n;
    	    if (c[n - 1] != ' ')
    	    {
    	        cout << "���Ӵ���Wrong placement" << endl;
    	        sleep(2);
    	        cout <<"����no"<<endl;
    	        break;    
    	    }
            c[n - 1] = 'o';
    	}
    	else
    	{
    	    cout << "��2�������������λ��Please enter the position of player 2��";
    	    int n;
    	    cin >> n;
    	    if (c[n - 1] != ' ')
    	    {
    	        cout << "���Ӵ���Wrong placement" << endl;
    	        sleep(1);
    	        cout <<"����no"<<endl;
    	        break;    
    	    }
    	    c[n - 1] = 'x';
    	}
    	
	    print();
	    
    	//�ж���Ӯ
        //�ж�8������������ζ����ϵ����Ӷ���ͬ�����һ�����Ӳ��ǿո�
        //1.�ж�c[0], c[4], c[6]����ͬ�����һ�����Ӳ��ǿո�
        if(c[0]==c[4]&&c[4]==c[6]&&c[6]!=' ')
        {
            break;
        }

        //2.�ж�c[2], c[4], c[8]����ͬ�����һ�����Ӳ��ǿո�
        if(c[2]==c[4]&&c[4]==c[8]&&c[8]!=' ')
        {
            break;
        }


        //3.�ж�c[0], c[2], c[4]����ͬ�����һ�����Ӳ��ǿո�
        if(c[0]==c[2]&&c[2]==c[4]&&c[4]!=' ')
        {
            break;
        }


        //4.�ж�c[4], c[6], c[8]����ͬ�����һ�����Ӳ��ǿո�
        if(c[4]==c[6]&&c[6]==c[8]&&c[8]!=' ')
        {
            break;
        }
        
        
        //5.�ж�c[1], c[5], c[7]����ͬ�����һ�����Ӳ��ǿո�
        if(c[1]==c[5]&&c[5]==c[7]&&c[7]!=' ')
        {
            break;
        }


        //6.�ж�c[1], c[3], c[7]����ͬ�����һ�����Ӳ��ǿո�
        if(c[1]==c[3]&&c[3]==c[7]&&c[7]!=' ')
        {
            break;
        }
        
        
        //7.�ж�c[3], c[5], c[7]����ͬ�����һ�����Ӳ��ǿո�
        if(c[3]==c[5]&&c[5]==c[7]&&c[7]!=' ')
        {
            break;
        }


        //8.�ж�c[1], c[3], c[5]����ͬ�����һ�����Ӳ��ǿո�
        if(c[1]==c[3]&&c[3]==c[5]&&c[5]!=' ')
        {
            break;
        }
        
        
	}
	cout << "��Ϸ���� game over";
	return 0;
}

