//Cracked by Roath
// Room: /d/village/shop.c

inherit ROOM;

void create()
{
        set("short", "�ӻ���");
        set("long", @LONG
����һ��СС���ӻ��꣬��ӪЩ�͡��Ρ������׼����ðٻ�����������˶���
�Ǻ�������������Ʒ��������ٷ���������Ʒ��С����ϰ����Ĳ��Ǹ�ϲ��˵
�����ˣ�ƽʱ����һ��Ц��������ӡ�������һ�����ǡ�
LONG
        );
        set("exits", ([ /* sizeof() == 1 */
                "south" : __DIR__"eroad3",
                "west" : __DIR__"majiu",
        ]));
        set("no_clean_up", 0);

        set("objects", ([
                "/clone/npc/xiejian": 1
        ]) );

        setup();
        replace_program(ROOM);
}