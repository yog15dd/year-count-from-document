#include<stdio.h>
#include<iostream>
struct node
    {
        int year;
        node *link;
    };

int historyDocument(char *input);

int main()
{
    char doc[200] = {'\0'};
    printf("Enter a document: \n");
    //scanf("%s", &doc);
    std::cin >> doc;
    //gets(doc);
    std::cout<<"\nok17 - \n";
    for(int i = 0; i < 200; i++)
    std::cout<<doc[i] << " ";
    std::cout<<"\n\nok";
    int count;
    count = historyDocument(doc);
    std::cout<<"\nok";
    printf("\nTotal different years found = %d", count);
    std::cout<<"\nok";
    return 0;
}

int historyDocument(char *input)
{
    node *head = NULL, *tail = NULL, *temp;
    int match = 0, year = 0, i = 0, count_year = 0, c, count = 0;
    int day[] = {0,1,2,3,4,5,6,7,8,9};
    char day1[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    char dash = {'-'};
    std::cout<<"\nok start loop";
    while(*(input+i) != '\0')
    {
        /*for(c = 0; c < 10; c++)
        {
            if(*(input+i) == day1[c] || *(input+i) == dash)
            {
                break;
            }
            else{
                match = 0;
                pont = 1;
                break;
            }
        }
        if(pont == 1)
        {
            pont = 0;
            i++;
            continue;
        }*
        if(match == 0)
        {
            if(*(input+i) != ' ')
            {
                i++;
                continue;
            }
        }*/
        std::cout<<"\nok61";
        if(match == 0)
        {
            for(c = 0; c < 10; c++)
            {
                if(*(input+i) == day1[c])
                {
                    match = 1;
                    std::cout<<"\nok match 1";
                    break;
                }
            }
        }
        else if(match == 1)
        {
            for(c = 0; c < 10; c++)
            {
                if(*(input+i) == day1[c])
                {
                    match = 2;
                    std::cout<<"\nok match 2";
                    break;
                }
            }
            if(match == 1)
            {
                match = 0;
            }
        }
        else if(match == 2)
        {
            if(*(input+i) == dash)
            {
                match = 3;
                std::cout<<"\nok match 3";
            }
            else match = 0;
        }
        else if(match == 3)
        {
            for(c = 0; c < 10; c++)
            {
                if(*(input+i) == day1[c])
                {
                    match = 4;
                    std::cout<<"\nok match 4";
                    break;
                }
            }
            if(match == 3)
            {
                match = 0;
            }
        }
        else if(match == 4)
        {
            for(c = 0; c < 10; c++)
            {
                if(*(input+i) == day1[c])
                {
                    match = 5;
                    std::cout<<"\nok match 5";
                    break;
                }
            }
            if(match == 4)
            {
                match = 0;
            }
        }
        else if (match == 5)
        {
            if(*(input+i) == dash)
            {
                match = 6;
                std::cout<<"\nok match 6";
            }
            else match = 0;
        }
        else if(match == 6)
        {
            for(c = 0; c < 10; c++)
            {
                if(*(input+i) == day1[c])
                {
                    match = 7;
                    std::cout<<"\nok match year7";
                    year = day[c] * 1000;
                    break;
                }
            }
            if(match == 6)
            {
                match = 0;
            }
        }
        else if(match == 7)
        {
            for(c = 0; c < 10; c++)
            {
                if(*(input+i) == day1[c])
                {
                    match = 8;
                    std::cout<<"\nok match year8";
                    year = year + (day[c] * 100);
                    break;
                }
            }
            if(match == 7)
            {
                match = 0;
            }
        }
        else if(match == 8)
        {
            for(c = 0; c < 10; c++)
            {
                if(*(input+i) == day1[c])
                {
                    match = 9;
                    std::cout<<"\nok match year9";
                    year = year + (day[c] * 10);
                    break;
                }
            }
            if(match == 8)
            {
                match = 0;
            }
        }
        else if(match == 9)
        {
            for(c = 0; c < 10; c++)
            {
                if(*(input+i) == day1[c])
                {
                    match = 10;
                    std::cout<<"\nok match year10";
                    year = year + day[c];
                    break;
                }
            }
            if(match == 9)
            {
                match = 0;
            }
        }
        if(match == 10)
        {
            match = 0;
            temp = head;
            count = 0;
            std::cout<<"\nok214";
            while(temp != NULL)
            {
                if(year == temp -> year)
                {
                    count = 1;
                    break;
                }
                temp = temp -> link;
            }
            std::cout<<"\nok223";
            if (count != 1)
            {
            head = new node;
            head -> year = year;
            if(tail == NULL)
            {
                head -> link = NULL;
                tail = head;
            }
            else{
                head -> link = tail;
                tail = head;
            }
            }
            year = 0;
        }
        i++;
    }
    std::cout<<"\nok229";
    temp = head;
    while(temp != NULL)
    {
        tail = temp;
        count_year++;
        temp = temp -> link;
        tail = NULL;
        delete tail;
        std::cout<<"\nok238";
    }
    std::cout<<"\nok240";
    return count_year;
}