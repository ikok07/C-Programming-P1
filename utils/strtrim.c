//
// Created by Kaloyan Petkov on 27.06.24.
//

void strtrim(char str[35], int size) {
    for (int i = 0; i < size; i++) {
        if (str[i] == ' ' && (str[i + 1] == ' ' || str[i - 1] == ' ')) {
            for (int j = i; j < size - 1; j++) {
                str[j] = str[j + 1];
            }
        }
    }
}
