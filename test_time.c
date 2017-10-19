#include <stdio.h>
#include <time.h>
int main () {
    char str[200];
    int t;
    fgets(str, 200, stdin);
    t = atoi(str);
	// sprintf(str, "%d", t);
    printf("t:%d\n", t);
    // while (t--) {
        // printf("current-value:%d \t", t);
    // }
    // printf("\n");
	
	// time_t t = t;
	struct tm *tm = gmtime(&t);
	char time_str[100];
	strftime(time_str, sizeof(time_str), "%Y-%m-%d %H:%M:%S", tm);
	printf(" t:[%d]\n time_str:[%s]\n", t, time_str);
	printf("Y:[%d] m:[%d] d:[%d]\n", tm->tm_year + 1900 , tm->tm_mon + 1, tm->tm_mday);
    return 0;
}

/*
	[a]timestamp-to-date:
	time_t t;  
	struct tm *p;  
	t=1384936600;  
	p=gmtime(&t);  
	char s[100];  
	strftime(s, sizeof(s), "%Y-%m-%d %H:%M:%S", p);  
	printf("%d: %s\n", (int)t, s);  

	[b]date-to-timestamp:
	struct tm* tmp_time = (struct tm*)malloc(sizeof(struct tm));  
    strptime("20131120","%Y%m%d",tmp_time);  
    time_t t = mktime(tmp_time);  
    printf("%ld\n",t);  
    free(tmp_time);  

	[c]struct-tm:
	  tm.tm_year = 96;	//年
	  tm.tm_mon = 3;	//月，0~11
	  tm.tm_mday = 0;	//日，0~31
	  tm.tm_hour = 0;
	  tm.tm_min = 0;
	  tm.tm_sec = 0;
	  tm.tm_isdst = -1;	//是否为夏令时

	return 0; 
*/

