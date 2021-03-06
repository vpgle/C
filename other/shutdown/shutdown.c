#include <stdio.h>
#include <string.h> 
#include <time.h>
#include <stdlib.h>
int main(void)
{
     unsigned int hour, sec, n;
     time_t a;
     time(&a);       // a值为时间戳
     printf("a:%lld\n", a);
     printf("the time is %s", ctime(&a));   // 细分时间格式

     time_t rawtime;          // 时间类型
     struct tm *info;         // 成员类型
     char buffer[80];         // 字符数组，存储细分时间字符串
     time( &rawtime );        // 获取时间戳，info为已获得的系统时间。
     info = localtime( &rawtime );    // 输入指针，输出成员
     strftime(buffer,sizeof(buffer) ,"%Y%m%d_%H%M%S", info);//以年月日_时分秒的形式表示当前时间
//   printf("%s\n", buffer );

      struct tm t;          // 定义成员 t
      time_t bell;          // 时间类型
//      char str[80];         
      t.tm_sec=0;
      t.tm_min=25;
      t.tm_hour=7;
      t.tm_mday=info->tm_mday + 1;  //通过info->tm_mday获得月中某天，info为已获得的系统时间。
      t.tm_mon=info->tm_mon;    //通过info->tm_mon获得月份
      t.tm_year=info->tm_year;  // 通过info->tm_year获得年份
//      strcpy(str,asctime(&t));

      bell = mktime(&t);
      printf("the bell time is %lld\n", bell);
//      printf("1：%s",asctime(&t));
//      printf("2：%s",str);
      hour = ((unsigned long int)difftime(bell,a)) / 3600;
      sec = ((unsigned long int)difftime(bell,a)) % 3600;
      printf("The sleep time %d hour, %d sec\n", hour, sec);

      printf("chazhi is %ld\n",(unsigned long int)difftime(bell,a));

      system("pause");
      system("netsh interface set interface name=\"WLAN\" admin=disabled");
      for (n = 0; n < hour; ++n)
          system("choice /c k /n /t 3600 /d k 1>nul");

      char string[100];
      sprintf(string, "choice /c k /n /t %d /d k 1>nul", sec);
      system(string);

      system("netsh interface set interface name=\"WLAN\" admin=enabled");

      system("choice /c k /n /t 600 /d k 1>nul");

      system("shutdown -f -s -t 0");

    return 0;
}
