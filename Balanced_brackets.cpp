// Balancing Brackets using Stack
#include <stdio.h>
#include <string.h>
int top;
char st[10001];
int isBalanced(char *s) {
    top = -1; 
    int len = strlen(s);
    if (len == 1) {
        return false;
    }
    for (int i = 0; i < len; i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            st[++top] = s[i];
        }
		else {
            if (top != -1 && ((s[i] == ')' && st[top] == '(') || 
			                  (s[i] == '}' && st[top] == '{') || 
							  (s[i] == ']' && st[top] == '['))) {
                top--;
            }
			else {
                return false;
            }
        }
    }
    return top == -1;
}
int main() {
    char str[10001];
    printf("Enter string: ");
    scanf("%s", str);
    if(isBalanced(str)){	
        printf("The brackets in string are balanced.\n");
    }
	else{
        printf("The brackets in string is not balanced.\n");
    }
}

