//Cracked by Roath
// Room: /d/xiangyang/huiguan.c

inherit ROOM;

void create()
{
	set("short", "ɽ�»��");
	set("long", @LONG
��ǰ����������¥��������Ϊ�ӹ�¥��¥ǰ�������ձڣ����Դɵ񻨾���
��ש���ɣ�ͼ�����ɣ���̻Ի͡���������Ǵ�ݵ�ĳ����䣻����ľ��
���μǡ������������塷���񻰴�˵����ǰʯ���ֿ̡����Ը���������ڿ̡�
ʮ��ѧʿ����ޡ��ȡ���ǰ��ʯ�Ʒ�һ�����ϵ񡰰˰�ͼ������������������
�ȡ��Ʒ����̡������ڡ���������ΰ�����վ�տ�������Ͻ���
LONG
	);
	set("outdoors", "xiangyang");
	set("no_clean_up", 0);
        set("coordinates", ([ "x" : 3, "y" : 10 ]) );
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"shanlu2",
]));

	setup();
	replace_program(ROOM);
}