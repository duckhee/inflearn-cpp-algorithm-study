/**
 * 1부터 N까지 M의 배수 합
 *
 * 자연수 N이 입력되면, 1부터 N까지의 수 중 M의 배수합을 출력하는 프로그램을 작성하세요.
 *
 * 입력 설명
 * 첫 줄에 자연수 N과 M이 차례대로 입력이 된다.
 * => 3 <= M < N <= 1000의 범위를 가진다.
 *
 * 출력 설명
 * 첫 줄에 M의 배수 합을 출력한다.
 */

#include "main.h"
#include <iostream>


int main(int argc, char **argv) {
    int N = -1;
    int M = -1;
    std::cin >> N;
    std::cin >> M;

    int result = MultiSum(N, M);
    std::cout << result << std::endl;

    return 0;
}
