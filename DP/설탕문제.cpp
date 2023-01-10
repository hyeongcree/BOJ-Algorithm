#include <iostream>
#include <vector>

using namespace std;
/*생각정리
설탕공장에서 만드는 설탕은 봉지에 담겨져 있다. 봉지는 3킬로그램 봉지와 5킬로그램 봉지가 있다.
최대한 적은 봉지를 들고 가려고 한다. 예를 들어, 18킬로그램 설탕을 배달해야 할 때, 3킬로그램 봉지 6개를 가져가도 되지만, 
5킬로그램 3개와 3킬로그램 1개를 배달하면, 더 적은 개수의 봉지를 배달할 수 있다.
상근이가 설탕을 정확하게 N킬로그램 배달해야 할 때, 봉지 몇 개를 가져가면 되는지 그 수를 구하는 프로그램을 작성하시오.
처음에 n을 입력받는다.
n을 입력받고 난 후, 최대한 5kg짜리 봉지를 많이 사용해서 무게를 맞추도록 해본다
과정:
1. 5로 나눈 나머지가 그냥 나누어떨어지거나 3으로 나누어떨어진다. 그것으로 구한 수를 출력한다.
2. 안 나누어 떨어졌을 경우: n보다 작은 5의 배수의 곱한 값을 count라고 선언하여 count-1값을 while(count>=0)문으로 다음과 같이 실행한다.
2-1. 만약, count값으로 나눈 나머지 값이 3으로 나누어 떨어진다. -> final구하고break한다.
2-2. 만약 안될 경우, count--한 후 다시 반복한다. 이 과정을 반복하다가 count<0이 되었을 때 반복문을 빠져나간다.
2-3. count=0일 때: 3의 배수일 경우, 몫을 final로 하고 break한다.
2-4. count=0일 때도 실패한 경우 else    final=-1;한다.
*/
int main(void){
    ios::sync_with_stdio(false); cin.tie(0);
    int n, final, temp;
    cin >> n;
    if(n%5==0){
        final=n/5;
        cout << final;
        return 0;
    }
    temp=n%5;
    if(temp%3==0){
        final=n/5+1;
        cout << final;
        return 0;
    }
    int count = n/5;
    while(count>=0){
        temp=n-5*count;
        if(temp%3==0){
            final=count+1;
            break;
        }
        count--;
        if(count==-1)   final=-1;
    }
    cout << final;

    return 0;
}