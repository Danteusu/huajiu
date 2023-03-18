#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define VERSION "1.0.0"

int main(int argc, char *argv[]) {
    char *output;
	
    if (argc > 1) {
		char ch = '-';
        char temp[100] = {0};
        
        for (int i = 1; i < argc; i++) {
		if(strncmp(argv[i],&ch,1) == 0){
			if (strcmp(argv[i],"--version") == 0){
				printf("花臼usu %s\n", VERSION);
				return EXIT_SUCCESS;
			} else if(strcmp(argv[i],"--help") == 0){
				printf("用法: \n");
				printf("    ");
				printf("花臼usu [字符串]\n");
				printf("    ");
				printf("花臼usu 指令参数\n");
				printf("\n");
				printf("描述：\n");
				printf("不间断输出字符串`花臼usu`，辅助入脑人士在 Linux 环境下全自动发癫。可自定义输出内容，全方位满足需求。\n");
				printf("\n");
				printf("指令参数: \n");
				printf("    ");
				printf("--help 显示帮助信息并退出\n");
				printf("    ");
				printf("--version 显示版本信息并退出\n");
				return EXIT_SUCCESS;
			} else {
				printf("非法输入，请查看帮助手册，B站关注花臼usu谢谢喵\n");
				return EXIT_SUCCESS;
				}
			} 
	        strcat(temp, " ");
		strcat(temp, argv[i]);
        }
        output = temp;
    } else {
        output = "花臼usu";
    }
    while (1) {
        printf("%s\n", output);
    }
    return EXIT_SUCCESS;
}
