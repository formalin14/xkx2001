//Cracked by Roath
// xiake-wuxing.c ��������

inherit SKILL;

mapping *action = ({
([     "action" : "$NͻȻ�䲽��ǰ��һ�С�ʮ��ɱһ�ˡ�������$w��$n��$l����",
       "force" : 120,
       "dodge" : 20,
       "damage" : 5,
        "lvl" : 0,
        "damage_type":  "����"
]),
});


int valid_enable(string usage) { return (usage == "throwing") || (usage == "parry"); }

int valid_learn(object me)
{
       return 1;
}

mapping query_action(object me, object weapon)
{
       return action[random(sizeof(action))];

}

int practice_skill(object me)
{
       object weapon;

       if (!objectp(weapon = me->query_temp("weapon"))
       || (string)weapon->query("skill_type") != "throwing")
               return notify_fail("��ʹ�õ��������ԡ�\n");
       if ((int)me->query("jingli") < 50)
               return notify_fail("��ľ����������������Ρ�\n");
       me->receive_damage("jingli", 30);
       return 1;
}
int valid_combine(string combo) 
{ 	if (strsrch(combo, "xiake") >= 0) 
		return 1;
	else
		return 0;
}