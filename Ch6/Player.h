#pragma once

// 목표 : 접근 제어 지정자, 정보 은닉

// private, public
// struct - 기본 타입 public
// class - 기본 타입 private
#include <iostream>
#include "HP.h"

using namespace std;

class Player : public HP
{

};