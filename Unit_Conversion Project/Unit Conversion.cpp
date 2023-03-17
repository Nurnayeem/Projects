#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<cmath>
#define MAX 100
main()
{
    int gd=0,gm;
    initgraph(&gd,&gm,"");

//Loading Page..

    settextstyle(4, HORIZ_DIR, 4);

    outtextxy(80,120,"Welcome To Our Project.");
    rectangle(200,260,480,290);
    setcolor(WHITE);
    outtextxy(320,320,"Loading..");
    setcolor(GREEN);
    for(int i=0; i<273; i++)
    {
        line(205+i,265,205+i,285);

        delay(30);
    }
    cleardevice();


main://Home Page..
    initgraph(&gd,&gm,"");
    char ch;
    int x=32,y=140;

    setfillstyle(1,LIGHTBLUE);
    setcolor(LIGHTBLUE);
    rectangle(0,0,640,480);
    floodfill(150,80,LIGHTBLUE);
    setcolor(BLACK);
    setbkcolor(LIGHTBLUE);

    setfillstyle(1,GREEN);
    bar(0,0,15,480);
    bar(0,465,640,480);
    bar(640,480,620,0);
    bar(215,0,230,480);
    setfillstyle(1,GREEN);
    bar(0,50,630,75);
    setfillstyle(1,BLUE);
    bar(0,0,640,50);


    setbkcolor(BLUE);
    setcolor(WHITE);
    outtextxy(235,20, "Unit converter" );
    setbkcolor(GREEN);
    setcolor(BLACK);
    outtextxy(75,55, "HOME" );
    setbkcolor(LIGHTBLUE);
    rectangle(225,10,340,45);
    outtextxy(20,90, "Please select an option..." );
    delay(100);
    outtextxy(44,140," Langth");
    delay(100);
    outtextxy(44,170," Mass");
    delay(100);
    outtextxy(44,200," Area");
    delay(100);
    outtextxy(44,230," Temparatur");
    delay(100);
    outtextxy(44,260," Volume");
    delay(100);
    outtextxy(44,290," Number System");
    delay(100);
    outtextxy(44,320," Exit");
    delay(100);
    outtextxy(x,y,">>");

    while(1)
    {
        ch=getch();
        if(ch==13)
        {
            //Langth page..
len:
            int m=260,n=150,t;
            char ch1,ch11;
            setbkcolor(GREEN);
            outtextxy(370,55, "Length" );
            setbkcolor(LIGHTBLUE);
            delay(100);
            outtextxy(260,90, "Select conversation type.." );
            delay(100);
            outtextxy(284,150," 1. inch-centimetre");
            delay(100);
            outtextxy(284,180," 2. centimetre-inch");
            delay(100);
            outtextxy(284,210," 3. foot-meter");
            delay(100);
            outtextxy(284,240," 4. metre-foot");
            delay(100);
            outtextxy(284,270," 5. mile-kilometre");
            delay(100);
            outtextxy(284,300," 6. kilometre-mile");
            delay(100);
            outtextxy(m,n,">>");
            while(1)
            {
                ch1=getch();
                if(ch1==13)
                {
                    if(n==150)
                    {
                        char c;
                        setfillstyle(1,LIGHTBLUE);
                        bar(258,85,620,460);
                        setfillstyle(1,GREEN);
                        bar(258,50,500,75);
                        setbkcolor(GREEN);
                        outtextxy(370,55,"Inchis-Centimeter");
                        setbkcolor(LIGHTBLUE);
                        outtextxy(275,140,"Entered Inchis: ");


                        char ch[20];
                        int gd=DETECT,gm;
                        printf("Enter: ");
                        scanf("%[^\n]%*c",ch);//we use this for inputing from user as a string
                        outtextxy(390,140,ch);
                        float r;
                        float val;
                        char str[20];

                        strcpy(str, ch);//copy inputed string to new string veriable
                        val = atof(str);//convert string to float.
                        r=val*2.54;

                        char str2[MAX];

                        //gcvt(r, 6, buf);
                        sprintf(str2, "%.2f", r);//again convert float to string
                        outtextxy(275,170,"Result: ");

                        outtextxy(380,170,str2);//print value to graphics mode
                        outtextxy(440,170,"Centimeter");


                        c=getch();
                        if(c=='b')
                        {
                            setfillstyle(1,LIGHTBLUE);
                            bar(258,85,600,330);
                            setfillstyle(1,GREEN);
                            bar(258,50,600,75);
                            goto len;
                        }
                    }
                    if(n==180)
                    {
                        char c;
                        setfillstyle(1,LIGHTBLUE);
                        bar(258,85,620,460);
                        setfillstyle(1,GREEN);
                        bar(258,50,500,75);
                        setbkcolor(GREEN);
                        outtextxy(370,55,"Centimeter-Inchis");
                        setbkcolor(LIGHTBLUE);
                        outtextxy(275,140,"Enter Centimeter: ");

                        char ch[20];
                        int gd=DETECT,gm;
                        printf("Enter: ");
                        scanf("%[^\n]%*c",ch);//input string from console into graphics
                        outtextxy(390,140,ch);
                        float r;
                        float val;
                        char str[20];

                        strcpy(str, ch);//copy inputed string to new string veriable
                        val = atof(str);//converting string to float
                        r=val*0.393;

                        char str2[MAX];

                        sprintf(str2, "%.2f", r);//again convert float to string using library functong

                        outtextxy(275,170,"Result: ");

                        outtextxy(380,170,str2);//print value to graphics mode
                        outtextxy(440,170,"Inches");

                        c=getch();
                        if(c=='b')
                        {
                            setfillstyle(1,LIGHTBLUE);
                            bar(258,85,500,330);
                            setfillstyle(1,GREEN);
                            bar(258,50,600,75);
                            goto len;
                        }

                    }
                    if(n==210)
                    {
                        char c;
                        setfillstyle(1,LIGHTBLUE);
                        bar(258,85,620,400);
                        setfillstyle(1,GREEN);
                        bar(258,50,500,75);
                        setbkcolor(GREEN);
                        outtextxy(370,55,"foot-meter");
                        setbkcolor(LIGHTBLUE);
                        outtextxy(275,140,"Entered Foot: ");

                        char ch[20];
                        int gd=DETECT,gm;
                        printf("Enter: ");
                        scanf("%[^\n]%*c",ch);//input string from console into graphics
                        outtextxy(390,140,ch);
                        float r;
                        float val;
                        char str[20];

                        strcpy(str, ch);//copy inputed string to new string veriable
                        val = atof(str);//converting string to float
                        r=val*0.348;

                        char str2[MAX];

                        sprintf(str2, "%.2f", r);//again convert float to string using library functong

                        outtextxy(275,170,"Result: ");

                        outtextxy(380,170,str2);//print value to graphics mode
                        outtextxy(440,170,"Meter");


                        c=getch();
                        if(c=='b')
                        {
                            setfillstyle(1,LIGHTBLUE);
                            bar(258,85,500,330);
                            setfillstyle(1,GREEN);
                            bar(258,50,600,75);
                            goto len;
                        }

                    }
                    if(n==240)
                    {
                        char c;
                        setfillstyle(1,LIGHTBLUE);
                        bar(258,85,620,460);
                        setfillstyle(1,GREEN);
                        bar(258,50,500,75);
                        setbkcolor(GREEN);
                        outtextxy(370,55,"meter-foot");
                        setbkcolor(LIGHTBLUE);
                        outtextxy(275,140,"Enter Meter: ");

                        char ch[20];
                        int gd=DETECT,gm;
                        printf("Enter: ");
                        scanf("%[^\n]%*c",ch);//input string from console into graphics
                        outtextxy(390,140,ch);
                        float r;
                        float val;
                        char str[20];

                        strcpy(str, ch);//copy inputed string to new string veriable
                        val = atof(str);//converting string to float
                        r=val*3.28;

                        char str2[MAX];

                        sprintf(str2, "%.2f", r);//again convert float to string using library functong

                        outtextxy(275,170,"Result: ");

                        outtextxy(380,170,str2);//print value to graphics mode
                        outtextxy(440,170,"Foot");


                        c=getch();
                        if(c=='b')
                        {
                            setfillstyle(1,LIGHTBLUE);
                            bar(258,85,500,330);
                            setfillstyle(1,GREEN);
                            bar(258,50,600,75);
                            goto len;
                        }

                    }
                    if(n==270)
                    {
                        char c;
                        setfillstyle(1,LIGHTBLUE);
                        bar(258,85,620,460);
                        setfillstyle(1,GREEN);
                        bar(258,50,500,75);
                        setbkcolor(GREEN);
                        outtextxy(370,55,"mile-kilometre");
                        setbkcolor(LIGHTBLUE);
                        outtextxy(275,140,"Enter Mile: ");

                        char ch[20];
                        int gd=DETECT,gm;
                        printf("Enter: ");
                        scanf("%[^\n]%*c",ch);//input string from console into graphics
                        outtextxy(390,140,ch);
                        float r;
                        float val;
                        char str[20];

                        strcpy(str, ch);//copy inputed string to new string veriable
                        val = atof(str);//converting string to float
                        r=val*1.6093;

                        char str2[MAX];

                        sprintf(str2, "%.2f", r);//again convert float to string using library functong

                        outtextxy(275,170,"Result: ");

                        outtextxy(380,170,str2);//print value to graphics mode
                        outtextxy(440,170,"Kilometer");


                        c=getch();
                        if(c=='b')
                        {
                            setfillstyle(1,LIGHTBLUE);
                            bar(258,85,500,330);
                            setfillstyle(1,GREEN);
                            bar(258,50,600,75);
                            goto len;//Pressing b to go back the previous page
                        }

                    }
                    if(n==300)
                    {
                        char c;
                        setfillstyle(1,LIGHTBLUE);
                        bar(258,85,620,460);
                        setfillstyle(1,GREEN);
                        bar(258,50,500,75);
                        setbkcolor(GREEN);
                        outtextxy(370,55,"kilometre-mile");
                        setbkcolor(LIGHTBLUE);
                        outtextxy(275,140,"Enter Kilometer: ");

                        char ch[20];
                        int gd=DETECT,gm;
                        printf("Enter: ");
                        scanf("%[^\n]%*c",ch);//input string from console into graphics
                        outtextxy(390,140,ch);
                        float r;
                        float val;
                        char str[20];

                        strcpy(str, ch);//copy inputed string to new string veriable
                        val = atof(str);//converting string to float
                        r=val*0.625;

                        char str2[MAX];

                        sprintf(str2, "%.2f", r);//again convert float to string using library functong

                        outtextxy(275,170,"Result: ");

                        outtextxy(380,170,str2);//print value to graphics mode
                        outtextxy(440,170,"Mile");


                        c=getch();
                        if(c=='b')
                        {
                            setfillstyle(1,LIGHTBLUE);
                            bar(258,85,500,330);
                            setfillstyle(1,GREEN);
                            bar(258,50,600,75);
                            goto len;//Pressing b to go back the previous page
                        }

                    }




                }

                if(ch1=='b')
                {
                    goto main;
                }
                if(ch1=='w')
                {
                    setcolor(LIGHTBLUE);
                    outtextxy(m,n,">>");
                    n=n-30;
                    setcolor(BLACK);
                    if(n>=150 && n<=300)
                    {
                        outtextxy(m,n,">>");
                    }
                    else
                    {
                        outtextxy(m,n=n+30,">>");
                    }


                }

                if(ch1=='s')
                {
                    setcolor(LIGHTBLUE);
                    outtextxy(m,n,">>");
                    n=n+30;
                    setcolor(BLACK);
                    if(n>=150 && n<=300)
                    {
                        outtextxy(m,n,">>");
                    }
                    else
                    {
                        outtextxy(m,n=n-30,">>");
                    }


                }




            }
        }
        if(ch=='x')
        {
            break;
        }
        if(ch=='w')
        {
            setcolor(LIGHTBLUE);
            outtextxy(x,y,">>");
            y=y-30;
            setcolor(BLACK);
            if(y>=140 && y<=320)
            {
                outtextxy(x,y,">>");
            }
            else
            {
                outtextxy(x,y=y+30,">>");
            }


        }
        if(ch=='s')
        {
            setcolor(LIGHTBLUE);
            outtextxy(x,y,">>");
            y=y+30;
            setcolor(BLACK);
            if(y>=140 && y<=320)
            {
                outtextxy(x,y,">>");
            }

            else
            {
                outtextxy(x,y=y-30,">>");
            }
        }


        if(y==170)
        {
            char chh,ch1;
            chh=getch();
            if(chh==13)
            {
mass:
                int m=260,n=150;
                setbkcolor(GREEN);
                outtextxy(370,55, "Mass" );
                setbkcolor(LIGHTBLUE);
                outtextxy(260,90, "Select conversation type.." );
                delay(100);
                outtextxy(284,150," 1. pound-kilogram");
                delay(100);
                outtextxy(284,180," 2. kilogram-pound");
                delay(100);
                outtextxy(284,210," 3. ounce-gram");
                delay(100);
                outtextxy(284,240," 4. gram-ounce");
                delay(100);
                outtextxy(m,n,">>");
                while(1)
                {
                    ch1=getch();
                    if(n==150)
                    {
                        if(ch1==13)
                        {
                            char c;
                            setfillstyle(1,LIGHTBLUE);
                            bar(258,85,620,460);
                            setfillstyle(1,GREEN);
                            bar(258,50,500,75);
                            setbkcolor(GREEN);
                            outtextxy(370,55,"pound-kilogram");
                            setbkcolor(LIGHTBLUE);
                            outtextxy(275,140,"Entered Pound: ");

                            char ch[20];
                            int gd=DETECT,gm;
                            printf("Enter: ");
                            scanf("%[^\n]%*c",ch);
                            outtextxy(390,140,ch);
                            float r;
                            float val;
                            char str[20];

                            strcpy(str, ch);
                            val = atof(str);
                            r=val*0.4536;

                            char str2[MAX];

                            sprintf(str2, "%f", r);

                            outtextxy(275,170,"Result: ");

                            outtextxy(380,170,str2);
                            outtextxy(440,170,"Kilogram");


                            c=getch();
                            if(c=='b')
                            {
                                setfillstyle(1,LIGHTBLUE);
                                bar(258,85,600,330);
                                setfillstyle(1,GREEN);
                                bar(258,50,600,75);
                                goto mass;
                            }


                        }




                    }


                    if(n==180)
                    {
                        if(ch1==13)
                        {
                            char c;
                            setfillstyle(1,LIGHTBLUE);
                            bar(258,85,620,460);
                            setfillstyle(1,GREEN);
                            bar(258,50,500,75);
                            setbkcolor(GREEN);
                            outtextxy(370,55,"kilogram-pound");
                            setbkcolor(LIGHTBLUE);
                            outtextxy(275,140,"Entered Kilogram: ");

                            char ch[20];
                            int gd=DETECT,gm;
                            printf("Enter: ");
                            scanf("%[^\n]%*c",ch);
                            outtextxy(390,140,ch);
                            float r;
                            float val;
                            char str[20];

                            strcpy(str, ch);
                            val = atof(str);
                            r=val*2.2075;

                            char str2[MAX];

                            sprintf(str2, "%f", r);

                            outtextxy(275,170,"Result: ");

                            outtextxy(380,170,str2);
                            outtextxy(440,170,"Pound");


                            c=getch();
                            if(c=='b')
                            {
                                setfillstyle(1,LIGHTBLUE);
                                bar(258,85,600,330);
                                setfillstyle(1,GREEN);
                                bar(258,50,600,75);
                                goto mass;
                            }


                        }




                    }


                    if(n==210)
                    {
                        if(ch1==13)
                        {
                            char c;
                            setfillstyle(1,LIGHTBLUE);
                            bar(258,85,620,460);
                            setfillstyle(1,GREEN);
                            bar(258,50,500,75);
                            setbkcolor(GREEN);
                            outtextxy(370,55,"ounce-gram");
                            setbkcolor(LIGHTBLUE);
                            outtextxy(275,140,"Entered Ounce: ");

                            char ch[20];
                            int gd=DETECT,gm;
                            printf("Enter: ");
                            scanf("%[^\n]%*c",ch);
                            outtextxy(390,140,ch);
                            float r;
                            float val;
                            char str[20];

                            strcpy(str, ch);
                            val = atof(str);
                            r=val*28.3495;

                            char str2[MAX];

                            sprintf(str2, "%f", r);

                            outtextxy(275,170,"Result: ");

                            outtextxy(380,170,str2);
                            outtextxy(440,170,"Gram");


                            c=getch();
                            if(c=='b')
                            {
                                setfillstyle(1,LIGHTBLUE);
                                bar(258,85,600,330);
                                setfillstyle(1,GREEN);
                                bar(258,50,600,75);
                                goto mass;
                            }


                        }




                    }

                    if(n==240)
                    {
                        if(ch1==13)
                        {
                            char c;
                            setfillstyle(1,LIGHTBLUE);
                            bar(258,85,620,460);
                            setfillstyle(1,GREEN);
                            bar(258,50,500,75);
                            setbkcolor(GREEN);
                            outtextxy(370,55,"gram-ounce");
                            setbkcolor(LIGHTBLUE);
                            outtextxy(275,140,"Entered Gram: ");

                            char ch[20];
                            int gd=DETECT,gm;
                            printf("Enter: ");
                            scanf("%[^\n]%*c",ch);
                            outtextxy(390,140,ch);
                            float r;
                            float val;
                            char str[20];

                            strcpy(str, ch);
                            val = atof(str);
                            r=val*4046.8;

                            char str2[MAX];

                            sprintf(str2, "%f", r);

                            outtextxy(275,170,"Result: ");

                            outtextxy(380,170,str2);
                            outtextxy(440,170,"Ounce");


                            c=getch();
                            if(c=='b')
                            {
                                setfillstyle(1,LIGHTBLUE);
                                bar(258,85,600,330);
                                setfillstyle(1,GREEN);
                                bar(258,50,600,75);
                                goto mass;
                            }


                        }




                    }

                    /////
                    if(ch1=='b')
                    {
                        goto main;
                    }
                    if(ch1=='w')
                    {
                        setcolor(LIGHTBLUE);
                        outtextxy(m,n,">>");
                        n=n-30;
                        setcolor(BLACK);
                        if(n>=150 && n<=240)
                        {
                            outtextxy(m,n,">>");
                        }
                        else
                        {
                            outtextxy(m,n=n+30,">>");
                        }


                    }
                    if(ch1=='s')
                    {
                        setcolor(LIGHTBLUE);
                        outtextxy(m,n,">>");
                        n=n+30;
                        setcolor(BLACK);
                        if(n>=150 && n<=240)
                        {
                            outtextxy(m,n,">>");
                        }
                        else
                        {
                            outtextxy(m,n=n-30,">>");
                        }


                    }
                }
            }
        }

        if(y==200)
        {
            char chh,ch1;
            chh=getch();
            if(chh==13)
            {
Area:
                int m=260,n=150;
                setbkcolor(GREEN);
                outtextxy(370,55, "Area" );
                setbkcolor(LIGHTBLUE);
                outtextxy(260,90, "Select conversation type.." );
                delay(100);
                outtextxy(284,150," 1. Meter square-Acres");
                delay(100);
                outtextxy(284,180," 2. Acres-Meter square");
                delay(100);
                outtextxy(284,210," 3. Meter squre-Centimeter squre");
                delay(100);
                outtextxy(284,240," 4. Centimeter squre-Meter squre");
                delay(100);
                outtextxy(284,270," 5. Meter squre-Kilometer squre");
                delay(100);
                outtextxy(284,300," 6. Kilometer squre-Meter squre");
                delay(100);
                outtextxy(m,n,">>");

                while(1)
                {
                    ch1=getch();
                    if(n==150)
                    {

                        if(ch1==13)
                        {
                            char c;
                            setfillstyle(1,LIGHTBLUE);
                            bar(258,85,620,460);
                            setfillstyle(1,GREEN);
                            bar(258,50,500,75);
                            setbkcolor(GREEN);
                            outtextxy(370,55,"Meter square-Acres");
                            setbkcolor(LIGHTBLUE);
                            outtextxy(275,140,"Entered Meter squre: ");

                            char ch[20];
                            int gd=DETECT,gm;
                            printf("Enter: ");
                            scanf("%[^\n]%*c",ch);
                            outtextxy(445,140,ch);
                            double r;
                            double val;
                            char str[20];

                            strcpy(str, ch);
                            val = atof(str);
                            r=val*0.000247;

                            char str2[MAX];

                            sprintf(str2, "%f", r);

                            outtextxy(275,170,"Result: ");

                            outtextxy(380,170,str2);
                            outtextxy(470,170,"Acres");


                            c=getch();
                            if(c=='b')
                            {
                                setfillstyle(1,LIGHTBLUE);
                                bar(258,85,600,330);
                                setfillstyle(1,GREEN);
                                bar(258,50,600,75);
                                goto Area;
                            }


                        }




                    }


                    if(n==180)
                    {
                        if(ch1==13)
                        {
                            char c;
                            setfillstyle(1,LIGHTBLUE);
                            bar(258,85,620,460);
                            setfillstyle(1,GREEN);
                            bar(258,50,500,75);
                            setbkcolor(GREEN);
                            outtextxy(370,55,"Acres-Meter square");
                            setbkcolor(LIGHTBLUE);
                            outtextxy(275,140,"Entered Acres: ");

                            char ch[20];
                            int gd=DETECT,gm;
                            printf("Enter: ");
                            scanf("%[^\n]%*c",ch);
                            outtextxy(445,140,ch);
                            float r;
                            float val;
                            char str[20];

                            strcpy(str, ch);
                            val = atof(str);
                            r=val*4046.856;

                            char str2[MAX];

                            sprintf(str2, "%f", r);

                            outtextxy(275,170,"Result: ");

                            outtextxy(380,170,str2);
                            outtextxy(440,170,"Meter squre");


                            c=getch();
                            if(c=='b')
                            {
                                setfillstyle(1,LIGHTBLUE);
                                bar(258,85,600,330);
                                setfillstyle(1,GREEN);
                                bar(258,50,600,75);
                                goto Area;
                            }


                        }




                    }


                    if(n==210)
                    {
                        if(ch1==13)
                        {
                            char c;
                            setfillstyle(1,LIGHTBLUE);
                            bar(258,85,620,460);
                            setfillstyle(1,GREEN);
                            bar(258,50,500,75);
                            setbkcolor(GREEN);
                            outtextxy(370,55,"Meter squre-Centimeter squre");
                            setbkcolor(LIGHTBLUE);
                            outtextxy(275,140,"Entered Meter Squre: ");

                            char ch[20];
                            int gd=DETECT,gm;
                            printf("Enter: ");
                            scanf("%[^\n]%*c",ch);
                            outtextxy(445,140,ch);
                            float r;
                            float val;
                            char str[20];

                            strcpy(str, ch);
                            val = atof(str);
                            r=val*10000;

                            char str2[MAX];

                            sprintf(str2, "%f", r);

                            outtextxy(275,170,"Result: ");

                            outtextxy(380,170,str2);
                            outtextxy(440,170,"Centimeter squre");


                            c=getch();
                            if(c=='b')
                            {
                                setfillstyle(1,LIGHTBLUE);
                                bar(258,85,600,330);
                                setfillstyle(1,GREEN);
                                bar(258,50,600,75);
                                goto Area;
                            }


                        }




                    }

                    if(n==240)
                    {
                        if(ch1==13)
                        {
                            char c;
                            setfillstyle(1,LIGHTBLUE);
                            bar(258,85,620,460);
                            setfillstyle(1,GREEN);
                            bar(258,50,500,75);
                            setbkcolor(GREEN);
                            outtextxy(370,55,"Centimeter squre-Meter squre");
                            setbkcolor(LIGHTBLUE);
                            outtextxy(275,140,"Entered Centimeter squre: ");

                            char ch[20];
                            int gd=DETECT,gm;
                            printf("Enter: ");
                            scanf("%[^\n]%*c",ch);
                            outtextxy(445,140,ch);
                            float r;
                            float val;
                            char str[20];

                            strcpy(str, ch);
                            val = atof(str);
                            r=val*0.0001;

                            char str2[MAX];

                            sprintf(str2, "%f", r);

                            outtextxy(275,170,"Result: ");

                            outtextxy(380,170,str2);
                            outtextxy(440,170,"Meter squre");


                            c=getch();
                            if(c=='b')
                            {
                                setfillstyle(1,LIGHTBLUE);
                                bar(258,85,600,330);
                                setfillstyle(1,GREEN);
                                bar(258,50,600,75);
                                goto Area;
                            }


                        }




                    }
                    if(n==270)
                    {
                        if(ch1==13)
                        {
                            char c;
                            setfillstyle(1,LIGHTBLUE);
                            bar(258,85,620,460);
                            setfillstyle(1,GREEN);
                            bar(258,50,500,75);
                            setbkcolor(GREEN);
                            outtextxy(370,55,"Meter squre-Kilometer squre");
                            setbkcolor(LIGHTBLUE);
                            outtextxy(275,140,"Entered Meter squre: ");

                            char ch[20];
                            int gd=DETECT,gm;
                            printf("Enter: ");
                            scanf("%[^\n]%*c",ch);
                            outtextxy(440,140,ch);
                            double r;
                            double val;
                            char str[20];

                            strcpy(str, ch);
                            val = atof(str);
                            r=val*0.000001;

                            char str2[MAX];

                            gcvt(r, 6, str2);

                            outtextxy(275,170,"Result: ");

                            outtextxy(380,170,str2);
                            outtextxy(440,170,"Kilometer squre");


                            c=getch();
                            if(c=='b')
                            {
                                setfillstyle(1,LIGHTBLUE);
                                bar(258,85,600,330);
                                setfillstyle(1,GREEN);
                                bar(258,50,600,75);
                                goto Area;
                            }


                        }




                    }

                    if(n==300)
                    {
                        if(ch1==13)
                        {
                            char c;
                            setfillstyle(1,LIGHTBLUE);
                            bar(258,85,620,460);
                            setfillstyle(1,GREEN);
                            bar(258,50,500,75);
                            setbkcolor(GREEN);
                            outtextxy(370,55,"Kilometer squre-Meter squre");
                            setbkcolor(LIGHTBLUE);
                            outtextxy(275,140,"Entered Kilometer squre: ");

                            char ch[20],chh1[20];
                            int gd=DETECT,gm;
                            printf("Enter: ");
                            scanf("%[^\n]%*c",ch);
                            outtextxy(450,140,ch);
                            float r;
                            float val;
                            char str[20];

                            strcpy(str, ch);
                            val = atof(str);
                            r=val*1000000;
                            sprintf(chh1, "%f", val);
                            char str2[MAX];

                            sprintf(str2, "%f", r);

                            outtextxy(275,170,"Result: ");

                            outtextxy(380,170,str2);
                            outtextxy(440,170,"Meter squre");


                            c=getch();
                            if(c=='b')
                            {
                                setfillstyle(1,LIGHTBLUE);
                                bar(258,85,600,330);
                                setfillstyle(1,GREEN);
                                bar(258,50,600,75);
                                goto Area;
                            }


                        }




                    }

                    if(ch1=='b')
                    {
                        goto main;
                    }
                    if(ch1=='w')
                    {
                        setcolor(LIGHTBLUE);
                        outtextxy(m,n,">>");
                        n=n-30;
                        setcolor(BLACK);
                        if(n>=150 && n<=300)
                        {
                            outtextxy(m,n,">>");
                        }
                        else
                        {
                            outtextxy(m,n=n+30,">>");
                        }


                    }
                    if(ch1=='s')
                    {
                        setcolor(LIGHTBLUE);
                        outtextxy(m,n,">>");
                        n=n+30;
                        setcolor(BLACK);
                        if(n>=150 && n<=300)
                        {
                            outtextxy(m,n,">>");
                        }
                        else
                        {
                            outtextxy(m,n=n-30,">>");
                        }


                    }




                }

            }
        }
        if(y==230)
        {
            char chh,ch1;
            chh=getch();
            if(chh==13)
            {
Temp:
                int m=260,n=150;
                setbkcolor(GREEN);
                outtextxy(370,55, "Temperature" );
                setbkcolor(LIGHTBLUE);
                outtextxy(260,90, "Select conversation type.." );
                delay(100);
                outtextxy(284,150," 1. Celcious-Furenhight");
                delay(100);
                outtextxy(284,180," 2. Farenhite-Celcious");
                delay(100);
                outtextxy(284,210," 3. Celsious-Kelvin");
                delay(100);
                outtextxy(284,240," 4. Kelvin-Celcious");
                delay(100);
                outtextxy(284,270," 5. Farenhight-Kelvin");
                delay(100);
                outtextxy(284,300," 6. Kelvin-Farenhight");
                delay(100);
                outtextxy(m,n,">>");

                while(1)
                {
                    ch1=getch();

                    if(n==150)
                    {

                        if(ch1==13)
                        {
                            char c;
                            setfillstyle(1,LIGHTBLUE);
                            bar(258,85,620,460);
                            setfillstyle(1,GREEN);
                            bar(258,50,500,75);
                            setbkcolor(GREEN);
                            outtextxy(370,55,"Celcious-Furenhight");
                            setbkcolor(LIGHTBLUE);
                            outtextxy(275,140,"Entered Celcious: ");

                            char ch[20];
                            int gd=DETECT,gm;
                            printf("Enter: ");
                            scanf("%[^\n]%*c",ch);
                            outtextxy(390,140,ch);
                            float r;
                            float val;
                            char str[20];

                            strcpy(str, ch);
                            val = atof(str);
                            r=((val*9)/5)+32;;

                            char str2[MAX];

                            sprintf(str2, "%.2f", r);

                            outtextxy(275,170,"Result: ");

                            outtextxy(380,170,str2);
                            outtextxy(470,170,"Farenhight");


                            c=getch();
                            if(c=='b')
                            {
                                setfillstyle(1,LIGHTBLUE);
                                bar(258,85,600,330);
                                setfillstyle(1,GREEN);
                                bar(258,50,600,75);
                                goto Temp;
                            }


                        }




                    }
                    if(n==180)
                    {

                        if(ch1==13)
                        {
                            char c;
                            setfillstyle(1,LIGHTBLUE);
                            bar(258,85,620,460);
                            setfillstyle(1,GREEN);
                            bar(258,50,500,75);
                            setbkcolor(GREEN);
                            outtextxy(370,55,"Farenhite-Celcious");
                            setbkcolor(LIGHTBLUE);
                            outtextxy(275,140,"Entered Farenhight: ");

                            char ch[20];
                            int gd=DETECT,gm;
                            printf("Enter: ");
                            scanf("%[^\n]%*c",ch);
                            outtextxy(390,140,ch);
                            float r;
                            float val;
                            char str[20];

                            strcpy(str, ch);
                            val = atof(str);
                            r=((val-32)*5)/9;

                            char str2[MAX];

                            sprintf(str2, "%.2f", r);

                            outtextxy(275,170,"Result: ");

                            outtextxy(380,170,str2);
                            outtextxy(470,170,"Celcious");


                            c=getch();
                            if(c=='b')
                            {
                                setfillstyle(1,LIGHTBLUE);
                                bar(258,85,600,330);
                                setfillstyle(1,GREEN);
                                bar(258,50,600,75);
                                goto Temp;
                            }


                        }




                    }

                    if(n==210)
                    {

                        if(ch1==13)
                        {
                            char c;
                            setfillstyle(1,LIGHTBLUE);
                            bar(258,85,620,460);
                            setfillstyle(1,GREEN);
                            bar(258,50,500,75);
                            setbkcolor(GREEN);
                            outtextxy(370,55,"Celcious-Kelvin");
                            setbkcolor(LIGHTBLUE);
                            outtextxy(275,140,"Entered Celcious: ");

                            char ch[20];
                            int gd=DETECT,gm;
                            printf("Enter: ");
                            scanf("%[^\n]%*c",ch);
                            outtextxy(390,140,ch);
                            float r;
                            float val;
                            char str[20];

                            strcpy(str, ch);
                            val = atof(str);
                            r=val+273.15;

                            char str2[MAX];

                            sprintf(str2, "%f", r);

                            outtextxy(275,170,"Result: ");

                            outtextxy(380,170,str2);
                            outtextxy(470,170,"Kelvin");


                            c=getch();
                            if(c=='b')
                            {
                                setfillstyle(1,LIGHTBLUE);
                                bar(258,85,600,330);
                                setfillstyle(1,GREEN);
                                bar(258,50,600,75);
                                goto Temp;
                            }


                        }

                    }

                    if(n==240)
                    {

                        if(ch1==13)
                        {
                            char c;
                            setfillstyle(1,LIGHTBLUE);
                            bar(258,85,620,460);
                            setfillstyle(1,GREEN);
                            bar(258,50,500,75);
                            setbkcolor(GREEN);
                            outtextxy(370,55,"Kelvin-Celcious");
                            setbkcolor(LIGHTBLUE);
                            outtextxy(275,140,"Entered Kelvin: ");

                            char ch[20],chh1[20];
                            int gd=DETECT,gm;
                            printf("Enter: ");
                            scanf("%[^\n]%*c",ch);
                            outtextxy(390,140,ch);
                            float r;
                            float val;
                            char str[20];

                            strcpy(str, ch);
                            val = atof(str);
                            r=val-273.15;
                            sprintf(chh1, "%f", val);
                            char str2[MAX];

                            sprintf(str2, "%f", r);

                            outtextxy(275,170,"Result: ");

                            outtextxy(380,170,str2);
                            outtextxy(470,170,"Celcious");


                            c=getch();
                            if(c=='b')
                            {
                                setfillstyle(1,LIGHTBLUE);
                                bar(258,85,600,330);
                                setfillstyle(1,GREEN);
                                bar(258,50,600,75);
                                goto Temp;
                            }


                        }

                    }

                    if(n==270)
                    {

                        if(ch1==13)
                        {
                            char c;
                            setfillstyle(1,LIGHTBLUE);
                            bar(258,85,620,460);
                            setfillstyle(1,GREEN);
                            bar(258,50,500,75);
                            setbkcolor(GREEN);
                            outtextxy(370,55,"Farenhight-Kelvint");
                            setbkcolor(LIGHTBLUE);
                            outtextxy(275,140,"Entered Farenhight: ");

                            char ch[20];
                            int gd=DETECT,gm;
                            printf("Enter: ");
                            scanf("%[^\n]%*c",ch);
                            outtextxy(390,140,ch);
                            float r;
                            float val;
                            char str[20];

                            strcpy(str, ch);
                            val = atof(str);
                            r=((val-32)*5/9)+273.15;

                            char str2[MAX];

                            sprintf(str2, "%f", r);

                            outtextxy(275,170,"Result: ");

                            outtextxy(380,170,str2);
                            outtextxy(470,170,"Kelvin");


                            c=getch();
                            if(c=='b')
                            {
                                setfillstyle(1,LIGHTBLUE);
                                bar(258,85,600,330);
                                setfillstyle(1,GREEN);
                                bar(258,50,600,75);
                                goto Temp;
                            }


                        }




                    }

                    if(n==300)
                    {

                        if(ch1==13)
                        {
                            char c;
                            setfillstyle(1,LIGHTBLUE);
                            bar(258,85,620,460);
                            setfillstyle(1,GREEN);
                            bar(258,50,500,75);
                            setbkcolor(GREEN);
                            outtextxy(370,55,"Kelvin-Furenhight");
                            setbkcolor(LIGHTBLUE);
                            outtextxy(275,140,"Entered Kelvin: ");

                            char ch[20];
                            int gd=DETECT,gm;
                            printf("Enter: ");
                            scanf("%[^\n]%*c",ch);
                            outtextxy(390,140,ch);
                            float r;
                            float val;
                            char str[20];

                            strcpy(str, ch);
                            val = atof(str);
                            r=((val-273.15)*9/5)+32;

                            char str2[MAX];

                            sprintf(str2, "%f", r);

                            outtextxy(275,170,"Result: ");

                            outtextxy(380,170,str2);
                            outtextxy(470,170,"Farenhight");


                            c=getch();
                            if(c=='b')
                            {
                                setfillstyle(1,LIGHTBLUE);
                                bar(258,85,600,330);
                                setfillstyle(1,GREEN);
                                bar(258,50,600,75);
                                goto Temp;
                            }


                        }




                    }

                    if(ch1=='b')
                    {
                        goto main;
                    }
                    if(ch1=='w')
                    {
                        setcolor(LIGHTBLUE);
                        outtextxy(m,n,">>");
                        n=n-30;
                        setcolor(BLACK);
                        if(n>=150 && n<=300)
                        {
                            outtextxy(m,n,">>");
                        }
                        else
                        {
                            outtextxy(m,n=n+30,">>");
                        }


                    }
                    if(ch1=='s')
                    {
                        setcolor(LIGHTBLUE);
                        outtextxy(m,n,">>");
                        n=n+30;
                        setcolor(BLACK);
                        if(n>=150 && n<=300)
                        {
                            outtextxy(m,n,">>");
                        }
                        else
                        {
                            outtextxy(m,n=n-30,">>");
                        }


                    }




                }
            }
        }
        if(y==260)
        {
            char chh,ch1;
            chh=getch();
            if(chh==13)
            {

vol:
                int m=260,n=150;
                setbkcolor(GREEN);
                outtextxy(370,55, "Volume" );
                setbkcolor(LIGHTBLUE);
                outtextxy(260,90, "Select conversation type.." );
                delay(100);
                outtextxy(284,150," 1. Cubic meter - dm^3/cm^3/mm^3");
                delay(100);
                outtextxy(284,180," 3. Cubic decimeter - m^3/cm^3/mm^3");
                delay(100);
                outtextxy(284,210," 6. Cubic centimeter- m^3/dm^3/mm^3");
                delay(100);
                outtextxy(284,240," 4. Cubic millimeter- m^3/dm^3/cm^3");
                delay(100);
                outtextxy(m,n,">>");

                while(1)
                {
                    ch1=getch();
                    if(n==150)
                    {
                        if(ch1==13)
                        {
                            char c;
                            setfillstyle(1,LIGHTBLUE);
                            bar(258,85,620,460);
                            setfillstyle(1,GREEN);
                            bar(258,50,500,75);
                            setbkcolor(GREEN);
                            outtextxy(370,55,"Cubic meter - dm^3/cm^3/mm^3");
                            setbkcolor(LIGHTBLUE);
                            outtextxy(275,140,"Entered Cubic meter: ");

                            char ch[20];
                            int gd=DETECT,gm;
                            printf("Enter: ");
                            scanf("%[^\n]%*c",ch);
                            outtextxy(420,140,ch);
                            double r,r1;
                            double r2;
                            double val;
                            char str[20];

                            strcpy(str, ch);
                            val = atof(str);
                            r=val*1000;
                            r1=val*1000000;
                            r2=val*1000000000;

                            char str2_1[MAX];
                            char str2_2[MAX];
                            char str2_3[MAX];

                            sprintf(str2_1, "%lf", r);
                            sprintf(str2_2, "%lf", r1);
                            sprintf(str2_3, "%lf", r2);

                            outtextxy(275,180,"Result: ");

                            outtextxy(380,180,str2_1);
                            outtextxy(460,180,"Cubic decimeter");
                            outtextxy(380,215,str2_2);
                            outtextxy(460,215,"Cubic centimeter");
                            outtextxy(380,250,str2_3);
                            outtextxy(460,250,"Cubic millimeter");


                            c=getch();
                            if(c=='b')
                            {
                                setfillstyle(1,LIGHTBLUE);
                                bar(258,85,620,460);
                                setfillstyle(1,GREEN);
                                bar(258,50,600,75);
                                goto vol;
                            }


                        }


                    }

                    if(n==180)
                    {
                        if(ch1==13)
                        {
                            char c;
                            setfillstyle(1,LIGHTBLUE);
                            bar(258,85,620,460);
                            setfillstyle(1,GREEN);
                            bar(258,50,500,75);
                            setbkcolor(GREEN);
                            outtextxy(370,55,"Cubic decimeter - m^3/cm^3/mm^3");
                            setbkcolor(LIGHTBLUE);
                            outtextxy(275,140,"Entered Cubic decimeter: ");

                            char ch[20];
                            int gd=DETECT,gm;
                            printf("Enter: ");
                            scanf("%[^\n]%*c",ch);
                            outtextxy(440,140,ch);
                            float r,r1;
                            double r2;
                            float val;
                            char str[20];

                            strcpy(str, ch);
                            val = atof(str);
                            r=val*0.001;
                            r1=val*1000;
                            r2=val*1000000;

                            char str2_1[MAX];
                            char str2_2[MAX];
                            char str2_3[MAX];

                            sprintf(str2_1, "%f", r);
                            sprintf(str2_2, "%f", r1);
                            sprintf(str2_3, "%lf", r2);

                            outtextxy(275,180,"Result: ");

                            outtextxy(380,180,str2_1);
                            outtextxy(460,180,"Cubic meter");
                            outtextxy(380,215,str2_2);
                            outtextxy(460,215,"Cubic centimeter");
                            outtextxy(380,250,str2_3);
                            outtextxy(460,250,"Cubic millimeter");


                            c=getch();
                            if(c=='b')
                            {
                                setfillstyle(1,LIGHTBLUE);
                                bar(258,85,620,460);
                                setfillstyle(1,GREEN);
                                bar(258,50,600,75);
                                goto vol;
                            }


                        }


                    }


                    if(n==210)
                    {
                        if(ch1==13)
                        {
                            char c;
                            setfillstyle(1,LIGHTBLUE);
                            bar(258,85,620,460);
                            setfillstyle(1,GREEN);
                            bar(258,50,500,75);
                            setbkcolor(GREEN);
                            outtextxy(370,55,"Cubic centimeter - m^3/dm^3/mm^3");
                            setbkcolor(LIGHTBLUE);
                            outtextxy(275,140,"Entered Cubic centimeter: ");

                            char ch[20];
                            int gd=DETECT,gm;
                            printf("Enter: ");
                            scanf("%[^\n]%*c",ch);
                            outtextxy(440,140,ch);
                            double r1,r2;
                            double r;
                            float val;
                            char str[20];

                            strcpy(str, ch);
                            val = atof(str);
                            r=val*0.000001;
                            r1=val*0.001;
                            r2=val*1000;

                            char str2_1[MAX];
                            char str2_2[MAX];
                            char str2_3[MAX];

                            sprintf(str2_1, "%lf", r);
                            sprintf(str2_2, "%f", r1);
                            sprintf(str2_3, "%f", r2);

                            outtextxy(275,180,"Result: ");

                            outtextxy(380,180,str2_1);
                            outtextxy(460,180,"Cubic meter");
                            outtextxy(380,215,str2_2);
                            outtextxy(460,215,"Cubic deciimeter");
                            outtextxy(380,250,str2_3);
                            outtextxy(460,250,"Cubic millimeter");


                            c=getch();
                            if(c=='b')
                            {
                                setfillstyle(1,LIGHTBLUE);
                                bar(258,85,620,460);
                                setfillstyle(1,GREEN);
                                bar(258,50,600,75);
                                goto vol;
                            }


                        }


                    }
                    if(n==240)
                    {
                        if(ch1==13)
                        {
                            char c;
                            setfillstyle(1,LIGHTBLUE);
                            bar(258,85,620,460);
                            setfillstyle(1,GREEN);
                            bar(258,50,500,75);
                            setbkcolor(GREEN);
                            outtextxy(370,55,"Cubic millimeter - m^3/dm^3/cm^3");
                            setbkcolor(LIGHTBLUE);
                            outtextxy(275,140,"Entered Cubic millimeter: ");

                            char ch[20];
                            int gd=DETECT,gm;
                            printf("Enter: ");
                            scanf("%[^\n]%*c",ch);
                            outtextxy(440,140,ch);
                            double r1,r2;
                            double r;
                            float val;
                            char str[20];

                            strcpy(str, ch);
                            val = atof(str);
                            r=val*0.000000001;
                            r1=val*0.000001;
                            r2=val*0.001;

                            char str2_1[MAX];
                            char str2_2[MAX];
                            char str2_3[MAX];

                            sprintf(str2_1, "%lf", r);
                            sprintf(str2_2, "%lf", r1);
                            sprintf(str2_3, "%f", r2);

                            outtextxy(275,180,"Result: ");

                            outtextxy(380,180,str2_1);
                            outtextxy(460,180,"Cubic meter");
                            outtextxy(380,215,str2_2);
                            outtextxy(460,215,"Cubic deciimeter");
                            outtextxy(380,250,str2_3);
                            outtextxy(460,250,"Cubic centimeter");


                            c=getch();
                            if(c=='b')
                            {
                                setfillstyle(1,LIGHTBLUE);
                                bar(258,85,620,460);
                                setfillstyle(1,GREEN);
                                bar(258,50,600,75);
                                goto vol;
                            }


                        }


                    }

                    ///
                    if(ch1=='b')
                    {
                        goto main;
                    }
                    if(ch1=='w')
                    {
                        setcolor(LIGHTBLUE);
                        outtextxy(m,n,">>");
                        n=n-30;
                        setcolor(BLACK);
                        if(n>=150 && n<=240)
                        {
                            outtextxy(m,n,">>");
                        }
                        else
                        {
                            outtextxy(m,n=n+30,">>");
                        }


                    }
                    if(ch1=='s')
                    {
                        setcolor(LIGHTBLUE);
                        outtextxy(m,n,">>");
                        n=n+30;
                        setcolor(BLACK);
                        if(n>=150 && n<=240)
                        {
                            outtextxy(m,n,">>");
                        }
                        else
                        {
                            outtextxy(m,n=n-30,">>");
                        }


                    }




                }
            }
        }
        if(y==290)
        {
            char chh,ch1;
            chh=getch();
            if(chh==13)
            {
num:
                int m=260,n=150;
                setbkcolor(GREEN);
                outtextxy(370,55, "Number System" );
                setbkcolor(LIGHTBLUE);
                outtextxy(260,90, "Select conversation type.." );
                delay(100);
                outtextxy(284,150," 1. Decimal-Binary/Octal/Hexadecimal");
                delay(100);
                outtextxy(284,180," 2. Binary-Decimal/Octal/Hexadecimal");
                delay(100);
                outtextxy(284,210," 3. Octal-Decimal/Binary/Hexadecimal");
                delay(100);
                outtextxy(284,240," 4. Hexadecimal-Decimal/Binary/Octal");
                delay(100);
                outtextxy(m,n,">>");

                while(1)
                {
                    ch1=getch();
                    if(n==150)
                    {
                        if(ch1==13)
                        {
                            char c;
                            setfillstyle(1,LIGHTBLUE);
                            bar(258,85,620,460);
                            setfillstyle(1,GREEN);
                            bar(258,50,500,75);
                            setbkcolor(GREEN);
                            outtextxy(370,55,"Decimal-Binary/Octal/Hexadecimal");
                            setbkcolor(LIGHTBLUE);
                            outtextxy(275,140,"Entered Decimal: ");

                            char ch[20];
                            int gd=DETECT,gm;
                            printf("Enter: ");
                            scanf("%[^\n]%*c",ch);
                            outtextxy(420,140,ch);
                            int r,r1,r2;

                            int val,oc,hx;
                            char str[20];

                            strcpy(str, ch);
                            val = atof(str);
                            //binary variable
                            int bin = 0, rem = 0, i = 1;
                            oc=val;
                            hx=val;

                            while(val)//decimal to binary
                            {
                                rem   = val % 2;
                                bin   = bin + (rem * i);
                                val   = val / 2;
                                i = i * 10;

                            }

                            r=bin;
                            r1=oc;
                            r2=hx;

                            char str2_1[MAX];
                            char str2_2[MAX];
                            char str2_3[MAX];

                            sprintf(str2_1, "%d", r);
                            sprintf(str2_2, "%o", r1);//octal veriable
                            sprintf(str2_3, "%X", r2);//hexa decimal

                            outtextxy(275,180,"Result: ");

                            outtextxy(400,215,str2_1);
                            outtextxy(275,215,"Binary: ");
                            outtextxy(400,250,str2_2);
                            outtextxy(275,250,"Octal:");
                            outtextxy(400,290,str2_3);
                            outtextxy(275,290,"Hexadecimal:");


                            c=getch();
                            if(c=='b')
                            {
                                setfillstyle(1,LIGHTBLUE);
                                bar(258,85,620,460);
                                setfillstyle(1,GREEN);
                                bar(258,50,600,75);
                                goto num;
                            }


                        }


                    }
                    if(n==180)
                    {
                        if(ch1==13)
                        {
                            char c;
                            setfillstyle(1,LIGHTBLUE);
                            bar(258,85,620,460);
                            setfillstyle(1,GREEN);
                            bar(258,50,500,75);
                            setbkcolor(GREEN);
                            outtextxy(370,55,"Binary-Decimal/Octal/Hexadecimal");
                            setbkcolor(LIGHTBLUE);
                            outtextxy(275,140,"Entered Binary: ");

                            char ch[20];
                            int gd=DETECT,gm;
                            printf("Enter: ");
                            scanf("%[^\n]%*c",ch);
                            outtextxy(420,140,ch);
                            int r,r1,r2;
                            int val;
                            char str[20];
                            strcpy(str, ch);
                            val = atof(str);
                            int oc,hx,decimal_num = 0, i = 1, rem;
                            oc=val;
                            hx=val;

                            while ( val > 0)//binary to decimal
                            {
                                rem = val % 10;
                                decimal_num = decimal_num + rem * i;

                                i = i * 2;
                                val = val / 10;
                            }

                            r=decimal_num;
                            r1=oc;
                            r2=hx;

                            char str2_1[MAX];
                            char str2_2[MAX];
                            char str2_3[MAX];

                            sprintf(str2_1, "%d", r);
                            sprintf(str2_2, "%o", r);//octal veriable
                            sprintf(str2_3, "%X", r);//hexa decimal


                            outtextxy(275,180,"Result: ");

                            outtextxy(400,215,str2_1);
                            outtextxy(275,215,"Decimal: ");
                            outtextxy(400,250,str2_2);
                            outtextxy(275,250,"Octal:");
                            outtextxy(400,290,str2_3);
                            outtextxy(275,290,"Headecimal:");


                            c=getch();
                            if(c=='b')
                            {
                                setfillstyle(1,LIGHTBLUE);
                                bar(258,85,620,460);
                                setfillstyle(1,GREEN);
                                bar(258,50,600,75);
                                goto num;
                            }


                        }


                    }

                    if(n==210)
                    {
                        if(ch1==13)
                        {
                            char c;
                            setfillstyle(1,LIGHTBLUE);
                            bar(258,85,620,460);
                            setfillstyle(1,GREEN);
                            bar(258,50,500,75);
                            setbkcolor(GREEN);
                            outtextxy(370,55,"Octal-Decimal/Binary/Hexadecimal");
                            setbkcolor(LIGHTBLUE);
                            outtextxy(275,140,"Entered Octal: ");

                            char ch[20];
                            int gd=DETECT,gm;
                            printf("Enter: ");
                            scanf("%[^\n]%*c",ch);
                            outtextxy(420,140,ch);
                            int r,r1,r2;

                            int val;
                            char str[20];
                            strcpy(str, ch);
                            val = atof(str);

                            //decimal varible
                            int dm,decnum=0, i=0, rem1;

                            while(val!=0)
                            {
                                rem1 = val%10;
                                decnum = decnum + (rem1*pow(8,i));
                                i++;
                                val = val/10;
                            }
                            dm=decnum;
                            r=dm;

                            //binary veriable
                             int bin = 0, rem2 = 0, place = 1;


                            while(dm)//binary
                            {
                                rem2   = dm % 2;
                                dm   = dm / 2;
                                bin   = bin + (rem2 * place);
                                place = place * 10;
                            }

                            r1=bin;


                            char str2_1[MAX];
                            char str2_2[MAX];
                            char str2_3[MAX];

                            sprintf(str2_1, "%d", r);//decimal;
                            sprintf(str2_2, "%d", r1);//binary veriable
                            sprintf(str2_3, "%X", r);//hexa decimal


                            outtextxy(275,180,"Result: ");

                            outtextxy(400,215,str2_1);
                            outtextxy(275,215,"Decimal: ");
                            outtextxy(400,250,str2_2);
                            outtextxy(275,250,"Binary:");
                            outtextxy(400,290,str2_3);
                            outtextxy(275,290,"Headecimal:");


                            c=getch();
                            if(c=='b')
                            {
                                setfillstyle(1,LIGHTBLUE);
                                bar(258,85,620,460);
                                setfillstyle(1,GREEN);
                                bar(258,50,600,75);
                                goto num;
                            }


                        }


                    }

                    if(n==240)
                    {
                        if(ch1==13)
                        {
                            char c;
                            setfillstyle(1,LIGHTBLUE);
                            bar(258,85,620,460);
                            setfillstyle(1,GREEN);
                            bar(258,50,500,75);
                            setbkcolor(GREEN);
                            outtextxy(370,55,"Hexadecimal-Decimal/Binary/Octal");
                            setbkcolor(LIGHTBLUE);
                            outtextxy(275,140,"Entered Hexadecimal: ");

                            char ch[20];
                            int gd=DETECT,gm;
                            printf("Enter: ");
                            scanf("%[^\n]%*c",ch);
                            outtextxy(420,140,ch);
                            int r,r1,dm;


                            long long decimalNumber=0;
                            char hexDigits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8',
                                                  '9', 'A', 'B', 'C', 'D', 'E', 'F'
                                                 };
                            char hexadecimal[30];
                            int i, j, power=0, digit;



                            /* Converting hexadecimal number to decimal number */
                            for(i=strlen(ch)-1; i >= 0; i--)
                            {
                                /*search currect character in hexDigits array */
                                for(j=0; j<16; j++)
                                {
                                    if(ch[i] == hexDigits[j])
                                    {
                                        decimalNumber += j*pow(16, power);
                                    }
                                }
                                power++;
                            }
                            dm=decimalNumber;
                            int bin = 0, rem2 = 0, place = 1;


                            while(dm)//binary
                            {
                                rem2   = dm % 2;
                                dm   = dm / 2;
                                bin   = bin + (rem2 * place);
                                place = place * 10;
                            }


                            r=decimalNumber;
                            r1=bin;

                            char str2_1[MAX];
                            char str2_2[MAX];
                            char str2_3[MAX];

                            sprintf(str2_1, "%d", r);//decimal;
                            sprintf(str2_2, "%d", r1);//binary veriable
                            sprintf(str2_3, "%o", r);//Octal decimal


                            outtextxy(275,180,"Result: ");

                            outtextxy(400,215,str2_1);
                            outtextxy(275,215,"Decimal: ");
                            outtextxy(400,250,str2_2);
                            outtextxy(275,250,"Binary:");
                            outtextxy(400,290,str2_3);
                            outtextxy(275,290,"Octal:");


                            c=getch();
                            if(c=='b')
                            {
                                setfillstyle(1,LIGHTBLUE);
                                bar(258,85,620,460);
                                setfillstyle(1,GREEN);
                                bar(258,50,600,75);
                                goto num;
                            }


                        }


                    }

                    if(ch1=='b')
                    {
                        goto main;
                    }
                    if(ch1=='w')
                    {
                        setcolor(LIGHTBLUE);
                        outtextxy(m,n,">>");
                        n=n-30;
                        setcolor(BLACK);
                        if(n>=150 && n<=240)
                        {
                            outtextxy(m,n,">>");
                        }
                        else
                        {
                            outtextxy(m,n=n+30,">>");
                        }


                    }
                    if(ch1=='s')
                    {
                        setcolor(LIGHTBLUE);
                        outtextxy(m,n,">>");
                        n=n+30;
                        setcolor(BLACK);
                        if(n>=150 && n<=240)
                        {
                            outtextxy(m,n,">>");
                        }
                        else
                        {
                            outtextxy(m,n=n-30,">>");
                        }


                    }



                }
            }
        }

        if(y==320)
        {
            char ch;
            ch=getch();
            if(ch==13)
            {
                exit(0);
            }

        }


    }


    getch();
}
