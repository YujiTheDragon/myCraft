#include <stdio.h>
#include "Player.h"
#include "HumblePlanning.h"
#include "GreedyPlanning.h"

void init(struct Player* p, struct material* mat, struct strategy* strat, struct strategy* hPlan, struct strategy* gPlan)
{
	p->step = 0;
	p->simStep = SimulateStep;
	p->strat = strat;

	mat->quantity = 100;
	mat->getQuan = getQuantity;

	strat->planMove = planMovement;

	hPlan->planMove = planMovement;
	gPlan->planMove = planMovement;
}


int main()
{
	struct Player p1;
	struct material mat;
	struct strategy strat;
	struct humblePlan hPlan;
	struct greedyPlan gPlan;


	init(&p1, &mat, &strat, &hPlan, &gPlan);

	p1.simStep(&p1);
	p1.simStep(&p1);

	mat.getQuan(&mat);

	strat.planMove(&strat);
	p1.strat->planMove(&strat);

	hPlan.planMove(&hPlan);
	gPlan.planMove(&gPlan);

	return 0;
}