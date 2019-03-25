#pragma once

/* ==================== [Интерфейс: Heading ] ==================== */
// *  расчет оплаты исходя из руководства (количество подчиненных)

class Heading
{
public:
	Heading() {}

	/* ========== [Метод: рассчитать зар.плату исходя из руководства (кол-во подчиненных)] ========== */
	virtual int HeadingPaymentMethod(int salary) = 0;

	~Heading() {}
};
