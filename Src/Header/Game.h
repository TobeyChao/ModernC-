//
// Created by Soul on 2018/9/7.
//

#ifndef MODERNCPLUSPLUS_GAME_H
#define MODERNCPLUSPLUS_GAME_H

#pragma once

#define PR(...) printf(__VA_ARGS__)

//2.1.4
#define LOG(...) {\
fprintf(stderr, "%s Line %d:\t", __FILE__, __LINE__);\
}

//2.1.2
struct Test {
    Test() : name(__func__) {}

    const char *name;
};

#endif //MODERNCPLUSPLUS_GAME_H
