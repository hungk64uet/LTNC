#include <iostream>
#include <windows.h>
#include <ctime>
#include <cstdlib>
#include <conio.h>
#include <SDL.h>
#include "SDL_mixer.h"
HANDLE wHnd;
HANDLE rHnd;
using namespace std;
int b[5]={0,1,2,3,4};
Mix_Music *music = NULL;

bool init()
{
	bool success = true;

	if( SDL_Init( SDL_INIT_VIDEO | SDL_INIT_AUDIO ) < 0 )
	{
		printf( "SDL could not initialize! SDL Error: %s\n", SDL_GetError() );
		success = false;
	}
      if( Mix_OpenAudio( 44100, MIX_DEFAULT_FORMAT, 2, 2048 ) < 0 )
				{
					printf( "SDL_mixer could not initialize! SDL_mixer Error: %s\n", Mix_GetError() );
					success = false;
				}




	return success;
}

void trogiup() {
    cout<<"\n\n";
    cout<<"|======================================|\n";
    cout<<"| 1.  Gọi điện thoại cho người thân    |\n";
    cout<<"|======================================|\n";
    cout<<"| 2.              50/50                |\n";
    cout<<"|======================================|\n";
    cout<<"| 3.  Hỏi ý kiến khán giả trường quay  |\n";
    cout<<"|======================================|\n";
}

void cauhoi(int ch,int &x) {
    int a;

    if (ch==1) {
        cout<<"\n\n  Việt Nam vô địch giải AFF Cup lần đầu tiên vào năm nào? \n";
		cout<<"|===========================================================|\n";
		cout<<"|        1. 1997               ||          2. 2002          |\n";
		cout<<"|===========================================================|\n";
		cout<<"|        3. 2008               ||          4. 2018          |\n";
		cout<<"|===========================================================|\n";
		int cau1;
    cauhoi1:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau1;
            if (cau1<0 || cau1>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau1<0 || cau1>4);

        if (cau1==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 3. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 2 và 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 20%.\nĐáp án 2 chiếm 10%.\nĐáp án 3 chiếm 40%.\nĐáp án 4 chiếm 30%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi1;
        }
        if(cau1==3) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\n  Việt Nam vô địch giải AFF Cup lần đầu tiên vào năm nào? \n";
        cout<<" Đáp án đúng là :\n";
            cout<<"  3. 2008\n";
            x=0;
        }
    }

    if (ch==2) {
        cout<<"\n\n  Đội tuyển nào vô địch World Cup năm 2014? \n";
		cout<<"|===========================================================|\n";
		cout<<"|        1. Brazil             ||          2. Bỉ            |\n";
		cout<<"|===========================================================|\n";
		cout<<"|        3. Argentina          ||          4. Đức           |\n";
		cout<<"|===========================================================|\n";
		int cau2;
    cauhoi2:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau2;
            if (cau2<0 || cau2>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau2<0 || cau2>4);

        if (cau2==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 1 và 2. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 15%.\nĐáp án 2 chiếm 5%.\nĐáp án 3 chiếm 30%.\nĐáp án 4 chiếm 50%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi2;
        }
        if(cau2==4) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\n  Đội tuyển nào vô địch World Cup năm 2014? \n";
        cout<<" Đáp án đúng là :\n";
            cout<<"  4.Đức \n";
            x=0;
        }
    }

    if (ch==3) {
        cout<<"\n\n  Cầu thủ nào giành danh hiệu Quả bóng vàng châu Âu năm 2018? \n";
		cout<<"|===========================================================|\n";
		cout<<"|      1. Cristiano Ronaldo    ||      2. Lionel Messi      |\n";
		cout<<"|===========================================================|\n";
		cout<<"|      3. Luka Modric          ||      4. Antoine Griezmann |\n";
		cout<<"|===========================================================|\n";
		int cau3;
    cauhoi3:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau3;
            if (cau3<0 || cau3>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau3<0 || cau3>4);

        if (cau3==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 3. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 1 và 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 30%.\nĐáp án 2 chiếm 25%.\nĐáp án 3 chiếm 40%.\nĐáp án 4 chiếm 5%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi3;
        }
        if(cau3==3) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\n  Cầu thủ nào giành danh hiệu Quả bóng vàng châu Âu năm 2018? \n";
        cout<<" Đáp án đúng là :\n";
            cout<<"  3.Luka Modric \n";
            x=0;
        }
    }

    if (ch==4) {
        cout<<"\n\nTính đến ngày 9/4/2020 Đội tuyển Quốc gia môn bóng đá nam Việt Nam xếp thứ bao nhiêu trên bảng xếp hạng FIFA? \n";
		cout<<"|===========================================================|\n";
		cout<<"|      1. 94                   ||      2. 96                |\n";
		cout<<"|===========================================================|\n";
		cout<<"|      3. 98                   ||      4. 100               |\n";
		cout<<"|===========================================================|\n";
		int cau4;
    cauhoi4:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau4;
            if (cau4<0 || cau4>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau4<0 || cau4>4);

        if (cau4==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 1. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 3 và 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 60%.\nĐáp án 2 chiếm 30%.\nĐáp án 3 chiếm 10%.\nĐáp án 4 chiếm 0%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi4;
        }
        if(cau4==1) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nTính đến ngày 9/4/2020 Đội tuyển Quốc gia môn bóng đá nam Việt Nam xếp thứ bao nhiêu trên bảng xếp hạng FIFA?  \n";
        cout<<" Đáp án đúng là :\n";
            cout<<"  1. 94 \n";
            x=0;
        }
    }

    if (ch==5) {
        cout<<"\n\nĐội bóng nào vô địch UEFA Champions League năm 2018-2019? \n";
		cout<<"|===========================================================|\n";
		cout<<"|      1. Real Madrid          ||      2. Liverpool         |\n";
		cout<<"|===========================================================|\n";
		cout<<"|      3. Tottenham            ||      4. Barcelona         |\n";
		cout<<"|===========================================================|\n";
		int cau5;
    cauhoi5:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau5;
            if (cau5<0 || cau5>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau5<0 || cau5>4);

        if (cau5==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 2. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 1 và 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 25%.\nĐáp án 2 chiếm 35%.\nĐáp án 3 chiếm 30%.\nĐáp án 4 chiếm 10%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi5;
        }
        if(cau5==2) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nĐội bóng nào vô địch UEFA Champions League năm 2018-2019?  \n";
        cout<<" Đáp án đúng là :\n";
            cout<<"  2. Liverpool \n";
            x=0;
        }
    }

    if (ch==6) {
        cout<<"\n\nSau giải SEA GAMES lần thứ 30 đội tuyển nữ Việt Nam đã vô địch bao nhiêu lần? \n";
		cout<<"|===========================================================|\n";
		cout<<"|      1. 3                    ||      2. 4                 |\n";
		cout<<"|===========================================================|\n";
		cout<<"|      3. 5                    ||      4. 6                 |\n";
		cout<<"|===========================================================|\n";
		int cau6;
    cauhoi6:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau6;
            if (cau6<0 || cau6>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau6<0 || cau6>4);

        if (cau6==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 1 và 3. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 20%.\nĐáp án 2 chiếm 10%.\nĐáp án 3 chiếm 30%.\nĐáp án 4 chiếm 40%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi6;
        }
        if(cau6==4) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nSau giải SEA GAMES lần thứ 30 đội tuyển nữ Việt Nam đã vô địch bao nhiêu lần?  \n";
        cout<<" Đáp án đúng là :\n";
            cout<<"  4. 6 \n";
            x=0;
        }
    }

    if (ch==7) {
        cout<<"\n\nBộ phim nào giành giải Phim xuất sắc nhất tại giải Oscar 2020? \n";
		cout<<"|===========================================================|\n";
		cout<<"|      1. Kí sinh trùng        ||      2. 1917              |\n";
		cout<<"|===========================================================|\n";
		cout<<"|      3. Joker                ||      4. Jojo Rabbit       |\n";
		cout<<"|===========================================================|\n";
		int cau7;
    cauhoi7:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau7;
            if (cau7<0 || cau7>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau7<0 || cau7>4);

        if (cau7==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 1. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 2 và 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 40%.\nĐáp án 2 chiếm 37%.\nĐáp án 3 chiếm 20%.\nĐáp án 4 chiếm 3%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi7;
        }
        if(cau7==1) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nBộ phim nào giành giải Phim xuất sắc nhất tại giải Oscar 2020?  \n";
        cout<<" Đáp án đúng là :\n";
            cout<<"  1. Kí sinh trùng \n";
            x=0;
        }
    }

    if (ch==8) {
        cout<<"\n\nAi là nam diễn viên thủ vai nhân vật Harry Potter ? \n";
		cout<<"|===========================================================|\n";
		cout<<"|      1. Rupert Grint         ||      2. Alan Rickman      |\n";
		cout<<"|===========================================================|\n";
		cout<<"|      3. Robbie Coltrane      ||      4. Daniel Radcliffe  |\n";
		cout<<"|===========================================================|\n";
		int cau8;
    cauhoi8:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau8;
            if (cau8<0 || cau8>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau8<0 || cau8>4);

        if (cau8==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 2 và 3. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 2%.\nĐáp án 2 chiếm 12%.\nĐáp án 3 chiếm 35%.\nĐáp án 4 chiếm 51%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi8;
        }
        if(cau8==4) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nAi là nam diễn viên thủ vai nhân vật Harry Potter ? \n";
        cout<<" Đáp án đúng là :\n";
            cout<<"  4. Daniel Radcliffe \n";
            x=0;
        }
    }

    if (ch==9) {
        cout<<"\n\nAi là đạo diễn của bộ phim Mắt biếc ? \n";
		cout<<"|===========================================================|\n";
		cout<<"|      1. Nguyễn Quang Dũng    ||      2. Trần Anh Hùng     |\n";
		cout<<"|===========================================================|\n";
		cout<<"|      3. Victor Vũ            ||      4. Lê Hoàng          |\n";
		cout<<"|===========================================================|\n";
		int cau9;
    cauhoi9:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau9;
            if (cau9<0 || cau9>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau9<0 || cau9>4);

        if (cau9==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 3. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 1 và 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 12%.\nĐáp án 2 chiếm 48%.\nĐáp án 3 chiếm 70%.\nĐáp án 4 chiếm 10%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi9;
        }
        if(cau9==3) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nAi là đạo diễn của bộ phim Mắt biếc ? \n";
        cout<<" Đáp án đúng là :\n";
            cout<<"  3. Victor Vũ \n";
            x=0;
        }
    }

    if (ch==10) {
        cout<<"\n\nBộ phim Mùi cỏ cháy của đạo diễn Nguyễn Hữu Mười được phát hành vào năm nào? \n";
		cout<<"|===========================================================|\n";
		cout<<"|      1. 1997                 ||      2. 2002              |\n";
		cout<<"|===========================================================|\n";
		cout<<"|      3. 2007                 ||      4. 2012              |\n";
		cout<<"|===========================================================|\n";
		int cau10;
    cauhoi10:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau10;
            if (cau10<0 || cau10>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau10<0 || cau10>4);

        if (cau10==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 1 và 2. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 12%.\nĐáp án 2 chiếm 24%.\nĐáp án 3 chiếm 27%.\nĐáp án 4 chiếm 37%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi10;
        }
        if(cau10==4) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nBộ phim Mùi cỏ cháy của đạo diễn Nguyễn Hữu Mười được phát hành vào năm nào? \n";
        cout<<" Đáp án đúng là :\n";
            cout<<"  4. 2012 \n";
            x=0;
        }
    }

    if (ch==11) {
        cout<<"\n\nAi là nam diễn viên thủ vai nhân vật Jack Dawson trong bộ phim đình đám Titanic? \n";
		cout<<"|===========================================================|\n";
		cout<<"|      1. Leonardo DiCaprio    ||      2. Billy Zane        |\n";
		cout<<"|===========================================================|\n";
		cout<<"|      3. Bill Paxton          ||      4. Tom Cruise        |\n";
		cout<<"|===========================================================|\n";
		int cau11;
    cauhoi11:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau11;
            if (cau11<0 || cau11>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau11<0 || cau11>4);

        if (cau11==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 1. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 2 và 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 57%.\nĐáp án 2 chiếm 24%.\nĐáp án 3 chiếm 15%.\nĐáp án 4 chiếm 4%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi11;
        }
        if(cau11==1) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nAi là nam diễn viên thủ vai nhân vật Jack Dawson trong bộ phim đình đám Titanic? \n";
        cout<<" Đáp án đúng là :\n";
            cout<<"  1. Leonardo DiCaprio \n";
            x=0;
        }
    }

    if (ch==12) {
        cout<<"\n\nNhân vật Hai Phượng trong bộ phim cùng tên được thủ vai bởi nữ diễn viên nào? \n";
		cout<<"|===========================================================|\n";
		cout<<"|      1. Yaya Trương Nhi      ||      2. Ngô Thanh Vân     |\n";
		cout<<"|===========================================================|\n";
		cout<<"|      3. Mai Cát Vi           ||      4. Lâm Thanh Mỹ      |\n";
		cout<<"|===========================================================|\n";
		int cau12;
    cauhoi12:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau12;
            if (cau12<0 || cau12>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau12<0 || cau12>4);

        if (cau12==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 2. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 1 và 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 5%.\nĐáp án 2 chiếm 42%.\nĐáp án 3 chiếm 15%.\nĐáp án 4 chiếm 38%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi12;
        }
        if(cau12==2) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nNhân vật Hai Phượng trong bộ phim cùng tên được thủ vai bởi nữ diễn viên nào?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<"  2. Ngô Thanh Vân \n";
            x=0;
        }
    }

    if (ch==13) {
        cout<<"\n\nBài hát Hãy trao cho anh được sáng tác bởi nam ca sĩ nào? \n";
		cout<<"|===========================================================|\n";
		cout<<"|      1. Issac                ||      2. Noo Phước Thịnh   |\n";
		cout<<"|===========================================================|\n";
		cout<<"|      3. Sơn Tùng M-TP        ||      4. Tuấn Hưng         |\n";
		cout<<"|===========================================================|\n";
		int cau13;
    cauhoi13:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau13;
            if (cau13<0 || cau13>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau13<0 || cau13>4);

        if (cau13==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 3. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 1 và 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 20%.\nĐáp án 2 chiếm 23%.\nĐáp án 3 chiếm 55%.\nĐáp án 4 chiếm 2%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi13;
        }
        if(cau13==3) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nBài hát Hãy trao cho anh được sáng tác bởi nam ca sĩ nào? \n";
        cout<<" Đáp án đúng là :\n";
            cout<<"  3. Sơn Tùng M-TP \n";
            x=0;
        }
    }

    if (ch==14) {
        cout<<"\n\nAi là người giành giải Nghệ sĩ mới xuất sắc nhất tại lễ trao giải Grammy 2019?\n";
		cout<<"|===========================================================|\n";
		cout<<"|      1. Selena Gomez         ||      2. Demi Lovato       |\n";
		cout<<"|===========================================================|\n";
		cout<<"|      3. Ariana Grande        ||      4. Billie Eilish     |\n";
		cout<<"|===========================================================|\n";
		int cau14;
    cauhoi14:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau14;
            if (cau14<0 || cau14>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau14<0 || cau14>4);

        if (cau14==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 1 và 3. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 28%.\nĐáp án 2 chiếm 28%.\nĐáp án 3 chiếm 15%.\nĐáp án 4 chiếm 29%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi14;
        }
        if(cau14==4) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nAi là người giành giải Nghệ sĩ mới xuất sắc nhất tại lễ trao giải Grammy 2019? \n";
        cout<<" Đáp án đúng là :\n";
            cout<<"  4.Billie Eilish \n";
            x=0;
        }
    }

    if (ch==15) {
        cout<<"\n\nBài hát Việt nào cán mốc 100 triệu view  nhanh nhất trên Youtube?\n";
		cout<<"|===========================================================|\n";
		cout<<"|      1. Hãy trao cho anh     ||      2. Sóng gió          |\n";
		cout<<"|===========================================================|\n";
		cout<<"|      3. Em gì ơi             ||      4. Người lạ ơi       |\n";
		cout<<"|===========================================================|\n";
		int cau15;
    cauhoi15:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau15;
            if (cau15<0 || cau15>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau15<0 || cau15>4);

        if (cau15==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 1. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 2 và 3. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 46%.\nĐáp án 2 chiếm 12%.\nĐáp án 3 chiếm 15%.\nĐáp án 4 chiếm 27%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi15;
        }
        if(cau15==1) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nBài hát Việt nào cán mốc 100 triệu view  nhanh nhất trên Youtube? \n";
        cout<<" Đáp án đúng là :\n";
            cout<<"  1. Hãy trao cho anh \n";
            x=0;
        }
    }

    if (ch==16) {
        cout<<"\n\nBài hát dân ca Bella Ciao xuất phát từ quốc gia nào?\n";
		cout<<"|===========================================================|\n";
		cout<<"|      1. Tây Ban Nha          ||      2. Đức               |\n";
		cout<<"|===========================================================|\n";
		cout<<"|      3. Bồ Đào Nha           ||      4. Ý                 |\n";
		cout<<"|===========================================================|\n";
		int cau16;
    cauhoi16:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau16;
            if (cau16<0 || cau16>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau16<0 || cau16>4);

        if (cau16==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 2 và 3. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 40%.\nĐáp án 2 chiếm 8%.\nĐáp án 3 chiếm 6%.\nĐáp án 4 chiếm 46%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi16;
        }
        if(cau16==4) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nBài hát dân ca Bella Ciao xuất phát từ quốc gia nào? \n";
        cout<<" Đáp án đúng là :\n";
            cout<<"  4. Ý \n";
            x=0;
        }
    }

    if (ch==17) {
        cout<<"\n\nBài hát Biển nhớ của nhạc sĩ nào sáng tác? \n";
		cout<<"|===========================================================|\n";
		cout<<"|      1. Trịnh Công Sơn       ||      2. Phạm Duy          |\n";
		cout<<"|===========================================================|\n";
		cout<<"|      3. Quang Dũng           ||      4. Khánh Ly          |\n";
		cout<<"|===========================================================|\n";
		int cau17;
    cauhoi17:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau17;
            if (cau17<0 || cau17>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau17<0 || cau17>4);

        if (cau17==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 1. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 2 và 3. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 50%.\nĐáp án 2 chiếm 4%.\nĐáp án 3 chiếm 0%.\nĐáp án 4 chiếm 46%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi17;
        }
        if(cau17==1) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nBài hát Biển nhớ của nhạc sĩ nào sáng tác? \n";
        cout<<" Đáp án đúng là :\n";
            cout<<"  1. Trịnh Công Sơn \n";
            x=0;
        }
    }

    if (ch==18) {
        cout<<"\n\nNữ ca sĩ Céline Dion - ca sĩ nổi tiếng với bài hát My heart will go on là người nước nào? \n";
		cout<<"|===========================================================|\n";
		cout<<"|      1. Mỹ                  ||      2. Canada             |\n";
		cout<<"|===========================================================|\n";
		cout<<"|      3. Anh                 ||      4. Pháp               |\n";
		cout<<"|===========================================================|\n";
		int cau18;
    cauhoi18:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau18;
            if (cau18<0 || cau18>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau18<0 || cau18>4);

        if (cau18==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 2. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 1 và 3. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 5%.\nĐáp án 2 chiếm 48%.\nĐáp án 3 chiếm 7%.\nĐáp án 4 chiếm 40%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi18;
        }
        if(cau18==2) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nNữ ca sĩ Céline Dion - ca sĩ nổi tiếng với bài hát My heart will go on là người nước nào?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<"  2. Canada \n";
            x=0;
        }
    }

    if (ch==19) {
        cout<<"\n\nTiểu thuyết Không gia đình được sáng tác bởi nhà văn nào? \n";
		cout<<"|===========================================================|\n";
		cout<<"|      1. Lev Tolstoy         ||      2. Charles Dickens    |\n";
		cout<<"|===========================================================|\n";
		cout<<"|      3. Hector Malot        ||      4. Victor Hugo        |\n";
		cout<<"|===========================================================|\n";
		int cau19;
    cauhoi19:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau19;
            if (cau19<0 || cau19>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau19<0 || cau19>4);

        if (cau19==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 3. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 1 và 2. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 4%.\nĐáp án 2 chiếm 2%.\nĐáp án 3 chiếm 70%.\nĐáp án 4 chiếm 24%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi19;
        }
        if(cau19==3) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nTiểu thuyết Không gia đình được sáng tác bởi nhà văn nào?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<"  3. Hector Malot \n";
            x=0;
        }
    }

    if (ch==20) {
        cout<<"\n\nTruyện ngắn Lão Hạc của nhà văn Nam Cao được sáng tác vào năm nào?\n";
		cout<<"|===========================================================|\n";
		cout<<"|      1. 1942                ||      2. 1943               |\n";
		cout<<"|===========================================================|\n";
		cout<<"|      3. 1944                ||      4. 1945               |\n";
		cout<<"|===========================================================|\n";
		int cau20;
    cauhoi20:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau20;
            if (cau20<0 || cau20>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau20<0 || cau20>4);

        if (cau20==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 2. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 1 và 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 24%.\nĐáp án 2 chiếm 29%.\nĐáp án 3 chiếm 27%.\nĐáp án 4 chiếm 20%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi20;
        }
        if(cau20==2) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nTruyện ngắn Lão Hạc của nhà văn Nam Cao được sáng tác vào năm nào?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<"  2. 1943 \n";
            x=0;
        }
    }

    if (ch==21) {
        cout<<"\n\nBộ truyện Harry Potter được sáng tác bởi nhà văn nào? \n";
		cout<<"|===========================================================|\n";
		cout<<"|      1. J. K. Rowling       ||      2. Jeannette Walls    |\n";
		cout<<"|===========================================================|\n";
		cout<<"|      3. John Steinbeck      ||      4. Ken Kesey          |\n";
		cout<<"|===========================================================|\n";
		int cau21;
    cauhoi21:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau21;
            if (cau21<0 || cau21>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau21<0 || cau21>4);

        if (cau21==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 1. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 3 và 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 42%.\nĐáp án 2 chiếm 29%.\nĐáp án 3 chiếm 27%.\nĐáp án 4 chiếm 2%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi21;
        }
        if(cau21==1) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nBộ truyện Harry Potter được sáng tác bởi nhà văn nào?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 1. J. K. Rowling  \n";
            x=0;
        }
    }

    if (ch==22) {
        cout<<"\n\nTác phẩm nào sau đây không phải là tác phẩm của nhà văn Nguyễn Ngọc Ánh? \n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. Mắt biếc               ||      2. Đảo mộng mơ        |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. Những lá thư không gửi ||      4. Còn chút gì để nhớ |\n";
		cout<<"|===========================================================|\n";
		int cau22;
    cauhoi22:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau22;
            if (cau22<0 || cau22>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau22<0 || cau22>4);

        if (cau22==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 3. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 1 và 2. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 24%.\nĐáp án 2 chiếm 20%.\nĐáp án 3 chiếm 30%.\nĐáp án 4 chiếm 26%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi22;
        }
        if(cau22==3) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nTác phẩm nào sau đây không phải là tác phẩm của nhà văn Nguyễn Ngọc Ánh?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 3. Những lá thư không gửi \n";
            x=0;
        }
    }

    if (ch==23) {
        cout<<"\n\nTiểu thuyết Những tấm lòng cao cả được viết bởi tác giả nào? \n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. Jules Verne            ||      2. Mark Twain         |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. Emilio Salgari         ||      4. Edmondo De Amicis  |\n";
		cout<<"|===========================================================|\n";
		int cau23;
    cauhoi23:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau23;
            if (cau23<0 || cau23>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau23<0 || cau23>4);

        if (cau23==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 1 và 3. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 24%.\nĐáp án 2 chiếm 10%.\nĐáp án 3 chiếm 30%.\nĐáp án 4 chiếm 36%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi23;
        }
        if(cau23==4) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nTiểu thuyết Những tấm lòng cao cả được viết bởi tác giả nào?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 4. Edmondo De Amicis \n";
            x=0;
        }
    }

    if (ch==24) {
        cout<<"\n\n Bài thơ nào sau đây được dáng tác bởi nhà thơ Huy Cận? \n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. Đoàn thuyền đánh cá    ||  2. Tiểu đội xe không kính |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. Mùa xuân nho nhỏ       ||  4. Trưa hè                |\n";
		cout<<"|===========================================================|\n";
		int cau24;
    cauhoi24:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau24;
            if (cau24<0 || cau24>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau24<0 || cau24>4);

        if (cau24==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 1. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 2 và 3. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 42%.\nĐáp án 2 chiếm 10%.\nĐáp án 3 chiếm 30%.\nĐáp án 4 chiếm 18%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi24;
        }
        if(cau24==1) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\n Bài thơ nào sau đây được dáng tác bởi nhà thơ Huy Cận?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 1. Đoàn thuyền đánh cá \n";
            x=0;
        }
    }

    if (ch==25) {
        cout<<"\n\nĐinh lý Pytago được áp dụng vào loại tam giác nào? \n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. Tam giác cân           ||  2. Tam giác vuông         |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. Tam giác đều           ||  4. Tam giác thường        |\n";
		cout<<"|===========================================================|\n";
		int cau25;
    cauhoi25:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau25;
            if (cau25<0 || cau25>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau25<0 || cau25>4);

        if (cau25==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 2. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 1 và 3. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 0%.\nĐáp án 2 chiếm 100%.\nĐáp án 3 chiếm 0%.\nĐáp án 4 chiếm 0%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi25;
        }
        if(cau25==2) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nĐinh lý Pytago được áp dụng vào loại tam giác nào?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 2. Tam giác vuông \n";
            x=0;
        }
    }

    if (ch==26) {
        cout<<"\n\nAi là nhà toán học người Việt Nam đầu tiên giành được huy chương Fields? \n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. Lê Bá Khánh Trình      ||  2. Đinh Tiến Cường        |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. Ngô Bảo Châu           ||  4. Vũ Hà Văn              |\n";
		cout<<"|===========================================================|\n";
		int cau26;
    cauhoi26:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau26;
            if (cau26<0 || cau26>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau26<0 || cau26>4);

        if (cau26==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 3. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 1 và 2. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 20%.\nĐáp án 2 chiếm 10%.\nĐáp án 3 chiếm 40%.\nĐáp án 4 chiếm 30%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi26;
        }
        if(cau26==3) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nAi là nhà toán học người Việt Nam đầu tiên giành được huy chương Fields?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 3. Ngô Bảo Châu \n";
            x=0;
        }
    }

    if (ch==27) {
        cout<<"\n\nCó bao nhiêu hằng đẳng thức đáng nhớ?\n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. 4                      ||  2. 5                      |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. 6                      ||  4. 7                      |\n";
		cout<<"|===========================================================|\n";
		int cau27;
    cauhoi27:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau27;
            if (cau27<0 || cau27>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau27<0 || cau27>4);

        if (cau27==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 1 và 2. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 20%.\nĐáp án 2 chiếm 10%.\nĐáp án 3 chiếm 30%.\nĐáp án 4 chiếm 40%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi27;
        }
        if(cau27==4) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nCó bao nhiêu hằng đẳng thức đáng nhớ?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 4. 7 \n";
            x=0;
        }
    }

    if (ch==28) {
        cout<<"\n\nGọi r là bán kính của đường tròn. Chu vi đường tròn là: \n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. 2*r*3.14               ||  2. r*r*3.14               |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. r*3.14                 ||  4. r*3.14*3.14            |\n";
		cout<<"|===========================================================|\n";
		int cau28;
    cauhoi28:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau28;
            if (cau28<0 || cau28>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau28<0 || cau28>4);

        if (cau28==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 1. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 4 và 2. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 65%.\nĐáp án 2 chiếm 10%.\nĐáp án 3 chiếm 25%.\nĐáp án 4 chiếm 0%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi28;
        }
        if(cau28==1) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nGọi r là bán kính của đường tròn. Chu vi đường tròn là:\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 1. 2*r*3.14 \n";
            x=0;
        }
    }

    if (ch==29) {
        cout<<"\n\nAi là người nghĩ ra công thức tính diện tích tam giác khi biết độ dài 3 cạnh của tam giác đó? \n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. Pythago                ||  2. Heron                  |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. Thalets                ||  4. Archimedes             |\n";
		cout<<"|===========================================================|\n";
		int cau29;
    cauhoi29:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau29;
            if (cau29<0 || cau29>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau29<0 || cau29>4);

        if (cau29==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 2. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 4 và 1. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 25%.\nĐáp án 2 chiếm 50%.\nĐáp án 3 chiếm 15%.\nĐáp án 4 chiếm 10%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi29;
        }
        if(cau29==2) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nAi là người nghĩ ra công thức tính diện tích tam giác khi biết độ dài 3 cạnh của tam giác đó?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 2. Heron \n";
            x=0;
        }
    }

    if (ch==30) {
        cout<<"\n\nTrong số các cái tên sau đây, ai không phải là nhà toán học ?\n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. Isaac Newton           ||  2. Galileo Galilei        |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. Johannes Kepler        ||  4. Albert Einstein        |\n";
		cout<<"|===========================================================|\n";
		int cau30;
    cauhoi30:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau30;
            if (cau30<0 || cau30>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau30<0 || cau30>4);

        if (cau30==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 1 và 3. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 25%.\nĐáp án 2 chiếm 0%.\nĐáp án 3 chiếm 15%.\nĐáp án 4 chiếm 60%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi30;
        }
        if(cau30==4) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nTrong số các cái tên sau đây, ai không phải là nhà toán học ?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 4. Albert Einstein \n";
            x=0;
        }
    }

    if (ch==31) {
        cout<<"\n\nAi là cha đẻ của Thuyết tương đối?\n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. Isaac Newton           ||  2. Albert Einstein        |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. Stephen Hawking        ||  4. Niels Bohr             |\n";
		cout<<"|===========================================================|\n";
		int cau31;
    cauhoi31:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau31;
            if (cau31<0 || cau31>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau31<0 || cau31>4);

        if (cau31==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 2. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 1 và 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 21%.\nĐáp án 2 chiếm 60%.\nĐáp án 3 chiếm 15%.\nĐáp án 4 chiếm 4%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi31;
        }
        if(cau31==2) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nAi là cha đẻ của Thuyết tương đối?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 2. Albert Einstein \n";
            x=0;
        }
    }

    if (ch==32) {
        cout<<"\n\nCho phương trình dao động điều hòa của 1 vật có dạng: x=Acos(wt+φ). Chu kì dao động của vật là?\n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. A                      ||  2. w                      |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. 2*π/w                  ||  4. φ                      |\n";
		cout<<"|===========================================================|\n";
		int cau32;
    cauhoi32:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau32;
            if (cau32<0 || cau32>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau32<0 || cau32>4);

        if (cau32==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 3. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 1 và 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 21%.\nĐáp án 2 chiếm 6%.\nĐáp án 3 chiếm 38%.\nĐáp án 4 chiếm 35%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi32;
        }
        if(cau32==3) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nCho phương trình dao động điều hòa của 1 vật có dạng: x=Acos(wt+φ). Chu kì dao động của vật là?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 3. 2*π/w \n";
            x=0;
        }
    }

    if (ch==33) {
        cout<<"\n\nĐịnh luật vạn vật hấp dẫn do ai khám phá ra?\n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. Albert Einstein        ||  2. Nikola Tesla           |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. Thomas Edison          ||  4. Isaac Newton           |\n";
		cout<<"|===========================================================|\n";
		int cau33;
    cauhoi33:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau33;
            if (cau33<0 || cau33>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau33<0 || cau33>4);

        if (cau33==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 1 và 3. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 21%.\nĐáp án 2 chiếm 6%.\nĐáp án 3 chiếm 20%.\nĐáp án 4 chiếm 53%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi33;
        }
        if(cau33==4) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nĐịnh luật vạn vật hấp dẫn do ai khám phá ra?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 4. Isaac Newton \n";
            x=0;
        }
      }

     if (ch==34) {
        cout<<"\n\nÁnh sáng mặt trời là loại ánh sáng gì?\n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. ánh sáng trắng         ||  2. ánh sáng vàng          |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. ánh sáng đỏ            ||  4. ánh sáng cam           |\n";
		cout<<"|===========================================================|\n";
		int cau34;
    cauhoi34:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau34;
            if (cau34<0 || cau34>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau34<0 || cau34>4);

        if (cau34==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 1. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 4 và 3. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 27%.\nĐáp án 2 chiếm 26%.\nĐáp án 3 chiếm 22%.\nĐáp án 4 chiếm 25%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi34;
        }
        if(cau34==1) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nÁnh sáng mặt trời là loại ánh sáng gì?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 1. ánh sáng trắng \n";
            x=0;
        }
      }

     if (ch==35) {
        cout<<"\n\nNước sôi ở bao nhiêu độ C?\n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. 80                     ||  2. 100                    |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. 90                     ||  4. 110                    |\n";
		cout<<"|===========================================================|\n";
		int cau35;
    cauhoi35:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau35;
            if (cau35<0 || cau35>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau35<0 || cau35>4);

        if (cau35==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 2. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 1 và 3. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 25%.\nĐáp án 2 chiếm 26%.\nĐáp án 3 chiếm 24%.\nĐáp án 4 chiếm 25%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi35;
        }
        if(cau35==2) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nNước sôi ở bao nhiêu độ C?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 2. 100 \n";
            x=0;
        }
      }

      if (ch==36) {
        cout<<"\n\nCó 2 vật có khối lượng khác nhau cùng rơi tại 1 độ cao so với mặt đất trong môi trường chân không. Hỏi vật nào chạm đất trước?\n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. vật nặng hơn           ||  2. vật nhẹ hơn            |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. 2 vật chạm đất cùng lúc||  4. không kết luận được    |\n";
		cout<<"|===========================================================|\n";
		int cau36;
    cauhoi36:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau36;
            if (cau36<0 || cau36>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau36<0 || cau36>4);

        if (cau36==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 3. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 2 và 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 25%.\nĐáp án 2 chiếm 26%.\nĐáp án 3 chiếm 42%.\nĐáp án 4 chiếm 7%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi36;
        }
        if(cau36==3) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nCó 2 vật có khối lượng khác nhau cùng rơi tại 1 độ cao so với mặt đất trong môi trường chân không. Hỏi vật nào chạm đất trước?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 3. 2 vật chạm đất cùng lúc \n";
            x=0;
        }
      }

      if (ch==37) {
        cout<<"\n\nAnkan có công thức tổng quát là gì?\n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. CnH2n+2                ||  2. CnH2n+1                |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. CnH2n                  ||  4. CnH2n-1                |\n";
		cout<<"|===========================================================|\n";
		int cau37;
    cauhoi37:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau37;
            if (cau37<0 || cau37>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau37<0 || cau37>4);

        if (cau37==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 1. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 2 và 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 52%.\nĐáp án 2 chiếm 26%.\nĐáp án 3 chiếm 20%.\nĐáp án 4 chiếm 2%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi37;
        }
        if(cau37==1) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nAnkan có công thức tổng quát là gì?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 1. CnH2n+2 \n";
            x=0;
        }
      }

      if (ch==38) {
        cout<<"\n\nKhối lượng mol của đồng có giá trị là: \n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. 62 g/mol               ||  2. 63 g/mol               |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. 64 g/mol               ||  4. 65 g/mol               |\n";
		cout<<"|===========================================================|\n";
		int cau38;
    cauhoi38:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau38;
            if (cau38<0 || cau38>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau38<0 || cau38>4);

        if (cau38==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 3. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 2 và 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 25%.\nĐáp án 2 chiếm 25%.\nĐáp án 3 chiếm 26%.\nĐáp án 4 chiếm 24%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi38;
        }
        if(cau38==3) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nKhối lượng mol của đồng có giá trị là: \n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 3. 64g/mol \n";
            x=0;
        }
      }

      if (ch==39) {
        cout<<"\n\nCông thức hóa học của nước là?\n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. H2O2                   ||  2. HO2                    |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. HO                     ||  4. H2O                    |\n";
		cout<<"|===========================================================|\n";
		int cau39;
    cauhoi39:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau39;
            if (cau39<0 || cau39>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau39<0 || cau39>4);

        if (cau39==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 2 và 3. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 7%.\nĐáp án 2 chiếm 25%.\nĐáp án 3 chiếm 26%.\nĐáp án 4 chiếm 42%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi39;
        }
        if(cau39==4) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nCông thức hóa học của nước là?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 4. H2O \n";
            x=0;
        }
      }

      if (ch==40) {
        cout<<"\n\nHydro có bao nhiêu đồng vị ?\n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. 3                     ||  2. 2                       |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. 1                     ||  4. 0                       |\n";
		cout<<"|===========================================================|\n";
		int cau40;
    cauhoi40:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau40;
            if (cau40<0 || cau40>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau40<0 || cau40>4);

        if (cau40==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 1. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 2 và 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 27%.\nĐáp án 2 chiếm 25%.\nĐáp án 3 chiếm 26%.\nĐáp án 4 chiếm 22%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi40;
        }
        if(cau40==1) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nHydro có bao nhiêu đồng vị ?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 1. 3 \n";
            x=0;
        }
      }

      if (ch==41) {
        cout<<"\n\nDung dịch Natri hiđroxit (NaOH) là loại dung dịch gì?\n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. axit                     ||  2. bazo                 |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. muối                     ||  4. muối thơm            |\n";
		cout<<"|===========================================================|\n";
		int cau41;
    cauhoi41:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau41;
            if (cau41<0 || cau41>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau41<0 || cau41>4);

        if (cau41==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 2. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 3 và 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 27%.\nĐáp án 2 chiếm 52%.\nĐáp án 3 chiếm 20%.\nĐáp án 4 chiếm 1%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi41;
        }
        if(cau41==2) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nDung dịch Natri hiđroxit (NaOH) là loại dung dịch gì?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 2. bazo \n";
            x=0;
        }
      }

      if (ch==42) {
        cout<<"\n\nHCL là hợp chất gì?\n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. vô cơ                    ||  2. đường                |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. hữu cơ                   ||  4. muối                 |\n";
		cout<<"|===========================================================|\n";
		int cau42;
    cauhoi42:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau42;
            if (cau42<0 || cau42>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau42<0 || cau42>4);

        if (cau42==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 1. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 2 và 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 28%.\nĐáp án 2 chiếm 25%.\nĐáp án 3 chiếm 20%.\nĐáp án 4 chiếm 27%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi42;
        }
        if(cau42==1) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nHCL là hợp chất gì?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 1. vô cơ \n";
            x=0;
        }
      }

      if (ch==43) {
        cout<<"\n\nTim con người có mấy ngăn?\n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. 1                        ||  2. 2                    |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. 3                        ||  4. 4                    |\n";
		cout<<"|===========================================================|\n";
		int cau43;
    cauhoi43:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau43;
            if (cau43<0 || cau43>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau43<0 || cau43>4);

        if (cau43==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 2 và 1. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 21%.\nĐáp án 2 chiếm 25%.\nĐáp án 3 chiếm 20%.\nĐáp án 4 chiếm 34%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi43;
        }
        if(cau43==4) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nTim con người có mấy ngăn?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 4. 4 \n";
            x=0;
        }
      }

      if (ch==44) {
        cout<<"\n\nLoại màu nào sau đây không phải của hoa hồng?\n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. xám                      ||  2. tím                  |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. đen                      ||  4. xanh lá cây          |\n";
		cout<<"|===========================================================|\n";
		int cau44;
    cauhoi44:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau44;
            if (cau44<0 || cau44>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau44<0 || cau44>4);

        if (cau44==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 1. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 2 và 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 41%.\nĐáp án 2 chiếm 25%.\nĐáp án 3 chiếm 20%.\nĐáp án 4 chiếm 14%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi44;
        }
        if(cau44==1) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nLoại màu nào sau đây không phải của hoa hồng?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 1. xám \n";
            x=0;
        }
      }

      if (ch==45) {
        cout<<"\n\nCá heo thuộc loại động vật nào?\n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. Cá                       ||  2. Chim                 |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. côn trùng                ||  4. Động vật có vú       |\n";
		cout<<"|===========================================================|\n";
		int cau45;
    cauhoi45:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau45;
            if (cau45<0 || cau45>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau45<0 || cau45>4);

        if (cau45==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 2 và 3. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 25%.\nĐáp án 2 chiếm 26%.\nĐáp án 3 chiếm 21%.\nĐáp án 4 chiếm 28%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi45;
        }
        if(cau45==4) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nCá heo thuộc loại động vật nào?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 4. Động vật có vú \n";
            x=0;
        }
      }

      if (ch==46) {
        cout<<"\n\nThành phần chính cấu tạo nên sợi tóc là chất gì?\n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. chất tơ                  ||  2. chất sừng            |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. chất vải                 ||  4. chất lụa             |\n";
		cout<<"|===========================================================|\n";
		int cau46;
    cauhoi46:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau46;
            if (cau46<0 || cau46>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau46<0 || cau46>4);

        if (cau46==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 2. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 4 và 3. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 25%.\nĐáp án 2 chiếm 31%.\nĐáp án 3 chiếm 21%.\nĐáp án 4 chiếm 23%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi46;
        }
        if(cau46==2) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nThành phần chính cấu tạo nên sợi tóc là chất gì?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 2. chất sừng \n";
            x=0;
        }
      }

      if (ch==47) {
        cout<<"\n\nCon người là .... \n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. động vật máu lạnh        ||  2. động vật máu ấm      |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. động vật máu nóng        ||  4. động vật máu mát     |\n";
		cout<<"|===========================================================|\n";
		int cau47;
    cauhoi47:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau47;
            if (cau47<0 || cau47>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau47<0 || cau47>4);

        if (cau47==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 3. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 2 và 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 25%.\nĐáp án 2 chiếm 31%.\nĐáp án 3 chiếm 33%.\nĐáp án 4 chiếm 11%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi47;
        }
        if(cau47==3) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nCon người là ....\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 3. động vật máu nóng \n";
            x=0;
        }
      }

      if (ch==48) {
        cout<<"\n\nNhóm máu O có thể nhận được nhóm máu nào?\n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. A                        ||  2. O                    |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. B                        ||  4. AB                   |\n";
		cout<<"|===========================================================|\n";
		int cau48;
    cauhoi48:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau48;
            if (cau48<0 || cau48>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau48<0 || cau48>4);

        if (cau48==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 2. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 1 và 3. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 25%.\nĐáp án 2 chiếm 36%.\nĐáp án 3 chiếm 33%.\nĐáp án 4 chiếm 6%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi48;
        }
        if(cau48==2) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nNhóm máu O có thể nhận được nhóm máu nào?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 2. O \n";
            x=0;
        }
      }

      if (ch==49) {
        cout<<"\n\nTrong hệ Mặt trời của chúng ta, hành tinh nào có khối lượng lớn nhất?\n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. Kim tinh                 ||  2. Hỏa tinh             |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. Thổ tinh                 ||  4. Mộc tinh             |\n";
		cout<<"|===========================================================|\n";
		int cau49;
    cauhoi49:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau49;
            if (cau49<0 || cau49>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau49<0 || cau49>4);

        if (cau49==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 1 và 3. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 2%.\nĐáp án 2 chiếm 5%.\nĐáp án 3 chiếm 33%.\nĐáp án 4 chiếm 60%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi49;
        }
        if(cau49==4) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nTrong hệ Mặt trời của chúng ta, hành tinh nào có khối lượng lớn nhất?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 4. Mộc tinh \n";
            x=0;
        }
      }

      if (ch==50) {
        cout<<"\n\nSao Diêm Vương không còn được công nhận là hành tinh từ năm nào?\n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. 2006                     ||  2. 2007                 |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. 2008                     ||  4. 2009                 |\n";
		cout<<"|===========================================================|\n";
		int cau50;
    cauhoi50:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau50;
            if (cau50<0 || cau50>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau50<0 || cau50>4);

        if (cau50==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 1. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 2 và 3. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 29%.\nĐáp án 2 chiếm 25%.\nĐáp án 3 chiếm 23%.\nĐáp án 4 chiếm 23%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi50;
        }
        if(cau50==1) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nSao Diêm Vương không còn được công nhận là hành tinh từ năm nào?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 1. 2006 \n";
            x=0;
        }
      }

      if (ch==51) {
        cout<<"\n\nĐâu không phải là tên của 1 chòm sao ?\n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. Sư Tử                    ||  2. Tiểu Hổ              |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. Đại Hùng                 ||  4. Tiễu Mã              |\n";
		cout<<"|===========================================================|\n";
		int cau51;
    cauhoi51:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau51;
            if (cau51<0 || cau51>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau51<0 || cau51>4);

        if (cau51==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 2. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 1 và 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 29%.\nĐáp án 2 chiếm 52%.\nĐáp án 3 chiếm 10%.\nĐáp án 4 chiếm 9%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi51;
        }
        if(cau51==2) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nĐâu không phải là tên của 1 chòm sao ?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 2. Tiểu Hổ \n";
            x=0;
        }
      }

      if (ch==52) {
        cout<<"\n\nTrái Đất có bao nhiêu vệ tinh tự nhiên?\n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. 1                        ||  2. 2                    |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. 3                        ||  4. 4                    |\n";
		cout<<"|===========================================================|\n";
		int cau52;
    cauhoi52:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau52;
            if (cau52<0 || cau52>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau52<0 || cau52>4);

        if (cau52==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 1. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 3 và 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 43%.\nĐáp án 2 chiếm 22%.\nĐáp án 3 chiếm 10%.\nĐáp án 4 chiếm 25%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi52;
        }
        if(cau52==1) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nTrái Đất có bao nhiêu vệ tinh tự nhiên?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 1. 1 \n";
            x=0;
        }
      }

      if (ch==53) {
        cout<<"\n\nTrong 4 hành tinh sau, hành tinh nào gần Mặt trời nhất?\n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. Kim Tinh                 ||  2. Thủy Tinh            |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. Mộc Tinh                 ||  4. Hỏa Tinh             |\n";
		cout<<"|===========================================================|\n";
		int cau53;
    cauhoi53:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau53;
            if (cau53<0 || cau53>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau53<0 || cau53>4);

        if (cau53==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 2. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 3 và 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 23%.\nĐáp án 2 chiếm 35%.\nĐáp án 3 chiếm 10%.\nĐáp án 4 chiếm 32%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi53;
        }
        if(cau53==2) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nTrong 4 hành tinh sau, hành tinh nào gần Mặt trời nhất?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 2. Thủy Tinh \n";
            x=0;
        }
      }

      if (ch==54) {
        cout<<"\n\nTrong 4 hành tinh sau, hành tinh nào xa Mặt trời nhất?\n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. Thiên Vương Tinh         ||  2. Mộc Tinh             |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. Hải Vương Tinh           ||  4. Thổ Tinh             |\n";
		cout<<"|===========================================================|\n";
		int cau54;
    cauhoi54:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau54;
            if (cau54<0 || cau54>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau54<0 || cau54>4);

        if (cau54==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 3. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 2 và 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 23%.\nĐáp án 2 chiếm 35%.\nĐáp án 3 chiếm 40%.\nĐáp án 4 chiếm 2%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi54;
        }
        if(cau54==3) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nTrong 4 hành tinh sau, hành tinh nào xa Mặt trời nhất?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 3. Hải Vương Tinh \n";
            x=0;
        }
      }

    if (ch==55) {
        cout<<"\n\nNgày Quốc khánh Việt Nam diễn ra vào ngày nào hàng năm?\n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. 2/9                      ||  2. 30/4                 |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. 19/5                     ||  4. 6/5                  |\n";
		cout<<"|===========================================================|\n";
		int cau55;
    cauhoi55:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau55;
            if (cau55<0 || cau55>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau55<0 || cau55>4);

        if (cau55==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 1. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 3 và 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 32%.\nĐáp án 2 chiếm 30%.\nĐáp án 3 chiếm 14%.\nĐáp án 4 chiếm 24%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi55;
        }
        if(cau55==1) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nNgày Quốc khánh Việt Nam diễn ra vào ngày nào hàng năm?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 1. 2/9 \n";
            x=0;
        }
      }

      if (ch==56) {
        cout<<"\n\nChiến tranh Thế giới thứ Hai kết thúc vào năm nào?\n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. 1942                     ||  2. 1943                 |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. 1944                     ||  4. 1945                  |\n";
		cout<<"|===========================================================|\n";
		int cau56;
    cauhoi56:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau56;
            if (cau56<0 || cau56>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau56<0 || cau56>4);

        if (cau56==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 1 và 2. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 23%.\nĐáp án 2 chiếm 3%.\nĐáp án 3 chiếm 32%.\nĐáp án 4 chiếm 42%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi56;
        }
        if(cau56==4) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nChiến tranh Thế giới thứ Hai kết thúc vào năm nào?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 4. 1945 \n";
            x=0;
        }
      }

      if (ch==57) {
        cout<<"\n\nNhà Trần đã đánh bại quân Mông-Nguyên bao nhiêu lần?\n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. 1                        ||  2. 2                    |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. 3                        ||  4. 4                    |\n";
		cout<<"|===========================================================|\n";
		int cau57;
    cauhoi57:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau57;
            if (cau57<0 || cau57>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau57<0 || cau57>4);

        if (cau57==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 3. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 1 và 2. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 23%.\nĐáp án 2 chiếm 3%.\nĐáp án 3 chiếm 42%.\nĐáp án 4 chiếm 32%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi57;
        }
        if(cau57==3) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nNhà Trần đã đánh bại quân Mông-Nguyên bao nhiêu lần?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 3. 3 \n";
            x=0;
        }
      }

      if (ch==58) {
        cout<<"\n\nChiến tranh Thế giới thứ Nhất bắt đầu từ năm nào?\n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. 1913                     ||  2. 1914                 |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. 1915                     ||  4. 1916                 |\n";
		cout<<"|===========================================================|\n";
		int cau58;
    cauhoi58:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau58;
            if (cau58<0 || cau58>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau58<0 || cau58>4);

        if (cau58==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 2. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 1 và 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 23%.\nĐáp án 2 chiếm 35%.\nĐáp án 3 chiếm 24%.\nĐáp án 4 chiếm 18%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi58;
        }
        if(cau58==2) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nChiến tranh Thế giới thứ Nhất bắt đầu từ năm nào?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 2. 1914 \n";
            x=0;
        }
      }

      if (ch==59) {
        cout<<"\n\nĐảng Cộng sản Việt Nam được thành lập vào năm nào?\n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. 1930                     ||  2. 1945                 |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. 1955                     ||  4. 1975                 |\n";
		cout<<"|===========================================================|\n";
		int cau59;
    cauhoi59:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau59;
            if (cau59<0 || cau59>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau59<0 || cau59>4);

        if (cau59==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 1. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 3 và 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 65%.\nĐáp án 2 chiếm 3%.\nĐáp án 3 chiếm 24%.\nĐáp án 4 chiếm 8%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi59;
        }
        if(cau59==1) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nĐảng Cộng sản Việt Nam được thành lập vào năm nào?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 1. 1930 \n";
            x=0;
        }
      }

      if (ch==60) {
        cout<<"\n\nPháp lần đầu xâm lược Việt Nam vào năm bao nhiêu ?\n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. 1880                     ||  2. 1858                 |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. 1890                     ||  4. 1910                 |\n";
		cout<<"|===========================================================|\n";
		int cau60;
    cauhoi60:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau60;
            if (cau60<0 || cau60>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau60<0 || cau60>4);

        if (cau60==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 2. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 1 và 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 6%.\nĐáp án 2 chiếm 37%.\nĐáp án 3 chiếm 24%.\nĐáp án 4 chiếm 33%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi60;
        }
        if(cau60==2) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nPháp lần đầu xâm lược Việt Nam vào năm bao nhiêu ?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 2. 1858 \n";
            x=0;
        }
      }

      if (ch==61) {
        cout<<"\n\nĐất nước Gabon nằm ở châu lục nào trên thế giới?\n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. Châu Mỹ                  ||  2. Châu Phi             |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. Châu Âu                  ||  4. Châu Á               |\n";
		cout<<"|===========================================================|\n";
		int cau61;
    cauhoi61:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau61;
            if (cau61<0 || cau61>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau61<0 || cau61>4);

        if (cau61==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 2. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 1 và 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 26%.\nĐáp án 2 chiếm 41%.\nĐáp án 3 chiếm 24%.\nĐáp án 4 chiếm 9%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi61;
        }
        if(cau61==2) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nĐất nước Gabon nằm ở châu lục nào trên thế giới?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 2. Châu Phi \n";
            x=0;
        }
      }

      if (ch==62) {
        cout<<"\n\nMúi giờ GTM ở Việt Nam là múi giờ nào?\n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. GTM +4                   ||  2. GTM +5               |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. GTM +6                   ||  4. GTM +7               |\n";
		cout<<"|===========================================================|\n";
		int cau62;
    cauhoi62:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau62;
            if (cau62<0 || cau62>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau62<0 || cau62>4);

        if (cau62==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 1 và 2. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 16%.\nĐáp án 2 chiếm 11%.\nĐáp án 3 chiếm 24%.\nĐáp án 4 chiếm 49%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi62;
        }
        if(cau62==4) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nMúi giờ GTM ở Việt Nam là múi giờ nào?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 4. GTM +7 \n";
            x=0;
        }
      }

      if (ch==63) {
        cout<<"\n\nTrái Đất có bao nhiêu đường xích đạo?\n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. 1                        ||  2. 2                    |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. 3                        ||  4. 4                    |\n";
		cout<<"|===========================================================|\n";
		int cau63;
    cauhoi63:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau63;
            if (cau63<0 || cau63>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau63<0 || cau63>4);

        if (cau63==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 1. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 3 và 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 61%.\nĐáp án 2 chiếm 11%.\nĐáp án 3 chiếm 24%.\nĐáp án 4 chiếm 4%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi63;
        }
        if(cau63==1) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nTrái Đất có bao nhiêu đường xích đạo?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 1. 1 \n";
            x=0;
        }
      }

      if (ch==64) {
        cout<<"\n\nKhu vực Đông Nam Á hiện nay có bao nhiêu quốc gia?\n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. 9                        ||  2. 10                   |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. 11                       ||  4. 12                   |\n";
		cout<<"|===========================================================|\n";
		int cau64;
    cauhoi64:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau64;
            if (cau64<0 || cau64>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau64<0 || cau64>4);

        if (cau64==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 3. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 1 và 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 16%.\nĐáp án 2 chiếm 11%.\nĐáp án 3 chiếm 42%.\nĐáp án 4 chiếm 31%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi64;
        }
        if(cau64==3) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nKhu vực Đông Nam Á hiện nay có bao nhiêu quốc gia?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 3. 11 \n";
            x=0;
        }
      }

     if (ch==65) {
        cout<<"\n\nTrong 4 quốc gia sau, quốc gia nào không có biên giới đất liền tiếp giáp với Việt Nam?\n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. Trung Quốc               ||  2. Thái Lan             |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. Lào                      ||  4. Campuchia            |\n";
		cout<<"|===========================================================|\n";
		int cau65;
    cauhoi65:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau65;
            if (cau65<0 || cau65>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau65<0 || cau65>4);

        if (cau65==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 2. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 1 và 3. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 16%.\nĐáp án 2 chiếm 51%.\nĐáp án 3 chiếm 12%.\nĐáp án 4 chiếm 24%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi65;
        }
        if(cau65==2) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nTrong 4 quốc gia sau, quốc gia nào không có biên giới đất liền tiếp giáp với Việt Nam?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 2. Thái Lan \n";
            x=0;
        }
      }

      if (ch==66) {
        cout<<"\n\nĐỉnh núi nào cao nhất thế giới nếu độ cao của đỉnh núi được so với mực nước biển?\n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. Kanchenjunga             ||  2. Lhotse               |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. Everest                  ||  4. Makalu               |\n";
		cout<<"|===========================================================|\n";
		int cau66;
    cauhoi66:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau66;
            if (cau66<0 || cau66>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau66<0 || cau66>4);

        if (cau66==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 3. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 1 và 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 16%.\nĐáp án 2 chiếm 19%.\nĐáp án 3 chiếm 33%.\nĐáp án 4 chiếm 32%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi66;
        }
        if(cau66==3) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nĐỉnh núi nào cao nhất thế giới nếu độ cao của đỉnh núi được so với mực nước biển?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 3. Everest \n";
            x=0;
        }
      }

     if (ch==67) {
        cout<<"\n\nTrong các loại đồ uống sau, đồ uống nào không có ga?\n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. Volka                    ||  2. Pepsi                |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. Cola                     ||  4. Fanta                |\n";
		cout<<"|===========================================================|\n";
		int cau67;
    cauhoi67:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau67;
            if (cau67<0 || cau67>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau67<0 || cau67>4);

        if (cau67==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 1. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 2 và 3. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 61%.\nĐáp án 2 chiếm 19%.\nĐáp án 3 chiếm 10%.\nĐáp án 4 chiếm 10%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi67;
        }
        if(cau67==1) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nTrong các loại đồ uống sau, đồ uống nào không có ga?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 1. Vodka \n";
            x=0;
        }
      }

     if (ch==68) {
        cout<<"\n\naNgười Việt thường sử dụng loại gà được chế biến như thế nào để thờ cúng?\n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. Gà quay                  ||  2. Gà rán               |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. Gà luộc                  ||  4. Gà nướng             |\n";
		cout<<"|===========================================================|\n";
		int cau68;
    cauhoi68:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau68;
            if (cau68<0 || cau68>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau68<0 || cau68>4);

        if (cau68==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 3. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 1 và 2. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 0%.\nĐáp án 2 chiếm 0%.\nĐáp án 3 chiếm 100%.\nĐáp án 4 chiếm 10%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi68;
        }
        if(cau68==3) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nNgười Việt thường sử dụng loại gà được chế biến như thế nào để thờ cúng?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 3. Gà luộc \n";
            x=0;
        }
      }

      if (ch==69) {
        cout<<"\n\nGiải vô địch World Cup lần đầu được tổ chức vào năm nào?\n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. 1930                     ||  2. 1945                 |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. 1950                     ||  4. 1940                 |\n";
		cout<<"|===========================================================|\n";
		int cau69;
    cauhoi69:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau69;
            if (cau69<0 || cau69>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau69<0 || cau69>4);

        if (cau69==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 1. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 3 và 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 30%.\nĐáp án 2 chiếm 20%.\nĐáp án 3 chiếm 25%.\nĐáp án 4 chiếm 25%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi69;
        }
        if(cau69==1) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nGiải vô địch World Cup lần đầu được tổ chức vào năm nào?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 1.1930 \n";
            x=0;
        }
      }

      if (ch==70) {
        cout<<"\n\nGiải vô địch World Cup 2022 sắp tới sẽ diễn ra ở đâu?\n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. Brazil                   ||  2. Pháp                 |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. Anh                      ||  4. Qatar                |\n";
		cout<<"|===========================================================|\n";
		int cau70;
    cauhoi70:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau70;
            if (cau70<0 || cau70>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau70<0 || cau70>4);

        if (cau70==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 3 và 2. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 30%.\nĐáp án 2 chiếm 20%.\nĐáp án 3 chiếm 18%.\nĐáp án 4 chiếm 32%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi70;
        }
        if(cau70==4) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nGiải vô địch World Cup 2022 sắp tới sẽ diễn ra ở đâu?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 4. Qatar \n";
            x=0;
        }
      }

      if (ch==71) {
        cout<<"\n\nĐội tuyển bóng đá nam nào của Việt Nam đã từng được tham dự Vòng chung kết World Cup?\n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. U17 Việt Nam             ||  2. U19 Việt Nam         |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. U20 Việt Nam             ||  4. U23 Việt Nam         |\n";
		cout<<"|===========================================================|\n";
		int cau71;
    cauhoi71:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau71;
            if (cau71<0 || cau71>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau71<0 || cau71>4);

        if (cau71==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 3. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 1 và 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 30%.\nĐáp án 2 chiếm 20%.\nĐáp án 3 chiếm 43%.\nĐáp án 4 chiếm 7%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi71;
        }
        if(cau71==3) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nĐội tuyển bóng đá nam nào của Việt Nam đã từng được tham dự Vòng chung kết World Cup?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 3. U20 Việt Nam \n";
            x=0;
        }
      }

      if (ch==72) {
        cout<<"\n\nTính đến ngày 27/3/2020, đội tuyển Quốc gia bóng đá nữ Việt Nam xếp thứ bao nhiêu trên bảng xếp hạng FIFA?\n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. 32                       ||  2. 33                   |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. 34                       ||  4. 35                   |\n";
		cout<<"|===========================================================|\n";
		int cau72;
    cauhoi72:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau72;
            if (cau72<0 || cau72>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau72<0 || cau72>4);

        if (cau72==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 1 và 2. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 30%.\nĐáp án 2 chiếm 20%.\nĐáp án 3 chiếm 13%.\nĐáp án 4 chiếm 37%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi72;
        }
        if(cau72==4) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nTính đến ngày 27/3/2020, đội tuyển Quốc gia bóng đá nữ Việt Nam xếp thứ bao nhiêu trên bảng xếp hạng FIFA?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 4. 35\n";
            x=0;
        }
      }

    if (ch==73) {
        cout<<"\n\nLoài động vật nào hiện nay lớn nhất thế giới?\n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. Voi                      ||  2. Cá voi xanh          |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. Cá nhà táng              ||  4. Tê giác              |\n";
		cout<<"|===========================================================|\n";
		int cau73;
    cauhoi73:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau73;
            if (cau73<0 || cau73>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau73<0 || cau73>4);

        if (cau73==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 2. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 1 và 3. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 3%.\nĐáp án 2 chiếm 76%.\nĐáp án 3 chiếm 16%.\nĐáp án 4 chiếm 5%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi73;
        }
        if(cau73==2) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nLoài động vật nào hiện nay lớn nhất thế giới?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 2. Cá voi xanh\n";
            x=0;
        }
      }

     if (ch==74) {
        cout<<"\n\nĐội bóng châu Á nào là đội bóng đầu tiên tham dự World Cup?\n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. Indonesia                ||  2. Nhật Bản             |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. Hàn Quốc                 ||  4. Iran                 |\n";
		cout<<"|===========================================================|\n";
		int cau74;
    cauhoi74:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau74;
            if (cau74<0 || cau74>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau74<0 || cau74>4);

        if (cau74==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 1. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 2 và 3. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 36%.\nĐáp án 2 chiếm 16%.\nĐáp án 3 chiếm 16%.\nĐáp án 4 chiếm 32%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi74;
        }
        if(cau74==1) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nĐội bóng châu Á nào là đội bóng đầu tiên tham dự World Cup?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 1. Indonesia \n";
            x=0;
        }
      }

if (ch==75) {
        cout<<"\n\nQuốc kỳ Hoa Kỳ có bao nhiêu ngôi sao?\n";
		cout<<"|===========================================================|\n";
		cout<<"|   1. 44                       ||  2. 46                   |\n";
		cout<<"|===========================================================|\n";
		cout<<"|   3. 50                       ||  4. 54                   |\n";
		cout<<"|===========================================================|\n";
		int cau75;
    cauhoi75:
        do {
            cout<<"Chọn từ một đến bốn để trả lời (0 sẽ sử dụng quyền trợ giúp) : ";
            cin>>cau75;
            if (cau75<0 || cau75>4) {
                cout<<"Nhập không hợp lệ xin vui lòng nhập lại. \n";
            }
        } while (cau75<0 || cau75>4);

        if (cau75==0) {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do {
                cin>>a;
            } while (a<0 || a>3);
        if (b[1]==0 && a==1 || b[2]==0 && a==2 || b[3]==0 && a==3) {
            cout<<"\n\n Quyền trợ giúp này đã được sử dụng. \n";
            cout<<"\n\n Câu trả lời của bạn là: ";
        }
        if (a==b[1]) {
            cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 3. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[1]=0;
        }
        if (a==b[2]) {
            cout<<"\n\nLoại bỏ đáp án 2 và 4. \n";
            cout<<"Câu trả lời của bạn là: ";
            b[2]=0;
        }
        if (a==b[3]) {
            cout<<"\n\nĐáp án 1 chiếm 13%.\nĐáp án 2 chiếm 16%.\nĐáp án 3 chiếm 61%.\nĐáp án 4 chiếm 10%.\n";
            cout<<"Câu trả lời của bạn là: ";
            b[3]=0;
        }
        goto cauhoi75;
        }
        if(cau75==3) {
            x=1;
        } else {
        system("cls");
        cout<<"\n\nQuốc kỳ Hoa Kỳ có bao nhiêu ngôi sao?\n";
        cout<<" Đáp án đúng là :\n";
            cout<<" 3. 50 \n";
            x=0;
        }
      }
}

/*
The different color codes are

0   BLACK
1   BLUE
2   GREEN
3   CYAN
4   RED
5   MAGENTA
6   BROWN
7   LIGHTGRAY
8   DARKGRAY
9   LIGHTBLUE
10  LIGHTGREEN
11  LIGHTCYAN
12  LIGHTRED
13  LIGHTMAGENTA
14  YELLOW
15  WHITE

A = Light Green
B = Light Aqua
C = Light Red
D = Light Purple
E = Light Yellow
F = Bright White
*/

void tien()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout<<"\n\n";
    cout<<"\t\t\t|===========================|\n";
    cout<<"\t\t\t|  Câu 15: 150000000  đồng  |\n";
    cout<<"\t\t\t|===========================|\n";
    cout<<"\t\t\t|  Câu 14: 85000000   đồng  |\n";
    cout<<"\t\t\t|===========================|\n";
    cout<<"\t\t\t|  Câu 13: 60000000   đồng  |\n";
    cout<<"\t\t\t|===========================|\n";
    cout<<"\t\t\t|  Câu 12: 40000000   đồng  |\n";
    cout<<"\t\t\t|===========================|\n";
    cout<<"\t\t\t|  Câu 11: 30000000   đồng  |\n";
    cout<<"\t\t\t|===========================|\n";
    cout<<"\t\t\t|  Câu 10: 22000000   đồng  |\n";
    cout<<"\t\t\t|===========================|\n";
    cout<<"\t\t\t|  Câu 9:  14000000   đồng  |\n";
    cout<<"\t\t\t|===========================|\n";
    cout<<"\t\t\t|  Câu 8:  10000000   đồng  |\n";
    cout<<"\t\t\t|===========================|\n";
    cout<<"\t\t\t|  Câu 7:  6000000    đồng  |\n";
    cout<<"\t\t\t|===========================|\n";
    cout<<"\t\t\t|  Câu 6:  3000000    đồng  |\n";
    cout<<"\t\t\t|===========================|\n";
    cout<<"\t\t\t|  Câu 5:  2000000    đồng  |\n";
    cout<<"\t\t\t|===========================|\n";
    cout<<"\t\t\t|  Câu 4:  1000000    đồng  |\n";
    cout<<"\t\t\t|===========================|\n";
    cout<<"\t\t\t|  Câu 3:  600000     đồng  |\n";
    cout<<"\t\t\t|===========================|\n";
    cout<<"\t\t\t|  Câu 2:  400000     đồng  |\n";
    cout<<"\t\t\t|===========================|\n";
    cout<<"\t\t\t|  Câu 1:  200000     đồng  |\n";
    cout<<"\t\t\t|===========================|\n";
}

int main( int argc, char* args[] ){
    if( !init() )
	{
		printf( "Failed to initialize!\n" );
	}
	music = Mix_LoadMUS( "music.wav" );
    if(Mix_PlayMusic(music, -1)==-1) {
     printf("Mix_PlayMusic: %s\n", Mix_GetError());}
    SetConsoleOutputCP(65001);
    srand(time(0));
    wHnd = GetStdHandle(STD_OUTPUT_HANDLE);
    rHnd = GetStdHandle(STD_INPUT_HANDLE);
    SetConsoleTitle("N-QUIZ");
    SMALL_RECT windowSize = {0, 0, 140, 40};
    SetConsoleWindowInfo(wHnd, 1, &windowSize);
    COORD bufferSize = {10, 10};
    SetConsoleScreenBufferSize(wHnd, bufferSize);
    char chon, ten[50];
    int x=0, ch, dem=0;

    batdau:
    system("color B9");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    do
{
        cout<<"\n\n\n|==============================================================================|\n";
        cout<<"|             Chào mừng bạn đến với trò chơi N-QUIZ - Chọn đáp án đúng         |\n";
        cout<<"|==============================================================================|\n\n\n";
        cout<<"|==============================================================================|\n";
        cout<<"|                                1. PLAY                                       |\n";
        cout<<"|==============================================================================|\n";
        cout<<"|==============================================================================|\n";
        cout<<"|                                2. RULES                                      |\n";
        cout<<"|==============================================================================|\n";
        cout<<"|==============================================================================|\n";
        cout<<"|                                3. EXIT                                       |\n";
        cout<<"|==============================================================================|\n";

        chon=getch();
        do
        {
        	if(chon<48||chon>51)
        	{
        		system("cls");
        		system("color b9");
    			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
        		cout<<"Nhập không hợp lệ xin vui lòng nhập lại!\n";
        		cout<<"1: Chơi     2:Luật chơi      3: Thoát\n";
        		goto batdau;
        	}
        }
        while(chon<48||chon>51);

        switch(chon)
        {

        	case 49:
        	{
        		system("cls");
        		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
        		cout<<"\n\n Nhập tên của bạn: ";
            	cin>>ten;
            	cout<<"\t\tSố tiền "<< ten <<" sẽ nhận được qua mỗi câu hỏi: \n\n";
        		tien();
        		Sleep(5000); //5000ms=5s;

                system("cls");
                cout<<"\n\n\t\t\tBẮT ĐẦU CHƠI";
            		cout<<"\n\nCâu 1: \n";
            		ch=rand()%5+1;
            		cauhoi(ch,x);
            		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
            	if(x==1)
                {
                	system("cls");
                	dem=dem+200000;
                	cout<<"\nSố tiền của " <<ten<<" sau khi vượt qua câu 1 là : " << dem <<" đồng \n";
                    cout<<"\n\nCâu 2: \n";
                    ch=rand()%5+6;
                    cauhoi(ch,x);
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
            	}
                if(x==1)
				{
					system("cls");
					dem=dem+200000;
					cout<<"\nSố tiền của " << ten <<" sau khi vượt qua câu 2 là: " << dem <<" đồng \n";
                   	cout<<"\n\nCâu 3: \n";
                   	ch=rand()%5+11;
                   	cauhoi(ch,x);
                   	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
				}
				if(x==1)
				{
					system("cls");
					dem=dem+200000;
					cout<<"\nSố tiền của " << ten <<" sau khi vượt qua câu 3 là: " << dem <<" đồng \n";
                    cout<<"\n\nCâu 4: \n";
                	ch=rand()%5+16;
                	cauhoi(ch,x);
                	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
				}
				if(x==1)
				{
					system("cls");
					dem=dem+400000;
					cout<<"\nSố tiền của " << ten <<" sau khi vượt qua câu 4 là: " << dem <<" đồng \n";
                	cout<<"\n\nCâu 5: \n";
                    ch=rand()%5+21;
                    cauhoi(ch,x);
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
				}
				if(x==1)
				{
					system("cls");
					dem=dem+1000000;
					cout<<"\nSố tiền của " << ten <<" sau khi vượt qua câu 5 là: " << dem <<" đồng \n";
                    cout<<"\n\nCâu 6: \n";
                    ch=rand()%5+26;
                    cauhoi(ch,x);
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
				}
				if(x==1)
				{
					system("cls");
					dem=dem+1000000;
					cout<<"\nSố tiền của " << ten <<" sau khi vượt qua câu 6 là: " << dem <<" đồng \n";
                    cout<<"\n\nCâu 7: \n";
                    ch=rand()%5+31;
                    cauhoi(ch,x);
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
				}
				if(x==1)
				{
					system("cls");
					dem=dem+3000000;
					cout<<"\nSố tiền của " << ten <<" sau khi vượt qua câu 7 là: " << dem <<" đồng \n";
                    cout<<"\n\nCâu 8: \n";
                    ch=rand()%5+36;
                    cauhoi(ch,x);
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				}
                if(x==1)
				{
					system("cls");
					dem=dem+4000000;
					cout<<"\nSố tiền của " << ten <<" sau khi vượt qua câu 8 là: " << dem <<" đồng \n";
                    cout<<"\n\nCâu 9: \n";
                    ch=rand()%5+41;
                    cauhoi(ch,x);
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
				}
				if(x==1)
				{
					system("cls");
					dem=dem+4000000;
					cout<<"\nSố tiền của " << ten <<" sau khi vượt qua câu 9 là: " << dem <<" đồng \n";
                    cout<<"\n\nCâu 10: \n";
                    ch=rand()%5+46;
                    cauhoi(ch,x);
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
				}
				if(x==1)
				{
					system("cls");
					dem=dem+8000000;
					cout<<"\nSố tiền của " << ten <<" sau khi vượt qua câu 10 là: " << dem <<" đồng \n";
                	cout<<"\n\nCâu 11: \n";
                	ch=rand()%5+51;
                    cauhoi(ch,x);
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
				}
				if(x==1)
				{
					system("cls");
					dem=dem+8000000;
					cout<<"\nSố tiền của " << ten <<" sau khi vượt qua câu 11 là: " << dem <<" đồng \n";
                    cout<<"\n\nCâu 12: \n";
                    ch=rand()%5+56;
                    cauhoi(ch,x);
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
				}
				if(x==1)
				{
					system("cls");
					dem=dem+10000000;
					cout<<"\nSố tiền của " << ten <<" sau khi vượt qua câu 12 là: " << dem <<" đồng \n";
                    cout<<"\n\nCâu 13: \n";
                    ch=rand()%5+61;
                    cauhoi(ch,x);
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
				}
				if(x==1)
				{
					system("cls");
					dem=dem+20000000;
					cout<<"\nSố tiền của " << ten <<" sau khi vượt qua câu 13 là: " << dem <<" đồng \n";
                    cout<<"\n\nCâu 14: \n";
                    ch=rand()%5+66;
                    cauhoi(ch,x);
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
				}
				if(x==1)
				{
					system("cls");
					dem=dem+25000000;
					cout<<"\nSố tiền của " << ten <<" sau khi vượt qua câu 14 là: " << dem <<" đồng\n";
                    cout<<"\n\nCâu 15: \n";
                    ch=rand()%5+71;
                    cauhoi(ch, x);
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
				}
//------------------------------------------------------------------------------------------------------------

				if(x==1)
				{
					dem=dem+65000000;
					system("cls");
                    cout<<"\t         CHÚC MỪNG ";
                    cout<<ten;
                    cout<<" ĐÃ CHIẾN THẮNG!!! \n\n";
                    cout<<"\tSỐ PHẦN THƯỞNG BẠN NHẬN ĐƯỢC LÀ : ";
                    cout<<dem<<" ĐỒNG \n";

                    cout<<"\t|===============================|\n";
                    cout<<"\t|  Nhấn phím 1 để chơi lại      |\n";
                    cout<<"\t|===============================|\n";
                    cout<<"\t|  Nhấn phím bất kì để thoát    |\n";
                    cout<<"\t|===============================|\n";
                    char k=getch();
                    if(k==49)
                    {
						system("cls");
						b[1]=1;
                        b[2]=2;
                        b[3]=3;
                        goto batdau;
                    }
					else
						exit(0);
				}

            	if(x==0)
            	{
            		system("color 4e");
            		cout<<"\n\n\t\t \n\n";
            		char chuoi[50]="                             GAME OVER ";
            		int l=strlen(chuoi);
            		for(int i=0; i<l; i++)
            		{
            			cout<<chuoi[i];
                        Sleep(50);
					}
					cout<<"\n\n\t\tSỐ TIỀN THƯỞNG ";
                    cout<<ten;
                    cout<<" NHẬN ĐƯỢC LÀ: ";
                    cout<<dem<<" ĐỒNG \n";
                    dem=0;
                    cout<<"\t\t|===============================|\n";
                	cout<<"\t\t|  Nhấn phím 1 để chơi lại      |\n";
                    cout<<"\t\t|===============================|\n";
                    cout<<"\t\t|  Nhấn phím bất kì để thoát    |\n";
                    cout<<"\t\t|===============================|\n";
                    char h=getch();
                    if(h==49)
                    {
						system("cls");
						b[1]=1;
                        b[2]=2;
                        b[3]=3;
                        goto batdau;
                    }
					else
					{
						exit(0);
					}
            	}
        	}
        	case 50:
        	{
        		system("cls");
        		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
            	cout<<"\t\t|============================================|\n";
            	cout<<"\t\t|\t\t    RULES                    |\n";
            	cout<<"\t\t|============================================|\n\n";
            	cout<<"\n          Có tất cả 15 câu hỏi. Vượt qua được 15 câu hỏi của chương trình ";
            	cout<<"\n          bạn sẽ nhận được 150 triệu đồng \n";
            	cout<<"\n          Các quyền trợ giúp: \n";
            	cout<<"\n\n\t   |=====================================================|\n";
            	cout<<"\t   |1. GỌI ĐIỆN THOẠI CHO NGƯỜI THÂN: Bạn có 30 giây gọi |\n";
            	cout<<"\t   | điên thoại cho 1 người thân để trợ giúp             |\n";
            	cout<<"\t   |=====================================================|\n";
            	cout<<"\n\t   |=====================================================|\n";
            	cout<<"\t   |2. 50/50: máy tính sẽ loại bỏ 2 phương án sai        |\n";
            	cout<<"\t   |=====================================================|\n";
            	cout<<"\n\t   |=====================================================|\n";
            	cout<<"\t   |3. HỎI Ý KIẾN KHÁN GIẢ: Khán giả trong trường quay   |\n";
            	cout<<"\t   |  sẽ đưa ra đáp án mà họ thấy chính xác              |\n";
            	cout<<"\t   |=====================================================|\n\n\n";
            	Sleep(2000);
            	cout<<"\t\t     |=======================================|\n";
            	cout<<"\t\t     |  Nhấn phím 1 để quay lại chương trình |\n";
            	cout<<"\t\t     |=======================================|\n";
            	cout<<"\t\t     |=======================================|\n";
            	cout<<"\t\t     |  Nhấn phím bất kì để thoát            |\n";
            	cout<<"\t\t     |=======================================|\n";

				char c=getch();
            	if(c==49)
                {
					system("cls");
					b[1]=1;
                    b[2]=2;
                    b[3]=3;
                    goto batdau;
                }
            	else
            		exit(0);
        	}
			case 51:
				exit(0);
		}
    }
    while(chon<48||chon>51);
    system("pause");
    Mix_FreeMusic( music );
    SDL_Quit();
}
