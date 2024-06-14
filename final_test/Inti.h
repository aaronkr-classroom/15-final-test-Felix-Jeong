// Inti.h
#ifndef GUARD_INTI_H
#define GUARD_INTI_H

#include "Core.h"

class Inti : public Core {
public:
	// �� ������ ��� �Ϲ������� Core::Core()�� ����Ͽ�
	// ��ü�� �⺻ Ŭ�������� ����� �κ��� �ʱ�ȭ
	Inti() : toeic(0) {};
	Inti(istream& is) { read(is); };

	double grade() const;
	istream& read(istream&);
protected:
	Inti* clone() const { return new Inti(*this); }
private:
	double toeic; // ��
};

#endif