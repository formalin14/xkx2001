//Cracked by Roath
// Room: /d/beijing/west/zhizhudian.c

inherit ROOM;

void create()
{
	set("short", "�����");
	set("long", @LONG
����һ��ʲ��Ҳû�еĿշ��䡣
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"puandian",
  "east" : __DIR__"bridge",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}