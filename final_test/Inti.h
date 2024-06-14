// Inti.h
#ifndef GUARD_INTI_H
#define GUARD_INTI_H

#include "Core.h"

class Inti : public Core {
public:
	// 두 생성자 모두 암묵적으로 Core::Core()를 사용하여
	// 객체가 기본 클래스에서 상속한 부분을 초기화
	Inti() : toeic(0) {};
	Inti(istream& is) { read(is); };

	double grade() const;
	istream& read(istream&);
protected:
	Inti* clone() const { return new Inti(*this); }
private:
	double toeic; // 논문
};

#endif