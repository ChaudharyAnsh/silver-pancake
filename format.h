int format_cammand(char *cammand, char **cmd) {
    int j = 0, flag = 0, ind = 0;
    for (int i = 0; cammand[i] != '\0'; i++) {
        if (flag == 1 && (cammand[i] == ' ' || cammand[i] == '\t'))
            continue;

        else if (cammand[i] == ' ' || cammand[i] == '\t') {
            cammand[i] = '\0';
            cmd[j] = &cammand[ind];
            j++;
            ind = -1;
            flag = 1;
        } else if (flag == 1 && cammand[i] != ' ' && cammand[i] != '\t') {
            ind = i;
            flag = 0;
        }
    }

    if (ind != -1)
        cmd[j] = &cammand[ind],
        j++;

    return j;
}

int min(int a, int b) {
    return a < b ? a : b;
}