#include <iostream>
using namespace std;
int i = 0;
int main(){
int counter = 0;
if (1)
    {
    	if (i%2==0)
    	{
        	if (counter==0)
        	{
        		cout<<"\n\n\t\t\t\t\t\t Player one's turn!"<<endl;
        		cout<<"\n\n\t\t\t\t\t\t Press ENTER to roll dice...";
        	}
        	cin>>roll;
        	if (roll!=1)
        	{
            	cout<<"\n\n\t\t\t\t\t\t\t You pressed the wrong key."<<endl;
            	cout<<"\n\n\t\t\t\t\t\t\t Try pressing enter key again..."<<endl;
            	cin>>roll;
        	}
//        	 PlaySound(TEXT("dice.wav"),NULL,SND_SYNC);
//        	 PlaySound(TEXT("Music.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
        	x = ((rand()%6)+1);
        	cout<<"Roll : "<<x<<endl;
        	score1 = score1 + x;
        	if ( score1 != 10 && score1 != 12 && score1 != 49 && score1 != 35 )
        	{
            	for (int g = 0; g < 10; g++)
            	{
                	for (int h = 0; h < 10; h++)
                	{
                    	if ( nums[g][h] == score1 )
                    	{
                    		system("cls");
                        		a = g;
                        		b = h;
                        		layout(a,b,c,d);
                        		break;
                        		break;
                    	}
                	}
            	}
        	}
        if ( x == 6 )
        {
            ++counter;
            if (counter==3) 
            {
                cout<<"\n\n\t\t\t\t\t\t\t FOWL...Three time 6 in a row."<<endl;
				score1 = score1 + x;
				system ("cls");
				layout(a,b,c,d); 
            }
            else
            {
                cout<<"\n\n\t\t\t\t\t\t\t Player one's turn again!"<<endl;
                cout<<"\n\n\t\t\t\t\t\t\t Press ENTER to roll dice..."<<endl;
                cin>>roll;
//                 PlaySound(TEXT("dice.wav"),NULL,SND_SYNC);
//                 PlaySound(TEXT("Music.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
                x = ((rand()%6)+1);
                cout<<"Roll : "<<x<<endl;
//                score1 = score1 + x;
                system ("cls");
                layout(a,b,c,d);
            }
        }
        // LADDERS
        if (score1==10)
        {
//        	 PlaySound(TEXT("ladder.wav"),NULL,SND_SYNC);
//        	 PlaySound(TEXT("Music.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
            cout<<"You Entered Ladder!"<<endl;
            score1 = 29;
            system("cls");
            a = 7;
            b = 8;
            layout(a,b,c,d);
        }
        else if (score1==12)
        {
//        	 PlaySound(TEXT("ladder.wav"),NULL,SND_SYNC);
//        	 PlaySound(TEXT("Music.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
            cout<<"You Entered Ladder!"<<endl;
            score1 = 42;
            system("cls");
            a = 5;
            b = 1;
            layout(a,b,c,d);
        }
        else if (score1==49)
        {
//        	 PlaySound(TEXT("ladder.wav"),NULL,SND_SYNC);
//        	 PlaySound(TEXT("Music.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
            cout<<"You Entered Ladder!"<<endl;
            score1 = 68;
            system("cls");
            a = 3;
            b = 7;
            layout(a,b,c,d);
        }
        // SNAKE'S BITE
        else if (score1==35)
        {
//        	 PlaySound(TEXT("bite.wav"),NULL,SND/D_FILENAME|SND_LOOP|SND_ASYNC);
            cout<<"You were bitten by snake..."<<endl;
            score1 = 18;
            system("cls");
            a = 8;
            b = 7;
            layout(a,b,c,d);
        }
        ++i;
        counter = 0;
    }
//    Player Two's Turn
    while (i%2!=0)
    {
        // Player Two's turn!

        if (counter==0)
        {
        	cout<<"\n\n\t\t\t\t\t\t Player Two's turn!"<<endl;
        	cout<<"\n\n\t\t\t\t\t\t Press ENTER to roll dice...";
        }
        cin>>roll;
        while (roll!=1)
        {
            cout<<"\n\n\t\t\t\t\t\t You pressed the wrong key."<<endl;
            cout<<"\n\n\t\t\t\t\t\t Try pressing enter key again..."<<endl;
            cin>>roll;
        }
//         PlaySound(TEXT("dice.wav"),NULL,SND_SYNC);
//         PlaySound(TEXT("Music.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
        x = ((rand()%6)+1);
        cout<<"Roll : "<<x<<endl;
        score2 = score2 + x;
        if ( score2 != 10 && score2 != 12 && score2 != 49 && score2 != 35 )
        {
            for (int g = 0; g < 10; g++)
            {
                for (int h = 0; h < 10; h++)
                {
                    if ( nums[g][h] == score2 )
                    {
                    	system("cls");
                        	c = g;
                        	d = h;
                        	layout(a,b,c,d);
                        	break;
                        	break;
                    }
                
                }
            }
        }
        if ( x == 6 )
        {
        	while ( x == 6 )
        	{
            	++counter;
            	if ( counter == 3 )
            	{
//            		 PlaySound(TEXT("bite.wav"),NULL,SND_SYNC);
                	cout<<"\n\n\t\t\t\t\t\t FOWL...Three time 6 in a row."<<endl;
                	score2 = score2 + x ;
            }
            else
            {
                cout<<"\n\n\t\t\t\t\t\t Player two's turn again!"<<endl;
                cout<<"\n\n\t\t\t\t\t\t Press ENTER to roll dice..."<<endl;
                cin>>roll;
//                 PlaySound(TEXT("dice.wav"),NULL,SND_SYNC);
                x = ((rand()%6)+1);
                score2 = score2 + x;
                for (int g = 0; g < 10; g++)
            	{
                	for (int h = 0; h < 10; h++)
                	{
                    	if ( nums[g][h] == score2 )
                    	{
                    		system("cls");
                        		c = g;
                        		d = h;
                        		layout(a,b,c,d);
                        		break;
                        		break;
                    	}
                	}
            	}
                cout<<"\n\n\t\t\t\t\t\t Roll : "<<x<<endl;
            }
            ++i;
            counter = 0;
        	}
    	}
    	else
    	{
        	if ( score2 == 10 )
        	{
//        		 PlaySound(TEXT("ladder.wav"),NULL,SND_SYNC);
//        		 PlaySound(TEXT("Music.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
            	cout<<"\n\n\t\t\t\t\t\t You Entered Ladder!"<<endl;            
            	score2 = 29;
            	system("cls");
            	c = 7;
            	d = 8;
            	layout(a,b,c,d);
        	}
        	if ( score2 == 12 )
        	{
//        		 PlaySound(TEXT("ladder.wv"),NULL,SND_SYNC);
//        		 PlaySound(TEXT("Music.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
            	cout<<"You Entered Ladder!"<<endl;
            	score2 = 42;
            	system("cls");
            	c = 5;
            	d = 1;
            	layout(a,b,c,d);
        	}
        	else if ( score2 == 49 )
        	{
//        		 PlaySound(TEXT("ladder.wav"),NULL,SND_SYNC);
//        		 PlaySound(TEXT("Music.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
            	cout<<"\n\n\t\t\t\t\t\t You Entered Ladder!"<<endl;
            	score2 = 68;
            	system("cls");
            	c = 3;
            	d = 7;
            	layout(a,b,c,d);
        	}
		// SNAKE'S BITE        
        	else if (score2==35)
        	{
//        		 PlaySound(TEXT("bite.wav"),NULL,SND_SYNC);
//        		 PlaySound(TEXT("Music.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
            	cout<<"\n\n\t\t\t\t\t\t You were bitten by snake..."<<endl;
            	score2 = 18;
            	system("cls");
            	c = 8;
            	d = 7;
            	layout(a,b,c,d);
        	}
        	++i;
        	counter = 0;
    	}
        while (score1 > 100 || score2 > 100 )
        {
            if ( score1 > 100 )
            {
//            	 PlaySound(TEXT("winner.wav"),NULL,SND_SYNC);
                cout<<"\n\n\t\t\t\t\t\t Player One Won!"<<endl;
            }
            else 
            {
//            	 PlaySound(TEXT("winner.wav"),NULL,SND_SYNC);
                cout<<"\n\n\t\t\t\t\t\t Player Two Won!"<<endl;
            }
            break;
        }
    }
    }
}
