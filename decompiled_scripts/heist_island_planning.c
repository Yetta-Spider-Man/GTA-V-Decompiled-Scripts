#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = -1;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	struct<14> Local_107[6];
	struct<14> Local_192[8];
	struct<14> Local_305[4];
	struct<14> Local_362[5];
	struct<14> Local_433[6];
	struct<14> Local_518[6];
	struct<14> Local_603[4];
	struct<14> Local_660[10];
	struct<14> Local_801[4];
	struct<14> Local_858[6];
	struct<14> Local_943[3];
	struct<9> Local_986[8];
	struct<9> Local_1059[6];
	struct<9> Local_1114[8];
	struct<9> Local_1187[2];
	struct<9> Local_1206[4];
	struct<9> Local_1243[2];
	struct<9> Local_1262[6];
	struct<9> Local_1317[6];
	struct<9> Local_1372[4];
	int iLocal_1409 = 0;
	int iLocal_1410 = 0;
	int iLocal_1411 = 0;
	int iLocal_1412 = 0;
	int iLocal_1413 = 0;
	int iLocal_1414 = 0;
	int iLocal_1415 = 0;
	int iLocal_1416 = 0;
	bool bLocal_1417 = 0;
	int iLocal_1418 = 0;
	bool bLocal_1419 = 0;
	bool bLocal_1420 = 0;
	bool bLocal_1421 = 0;
	int iLocal_1422 = 0;
	int iLocal_1423 = 0;
	int iLocal_1424 = 0;
	int iLocal_1425 = 0;
	int iLocal_1426 = 0;
	int iLocal_1427 = 0;
	int iLocal_1428 = 0;
	int iLocal_1429 = 0;
	int iLocal_1430 = 0;
	int iLocal_1431 = 0;
	int iLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	int iLocal_1437 = 0;
	int iLocal_1438 = 0;
	struct<57> Local_1439 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	struct<16> Local_1505 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_1521 = 0;
	int iLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	struct<7> Local_1525 = { 2, 0, 0, 2, 0, 0, -1 } ;
	var uLocal_1532 = 16;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = 0;
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = 0;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = 0;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = 0;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 0;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	var uLocal_1669 = 0;
	var uLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = 0;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	var uLocal_1679 = 0;
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 0;
	var uLocal_1692 = 0;
	var uLocal_1693 = 0;
	var uLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	var uLocal_1697 = 0;
	var uLocal_1698 = 0;
	int iLocal_1699 = 0;
	var uLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
	var uLocal_1704 = 17;
	var uLocal_1705 = 0;
	var uLocal_1706 = 0;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	var uLocal_1714 = 0;
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	var uLocal_1717 = 0;
	var uLocal_1718 = 0;
	var uLocal_1719 = 0;
	var uLocal_1720 = 0;
	var uLocal_1721 = 0;
	var uLocal_1722 = 17;
	var uLocal_1723 = 0;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	var uLocal_1726 = 0;
	var uLocal_1727 = 0;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
	var uLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	var uLocal_1735 = 0;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 12;
	var uLocal_1747 = 0;
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
	var uLocal_1755 = 0;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
	var uLocal_1759 = 12;
	var uLocal_1760 = 0;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
	var uLocal_1772 = 12;
	var uLocal_1773 = 0;
	var uLocal_1774 = 0;
	var uLocal_1775 = 0;
	var uLocal_1776 = 0;
	var uLocal_1777 = 0;
	var uLocal_1778 = 0;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 9;
	var uLocal_1786 = 0;
	var uLocal_1787 = 0;
	var uLocal_1788 = 0;
	var uLocal_1789 = 0;
	var uLocal_1790 = 0;
	var uLocal_1791 = 0;
	var uLocal_1792 = 0;
	var uLocal_1793 = 0;
	var uLocal_1794 = 0;
	var uLocal_1795 = 9;
	var uLocal_1796 = 0;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = 0;
	var uLocal_1805 = 0;
	var uLocal_1806 = 0;
	var uLocal_1807 = 0;
	var uLocal_1808 = 0;
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = 0;
	var uLocal_1812 = 0;
	var uLocal_1813 = 0;
	int iLocal_1814 = 0;
	var uLocal_1815 = 0;
	float fLocal_1816 = 0f;
	float fLocal_1817 = 0f;
	float fLocal_1818 = 0f;
	float fLocal_1819 = 0f;
	var uLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	float fLocal_1827 = 0f;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	bLocal_1421 = true;
	iLocal_1814 = -1;
	fLocal_1816 = 3f;
	fLocal_1817 = 0f;
	fLocal_1818 = 2f;
	fLocal_1819 = 100f;
	fLocal_1827 = 0.5f;
	StringCopy(&Local_1505, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	Local_1505 = { Local_1505 };
	if (!func_983(&Global_1973525))
	{
		func_971(&Global_1973525);
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		func_970();
		func_965(&Global_1973525);
		switch (func_964())
		{
			case 0:
				if (func_460(&Global_1973525))
				{
					func_458();
					func_457(1);
				}
				break;
			
			case 1:
				func_278(&Global_1973525);
				func_125(&Global_1973525);
				func_1(&Global_1973525);
				break;
			
			case 2:
				func_971(&Global_1973525);
				break;
		}
	}
}

void func_1(var uParam0)
{
	func_79(uParam0);
	func_60(uParam0);
	func_2(uParam0);
}

void func_2(var uParam0)
{
	func_24(uParam0);
	func_3(uParam0);
}

void func_3(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1084 == PLAYER::PLAYER_ID())
	{
		if (((uParam0->f_726.f_5 && !iLocal_1411) && uParam0->f_806 == 1) && !func_16(uParam0, 0))
		{
			if (func_13(PLAYER::PLAYER_ID()))
			{
				if (!func_12("HIP_TOOMANY2"))
				{
					func_11("HIP_TOOMANY2");
				}
			}
			else if (!func_12("HIP_TOOMANY1"))
			{
				func_11("HIP_TOOMANY1");
			}
		}
		else if (func_12("HIP_TOOMANY1") || func_12("HIP_TOOMANY2"))
		{
			HUD::CLEAR_HELP(true);
		}
		if ((BitTest(Local_1525.f_3[(0 / 32)], (0 % 32)) && !func_10()) && !iLocal_1422)
		{
			func_9("HIP_TIPTEXT", -1);
			iLocal_1422 = 1;
		}
		if ((func_8(uParam0->f_806, 2) && !BitTest(uParam0->f_1085, 11)) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			iVar0 = func_7(9510, -1, 0);
			if (!BitTest(iVar0, 15))
			{
				func_9("HIF_FINALEINT", -1);
				MISC::SET_BIT(&iVar0, 15);
				func_4(9510, iVar0, -1, 1, 0);
			}
			MISC::SET_BIT(&(uParam0->f_1085), 11);
		}
	}
}

void func_4(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2822371[iParam0 /*3*/][func_5(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_5(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_6();
		if (iVar1 > -1)
		{
			Global_2822083 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2822083 = 1;
		}
	}
	return iVar0;
}

int func_6()
{
	return Global_1574915;
}

int func_7(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 12581)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2822371[iParam0 /*3*/][func_5(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_8(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			if (iParam0 > 0 && iParam0 <= 29)
			{
				return 1;
			}
			break;
		
		case 1:
			if (iParam0 >= 36 && iParam0 <= 62)
			{
				return 1;
			}
			break;
		
		case 2:
			if (iParam0 >= 63 && iParam0 < 109)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_9(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_10()
{
	if (Global_21285 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_11(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

bool func_12(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_13(int iParam0)
{
	return func_14(iParam0, 1);
}

int func_14(int iParam0, int iParam1)
{
	if (iParam0 != func_15())
	{
		if (Global_1893551[iParam0 /*599*/].f_10 != func_15())
		{
			if (Global_1893551[iParam0 /*599*/].f_10 == iParam0 && Global_1893551[iParam0 /*599*/].f_10.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_15()
{
	return -1;
}

int func_16(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		if (func_20() + 1 > 5)
		{
			return 0;
		}
	}
	else if (func_17(uParam0->f_1084, iParam1))
	{
		return 0;
	}
	return 1;
}

int func_17(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		return func_18(iParam0, func_19(iParam1));
	}
	return 0;
}

int func_18(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975428[iParam0 /*53*/].f_2, iParam1);
	}
	return 0;
}

int func_19(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 7:
			return 1;
		
		case 1:
			return 2;
		
		case 5:
			return 3;
		
		case 2:
			return 4;
		
		case 3:
			return 5;
		
		case 4:
			return 6;
		
		case 6:
			return 7;
		
		case 8:
			return 8;
		
		case 9:
			return 9;
		
		case 10:
			return 10;
		
		case 11:
			return 10;
		
		case 12:
			return 11;
		
		case 13:
			return 12;
		
		case 14:
			return 13;
		
		case 15:
			return 14;
		
		case 16:
			return 15;
		
		default:
	}
	return -1;
}

int func_20()
{
	if (func_23() == func_15())
	{
		return 0;
	}
	return func_21(func_23());
}

int func_21(int iParam0)
{
	if (func_22(iParam0) == func_15())
	{
		return 0;
	}
	return Global_1893551[iParam0 /*599*/].f_10.f_19;
}

int func_22(int iParam0)
{
	if (iParam0 != func_15())
	{
		return Global_1893551[iParam0 /*599*/].f_10;
	}
	return func_15();
}

int func_23()
{
	return Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10;
}

void func_24(var uParam0)
{
	func_49();
	switch (iLocal_1428)
	{
		case 0:
			break;
		
		case 1:
			STREAMING::REQUEST_ANIM_DICT(func_48());
			if (!STREAMING::HAS_ANIM_DICT_LOADED(func_48()))
			{
				return;
			}
			iLocal_1429 = func_47();
			iLocal_1428 = 2;
			break;
		
		case 2:
			TASK::OPEN_SEQUENCE_TASK(&iLocal_1431);
			TASK::TASK_GO_STRAIGHT_TO_COORD(0, func_46(iLocal_1429), 0.5f, 20000, func_45(iLocal_1429), 0.05f);
			TASK::TASK_ACHIEVE_HEADING(0, func_45(iLocal_1429), 0);
			TASK::TASK_PLAY_ANIM(0, func_48(), func_44(), 1.5f, -8f, -1, 262152, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, func_48(), func_43(), 8f, -8f, -1, 262153, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_1431);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_1437, iLocal_1431);
			iLocal_1428 = 3;
			if (!func_42())
			{
				MISC::SET_BIT(&(uParam0->f_1085), 10);
			}
			break;
		
		case 3:
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_1437, func_48(), func_43(), 3) && !func_40(&uLocal_1433, 6000, 0))
			{
				return;
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_1437, func_48(), func_43(), 3))
			{
				PED::PLAY_FACIAL_ANIM(iLocal_1437, func_39(), func_48());
			}
			func_38(&uLocal_1433);
			uParam0->f_726.f_5 = 1;
			func_34(uParam0, 14);
			iLocal_1428 = 4;
			break;
		
		case 4:
			break;
		
		case 5:
			TASK::TASK_PLAY_ANIM(iLocal_1437, func_48(), func_25(), 8f, 1.5f, -1, 262152, 0f, false, false, false);
			if (func_42())
			{
				MISC::CLEAR_BIT(&(uParam0->f_1085), 10);
			}
			uParam0->f_726.f_5 = 0;
			iLocal_1428 = 6;
			break;
		
		case 6:
			if ((!iLocal_1414 && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_1437, func_48(), func_25(), 3)) && !func_40(&uLocal_1433, 6000, 0))
			{
				return;
			}
			if (iLocal_1414)
			{
				TASK::CLEAR_PED_TASKS(iLocal_1437);
			}
			STREAMING::REMOVE_ANIM_DICT(func_48());
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_1431);
			func_38(&uLocal_1433);
			iLocal_1428 = 0;
			iLocal_1414 = 0;
			break;
	}
}

char* func_25()
{
	if (func_26(iLocal_1437))
	{
		return "exit_heeled";
	}
	return "exit_male";
}

int func_26(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar2 = -1;
	iVar3 = -1;
	if (iVar0 == joaat("mp_f_freemode_01"))
	{
		iVar1 = func_32(iParam0, 6);
		if (iVar1 >= 256)
		{
			iVar2 = func_28(iVar0, iVar1, 6, 4);
			iVar3 = func_27(iVar2);
		}
		if (((((((((((((iVar1 >= 0 && iVar1 <= 15) || (iVar1 >= 96 && iVar1 <= 111)) || (iVar1 >= 112 && iVar1 <= 127)) || (iVar1 >= 128 && iVar1 <= 143)) || (iVar1 >= 192 && iVar1 <= 207)) || (iVar1 >= 224 && iVar1 <= 239)) || iVar3 == 0) || iVar3 == 6) || iVar3 == 7) || iVar3 == 8) || iVar3 == 12) || iVar3 == 14) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HIGH_HEELS"), 0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_27(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (iParam0 == 0)
	{
		return iVar0;
	}
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_0"), 0))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_1"), 0))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_2"), 0))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_3"), 0))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_4"), 0))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_5"), 0))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_6"), 0))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_7"), 0))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_8"), 0))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_9"), 0))
	{
		iVar0 = 9;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_10"), 0))
	{
		iVar0 = 10;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_11"), 0))
	{
		iVar0 = 11;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_12"), 0))
	{
		iVar0 = 12;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_13"), 0))
	{
		iVar0 = 13;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_14"), 0))
	{
		iVar0 = 14;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_15"), 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_28(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar17;
	int iVar18;
	struct<2> Var19;
	int iVar36;
	int iVar37;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		FILES::INIT_SHOP_PED_PROP(&Var0);
		iVar17 = (iParam1 - func_31(iParam0));
		if (iVar17 < 0)
		{
			return -1;
		}
		iVar18 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, true, -1, -1);
		if (iVar18 <= iVar17)
		{
			return -1;
		}
		FILES::GET_SHOP_PED_QUERY_PROP(iVar17, &Var0);
		return Var0.f_1;
	}
	else
	{
		FILES::INIT_SHOP_PED_COMPONENT(&Var19);
		iVar36 = (iParam1 - func_29(iParam0, func_30(iParam2)));
		if (iVar36 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_77791.f_26[iParam2] && iParam1 == Global_77791[iParam2]) && Global_77791.f_13[iParam2] != 0)
		{
			return Global_77791.f_13[iParam2];
		}
		iVar37 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, false, -1, func_30(iParam2));
		if (iVar37 <= iVar36)
		{
			return -1;
		}
		FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar36, &Var19);
		Global_77791.f_13[iParam2] = Var19.f_1;
		Global_77791[iParam2] = iParam1;
		Global_77791.f_26[iParam2] = iParam0;
		return Var19.f_1;
	}
	return -1;
}

int func_29(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_30(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

int func_31(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 113;
			break;
		
		case joaat("player_one"):
			return 175;
			break;
		
		case joaat("player_two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 327;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 327;
			break;
	}
	return -99;
}

int func_32(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || PED::IS_PED_INJURED(iParam0))
	{
		return -99;
	}
	iVar0 = func_30(iParam1);
	iVar1 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar0);
	iVar2 = PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar0);
	return func_33(iParam0, iVar1, iVar2, iParam1);
}

int func_33(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_30(iParam3);
	iVar1 = PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, iVar0, iVar3));
		}
		else
		{
			iVar2 = (iVar2 + iParam2);
			return iVar2;
		}
		iVar3++;
	}
	return -99;
}

void func_34(var uParam0, int iParam1)
{
	char* sVar0;
	char* sVar1;
	
	sVar0 = func_37(iParam1);
	sVar1 = func_36(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		if (!func_35(uParam0->f_732.f_6))
		{
			AUDIO::PLAY_SOUND_FROM_COORD(-1, sVar0, uParam0->f_732.f_6, sVar1, false, 0, false);
		}
		else
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, sVar0, sVar1, true);
		}
	}
}

int func_35(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

char* func_36(int iParam0)
{
	return "DLC_HEI4_PLANNING_BOARD_PLANNING_BOARD_SOUNDSET";
}

char* func_37(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "NAV_UP_DOWN";
		
		case 1:
			return "NAV_LEFT_RIGHT";
		
		case 2:
			return "NAV_UP_DOWN_PHOTO_CHANGE";
		
		case 3:
			return "NAV_LEFT_RIGHT_PHOTO_CHANGE";
		
		case 4:
			return "NAV_BLOCKED";
		
		case 5:
			return "SELECT";
		
		case 6:
			return "BACK";
		
		case 7:
			return "ERROR";
		
		case 8:
			return "DRAW_BOARD";
		
		case 9:
			return "DRAW_DESCRIPTION_TEXT";
		
		case 10:
			return "DRAW_TITLE_TEXT";
		
		case 11:
			return "PAY";
		
		case 12:
			return "INCREASE_LOOT_SHARE";
		
		case 13:
			return "DECREASE_LOOT_SHARE";
		
		case 14:
			return "USE";
		
		case 15:
			return "LAUNCH_MISSION";
		
		case 16:
			return "REMOTE_READY";
		
		case 17:
			return "REMOTE_UNREADY";
		
		case 18:
			return "BOOTUP";
		
		case 19:
			return "BACKGROUND";
		
		case 20:
			return "FINALE_AVAILABLE";
		
		case 21:
			return "CHANGE_DISPLAY_LARGE_BOX_DRAW";
		
		case 22:
			return "CHANGE_DISPLAY_SMALL_BOX_DRAW";
		
		default:
	}
	return "";
}

void func_38(var uParam0)
{
	uParam0->f_1 = 0;
}

char* func_39()
{
	if (func_26(iLocal_1437))
	{
		return "idle_heeled_facial";
	}
	return "idle_male_facial";
}

int func_40(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_41(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_41(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

bool func_42()
{
	return BitTest(Global_1973525.f_1085, 10);
}

char* func_43()
{
	if (func_26(iLocal_1437))
	{
		return "idle_heeled";
	}
	return "idle_male";
}

char* func_44()
{
	if (func_26(iLocal_1437))
	{
		return "enter_heeled";
	}
	return "enter_male";
}

float func_45(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 180f;
		
		case 1:
			return 0f;
		
		default:
	}
	return 0f;
}

Vector3 func_46(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1561.054f, 385.9017f, -50.6854f;
		
		case 1:
			return 1561.096f, 383.769f, -50.6854f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_47()
{
	return 0;
}

char* func_48()
{
	if (func_26(iLocal_1437))
	{
		return "anim@scripted@submarine@ig18_sub_screen@heeled@";
	}
	return "anim@scripted@submarine@ig18_sub_screen@male@";
}

void func_49()
{
	if (iLocal_1428 == 0)
	{
		return;
	}
	if (func_59(0))
	{
		func_54(0);
	}
	if (func_53())
	{
		func_52();
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		HUD::DISABLE_FRONTEND_THIS_FRAME();
	}
	if (func_51())
	{
		func_50();
	}
}

void func_50()
{
	if (func_51())
	{
		Global_2703660.f_833.f_16 = 1;
	}
}

int func_51()
{
	if (Global_2703660.f_833.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_52()
{
	Global_75030 = 1;
}

bool func_53()
{
	return Global_75027;
}

void func_54(int iParam0)
{
	if (func_58())
	{
		return;
	}
	if (Global_20144)
	{
		if (func_57())
		{
			func_56(1, 1);
		}
		else
		{
			func_56(0, 0);
		}
	}
	if (Global_19954.f_1 == 10 || Global_19954.f_1 == 9)
	{
		MISC::SET_BIT(&Global_7825, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_21285 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7824, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7824, 30);
	}
	if (!func_55())
	{
		Global_19954.f_1 = 3;
	}
}

int func_55()
{
	if (Global_19954.f_1 == 1 || Global_19954.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_56(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_59(0))
		{
			Global_20144 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_19891);
			}
			Global_19882 = { Global_19900[Global_19899 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19882);
		}
	}
	else if (Global_20144 == 1)
	{
		Global_20144 = 0;
		Global_19882 = { Global_19907[Global_19899 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19891);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19882);
		}
	}
}

bool func_57()
{
	return BitTest(Global_1958928, 5);
}

bool func_58()
{
	return BitTest(Global_1958928, 19);
}

int func_59(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19954.f_1 > 3)
		{
			if (BitTest(Global_7824, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19954.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_60(var uParam0)
{
	if (BitTest(uParam0->f_1085, 0))
	{
		if (BitTest(uParam0->f_1085, 9))
		{
			func_61(&(Global_2714635.f_781), -1, 0, 1, 1);
			MISC::CLEAR_BIT(&(uParam0->f_1085), 5);
			MISC::CLEAR_BIT(&(uParam0->f_1085), 6);
			MISC::CLEAR_BIT(&(uParam0->f_1085), 3);
			MISC::CLEAR_BIT(&(uParam0->f_1085), 4);
			MISC::CLEAR_BIT(&(uParam0->f_1085), 9);
		}
	}
	else if (BitTest(uParam0->f_1085, 9))
	{
		MISC::CLEAR_BIT(&(uParam0->f_1085), 9);
	}
}

void func_61(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if ((iParam1 != 0 && iParam1 != 3) || iParam2 == 1)
	{
		if (CAM::DOES_CAM_EXIST(*uParam0))
		{
			CAM::SET_CAM_ACTIVE(*uParam0, false);
			if (bParam4)
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, true, 0);
			}
			CAM::DESTROY_CAM(*uParam0, false);
			*uParam0 = 0;
			func_78();
			if (func_73())
			{
				STREAMING::CLEAR_FOCUS();
			}
			NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(false);
			if (Global_1574534 == 0 && iParam3 == 1)
			{
				func_65(1, 0);
				func_65(1, 0);
			}
			if (!func_64())
			{
				if (func_63() || func_62())
				{
					if (!Global_2723442.f_7)
					{
						HUD::BUSYSPINNER_OFF();
					}
				}
				else
				{
					HUD::BUSYSPINNER_OFF();
				}
			}
		}
	}
}

bool func_62()
{
	return (MISC::IS_ORBIS_VERSION() || unk_0x807ABE1AB65C24D2());
}

bool func_63()
{
	return (MISC::IS_DURANGO_VERSION() || unk_0xC545AB1CF97ABB34());
}

bool func_64()
{
	return BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_139, 0);
}

void func_65(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		func_70(1, 0, 1);
	}
	else
	{
		func_66(iParam1);
	}
}

void func_66(int iParam0)
{
	func_69();
	if (iParam0 == 0)
	{
		if (LOADINGSCREEN::_LOADINGSCREEN_GET_LOAD_FREEMODE())
		{
			return;
		}
	}
	if (func_68() == 0 || HUD::IS_PAUSE_MENU_ACTIVE())
	{
		func_67(1);
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
	}
}

void func_67(int iParam0)
{
	if (Global_1574631.f_20 != iParam0)
	{
		Global_1574631.f_20 = iParam0;
	}
}

int func_68()
{
	return Global_1574631.f_20;
}

void func_69()
{
	Global_2726794 = 1;
}

void func_70(int iParam0, bool bParam1, bool bParam2)
{
	if (func_71())
	{
		return;
	}
	if ((func_68() == 1 || HUD::IS_PAUSE_MENU_ACTIVE()) || iParam0)
	{
		func_67(0);
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
		if (!bParam1)
		{
			GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
		}
		if (bParam2)
		{
			GRAPHICS::RESET_PAUSED_RENDERPHASES();
		}
	}
}

int func_71()
{
	if (func_72())
	{
		return Global_2725160;
	}
	return 0;
}

int func_72()
{
	if (Global_2725153)
	{
		return Global_2725152;
	}
	return 0;
}

int func_73()
{
	if (func_76(PLAYER::PLAYER_ID(), 0))
	{
		if (Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_769 != func_15())
		{
			if (func_75(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_769, 0, 1))
			{
				if (func_74(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_769, 1, 0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_74(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_15())
	{
		return 0;
	}
	if (BitTest(Global_1853131[iParam0 /*888*/].f_267.f_28, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1853131[iParam0 /*888*/].f_267.f_28, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2689224[iParam0 /*451*/].f_317.f_6 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_75(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2703660.f_3)
				{
					return Global_2703660.f_2;
				}
				else if (Global_2689224[iVar0 /*451*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

bool func_76(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_77(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853131[iParam0 /*888*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_77(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_6();
	}
	if (Global_1575034[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574909[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

void func_78()
{
	MISC::CLEAR_BIT(&Global_2714635, 15);
}

void func_79(var uParam0)
{
	func_123(uParam0);
	if (!func_113(uParam0))
	{
		func_112();
		func_111();
		func_110();
		func_109();
		return;
	}
	if (uParam0->f_1084 == PLAYER::PLAYER_ID())
	{
		if (!func_108())
		{
			func_106(0);
			return;
		}
	}
	else if (!func_105(uParam0))
	{
		if (!func_104(uParam0->f_1084))
		{
			func_106(1);
			return;
		}
	}
	if (func_103(uParam0))
	{
		if (func_102())
		{
			func_101();
		}
		else if (!func_100(uParam0))
		{
			func_97();
		}
		else
		{
			func_83(uParam0);
		}
		return;
	}
	if (func_82())
	{
		func_81(uParam0, 1);
		func_112();
		if (Local_1439.f_2 != 0)
		{
			Stack.Push(uParam0);
			Call_Loc(Local_1439.f_2);
		}
		else
		{
			func_80(uParam0);
		}
	}
}

void func_80(var uParam0)
{
	uParam0->f_726.f_5 = 1;
}

void func_81(var uParam0, int iParam1)
{
	if (uParam0->f_820 != iParam1)
	{
	}
	uParam0->f_820 = iParam1;
}

bool func_82()
{
	char* sVar0;
	
	sVar0 = "NHPG_PROMPT";
	if (Local_1439.f_1 != 0)
	{
		Call_Loc(Local_1439.f_1);
		sVar0 = StackVal;
	}
	if (!func_12(sVar0))
	{
		func_11(sVar0);
	}
	return PAD::IS_CONTROL_JUST_PRESSED(0, 51);
}

void func_83(var uParam0)
{
	char* sVar0;
	
	Call_Loc(Local_1439.f_33.f_5);
	sVar0 = StackVal;
	if (!func_12(sVar0))
	{
		func_11(sVar0);
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(0, 51))
	{
		func_110();
		func_84(uParam0, 0);
		uParam0->f_1090 = 1;
	}
}

void func_84(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (uParam0->f_1092)
		{
			func_85(PLAYER::PLAYER_ID(), 1, 0, 0);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			uParam0->f_1092 = 0;
		}
	}
	else if (!uParam0->f_1092)
	{
		func_85(PLAYER::PLAYER_ID(), 0, 0, 0);
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
		uParam0->f_1092 = 1;
	}
}

void func_85(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (SCRIPT::GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(false);
		}
	}
	if (func_96())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			bVar1 = false;
		}
		if (!func_94())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && (PLAYER::IS_PLAYER_PLAYING(iParam0) || iParam3 == 1))
		{
			if (iParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), false))
			{
				return;
			}
			iVar27 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(true);
				}
				else if (bVar14 || (!func_76(PLAYER::PLAYER_ID(), 0) && !func_93()))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar27, !bVar14, false);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
					}
					Global_2689224[iParam0 /*451*/].f_251 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_90(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_89(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, true, false);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
				{
					if (!bVar21)
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
					}
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar27, true);
				}
				else if (!bVar21)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				PLAYER::_SET_PLAYER_INVINCIBLE_KEEP_RAGDOLL_ENABLED(iParam0, false);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(iVar27) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iVar27))
				{
					PED::FINALIZE_HEAD_BLEND(iVar27);
				}
				PED::SET_PED_CAN_RAGDOLL(iVar27, true);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_88();
					func_87();
				}
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					if (!bVar23)
					{
					}
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				Global_2689224[iParam0 /*451*/].f_252 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2667223.f_2681)
				{
					Global_2667223.f_2681 = 0;
				}
			}
			else
			{
				if (!func_89(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, !bVar15, false);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
					{
						if (!bVar21)
						{
							ENTITY::FREEZE_ENTITY_POSITION(iVar27, bVar16);
						}
						if (!bVar16)
						{
							ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar27, true);
						}
					}
					if (func_86(Global_4718592.f_138376))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, true);
					}
				}
				if (Global_1575030)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, true);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, bVar17);
				if (bVar3)
				{
					if (!PED::IS_PED_FATALLY_INJURED(iVar27) && !PED::IS_PED_IN_ANY_VEHICLE(iVar27, false))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar28);
		}
	}
}

bool func_86(int iParam0)
{
	return iParam0 == 17;
}

void func_87()
{
	struct<3> Var0;
	
	Global_2703660.f_910 = 0;
	Global_2703660.f_911 = 0;
	Global_2703660.f_912 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2703660.f_917 = -1;
	Global_2703660.f_918 = 0;
	Global_2667223.f_2692 = { Var0 };
}

void func_88()
{
	Global_2667223.f_702 = 0;
	Global_2667223.f_2735 = 0;
	Global_2667223.f_515 = 0;
	Global_2667223.f_606 = 0;
	Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_214 = 0;
	Global_2667223.f_2690 = 0;
}

int func_89(int iParam0)
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
	{
		return 1;
	}
	else
	{
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_90(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
	}
	if (bParam0 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (PED::IS_PED_A_PLAYER(iParam1))
			{
				if (!NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (bParam0 == 1)
			{
				func_92();
			}
			else if (!BitTest(Global_2621446.f_67, 1))
			{
				if (BitTest(Global_2621446.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(iVar1, Global_2621446.f_58[iVar1]);
						iVar1++;
					}
				}
				MISC::SET_BIT(&(Global_2621446.f_67), true);
			}
		}
		if (func_76(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, iParam1, true);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, iParam1);
		func_91(joaat("mpply_is_char_spectating"), bParam0);
	}
}

void func_91(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

void func_92()
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
	{
		if (!BitTest(Global_2621446.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2621446.f_58[iVar0] = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
				iVar0++;
			}
			MISC::SET_BIT(&(Global_2621446.f_67), 2);
			MISC::SET_BIT(&(Global_2621446.f_67), false);
		}
	}
}

bool func_93()
{
	return BitTest(Global_2621446, 3);
}

int func_94()
{
	if (func_95() == 0)
	{
		return 1;
	}
	return 0;
}

int func_95()
{
	return Global_1574631.f_18;
}

int func_96()
{
	if (BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_887, 2) && !Global_2715551.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

void func_97()
{
	char* sVar0;
	int iVar1;
	
	if (Local_1439.f_33.f_9 != 0 && Local_1439.f_33.f_3 != 0)
	{
		Call_Loc(Local_1439.f_33.f_9);
		sVar0 = StackVal;
		Call_Loc(Local_1439.f_33.f_3);
		iVar1 = StackVal;
		if (!func_99(sVar0, iVar1))
		{
			func_98(sVar0, iVar1);
		}
	}
}

void func_98(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

bool func_99(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_100(var uParam0)
{
	if (uParam0->f_1084 == PLAYER::PLAYER_ID())
	{
		Stack.Push(Local_1439.f_33.f_3 != 0);
		Call_Loc(Local_1439.f_33.f_3);
		if (StackVal && MONEY::NETWORK_CAN_SPEND_MONEY(StackVal, false, true, false, -1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_101()
{
	if (Local_1439.f_33.f_7 != 0)
	{
		Call_Loc(Local_1439.f_33.f_7);
		if (!func_12(StackVal))
		{
			Call_Loc(Local_1439.f_33.f_7);
			func_11(StackVal);
		}
	}
}

int func_102()
{
	if (Local_1439.f_33.f_6 != 0)
	{
		Call_Loc(Local_1439.f_33.f_6);
		return StackVal;
	}
	return 0;
}

int func_103(var uParam0)
{
	if (uParam0->f_1084 == PLAYER::PLAYER_ID())
	{
		Call_Loc(Local_1439.f_33.f_2);
		Call_Loc(Local_1439.f_33);
		if (StackVal && !StackVal)
		{
			return 1;
		}
	}
	return 0;
}

int func_104(int iParam0)
{
	if (iParam0 != func_15())
	{
		if (Global_1893551[iParam0 /*599*/].f_10 != func_15())
		{
			return Global_1893551[iParam0 /*599*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_105(var uParam0)
{
	switch (uParam0->f_1082)
	{
		case 0:
		case 1:
			return 1;
		
		default:
	}
	return 0;
}

void func_106(int iParam0)
{
	char* sVar0;
	
	sVar0 = func_107(iParam0);
	func_9(sVar0, -1);
}

char* func_107(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	if (Local_1439.f_30 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1439.f_30);
		sVar0 = StackVal;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return sVar0;
	}
	switch (iParam0)
	{
		case 0:
			return "NHPG_HELP_BBOSS";
		
		case 1:
			return "NHPG_HELP_BGOON";
		
		default:
	}
	return sVar0;
}

bool func_108()
{
	return func_104(PLAYER::PLAYER_ID());
}

void func_109()
{
	if (Local_1439.f_33.f_9 != 0 && Local_1439.f_33.f_3 != 0)
	{
		Call_Loc(Local_1439.f_33.f_9);
		Call_Loc(Local_1439.f_33.f_3);
		if (func_99(StackVal, StackVal))
		{
			HUD::CLEAR_HELP(true);
		}
	}
}

void func_110()
{
	if (Local_1439.f_33.f_5 != 0)
	{
		Call_Loc(Local_1439.f_33.f_5);
		if (func_12(StackVal))
		{
			HUD::CLEAR_HELP(true);
		}
	}
}

void func_111()
{
	if (Local_1439.f_33.f_7 != 0)
	{
		Call_Loc(Local_1439.f_33.f_7);
		if (func_12(StackVal))
		{
			HUD::CLEAR_HELP(true);
		}
	}
}

void func_112()
{
	char* sVar0;
	
	sVar0 = "NHPG_PROMPT";
	if (Local_1439.f_1 != 0)
	{
		Call_Loc(Local_1439.f_1);
		sVar0 = StackVal;
	}
	if (func_12(sVar0))
	{
		HUD::CLEAR_HELP(true);
	}
}

int func_113(var uParam0)
{
	if (uParam0->f_1090 > 0)
	{
		return 0;
	}
	if (uParam0->f_1084 != -1 && Global_1974627[uParam0->f_1084 /*25*/].f_23)
	{
		return 0;
	}
	if (!func_75(PLAYER::PLAYER_ID(), 1, 1))
	{
		return 0;
	}
	if (func_105(uParam0) && uParam0->f_1084 != PLAYER::PLAYER_ID())
	{
		return 0;
	}
	if (BitTest(uParam0->f_1085, 2))
	{
		return 0;
	}
	if (BitTest(uParam0->f_1085, 3) || BitTest(uParam0->f_1085, 4))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (!func_122(PLAYER::PLAYER_ID(), 2))
	{
		return 0;
	}
	if (func_121())
	{
		return 0;
	}
	if (func_53())
	{
		return 0;
	}
	if (func_120(PLAYER::PLAYER_ID(), 0) && func_119(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (uParam0->f_726 != 3)
	{
		return 0;
	}
	if (func_118())
	{
		return 0;
	}
	if (func_117())
	{
		return 0;
	}
	if (func_116())
	{
		return 0;
	}
	if (func_115() == 2 || func_115() == 16)
	{
		return 0;
	}
	if (func_59(0))
	{
		return 0;
	}
	if (Local_1439.f_0 != 0)
	{
		Call_Loc(Local_1439.f_0);
		if (!StackVal)
		{
			return 0;
		}
	}
	if (func_114())
	{
		return 0;
	}
	return 1;
}

int func_114()
{
	if (func_12("H4PREP_UNVLB"))
	{
		return 1;
	}
	return 0;
}

int func_115()
{
	return Global_1057409;
}

bool func_116()
{
	return Global_2714635.f_692;
}

bool func_117()
{
	return Global_2714635.f_691;
}

bool func_118()
{
	return Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_192 != 0;
}

bool func_119(int iParam0)
{
	return func_122(iParam0, 20);
}

int func_120(int iParam0, int iParam1)
{
	if (Global_1893551[iParam0 /*599*/].f_10.f_33 != -1 || (iParam1 && Global_1893551[iParam0 /*599*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_121()
{
	bool bVar0;
	
	bVar0 = ((PAD::IS_CONTROL_PRESSED(2, 199) || PAD::IS_CONTROL_JUST_PRESSED(2, 199)) || PAD::IS_CONTROL_JUST_RELEASED(2, 199));
	if (bVar0)
	{
		iLocal_1522 = 1;
		return 1;
	}
	else if (iLocal_1522)
	{
		if (func_40(&uLocal_1523, 1000, 0))
		{
			func_38(&uLocal_1523);
			iLocal_1522 = 0;
			return 0;
		}
		return 1;
	}
	return 0;
}

bool func_122(int iParam0, int iParam1)
{
	return BitTest(Global_1893551[iParam0 /*599*/].f_10.f_4, iParam1);
}

void func_123(var uParam0)
{
	bool bVar0;
	
	switch (uParam0->f_1090)
	{
		case 0:
			break;
		
		case 1:
			if (func_124(uParam0, 0, &bVar0))
			{
				if (bVar0)
				{
					uParam0->f_1090 = 2;
				}
				else
				{
					uParam0->f_1090 = 0;
				}
				func_84(uParam0, 1);
			}
			break;
		
		case 2:
			Call_Loc(Local_1439.f_33.f_8);
			if (StackVal)
			{
				uParam0->f_1090 = 3;
			}
			break;
		
		case 3:
			Call_Loc(Local_1439.f_33);
			if (!StackVal)
			{
				Call_Loc(Local_1439.f_33.f_1);
				uParam0->f_1090 = 4;
			}
			else
			{
				uParam0->f_1090 = 4;
			}
			break;
		
		case 4:
			if (Local_1439.f_2 != 0)
			{
				Stack.Push(uParam0);
				Call_Loc(Local_1439.f_2);
			}
			else
			{
				func_80(uParam0);
			}
			uParam0->f_1090 = 0;
			break;
	}
}

int func_124(var uParam0, int iParam1, var uParam2)
{
	char cVar0[64];
	char cVar16[64];
	char cVar32[64];
	char cVar48[64];
	char cVar64[64];
	bool bVar80;
	int iVar81;
	int iVar82;
	
	bVar80 = false;
	iVar82 = 36;
	StringCopy(&cVar0, "HPWARN_CONF", 64);
	switch (iParam1)
	{
		case 0:
			Call_Loc(Local_1439.f_33.f_4);
			cVar16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
			StringCopy(&cVar64, "HEIST_WARN_2", 64);
			bVar80 = true;
			Call_Loc(Local_1439.f_33.f_3);
			iVar81 = StackVal;
			break;
		
		case 1:
			StringCopy(&cVar0, "FM_CSC_QUIT", 64);
			StringCopy(&cVar16, "FM_CSC_QUIT1", 64);
			break;
		
		case 2:
			if (Local_1439.f_56 != 0)
			{
				Stack.Push(uParam0);
				Call_Loc(Local_1439.f_56);
				StringCopy(&cVar0, StackVal, 64);
			}
			if (Local_1439.f_56.f_1 != 0)
			{
				Stack.Push(uParam0);
				Call_Loc(Local_1439.f_56.f_1);
				StringCopy(&cVar16, StackVal, 64);
			}
			if (Local_1439.f_56.f_2 != 0)
			{
				Stack.Push(uParam0);
				Call_Loc(Local_1439.f_56.f_2);
				iVar82 = StackVal;
			}
			if (Local_1439.f_56.f_3 != 0)
			{
				Stack.Push(uParam0);
				Call_Loc(Local_1439.f_56.f_3);
				StringCopy(&cVar64, StackVal, 64);
			}
			if (Local_1439.f_56.f_4 != 0)
			{
				Stack.Push(uParam0);
				Call_Loc(Local_1439.f_56.f_4);
				bVar80 = StackVal;
			}
			if (Local_1439.f_56.f_5 != 0)
			{
				Stack.Push(uParam0);
				Call_Loc(Local_1439.f_56.f_5);
				iVar81 = StackVal;
			}
			if (Local_1439.f_56.f_6 != 0)
			{
				Stack.Push(uParam0);
				Call_Loc(Local_1439.f_56.f_6);
				StringCopy(&cVar32, StackVal, 64);
			}
			if (Local_1439.f_56.f_7 != 0)
			{
				Stack.Push(uParam0);
				Call_Loc(Local_1439.f_56.f_7);
				StringCopy(&cVar48, StackVal, 64);
			}
			break;
	}
	HUD::SET_WARNING_MESSAGE_WITH_HEADER(&cVar0, &cVar16, iVar82, &cVar64, bVar80, iVar81, &cVar32, &cVar48, true, 0);
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		HUD::_SET_MOUSE_CURSOR_SPRITE(1);
	}
	if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 202) || PAD::IS_CONTROL_JUST_RELEASED(2, 202))
	{
		*uParam2 = 0;
		return 1;
	}
	if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 201) || PAD::IS_CONTROL_JUST_RELEASED(2, 201))
	{
		*uParam2 = 1;
		return 1;
	}
	return 0;
}

void func_125(var uParam0)
{
	if (BitTest(uParam0->f_1085, 3) && !BitTest(uParam0->f_1085, 4))
	{
		if (uParam0->f_1084 == PLAYER::PLAYER_ID())
		{
			if (func_277() || func_276())
			{
				func_275();
			}
			else if (!BitTest(uParam0->f_1085, 4))
			{
				if (func_126(uParam0))
				{
					MISC::SET_BIT(&(uParam0->f_1085), 4);
					MISC::SET_BIT(&(uParam0->f_1085), 5);
				}
			}
		}
	}
	else if (BitTest(uParam0->f_1085, 5))
	{
		if (!BitTest(uParam0->f_1085, 6))
		{
			MISC::SET_BIT(&(uParam0->f_1085), 6);
			func_65(0, 0);
			func_65(0, 0);
		}
		MISC::CLEAR_BIT(&(uParam0->f_1085), 5);
	}
}

int func_126(var uParam0)
{
	int iVar0;
	struct<6> Var1;
	int iVar7;
	var uVar8;
	var uVar9;
	int iVar12;
	struct<3> Var13;
	
	if (Local_1439.f_32 == 0)
	{
		return 0;
	}
	Stack.Push(uParam0);
	Call_Loc(Local_1439.f_32);
	iVar0 = StackVal;
	if (iVar0 == -1)
	{
		return 0;
	}
	Var1 = { Global_794709.f_4[iVar0 /*88*/] };
	iVar7 = Global_794709.f_4[iVar0 /*88*/].f_65;
	uVar8 = Global_794709.f_4[iVar0 /*88*/].f_71;
	func_216(func_217(PLAYER::PLAYER_ID()));
	func_85(PLAYER::PLAYER_ID(), 0, 376832, 0);
	Global_2715551.f_3830 = 1;
	func_215(PLAYER::PLAYER_ID(), 0);
	func_214();
	func_213();
	switch (uParam0->f_1082)
	{
		case 0:
			iVar7 = 260;
			func_212(67);
			func_211();
			func_210();
			break;
		
		case 1:
			iVar7 = 274;
			func_212(69);
			func_209();
			func_208();
			break;
	}
	if (func_277() || func_207())
	{
		func_275();
	}
	else
	{
		Global_1946941.f_497 = 1;
		func_206(iVar7);
		if (func_20() <= 3)
		{
			func_205();
		}
		func_202(func_204(PLAYER::PLAYER_ID()));
		func_200(&Var1);
		func_199(uVar8);
		func_198();
		func_196();
		func_195();
		func_78();
		func_194();
		Var13 = { 0f, 0f, 0f };
		func_127(&(Global_2714635.f_781), 0, 0, Var13, &uVar9, Var13, 1, 0, &uVar9, &iVar12, iVar12, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0);
		func_65(0, 0);
		Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_95 = 8;
		return 1;
	}
	return 0;
}

void func_127(var uParam0, int iParam1, int iParam2, struct<3> Param3, var uParam6, struct<3> Param7, bool bParam10, bool bParam11, var uParam12, var uParam13, int iParam14, bool bParam15, int iParam16, int iParam17, int iParam18, bool bParam19, int iParam20, bool bParam21, bool bParam22, bool bParam23, int iParam24, int iParam25, bool bParam26)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	bool bVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	struct<3> Var11;
	
	func_61(uParam0, iParam1, 1, iParam14, 1);
	if (func_76(PLAYER::PLAYER_ID(), 0))
	{
		if (bParam11)
		{
			if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				if (!func_193() || bParam15)
				{
					func_182(0);
				}
			}
			return;
		}
	}
	if (!CAM::DOES_CAM_EXIST(*uParam0))
	{
		*uParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
	}
	Var3 = { Param7 };
	fVar6 = -1f;
	bVar7 = false;
	fVar8 = 0.2f;
	iVar9 = 1;
	if (func_181(iParam1))
	{
		*uParam6 = { func_180(iParam1, iParam2) };
		Var3 = { func_179(iParam1, iParam2) };
		fVar6 = func_178(iParam1, iParam2);
	}
	if (!func_35(*uParam6))
	{
		Var0 = { *uParam6 };
	}
	if (func_35(Var0))
	{
		if (!bParam10)
		{
			Var0 = { Param3 };
			if (INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Var0.f_0, Var0.f_1, (Var0.f_2 + 1f)))
			{
			}
			else
			{
				Var0.f_2 = (Var0.f_2 + 4f);
			}
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_35(Var0))
		{
			if (func_76(PLAYER::PLAYER_ID(), 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(func_175()) && !ENTITY::IS_ENTITY_DEAD(func_175(), false))
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(func_175(), true) };
					Var3 = { 0f, 0f, ENTITY::GET_ENTITY_HEADING(func_175()) };
					if (func_74(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_769, 1, 0))
					{
						Var0 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
						Var3 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
					}
				}
				else
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
					Var3 = { 0f, 0f, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) };
				}
			}
			else
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				Var3 = { 0f, 0f, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) };
			}
			if ((func_174(PLAYER::PLAYER_ID()) || func_172(PLAYER::PLAYER_ID())) && func_171())
			{
				Var0.f_2 = (Var0.f_2 + 1.5f);
			}
			else if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
			{
				if (func_174(PLAYER::PLAYER_ID()))
				{
					Var0.f_2 = (Var0.f_2 + 0.4f);
				}
				else
				{
					Var0.f_2 = (Var0.f_2 + 1.5f);
				}
			}
			else
			{
				Var0.f_2 = (Var0.f_2 + 4f);
			}
		}
	}
	if (bParam19)
	{
		Var0 = { 1124.745f, 263.6554f, -48.8552f };
		Var3 = { -22.4617f, 0f, -75.8431f };
		fVar6 = 50f;
	}
	else if (func_170(Global_4718592.f_87009) || iParam18)
	{
		if (func_169(PLAYER::PLAYER_ID()))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			Var3 = { 0f, 0f, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) };
			Var0.f_2 = (Var0.f_2 + 0.4f);
			fVar6 = CAM::GET_FINAL_RENDERED_CAM_FOV();
		}
		else
		{
			Var0 = { -194.2056f, -1853.75f, 70.3345f };
			Var3 = { -10.0011f, 0f, 131.0271f };
			fVar6 = 42.6052f;
		}
	}
	else if (func_168(Global_4718592.f_87009) || iParam17)
	{
		Var0 = { 347.2638f, 4867.324f, -59.2679f };
		Var3 = { 1.2933f, 0.0747f, -34.6934f };
		fVar6 = 50f;
	}
	else if (iParam20 || func_167(Global_4718592.f_87009))
	{
		Var0 = { 2709.332f, -366.5988f, -52.2786f };
		Var3 = { -19.962f, 0f, -121.3927f };
		fVar6 = 56.6574f;
	}
	else if (bParam21)
	{
		iVar10 = func_166(PLAYER::PLAYER_ID());
		Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_165(iVar10), func_164(iVar10), 3.5688f, 7.9792f, 4.1641f) };
		Var3 = { -21.6791f, 0f, (func_164(iVar10) + 40.237f) };
		fVar6 = 70f;
	}
	else if (bParam22 || func_163())
	{
		if (bParam22)
		{
			Var0 = { Global_1973525.f_1073 };
			Var3 = { Global_1973525.f_1073.f_3 };
			fVar6 = Global_1973525.f_1073.f_6;
		}
		else
		{
			func_160(&Var0, &Var3, &fVar6);
		}
	}
	else if (bParam23)
	{
		Var0 = { -1381.784f, 38.8164f, 63.1614f };
		Var3 = { -19.0288f, 0f, -35.2577f };
		fVar6 = 50f;
	}
	else if (iParam24 || func_159(Global_4718592.f_87009))
	{
	}
	else if (iParam25 || (func_157() && func_156(249)))
	{
		Var0 = { -822.1176f, -198.5518f, 40.085f };
		Var3 = { 13.7424f, 0f, 145.7582f };
		fVar6 = 65.2994f;
		bVar7 = true;
		if (!func_116())
		{
			iVar9 = 0;
		}
	}
	else if (bParam26)
	{
	}
	if (func_193() && !bParam15)
	{
		Var0 = { -213.5595f, 316.9778f, 96.9244f };
		Var3 = { -1.0483f, 0f, -127.3989f };
		fVar6 = 25.5102f;
	}
	if (iParam1 == 0 && bParam11)
	{
		func_150();
		func_149(&Var11, 144, Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_30);
		if (!func_35(Var11))
		{
			Var0 = { Var11 };
		}
		func_143(&Var11, 144, Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_30);
		Var3 = { Var11 };
	}
	CAM::SET_CAM_ACTIVE(*uParam0, true);
	CAM::SET_CAM_COORD(*uParam0, Var0);
	CAM::SET_CAM_ROT(*uParam0, Var3, 2);
	if (fVar6 > 0f)
	{
		CAM::SET_CAM_FOV(*uParam0, fVar6);
	}
	else
	{
		CAM::SET_CAM_FOV(*uParam0, 40f);
	}
	if (bVar7)
	{
		CAM::SHAKE_CAM(*uParam0, "HAND_SHAKE", fVar8);
	}
	if (func_193() && !bParam15)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!func_142(PLAYER::PLAYER_ID()))
			{
				func_85(PLAYER::PLAYER_ID(), 0, 4, 0);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -209.434f, 305.016f, 95.9464f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 12.5f);
				TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), -209.867f, 306.969f, 95.9464f, 1f, 20000, 40000f, 0.1f);
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, false);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
			}
		}
		MISC::CLEAR_AREA_OF_VEHICLES(-209.434f, 305.016f, 95.9464f, 30f, false, false, false, false, false, false, 0);
		func_141(1);
	}
	if (iVar9 && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!func_193() || bParam15)
		{
			func_182(0);
		}
	}
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	if ((((!func_140() && !func_139()) && !func_138()) && !func_137()) && !func_136())
	{
		func_135(0);
	}
	if (func_73())
	{
		STREAMING::CLEAR_FOCUS();
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		*uParam12 = { Var0 };
		*uParam13 = 1;
	}
	else
	{
		func_134(Var0);
	}
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
	func_128(func_193(), ((iParam16 || iParam17) || iParam18));
}

void func_128(bool bParam0, bool bParam1)
{
	if (func_76(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	if (!bParam1 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
			}
		}
	}
	if (!bParam0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (func_131())
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
			if (func_130(PLAYER::PLAYER_ID()))
			{
				func_85(PLAYER::PLAYER_ID(), 0, 32768, 0);
			}
			else if (func_129())
			{
				func_85(PLAYER::PLAYER_ID(), 0, 32772, 0);
			}
			else if (!bParam1)
			{
				func_85(PLAYER::PLAYER_ID(), 0, 319492, 0);
			}
		}
		else
		{
			func_85(PLAYER::PLAYER_ID(), 0, 57348, 0);
		}
	}
}

bool func_129()
{
	return Global_2715551.f_6300;
}

int func_130(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1890190[iParam0 /*105*/].f_29, 31);
	}
	return 0;
}

int func_131()
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (func_133(iVar0, 1) && !func_132(iVar0, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_132(int iParam0, bool bParam1)
{
	if (Global_77858)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
			{
				if (DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle") == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_133(int iParam0, bool bParam1)
{
	if (Global_77858)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_134(struct<3> Param0)
{
	if (!func_73())
	{
		return;
	}
	STREAMING::SET_FOCUS_POS_AND_VEL(Param0, 0f, 0f, 0f);
	NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(true);
}

void func_135(int iParam0)
{
	if (func_71())
	{
		return;
	}
	if (BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_887, 2) && !Global_2715551.f_2846.f_216 == -1)
	{
		return;
	}
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(iParam0);
	}
}

bool func_136()
{
	return BitTest(Global_2714635.f_3, 17);
}

bool func_137()
{
	return BitTest(Global_2714635.f_3, 14);
}

bool func_138()
{
	return BitTest(Global_2714635.f_3, 12);
}

bool func_139()
{
	return BitTest(Global_2714635.f_3, 9);
}

bool func_140()
{
	return BitTest(Global_2714635.f_3, 6);
}

void func_141(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_143), 27);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_143), 27);
	}
}

bool func_142(int iParam0)
{
	return BitTest(Global_1853131[iParam0 /*888*/].f_143, 27);
}

int func_143(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	switch (iParam2)
	{
		case default:
			return 0;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			func_144(iParam2, iParam1, &Var0, -1, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			func_144(iParam2, iParam1, &Var0, 61, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
		
		case 83:
		case 84:
		case 85:
			func_144(iParam2, iParam1, &Var0, 83, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
		
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
		case 81:
		case 82:
			func_144(iParam2, iParam1, &Var0, 77, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
		
		case 73:
		case 74:
		case 75:
		case 76:
			func_144(iParam2, iParam1, &Var0, 73, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
		
		case 87:
		case 88:
		case 89:
		case 90:
			func_144(iParam2, iParam1, &Var0, 88, 0);
			*uParam0 = { Var0.f_3 };
			return 1;
			return 0;
	}
}

void func_144(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<6> Var0[2];
	struct<3> Var13;
	
	Var0[0 /*6*/] = { func_148(iParam3, bParam4) };
	Var0[1 /*6*/] = { func_148(iParam0, bParam4) };
	*uParam2 = { func_146(iParam1, iParam3) };
	Var13 = { *uParam2 - Var0[0 /*6*/] };
	Var13 = { func_145(Var13, -Var0[0 /*6*/].f_3.f_2) };
	Var13 = { func_145(Var13, Var0[1 /*6*/].f_3.f_2) };
	*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0[1 /*6*/], 0f, Var13) };
	switch (iParam1)
	{
		case 6:
		case 2:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 34:
		case 35:
		case 36:
		case 38:
		case 39:
		case 120:
		case 121:
		case 125:
		case 40:
		case 41:
		case 43:
		case 44:
		case 45:
		case 42:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 64:
		case 65:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 67:
		case 68:
		case 109:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
		case 81:
		case 82:
		case 83:
		case 85:
		case 84:
		case 89:
		case 90:
		case 91:
		case 92:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 93:
		case 99:
		case 100:
		case 106:
		case 107:
		case 108:
		case 119:
		case 122:
		case 123:
		case 124:
		case 138:
		case 139:
		case 140:
		case 130:
		case 128:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 148:
		case 153:
		case 154:
		case 155:
		case 157:
		case 234:
		case 174:
		case 175:
		case 176:
		case 177:
		case 178:
		case 179:
		case 180:
		case 235:
		case 149:
		case 150:
		case 151:
		case 152:
		case 172:
		case 187:
		case 173:
		case 201:
		case 188:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 196:
		case 197:
		case 198:
		case 199:
		case 200:
		case 284:
		case 285:
		case 286:
		case 287:
		case 202:
		case 203:
		case 204:
		case 205:
		case 206:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
		case 212:
		case 213:
		case 214:
		case 216:
		case 217:
		case 182:
		case 183:
		case 181:
		case 156:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 243:
		case 244:
		case 245:
		case 246:
		case 247:
		case 248:
		case 249:
		case 250:
		case 251:
		case 252:
		case 253:
		case 254:
		case 255:
		case 256:
		case 257:
		case 258:
		case 259:
		case 260:
		case 261:
		case 262:
		case 263:
		case 264:
		case 265:
		case 266:
		case 267:
		case 268:
		case 269:
		case 270:
		case 271:
		case 272:
		case 273:
		case 274:
		case 275:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 278:
		case 279:
		case 280:
		case 281:
		case 282:
		case 283:
		case 300:
		case 301:
		case 302:
		case 303:
		case 304:
		case 306:
		case 305:
		case 308:
		case 309:
		case 312:
		case 313:
		case 314:
		case 315:
		case 316:
		case 317:
		case 318:
		case 319:
		case 320:
		case 321:
		case 322:
		case 323:
		case 324:
		case 325:
		case 326:
		case 327:
		case 328:
		case 329:
		case 307:
		case 331:
		case 332:
		case 333:
		case 334:
		case 310:
		case 335:
		case 336:
		case 337:
		case 338:
		case 339:
		case 311:
		case 340:
		case 435:
		case 436:
		case 437:
		case 470:
		case 477:
		case 504:
		case 507:
		case 510:
		case 513:
		case 528:
		case 531:
		case 534:
		case 537:
		case 540:
		case 547:
		case 445:
		case 446:
		case 447:
		case 448:
		case 449:
		case 450:
		case 471:
		case 472:
		case 478:
		case 479:
		case 505:
		case 506:
		case 508:
		case 509:
		case 511:
		case 512:
		case 514:
		case 515:
		case 529:
		case 530:
		case 532:
		case 533:
		case 535:
		case 536:
		case 538:
		case 539:
		case 541:
		case 542:
		case 548:
		case 549:
		case 432:
		case 433:
		case 434:
		case 451:
		case 452:
		case 453:
		case 454:
		case 455:
		case 456:
		case 459:
		case 460:
		case 461:
		case 462:
		case 463:
		case 464:
		case 560:
		case 546:
		case 587:
		case 588:
		case 589:
		case 590:
		case 591:
		case 592:
		case 501:
		case 502:
		case 500:
		case 616:
		case 615:
		case 612:
		case 629:
		case 630:
		case 631:
		case 714:
		case 633:
		case 634:
		case 635:
		case 636:
		case 637:
		case 638:
		case 639:
		case 640:
		case 643:
		case 644:
		case 641:
		case 642:
		case 646:
		case 645:
		case 647:
		case 648:
		case 649:
		case 650:
		case 666:
		case 667:
		case 668:
		case 669:
		case 670:
		case 671:
		case 673:
		case 674:
		case 675:
		case 676:
		case 677:
		case 689:
		case 690:
		case 691:
		case 692:
		case 693:
		case 694:
		case 695:
		case 696:
		case 697:
		case 698:
		case 699:
		case 700:
		case 701:
		case 702:
		case 703:
		case 704:
		case 705:
		case 706:
		case 707:
		case 708:
		case 709:
		case 710:
		case 711:
		case 712:
		case 713:
		case 632:
		case 738:
		case 739:
		case 740:
		case 741:
		case 742:
		case 743:
		case 744:
		case 745:
		case 746:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 715:
		case 716:
		case 717:
		case 718:
		case 719:
		case 720:
		case 721:
		case 722:
		case 723:
		case 724:
		case 725:
		case 726:
		case 727:
		case 728:
		case 729:
		case 730:
		case 731:
		case 732:
		case 733:
		case 734:
		case 735:
		case 736:
		case 737:
		case 747:
		case 748:
		case 749:
		case 750:
		case 751:
		case 752:
		case 753:
		case 754:
		case 755:
		case 756:
		case 757:
		case 758:
		case 759:
		case 760:
		case 761:
		case 762:
		case 763:
		case 764:
		case 765:
		case 766:
		case 767:
		case 768:
		case 769:
		case 770:
		case 771:
		case 772:
		case 773:
		case 774:
		case 775:
		case 776:
		case 777:
		case 778:
		case 779:
		case 780:
		case 781:
		case 782:
		case 783:
		case 784:
		case 785:
		case 786:
		case 787:
		case 788:
		case 789:
		case 790:
		case 791:
		case 792:
		case 793:
		case 794:
		case 795:
		case 796:
		case 797:
		case 798:
		case 799:
		case 800:
		case 802:
		case 801:
		case 803:
		case 804:
		case 805:
		case 806:
		case 807:
		case 808:
		case 809:
		case 678:
		case 679:
		case 680:
		case 681:
		case 682:
		case 683:
		case 684:
		case 685:
		case 810:
		case 811:
		case 812:
		case 813:
		case 814:
		case 815:
		case 817:
		case 816:
		case 819:
		case 818:
		case 820:
		case 821:
		case 822:
		case 823:
		case 824:
		case 825:
		case 826:
		case 827:
		case 828:
		case 829:
		case 830:
		case 831:
		case 832:
		case 833:
		case 834:
		case 835:
		case 836:
		case 837:
		case 838:
		case 839:
		case 840:
		case 841:
		case 842:
		case 843:
		case 844:
		case 845:
		case 846:
		case 847:
		case 848:
		case 849:
		case 850:
		case 851:
		case 852:
		case 853:
		case 854:
		case 855:
		case 856:
		case 686:
		case 687:
		case 688:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 857:
		case 858:
		case 859:
		case 860:
		case 861:
		case 862:
		case 863:
		case 864:
		case 865:
		case 866:
		case 867:
		case 868:
		case 869:
		case 870:
		case 871:
		case 872:
		case 873:
		case 874:
		case 875:
		case 876:
		case 877:
		case 878:
		case 879:
		case 880:
		case 881:
		case 882:
		case 883:
		case 884:
		case 888:
		case 889:
		case 890:
		case 891:
		case 651:
		case 652:
		case 653:
		case 654:
		case 655:
		case 656:
		case 657:
		case 658:
		case 659:
		case 660:
		case 661:
		case 662:
		case 663:
		case 664:
		case 665:
		case 887:
		case 894:
		case 895:
		case 896:
		case 897:
		case 898:
		case 899:
		case 900:
		case 901:
		case 902:
		case 903:
		case 904:
		case 905:
		case 906:
		case 907:
		case 908:
		case 911:
		case 913:
		case 914:
		case 915:
		case 916:
		case 917:
		case 918:
		case 919:
		case 920:
		case 921:
		case 922:
		case 923:
		case 924:
		case 925:
		case 926:
		case 927:
		case 928:
		case 929:
		case 930:
		case 931:
		case 932:
		case 954:
		case 955:
		case 956:
		case 957:
		case 958:
		case 959:
		case 968:
		case 969:
		case 970:
		case 973:
		case 974:
		case 975:
		case 976:
		case 977:
		case 978:
		case 979:
		case 980:
		case 981:
		case 982:
		case 983:
		case 984:
		case 985:
		case 986:
		case 987:
		case 988:
		case 989:
		case 990:
		case 1008:
		case 1009:
		case 1010:
		case 991:
		case 992:
		case 993:
		case 994:
		case 995:
		case 996:
		case 997:
		case 998:
		case 999:
		case 960:
		case 961:
		case 962:
		case 963:
		case 964:
		case 965:
		case 966:
		case 967:
		case 1000:
		case 1001:
		case 1002:
		case 1003:
		case 1004:
		case 1005:
		case 1006:
		case 1007:
		case 1011:
		case 1012:
		case 1013:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
}

Vector3 func_145(struct<3> Param0, float fParam3)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	
	fVar3 = SYSTEM::SIN(fParam3);
	fVar4 = SYSTEM::COS(fParam3);
	Var0.f_0 = ((Param0.f_0 * fVar4) - (Param0.f_1 * fVar3));
	Var0.f_1 = ((Param0.f_0 * fVar3) + (Param0.f_1 * fVar4));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

struct<6> func_146(int iParam0, int iParam1)
{
	struct<6> Var0;
	bool bVar6;
	int iVar23;
	
	iVar23 = 0;
	if (func_147(iParam1, &bVar6))
	{
		iVar23 = 1;
	}
	if (iVar23 && MISC::_GET_BASE_ELEMENT_METADATA(&Var0, &(Var0.f_3), iParam0, bVar6))
	{
		return Var0;
	}
	return Var0;
}

int func_147(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case -1:
		case 1:
			*uParam1 = 0;
			StringCopy(&(uParam1->f_1), "BaseElementLocationsMap", 64);
			return 1;
			break;
		
		case 61:
			*uParam1 = 1;
			StringCopy(&(uParam1->f_1), "BaseElementLocationsMap_HighApt", 64);
			return 1;
			break;
		
		case 73:
			*uParam1 = 2;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap1", 64);
			return 1;
			break;
		
		case 77:
			*uParam1 = 3;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap2", 64);
			return 1;
			break;
		
		case 83:
			*uParam1 = 4;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap3", 64);
			return 1;
			break;
		
		case 86:
			*uParam1 = 5;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap4", 64);
			return 1;
			break;
		
		case 88:
			*uParam1 = 6;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap5", 64);
			return 1;
			break;
		
		case 91:
			*uParam1 = 7;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap6", 64);
			return 1;
			break;
		
		case 97:
			*uParam1 = 8;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap7", 64);
			return 1;
			break;
		
		case 109:
			*uParam1 = 9;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap8", 64);
			return 1;
			break;
	}
	return 0;
}

struct<6> func_148(int iParam0, bool bParam1)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761.0982f, 317.6259f, 169.5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 61:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471.882f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471.882f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		
		case 36:
			Var0 = { -913.0385f, -438.4284f, 114.3997f };
			Var0.f_3 = { 0f, 0f, -153.3093f };
			break;
		
		case 37:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		
		case 38:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		
		case 40:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		
		case 41:
			Var0 = { -929.483f, -374.5104f, 102.2329f };
			Var0.f_3 = { 0f, 0f, -152.5531f };
			break;
		
		case 63:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 73:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 74:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = { 0f, 0f, -63.5f };
			break;
		
		case 75:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = { 0f, 0f, -71.5f };
			break;
		
		case 76:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = { 0f, 0f, 40.5f };
			break;
		
		case 77:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 78:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = { 0f, 0f, -14.5f };
			break;
		
		case joaat("mpsv_lp0_31"):
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 80:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = { 0f, 0f, 4.5f };
			break;
		
		case 81:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 82:
			Var0 = { 374.2012f, 416.9688f, 142.6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 83:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 84:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 85:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 86:
			Var0 = { -1573.098f, -4085.806f, 9.7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 87:
			Var0 = { -1572.187f, -570.8315f, 109.9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383.954f, -476.7112f, 73.507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 89:
			Var0 = { -138.0029f, -629.739f, 170.2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 90:
			Var0 = { -74.8895f, -817.6883f, 244.8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100.764f, -3159.384f, -34.9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005.806f, -3157.67f, -36.0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576.571f, -569.7595f, 85.5f };
				Var0.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571.254f, -566.5865f, 85.5f };
				Var0.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568.098f, -571.9171f, 85.5f };
				Var0.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384.518f, -475.8657f, 56.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384.538f, -475.8829f, 48.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378.994f, -477.2481f, 56.1f };
				Var0.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 109:
			if (!bParam1)
			{
				Var0 = { -186.5683f, -576.4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 110:
			if (!bParam1)
			{
				Var0 = { -113.886f, -564.3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 111:
			if (!bParam1)
			{
				Var0 = { -134.6568f, -635.1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 112:
			if (!bParam1)
			{
				Var0 = { -79.0479f, -822.6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 113:
			if (!bParam1)
			{
				Var0 = { -70.3086f, -819.5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 114:
			if (!bParam1)
			{
				Var0 = { -79.9861f, -818.425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

int func_149(var uParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	
	switch (iParam2)
	{
		case default:
			return 0;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			func_144(iParam2, iParam1, &Var0, -1, 0);
			*uParam0 = { Var0 };
			return 1;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			func_144(iParam2, iParam1, &Var0, 61, 0);
			*uParam0 = { Var0 };
			return 1;
		
		case 83:
		case 84:
		case 85:
			func_144(iParam2, iParam1, &Var0, 83, 0);
			*uParam0 = { Var0 };
			return 1;
		
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
		case 81:
		case 82:
			func_144(iParam2, iParam1, &Var0, 77, 0);
			*uParam0 = { Var0 };
			return 1;
		
		case 73:
		case 74:
		case 75:
		case 76:
			func_144(iParam2, iParam1, &Var0, 73, 0);
			*uParam0 = { Var0 };
			return 1;
		
		case 87:
		case 88:
		case 89:
		case 90:
			func_144(iParam2, iParam1, &Var0, 88, 0);
			*uParam0 = { Var0 };
			return 1;
			return 0;
	}
}

void func_150()
{
	int iVar0;
	
	if (func_153())
	{
		return;
	}
	func_152(4, -1);
	if (func_151())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
			if (PLAYER::INT_TO_PLAYERINDEX(iVar0) == PLAYER::PLAYER_ID())
			{
				if (!func_156(48))
				{
					NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(PLAYER::INT_TO_PLAYERINDEX(iVar0), false);
				}
			}
			else
			{
				NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(PLAYER::INT_TO_PLAYERINDEX(iVar0), false);
			}
		}
		iVar0++;
	}
}

bool func_151()
{
	return BitTest(Global_2714635.f_43.f_4, 0);
}

void func_152(bool bParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_1644218.f_1047), bParam0);
	switch (bParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1644218.f_170[iParam1] = 1;
			}
			break;
	}
}

int func_153()
{
	if (func_155() != 2)
	{
		return 0;
	}
	if (!func_151() && !((Global_1940570 || Global_1574961) && func_154()))
	{
		return 0;
	}
	return 1;
}

var func_154()
{
	return Global_2714635.f_43.f_57;
}

int func_155()
{
	return Global_2714635.f_43.f_40;
}

int func_156(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	if (iVar0 >= 8)
	{
		return 0;
	}
	return BitTest(Global_2715551.f_1.f_2813[iVar0], iVar1);
}

int func_157()
{
	return func_158(Global_4718592.f_87009);
}

int func_158(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_262145.f_31366[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_159(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_31359[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_160(var uParam0, var uParam1, float fParam2)
{
	if (func_162(Global_4718592.f_87009))
	{
		if (MISC::ABSF((GRAPHICS::_GET_ASPECT_RATIO(false) - 1.333333f)) < 0.1f)
		{
			*uParam0 = { 1561.161f, 384.824f, -48.6215f };
			*uParam1 = { -89.3034f, -0.1435f, 180f };
			*fParam2 = 69f;
		}
		else
		{
			*uParam0 = { 1561.16f, 384.8204f, -48.9135f };
			*uParam1 = { -89.5003f, -0.204f, 180f };
			*fParam2 = 69f;
		}
	}
	else if (func_161(Global_4718592.f_87009))
	{
		*uParam0 = { -1348.956f, 138.2791f, -94.7272f };
		*uParam1 = { -2.4593f, 0f, -164.9275f };
		*fParam2 = 70f;
	}
}

int func_161(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_30700[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_162(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (Global_262145.f_29583[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_163()
{
	if (func_162(Global_4718592.f_87009))
	{
		return 1;
	}
	return 0;
}

float func_164(int iParam0)
{
	return Global_4280768[iParam0 /*45*/].f_7;
}

Vector3 func_165(int iParam0)
{
	return Global_4280768[iParam0 /*45*/].f_4;
}

var func_166(int iParam0)
{
	return Global_2683916[iParam0 /*3*/];
}

int func_167(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Global_262145.f_5954[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_168(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5011[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_169(int iParam0)
{
	return BitTest(Global_2689224[iParam0 /*451*/].f_198, 24);
}

int func_170(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != 0)
	{
		iVar1 = 0;
		while (iVar1 < 17)
		{
			if (Global_262145.f_6694[iVar1] == 251)
			{
				iVar0 = 0;
				while (iVar0 < Global_262145.f_6078[iVar1])
				{
					if (iParam0 == Global_262145.f_5035[iVar1 /*51*/][iVar0])
					{
						return 1;
					}
					iVar0++;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

var func_171()
{
	return BitTest(Global_2714635.f_3, 4);
}

int func_172(int iParam0)
{
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			if (Global_2689224[iParam0 /*451*/].f_317.f_6 != -1)
			{
				return func_173(Global_2689224[iParam0 /*451*/].f_317.f_6) == 6;
			}
		}
	}
	return 0;
}

int func_173(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
			return 21;
			break;
		
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
			break;
		
		case 154:
			return 23;
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	}
	return -1;
}

int func_174(int iParam0)
{
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			if (Global_2689224[iParam0 /*451*/].f_317.f_6 != -1 && Global_2689224[iParam0 /*451*/].f_317.f_9 != func_15())
			{
				return func_173(Global_2689224[iParam0 /*451*/].f_317.f_6) == 5;
			}
		}
	}
	return 0;
}

var func_175()
{
	if (ENTITY::DOES_ENTITY_EXIST(func_177()))
	{
		return func_177();
	}
	return func_176();
}

var func_176()
{
	return Global_2621446.f_2;
}

var func_177()
{
	return Global_2621446.f_3;
}

float func_178(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
			return 40.5914f;
		
		case 122:
			return 50f;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return 50f;
				
				case 1:
					return 50f;
				
				default:
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return 50f;
				
				case 1:
					return 40.4324f;
				
				case 2:
					return 42.2709f;
				
				case 3:
					return 43.6444f;
				
				case 4:
					return 37.3862f;
				
				case 5:
					return 38.6952f;
				
				case 6:
					return 40.9091f;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return 40.5238f;
				
				case 1:
					return 47.4321f;
				
				case 2:
					return 38.6571f;
				
				case 3:
					return 44.0641f;
				
				case 4:
					return 39.2991f;
				
				case 5:
					return 31.7484f;
				
				case 6:
					return 35.6342f;
				
				case 7:
					return 36.0072f;
				
				case 8:
					return 42.5782f;
				
				case 9:
					return 37.4336f;
				
				default:
			}
			break;
		
		case 14:
			return 50f;
	}
	return 50f;
}

Vector3 func_179(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
			return 1.3773f, 0f, -88.827f;
		
		case 122:
			return -18.1605f, 2.6167f, 113.0513f;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return 2.3039f, 0f, -19.6903f;
				
				case 1:
					return -5.9341f, 0f, -151.6385f;
				
				default:
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return -3.627f, 0f, 34.6935f;
				
				case 1:
					return -57.9221f, 0f, 58.3042f;
				
				case 2:
					return -15.4498f, 0f, 161.1361f;
				
				case 3:
					return -1.8386f, 0f, -135.0223f;
				
				case 4:
					return 0.5233f, 0f, -85.7377f;
				
				case 5:
					return -4.2364f, 0f, 173.6634f;
				
				case 6:
					return -3.74f, 0f, -30.7752f;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return 4.1441f, 0f, 15.6909f;
				
				case 1:
					return 5.4815f, 0f, -127.6695f;
				
				case 2:
					return -4.1889f, 0f, -15.0654f;
				
				case 3:
					return 16.4433f, 0f, -60.3988f;
				
				case 4:
					return 7.8225f, 0f, 39.2409f;
				
				case 5:
					return 2.0405f, 0f, -122.3459f;
				
				case 6:
					return 7.3382f, 0f, 157.6388f;
				
				case 7:
					return 6.481f, 0f, 172.9874f;
				
				case 8:
					return 14.0573f, 0f, 5.0622f;
				
				case 9:
					return -10.1444f, 0f, -131.4038f;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return 8.8196f, 0f, 57.5677f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_180(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
			return -1297.855f, 84.6478f, 54.6519f;
		
		case 122:
			return -855.7661f, -2645.376f, 100.8438f;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return 13.4678f, -1097.781f, 30.192f;
				
				case 1:
					return 816.6221f, -2160.659f, 30.3139f;
				
				default:
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return -1172.111f, -1641.549f, 5.7494f;
				
				case 1:
					return 498.4758f, -226.4275f, 71.0569f;
				
				case 2:
					return -1217.632f, 364.4556f, 86.527f;
				
				case 3:
					return -2884.754f, 32.9823f, 15.1123f;
				
				case 4:
					return -948.1036f, -1260.249f, 8.228f;
				
				case 5:
					return -1614.216f, 302.0945f, 66.0158f;
				
				case 6:
					return -1380.721f, -107.9713f, 50.6998f;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return 903.8763f, -192.214f, 74.6401f;
				
				case 1:
					return 1419.517f, -2216.034f, 61.8467f;
				
				case 2:
					return -83.9713f, -1331.635f, 29.8383f;
				
				case 3:
					return 364.6455f, -2441.897f, 6.2607f;
				
				case 4:
					return 1237.207f, 2715.999f, 37.6424f;
				
				case 5:
					return 1019.153f, 2680.427f, 41.2254f;
				
				case 6:
					return 269.5203f, 2617.41f, 44.7054f;
				
				case 7:
					return -194.2518f, 6295.688f, 31.0991f;
				
				case 8:
					return 1682.759f, 4954.088f, 42.6891f;
				
				case 9:
					return 2325.447f, 3145.91f, 58.4284f;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return 1993.697f, 3049.667f, 47.7241f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_181(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 14:
		case 11:
		case 13:
		case 12:
		case 122:
			return 1;
		
		default:
	}
	return 0;
}

void func_182(int iParam0)
{
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(func_183(0)))
	{
		GRAPHICS::ANIMPOSTFX_PLAY(func_183(iParam0), 0, true);
	}
}

char* func_183(int iParam0)
{
	if (func_192(Global_4718592.f_87009))
	{
		return "MenuMGIslandHeistIn";
	}
	if (iParam0 || func_156(134))
	{
		return "MenuMGHeistIn";
	}
	if (func_191())
	{
		return "MenuMGTournamentIn";
	}
	if (func_185(Global_4718592.f_138376))
	{
		return "MenuMGRemixIn";
	}
	if (func_184(Global_4718592.f_138376) && BitTest(Global_4718592.f_139751.f_2808, 2))
	{
		return "MenuSurvivalAlienIn";
	}
	return "MenuMGSelectionIn";
}

bool func_184(int iParam0)
{
	return iParam0 == 998;
}

int func_185(int iParam0)
{
	if ((((func_190(iParam0) || func_189(iParam0)) || func_188(iParam0)) || func_187(iParam0)) || func_186(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_186(int iParam0)
{
	return iParam0 == 64;
}

bool func_187(int iParam0)
{
	return iParam0 == 65;
}

bool func_188(int iParam0)
{
	return iParam0 == 69;
}

bool func_189(int iParam0)
{
	return iParam0 == 67;
}

bool func_190(int iParam0)
{
	return iParam0 == 68;
}

bool func_191()
{
	return BitTest(Global_2715551.f_1.f_2809, 12);
}

int func_192(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (Global_262145.f_29583[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_193()
{
	return BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_139, 2);
}

void func_194()
{
	Global_2714635.f_717 = 1;
}

void func_195()
{
	MISC::CLEAR_BIT(&Global_2714635, 7);
}

void func_196()
{
	MISC::SET_BIT(&Global_2714635, 5);
	func_197();
}

void func_197()
{
	MISC::SET_BIT(&Global_2714635, 8);
}

void func_198()
{
	MISC::CLEAR_BIT(&(Global_2714635.f_2), 14);
}

void func_199(var uParam0)
{
	Global_2714635.f_42 = uParam0;
}

void func_200(char* sParam0)
{
	StringCopy(&(Global_2714635.f_860), sParam0, 24);
	if (func_201())
	{
		StringCopy(&(Global_1048576.f_44), sParam0, 24);
	}
}

bool func_201()
{
	return BitTest(Global_2715551.f_1.f_2809, 5);
}

void func_202(struct<13> Param0)
{
	if (func_203(Param0))
	{
		Global_2715551.f_6548 = { Param0 };
	}
}

bool func_203(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

struct<13> func_204(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_205()
{
	MISC::SET_BIT(&(Global_1890190[PLAYER::PLAYER_ID() /*105*/].f_29), 12);
}

void func_206(int iParam0)
{
	Global_2714635.f_9 = iParam0;
}

var func_207()
{
	return Global_2714635.f_756;
}

void func_208()
{
	MISC::SET_BIT(&(Global_1890190[PLAYER::PLAYER_ID() /*105*/].f_29), 28);
}

void func_209()
{
	MISC::SET_BIT(&(Global_2714635.f_3), 13);
}

void func_210()
{
	MISC::SET_BIT(&(Global_1890190[PLAYER::PLAYER_ID() /*105*/].f_29), 27);
}

void func_211()
{
	MISC::SET_BIT(&(Global_2714635.f_3), 11);
}

void func_212(int iParam0)
{
	Global_1057409 = iParam0;
}

void func_213()
{
	MISC::SET_BIT(&(Global_2714635.f_3), 2);
}

void func_214()
{
	Global_2723442.f_1 = 0;
}

void func_215(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(iParam0), "MPBitset"))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(iParam0), "MPBitset");
	}
	MISC::SET_BIT(&iVar0, bParam1);
	DECORATOR::DECOR_SET_INT(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(iParam0), "MPBitset", iVar0);
}

void func_216(struct<3> Param0)
{
	Global_2725220 = { Param0 };
}

Vector3 func_217(int iParam0)
{
	struct<3> Var0;
	
	if (HUD::DOES_BLIP_EXIST(Global_2678391[iParam0]))
	{
		Var0 = { func_274(Global_2678391[iParam0]) };
	}
	else if (HUD::DOES_BLIP_EXIST(Global_2678391.f_33[iParam0]) && !iParam0 == Global_2703660)
	{
		Var0 = { func_274(Global_2678391.f_33[iParam0]) };
	}
	if (SYSTEM::VMAG(Var0) > 0f)
	{
		return Var0;
	}
	return func_218(iParam0);
}

Vector3 func_218(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	if (Global_2676196)
	{
		if (func_273(iParam0))
		{
			Var1 = { func_272(iParam0) };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
		if (Global_2689224[iParam0 /*451*/].f_71.f_11)
		{
			if (SYSTEM::VMAG(Global_2689224[iParam0 /*451*/].f_71.f_12) > 0f)
			{
				return Global_2689224[iParam0 /*451*/].f_71.f_12;
			}
		}
	}
	if (Global_1853131[iParam0 /*888*/].f_267.f_30 > 0)
	{
		Var1 = { func_270(func_271(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_30)) };
		if (SYSTEM::VMAG(Var1) > 0f)
		{
			return Var1;
		}
	}
	else
	{
		func_267(func_269(iParam0), &iVar0);
		if (iVar0 > 0)
		{
			Var1 = { func_270(func_271(iVar0)) };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
	}
	if (func_266(iParam0))
	{
		Var1 = { func_221(iParam0) };
		if (SYSTEM::VMAG(Var1) > 0f)
		{
			return Var1;
		}
	}
	if (func_220(iParam0))
	{
		iVar4 = func_219(iParam0);
		if (iVar4 > -1)
		{
			Var1 = { Global_1946941.f_532[iVar4 /*3*/] };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
	}
	if (!Global_2676196)
	{
		if (func_273(iParam0))
		{
			Var1 = { func_272(iParam0) };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
		if (Global_2689224[iParam0 /*451*/].f_71.f_11)
		{
			if (SYSTEM::VMAG(Global_2689224[iParam0 /*451*/].f_71.f_12) > 0f)
			{
				return Global_2689224[iParam0 /*451*/].f_71.f_12;
			}
		}
	}
	return func_269(iParam0);
}

int func_219(int iParam0)
{
	if (iParam0 != func_15())
	{
		return Global_2689224[iParam0 /*451*/].f_317.f_15;
	}
	return -1;
}

int func_220(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_15() && (func_75(iParam0, 1, 1) || Global_2667223.f_2680))
	{
		iVar0 = BitTest(Global_2689224[iParam0 /*451*/].f_317, 1);
		return iVar0;
	}
	return 0;
}

Vector3 func_221(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	if (iParam0 == func_15())
	{
	}
	if (func_174(iParam0))
	{
		iVar0 = func_265(iParam0);
		if (iVar0 != func_15())
		{
			if (!func_264(iVar0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2703660.f_239[iVar0 /*3*/][1]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2703660.f_239[iVar0 /*3*/][1], false);
				}
				else
				{
					return Global_2689224[func_265(iParam0) /*451*/].f_317.f_11;
				}
			}
			else
			{
				iVar1 = func_261(iVar0);
				if (!iVar1 == -1)
				{
					return Global_1946941.f_532[iVar1 /*3*/];
				}
			}
		}
	}
	else if (func_172(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_2810701.f_307))
		{
			return ENTITY::GET_ENTITY_COORDS(Global_2810701.f_307, false);
		}
	}
	else if (func_260(iParam0) && !func_259(iParam0))
	{
		iVar2 = Global_2689224[iParam0 /*451*/].f_317.f_9;
		if (iVar2 != func_15())
		{
			iVar3 = func_261(iVar2);
			if (!iVar3 == -1)
			{
				return Global_1946941.f_532[iVar3 /*3*/];
			}
		}
	}
	else if (func_258(iParam0) && !func_257(iParam0))
	{
		if (func_266(iParam0) && func_256())
		{
			return Global_1946941.f_532[Global_2689224[iParam0 /*451*/].f_317.f_6 /*3*/];
		}
		iVar4 = Global_2689224[iParam0 /*451*/].f_317.f_9;
		if (iVar4 != func_15())
		{
			if (func_255(iVar4))
			{
				iVar5 = func_252(iVar4);
				if (iVar5 != -1)
				{
					return Global_1946941.f_532[iVar5 /*3*/];
				}
			}
		}
	}
	else if (func_251(iParam0))
	{
		iVar6 = func_250(iParam0);
		if (iVar6 != func_15())
		{
			if (!func_249(iVar6))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2703660.f_336[iVar6]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2703660.f_336[iVar6], false);
				}
				else
				{
					return Global_2689224[func_250(iParam0) /*451*/].f_317.f_18;
				}
			}
			else
			{
				iVar7 = func_252(iVar6);
				if (!iVar7 == -1)
				{
					return Global_1946941.f_532[iVar7 /*3*/];
				}
			}
		}
	}
	else if (func_248(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_2810701.f_309))
		{
			return ENTITY::GET_ENTITY_COORDS(Global_2810701.f_309, false);
		}
	}
	else if (func_247(iParam0) && !func_246(iParam0))
	{
		iVar8 = Global_2689224[iParam0 /*451*/].f_317.f_9;
		if (iVar8 != func_15())
		{
			if (func_245(iVar8))
			{
				iVar9 = func_242(iVar8);
				if (iVar9 != -1)
				{
					return func_241(iVar9);
				}
			}
		}
	}
	else if (func_240(iParam0) && !func_239(iParam0))
	{
		iVar10 = Global_2689224[iParam0 /*451*/].f_317.f_9;
		if (iVar10 != func_15())
		{
			if (func_238(iVar10))
			{
				iVar11 = func_235(iVar10);
				if (iVar11 != -1)
				{
					return Global_1946941.f_532[iVar11 /*3*/];
				}
			}
		}
	}
	else if (func_234(iParam0, 0))
	{
		iVar12 = func_233(iParam0);
		if (iVar12 != func_15())
		{
			if (!func_232(iVar12))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2703660.f_369[iVar12]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2703660.f_369[iVar12], false);
				}
				else
				{
					return Global_1893551[func_233(iParam0) /*599*/].f_584;
				}
			}
			else
			{
				iVar13 = func_235(iVar12);
				if (!iVar13 == -1)
				{
					return Global_1946941.f_532[iVar13 /*3*/];
				}
			}
		}
	}
	else if (func_231(iParam0))
	{
		return -366.7f, -1909.6f, 20f;
	}
	else if (func_230(iParam0))
	{
		iVar14 = func_227(iParam0);
		if (iVar14 != func_15())
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_2703660.f_402[iVar14]))
			{
				return ENTITY::GET_ENTITY_COORDS(Global_2703660.f_402[iVar14], false);
			}
			else
			{
				return Global_1912781[iVar14 /*258*/].f_51;
			}
		}
		else
		{
			return 0f, 0f, 0f;
		}
	}
	if (func_247(iParam0))
	{
		return func_241(Global_2689224[iParam0 /*451*/].f_317.f_6);
	}
	if (func_222(iParam0))
	{
		return 965.8165f, 42.25042f, 122.1267f;
	}
	return Global_1946941.f_532[Global_2689224[iParam0 /*451*/].f_317.f_6 /*3*/];
}

int func_222(int iParam0)
{
	if (((func_226(iParam0) || func_225(iParam0)) || func_224(iParam0)) || func_223(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_223(int iParam0)
{
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			if (Global_2689224[iParam0 /*451*/].f_317.f_6 != -1)
			{
				return func_173(Global_2689224[iParam0 /*451*/].f_317.f_6) == 19;
			}
		}
	}
	return 0;
}

int func_224(int iParam0)
{
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			if (Global_2689224[iParam0 /*451*/].f_317.f_6 != -1)
			{
				return func_173(Global_2689224[iParam0 /*451*/].f_317.f_6) == 15;
			}
		}
	}
	return 0;
}

int func_225(int iParam0)
{
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			if (Global_2689224[iParam0 /*451*/].f_317.f_6 != -1)
			{
				return func_173(Global_2689224[iParam0 /*451*/].f_317.f_6) == 16;
			}
		}
	}
	return 0;
}

int func_226(int iParam0)
{
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			if (Global_2689224[iParam0 /*451*/].f_317.f_6 != -1)
			{
				return func_173(Global_2689224[iParam0 /*451*/].f_317.f_6) == 14;
			}
		}
	}
	return 0;
}

int func_227(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_15())
	{
		return iParam0;
	}
	if (func_229(iParam0) != -1)
	{
		iVar0 = func_173(func_229(iParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (func_228(iParam0, 0))
			{
				return func_22(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_15();
		}
		return Global_2689224[iParam0 /*451*/].f_317.f_9;
	}
	return func_15();
}

bool func_228(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_104(iParam0))
		{
			return 0;
		}
	}
	return Global_1893551[iParam0 /*599*/].f_10 != func_15();
}

int func_229(int iParam0)
{
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			return Global_2689224[iParam0 /*451*/].f_317.f_6;
		}
		else if (((Global_1575054 || Global_2667223.f_2680) && iParam0 == PLAYER::PLAYER_ID()) && func_75(iParam0, 1, 0))
		{
			return Global_2689224[iParam0 /*451*/].f_317.f_6;
		}
	}
	return -1;
}

int func_230(int iParam0)
{
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			if (Global_2689224[iParam0 /*451*/].f_317.f_6 != -1)
			{
				return func_173(Global_2689224[iParam0 /*451*/].f_317.f_6) == 20;
			}
		}
		else if (((Global_2689224[iParam0 /*451*/].f_317.f_6 != -1 && Global_1575054) && iParam0 == PLAYER::PLAYER_ID()) && func_75(iParam0, 1, 0))
		{
			return func_173(Global_2689224[iParam0 /*451*/].f_317.f_6) == 20;
		}
	}
	return 0;
}

int func_231(int iParam0)
{
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			if (Global_2689224[iParam0 /*451*/].f_317.f_6 != -1)
			{
				return func_173(Global_2689224[iParam0 /*451*/].f_317.f_6) == 13;
			}
		}
	}
	return 0;
}

int func_232(int iParam0)
{
	if (iParam0 != func_15())
	{
		return BitTest(Global_2689224[iParam0 /*451*/].f_317.f_3, 4);
	}
	return 0;
}

int func_233(int iParam0)
{
	if (iParam0 == func_15())
	{
		return iParam0;
	}
	return Global_2689224[iParam0 /*451*/].f_317.f_9;
}

int func_234(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			if (Global_2689224[iParam0 /*451*/].f_317.f_6 != -1 && Global_2689224[iParam0 /*451*/].f_317.f_9 != func_15())
			{
				return func_173(Global_2689224[iParam0 /*451*/].f_317.f_6) == 12;
			}
		}
	}
	return 0;
}

int func_235(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_15())
	{
		iVar0 = func_237(iParam0);
		if (iVar0 != 0)
		{
			return func_236(iVar0);
		}
	}
	return -1;
}

int func_236(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 102;
		
		case 2:
			return 103;
		
		case 3:
			return 104;
		
		case 4:
			return 105;
		
		case 5:
			return 106;
		
		case 6:
			return 107;
		
		case 7:
			return 108;
		
		case 8:
			return 109;
		
		case 9:
			return 110;
		
		case 10:
			return 111;
		
		default:
	}
	return -1;
}

int func_237(int iParam0)
{
	if (iParam0 != func_15())
	{
		return Global_1853131[iParam0 /*888*/].f_267.f_291;
	}
	return 0;
}

int func_238(int iParam0)
{
	if (iParam0 != func_15())
	{
		if (Global_1853131[iParam0 /*888*/].f_267.f_291 != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_239(int iParam0)
{
	if (iParam0 != func_15())
	{
		if (func_240(iParam0) && Global_2689224[iParam0 /*451*/].f_317.f_9 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_240(int iParam0)
{
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			if (Global_2689224[iParam0 /*451*/].f_317.f_6 != -1)
			{
				return func_173(Global_2689224[iParam0 /*451*/].f_317.f_6) == 11;
			}
		}
	}
	return 0;
}

Vector3 func_241(int iParam0)
{
	switch (iParam0)
	{
		case 102:
			return 750.5f, -1322.3f, 26.2802f;
		
		case 103:
			return 331.9f, -974.9f, 30f;
		
		case 104:
			return -146f, -1270f, 28.3088f;
		
		case 105:
			return -17.7f, 225.7f, 106.7566f;
		
		case 106:
			return 894.4f, -2106.4f, 29.4768f;
		
		case 107:
			return -668f, -2431.5f, 12.9444f;
		
		case 108:
			return 213.4f, -3166.6f, 4.7903f;
		
		case 109:
			return 366.6f, 237.6f, 104.9f;
		
		case 110:
			return -1275.3f, -666.8f, 25.6332f;
		
		case 111:
			return -1188.8f, -1156.9f, 4.6582f;
		
		default:
	}
	return Global_1946941.f_532[iParam0 /*3*/];
}

int func_242(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_15())
	{
		iVar0 = func_244(iParam0);
		if (iVar0 != 0)
		{
			return func_243(iVar0);
		}
	}
	return -1;
}

int func_243(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 102;
		
		case 2:
			return 103;
		
		case 3:
			return 104;
		
		case 4:
			return 105;
		
		case 5:
			return 106;
		
		case 6:
			return 107;
		
		case 7:
			return 108;
		
		case 8:
			return 109;
		
		case 9:
			return 110;
		
		case 10:
			return 111;
		
		default:
	}
	return -1;
}

int func_244(int iParam0)
{
	if (iParam0 != func_15())
	{
		return Global_1853131[iParam0 /*888*/].f_267.f_332;
	}
	return 0;
}

int func_245(int iParam0)
{
	if (iParam0 != func_15())
	{
		return Global_1853131[iParam0 /*888*/].f_267.f_332 != 0;
	}
	return 0;
}

int func_246(int iParam0)
{
	if (iParam0 != func_15())
	{
		if (func_247(iParam0) && Global_2689224[iParam0 /*451*/].f_317.f_9 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_247(int iParam0)
{
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			if (Global_2689224[iParam0 /*451*/].f_317.f_6 != -1)
			{
				return func_173(Global_2689224[iParam0 /*451*/].f_317.f_6) == 11;
			}
		}
	}
	return 0;
}

int func_248(int iParam0)
{
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			if (Global_2689224[iParam0 /*451*/].f_317.f_6 != -1)
			{
				return func_173(Global_2689224[iParam0 /*451*/].f_317.f_6) == 10;
			}
		}
	}
	return 0;
}

int func_249(int iParam0)
{
	if (iParam0 != func_15())
	{
		return BitTest(Global_2689224[iParam0 /*451*/].f_317.f_2, 6);
	}
	return 0;
}

int func_250(int iParam0)
{
	if (iParam0 == func_15())
	{
		return iParam0;
	}
	return Global_2689224[iParam0 /*451*/].f_317.f_9;
}

int func_251(int iParam0)
{
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			if (Global_2689224[iParam0 /*451*/].f_317.f_6 != -1 && Global_2689224[iParam0 /*451*/].f_317.f_9 != func_15())
			{
				return func_173(Global_2689224[iParam0 /*451*/].f_317.f_6) == 8;
			}
		}
	}
	return 0;
}

int func_252(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_15())
	{
		return -1;
	}
	iVar0 = func_254(iParam0);
	if (!iVar0 == 0)
	{
		return func_253(iVar0);
	}
	return -1;
}

int func_253(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 89;
			break;
		
		case 2:
			return 90;
			break;
		
		case 3:
			return 91;
			break;
		
		case 4:
			return 92;
			break;
		
		case 5:
			return 93;
			break;
		
		case 6:
			return 94;
			break;
		
		case 7:
			return 95;
			break;
		
		case 8:
			return 96;
			break;
		
		case 9:
			return 97;
			break;
	}
	return -1;
}

int func_254(int iParam0)
{
	if (iParam0 == func_15())
	{
		return 0;
	}
	return Global_1853131[iParam0 /*888*/].f_267.f_281;
}

int func_255(int iParam0)
{
	if (iParam0 != func_15())
	{
		return Global_1853131[iParam0 /*888*/].f_267.f_281 != 0;
	}
	return 0;
}

int func_256()
{
	if (BitTest(Global_1946941.f_2, 13) || Global_1946941.f_3280)
	{
		return 1;
	}
	return 0;
}

int func_257(int iParam0)
{
	if (iParam0 == func_15())
	{
		return 0;
	}
	if (func_258(iParam0) && Global_2689224[iParam0 /*451*/].f_317.f_9 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_258(int iParam0)
{
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			if (Global_2689224[iParam0 /*451*/].f_317.f_6 != -1)
			{
				return func_173(Global_2689224[iParam0 /*451*/].f_317.f_6) == 9;
			}
		}
	}
	return 0;
}

int func_259(int iParam0)
{
	if (iParam0 == func_15())
	{
		return 0;
	}
	if (func_260(iParam0) && Global_2689224[iParam0 /*451*/].f_317.f_9 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_260(int iParam0)
{
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			if (Global_2689224[iParam0 /*451*/].f_317.f_6 != -1)
			{
				return func_173(Global_2689224[iParam0 /*451*/].f_317.f_6) == 4;
			}
		}
	}
	return 0;
}

int func_261(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_15())
	{
		return -1;
	}
	iVar0 = func_263(iParam0);
	if (!iVar0 == 0)
	{
		return func_262(iVar0);
	}
	return -1;
}

int func_262(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 22;
			break;
		
		case 2:
			return 23;
			break;
		
		case 3:
			return 24;
			break;
		
		case 4:
			return 25;
			break;
		
		case 5:
			return 26;
			break;
		
		case 6:
			return 27;
			break;
		
		case 7:
			return 28;
			break;
		
		case 8:
			return 29;
			break;
		
		case 9:
			return 30;
			break;
		
		case 10:
			return 31;
			break;
		
		case 11:
			return 32;
			break;
		
		case 12:
			return 33;
			break;
		
		case 13:
			return 34;
			break;
		
		case 14:
			return 35;
			break;
		
		case 15:
			return 36;
			break;
		
		case 16:
			return 37;
			break;
		
		case 17:
			return 38;
			break;
		
		case 18:
			return 39;
			break;
		
		case 19:
			return 40;
			break;
		
		case 20:
			return 41;
			break;
		
		case 21:
			return 70;
			break;
		
		case 22:
			return 71;
			break;
		
		case 23:
			return 72;
			break;
		
		case 24:
			return 73;
			break;
		
		case 25:
			return 74;
			break;
		
		case 26:
			return 75;
			break;
		
		case 27:
			return 76;
			break;
		
		case 28:
			return 77;
			break;
		
		case 29:
			return 78;
			break;
		
		case 30:
			return 79;
			break;
		
		case 31:
			return 80;
			break;
	}
	return -1;
}

int func_263(int iParam0)
{
	if (iParam0 == func_15())
	{
		return 0;
	}
	return Global_1853131[iParam0 /*888*/].f_267.f_187[5 /*13*/];
}

int func_264(int iParam0)
{
	if (iParam0 != func_15())
	{
		return BitTest(Global_2689224[iParam0 /*451*/].f_317, 6);
	}
	return 0;
}

int func_265(int iParam0)
{
	if (iParam0 == func_15())
	{
		return iParam0;
	}
	return Global_2689224[iParam0 /*451*/].f_317.f_9;
}

int func_266(int iParam0)
{
	if (iParam0 != func_15())
	{
		if (func_75(iParam0, 1, 1))
		{
			return Global_2689224[iParam0 /*451*/].f_317.f_6 != -1;
		}
		else if ((Global_1575054 && iParam0 == PLAYER::PLAYER_ID()) && func_75(iParam0, 1, 0))
		{
			return Global_2689224[iParam0 /*451*/].f_317.f_6 != -1;
		}
	}
	return 0;
}

void func_267(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 7;
	while (iVar0 <= iVar1)
	{
		if (func_268(Param0, iVar0, 0))
		{
			*uParam3 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 34;
	iVar1 = 43;
	while (iVar0 <= iVar1)
	{
		if (func_268(Param0, iVar0, 0))
		{
			*uParam3 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 61;
	iVar1 = 65;
	while (iVar0 <= iVar1)
	{
		if (func_268(Param0, iVar0, 0))
		{
			*uParam3 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 8;
	if (func_268(Param0, iVar0, 0))
	{
		if (Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_30 > 0)
		{
			*uParam3 = Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_30;
		}
		else if (Global_2666809.f_1 > 0)
		{
			*uParam3 = Global_2666809.f_1;
		}
		else
		{
			*uParam3 = iVar0;
		}
		return;
	}
	iVar0 = 17;
	if (func_268(Param0, iVar0, 0))
	{
		if (Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_30 > 0)
		{
			*uParam3 = Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_30;
		}
		else if (Global_2666809.f_1 > 0)
		{
			*uParam3 = Global_2666809.f_1;
		}
		else
		{
			*uParam3 = iVar0;
		}
		return;
	}
}

int func_268(struct<3> Param0, int iParam3, float fParam4)
{
	int iVar0;
	struct<3> Var1[3];
	struct<3> Var11[3];
	int iVar21;
	
	if (iParam3 != 999)
	{
		iVar21 = 0;
		while (iVar21 < 3)
		{
			if (Global_1312124[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/].f_2 > Global_1312124[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/].f_3.f_2)
			{
				Var1[iVar21 /*3*/] = { Global_1312124[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/] };
				Var11[iVar21 /*3*/] = { Global_1312124[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/].f_3 };
			}
			else
			{
				Var1[iVar21 /*3*/] = { Global_1312124[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/].f_3 };
				Var11[iVar21 /*3*/] = { Global_1312124[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/] };
			}
			Var1[iVar21 /*3*/].f_2 = (Var1[iVar21 /*3*/].f_2 + fParam4);
			Var11[iVar21 /*3*/].f_2 = (Var11[iVar21 /*3*/].f_2 - fParam4);
			iVar21++;
		}
		if (((Global_1312124[iParam3 /*1951*/].f_146.f_57[0 /*8*/].f_6 != 0f && OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var11[0 /*3*/], Var1[0 /*3*/], Global_1312124[iParam3 /*1951*/].f_146.f_57[0 /*8*/].f_6, false, true)) || (Global_1312124[iParam3 /*1951*/].f_146.f_57[1 /*8*/].f_6 != 0f && OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var11[1 /*3*/], Var1[1 /*3*/], Global_1312124[iParam3 /*1951*/].f_146.f_57[1 /*8*/].f_6, false, true))) || (Global_1312124[iParam3 /*1951*/].f_146.f_57[2 /*8*/].f_6 != 0f && OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var11[2 /*3*/], Var1[2 /*3*/], Global_1312124[iParam3 /*1951*/].f_146.f_57[2 /*8*/].f_6, false, true)))
		{
			return 1;
		}
	}
	else
	{
		iVar0 = 1;
		while (iVar0 <= 7)
		{
			if (func_268(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 34;
		while (iVar0 <= 43)
		{
			if (func_268(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 61;
		while (iVar0 <= 65)
		{
			if (func_268(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 73;
		while (iVar0 <= 76)
		{
			if (func_268(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 77;
		while (iVar0 <= 82)
		{
			if (func_268(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 83;
		while (iVar0 <= 85)
		{
			if (func_268(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 87;
		while (iVar0 <= 90)
		{
			if (func_268(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 91;
		while (iVar0 <= 102)
		{
			if (func_268(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 103;
		while (iVar0 <= 113)
		{
			if (func_268(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		if (func_268(Param0, 8, fParam4))
		{
			return 1;
		}
		if (func_268(Param0, 17, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_269(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

Vector3 func_270(int iParam0)
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 1:
			Var0 = { -773.4775f, 310.6321f, 84.6981f };
			break;
		
		case 2:
			Var0 = { -252.5713f, -949.9199f, 30.221f };
			break;
		
		case 3:
			Var0 = { -1443.094f, -544.7684f, 33.7424f };
			break;
		
		case 4:
			Var0 = { -913.85f, -455.1392f, 38.5999f };
			break;
		
		case 5:
			Var0 = { -47.3145f, -585.9766f, 36.9593f };
			break;
		
		case 6:
			Var0 = { -932.7474f, -383.9246f, 37.9613f };
			break;
		
		case 7:
			Var0 = { -619.1315f, 37.8841f, 42.5883f };
			break;
		
		case 8:
			Var0 = { 284.9614f, -159.9891f, 63.6221f };
			break;
		
		case 9:
			Var0 = { 2.8889f, 35.7762f, 70.5349f };
			break;
		
		case 10:
			Var0 = { 9.74f, 84.6906f, 77.3975f };
			break;
		
		case 11:
			Var0 = { -512.1465f, 111.2223f, 62.351f };
			break;
		
		case 12:
			Var0 = { -197.3405f, 88.1053f, 68.7422f };
			break;
		
		case 13:
			Var0 = { -628.3212f, 165.8364f, 60.1651f };
			break;
		
		case 14:
			Var0 = { -973.3757f, -1429.425f, 6.6791f };
			break;
		
		case 15:
			Var0 = { -829.1362f, -855.0104f, 18.6297f };
			break;
		
		case 16:
			Var0 = { -757.5739f, -755.5591f, 25.5697f };
			break;
		
		case 17:
			Var0 = { -45.1289f, -57.0925f, 62.2531f };
			break;
		
		case 18:
			Var0 = { -206.7293f, 184.142f, 79.3279f };
			break;
		
		case 19:
			Var0 = { -811.7045f, -984.1961f, 13.1538f };
			break;
		
		case 20:
			Var0 = { -664.0032f, -853.6744f, 23.4325f };
			break;
		
		case 21:
			Var0 = { -1534.025f, -324.5247f, 46.5237f };
			break;
		
		case 22:
			Var0 = { -1561.381f, -412.1974f, 41.389f };
			break;
		
		case 23:
			Var0 = { -1608.851f, -429.184f, 39.439f };
			break;
		
		case 24:
			Var0 = { 964.3583f, -1034.199f, 39.8303f };
			break;
		
		case 25:
			Var0 = { 894.2868f, -885.5679f, 26.1212f };
			break;
		
		case 26:
			Var0 = { 821.1741f, -924.1658f, 25.1998f };
			break;
		
		case 27:
			Var0 = { 759.7933f, -759.8209f, 25.759f };
			break;
		
		case 28:
			Var0 = { 844.7289f, -1164.1f, 24.2681f };
			break;
		
		case 29:
			Var0 = { 526.2521f, -1604.613f, 28.2625f };
			break;
		
		case 30:
			Var0 = { 572.0462f, -1570.736f, 27.4904f };
			break;
		
		case 31:
			Var0 = { 722.2852f, -1190.617f, 23.282f };
			break;
		
		case 32:
			Var0 = { 497.6212f, -1494.084f, 28.2893f };
			break;
		
		case 33:
			Var0 = { 480.3127f, -1549.937f, 28.2828f };
			break;
		
		case 34:
			Var0 = { -68.702f, 6426.148f, 30.439f };
			break;
		
		case 35:
			Var0 = { -247.4374f, 6240.294f, 30.4892f };
			break;
		
		case 36:
			Var0 = { 2554.165f, 4668.059f, 33.0233f };
			break;
		
		case 37:
			Var0 = { 2461.22f, 1589.255f, 32.0443f };
			break;
		
		case 38:
			Var0 = { -2203.335f, 4244.427f, 47.3305f };
			break;
		
		case 39:
			Var0 = { 218.0665f, 2601.817f, 44.7668f };
			break;
		
		case 40:
			Var0 = { 186.1719f, 2786.343f, 45.0144f };
			break;
		
		case 41:
			Var0 = { 642.0746f, 2791.729f, 40.9795f };
			break;
		
		case 42:
			Var0 = { -1130.938f, 2701.133f, 17.8004f };
			break;
		
		case 43:
			Var0 = { -10.944f, -1646.76f, 28.3125f };
			break;
		
		case 44:
			Var0 = { 1024.263f, -2398.404f, 29.1261f };
			break;
		
		case 45:
			Var0 = { 870.8577f, -2232.323f, 29.5508f };
			break;
		
		case 46:
			Var0 = { -663.8541f, -2380.389f, 12.9446f };
			break;
		
		case 47:
			Var0 = { -1088.616f, -2235.098f, 12.2182f };
			break;
		
		case 48:
			Var0 = { -342.5126f, -1468.675f, 29.6107f };
			break;
		
		case 49:
			Var0 = { -1241.54f, -259.8841f, 37.9445f };
			break;
		
		case 50:
			Var0 = { 899.8448f, -147.528f, 75.5674f };
			break;
		
		case 51:
			Var0 = { -1405.411f, 526.8572f, 122.8361f };
			break;
		
		case 52:
			Var0 = { 1341.552f, -1578.037f, 53.4443f };
			break;
		
		case 53:
			Var0 = { -105.7029f, 6528.539f, 29.1719f };
			break;
		
		case 54:
			Var0 = { -302.3985f, 6327.434f, 31.8918f };
			break;
		
		case 55:
			Var0 = { -15.258f, 6557.378f, 32.2454f };
			break;
		
		case 56:
			Var0 = { 1899.673f, 3773.178f, 31.8829f };
			break;
		
		case 57:
			Var0 = { 1662.121f, 4776.317f, 41.0075f };
			break;
		
		case 58:
			Var0 = { -178.2278f, 490.886f, 134.0466f };
			break;
		
		case 59:
			Var0 = { 339.5743f, 439.7083f, 145.5896f };
			break;
		
		case 60:
			Var0 = { -764.6163f, 618.3144f, 137.5536f };
			break;
		
		case 61:
			Var0 = { -679.5461f, 592.5162f, 139.693f };
			break;
		
		case 62:
			Var0 = { 124.4571f, 551.8877f, 181.658f };
			break;
		
		case 63:
			Var0 = { -563.7349f, 689.099f, 151.6596f };
			break;
		
		case 64:
			Var0 = { -743.0927f, 590.0371f, 140.9221f };
			break;
		
		case 65:
			Var0 = { -861.252f, 684.8923f, 146.2643f };
			break;
		
		case 66:
			Var0 = { -1292.456f, 440.9454f, 93.7572f };
			break;
		
		case 67:
			Var0 = { 369.5891f, 417.4813f, 136.8344f };
			break;
		
		case 68:
			Var0 = { -1581.501f, -558.2578f, 33.9528f };
			break;
		
		case 69:
			Var0 = { -1379.546f, -499.1783f, 32.1574f };
			break;
		
		case 70:
			Var0 = { -117.5296f, -605.7157f, 35.2857f };
			break;
		
		case 71:
			Var0 = { -67.0943f, -802.4415f, 43.2273f };
			break;
		
		case 72:
			Var0 = { 254.1892f, -1809.183f, 26.1805f };
			break;
		
		case 73:
			Var0 = { -1472.278f, -920.0677f, 8.9683f };
			break;
		
		case 74:
			Var0 = { 38.9478f, -1026.629f, 28.6354f };
			break;
		
		case 75:
			Var0 = { 46.903f, 2789.825f, 57.1124f };
			break;
		
		case 76:
			Var0 = { -342.3246f, 6065.316f, 30.4895f };
			break;
		
		case 77:
			Var0 = { 1737.878f, 3709.088f, 33.1348f };
			break;
		
		case 78:
			Var0 = { 939.7161f, -1459.204f, 30.467f };
			break;
		
		case joaat("mpsv_lp0_31"):
			Var0 = { 189.7624f, 309.7488f, 104.4714f };
			break;
		
		case 80:
			Var0 = { -21.9593f, -191.3618f, 51.5599f };
			break;
		
		case 81:
			Var0 = { 2472.22f, 4110.493f, 36.9629f };
			break;
		
		case 82:
			Var0 = { -39.3286f, 6420.603f, 30.7017f };
			break;
		
		case 83:
			Var0 = { -1134.762f, -1568.848f, 3.4077f };
			break;
	}
	return Var0;
}

int func_271(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 61:
		case 83:
		case 84:
		case 85:
			return 1;
			break;
		
		case 5:
		case 6:
			return 2;
			break;
		
		case 7:
		case 34:
		case 62:
			return 3;
			break;
		
		case 35:
		case 36:
		case 37:
			return 4;
			break;
		
		case 38:
		case 39:
		case 65:
			return 5;
			break;
		
		case 40:
		case 41:
		case 63:
			return 6;
			break;
		
		case 42:
		case 43:
		case 64:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 11:
			return 11;
			break;
		
		case 12:
			return 12;
			break;
		
		case 13:
			return 13;
			break;
		
		case 14:
			return 14;
			break;
		
		case 15:
			return 15;
			break;
		
		case 16:
			return 16;
			break;
		
		case 17:
			return 17;
			break;
		
		case 18:
			return 18;
			break;
		
		case 19:
			return 19;
			break;
		
		case 20:
			return 20;
			break;
		
		case 21:
			return 21;
			break;
		
		case 22:
			return 22;
			break;
		
		case 23:
			return 23;
			break;
		
		case 24:
			return 24;
			break;
		
		case 25:
			return 25;
			break;
		
		case 26:
			return 26;
			break;
		
		case 27:
			return 27;
			break;
		
		case 28:
			return 28;
			break;
		
		case 29:
			return 29;
			break;
		
		case 30:
			return 30;
			break;
		
		case 31:
			return 31;
			break;
		
		case 32:
			return 32;
			break;
		
		case 33:
			return 33;
			break;
		
		case 44:
			return 34;
			break;
		
		case 45:
			return 35;
			break;
		
		case 46:
			return 36;
			break;
		
		case 47:
			return 37;
			break;
		
		case 48:
			return 38;
			break;
		
		case 49:
			return 39;
			break;
		
		case 50:
			return 40;
			break;
		
		case 51:
			return 41;
			break;
		
		case 52:
			return 42;
			break;
		
		case 53:
			return 43;
			break;
		
		case 54:
			return 44;
			break;
		
		case 55:
			return 45;
			break;
		
		case 56:
			return 46;
			break;
		
		case 57:
			return 47;
			break;
		
		case 58:
			return 48;
			break;
		
		case 59:
			return 49;
			break;
		
		case 60:
			return 50;
			break;
		
		case 66:
			return 51;
			break;
		
		case 67:
			return 52;
			break;
		
		case 68:
			return 53;
			break;
		
		case 69:
			return 54;
			break;
		
		case 70:
			return 55;
			break;
		
		case 71:
			return 56;
			break;
		
		case 72:
			return 57;
			break;
		
		case 73:
			return 58;
			break;
		
		case 74:
			return 59;
			break;
		
		case 75:
			return 60;
			break;
		
		case 76:
			return 61;
			break;
		
		case 77:
			return 62;
			break;
		
		case 78:
			return 63;
			break;
		
		case joaat("mpsv_lp0_31"):
			return 64;
			break;
		
		case 80:
			return 65;
			break;
		
		case 81:
			return 66;
			break;
		
		case 82:
			return 67;
			break;
		
		case 87:
		case 103:
		case 104:
		case 105:
			return 68;
			break;
		
		case 88:
		case 106:
		case 107:
		case 108:
			return 69;
			break;
		
		case 89:
		case 109:
		case 110:
		case 111:
			return 70;
			break;
		
		case 90:
		case 112:
		case 113:
		case 114:
			return 71;
			break;
		
		case 91:
			return 72;
			break;
		
		case 92:
			return 73;
			break;
		
		case 93:
			return 74;
			break;
		
		case 94:
			return 75;
			break;
		
		case 95:
			return 76;
			break;
		
		case 96:
			return 77;
			break;
		
		case 97:
			return 78;
			break;
		
		case 98:
			return 79;
			break;
		
		case 99:
			return 80;
			break;
		
		case 100:
			return 81;
			break;
		
		case 101:
			return 82;
			break;
		
		case 102:
			return 83;
			break;
	}
	return 0;
}

Vector3 func_272(int iParam0)
{
	return Global_2689224[iParam0 /*451*/].f_71.f_7;
}

int func_273(int iParam0)
{
	if (Global_2689224[iParam0 /*451*/].f_71.f_6 != -1)
	{
		return 1;
	}
	return 0;
}

Vector3 func_274(int iParam0)
{
	int iVar0;
	
	switch (HUD::GET_BLIP_INFO_ID_TYPE(iParam0))
	{
		case 1:
		case 2:
		case 3:
			iVar0 = HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				return ENTITY::GET_ENTITY_COORDS(iVar0, false);
			}
			break;
	}
	return HUD::GET_BLIP_COORDS(iParam0);
}

void func_275()
{
	Global_2714635.f_756 = 1;
}

var func_276()
{
	return Global_2714635.f_735;
}

var func_277()
{
	return BitTest(Global_2714635.f_2, 11);
}

void func_278(var uParam0)
{
	if (!func_456(uParam0))
	{
		func_449(uParam0);
		func_448(uParam0);
	}
	func_288(uParam0);
	if (!func_287(uParam0))
	{
		func_280(uParam0);
		func_279(uParam0);
	}
}

void func_279(var uParam0)
{
	MISC::CLEAR_BIT(&(uParam0->f_726.f_4), uParam0->f_726.f_1);
}

void func_280(var uParam0)
{
	if (Local_1439.f_4.f_1 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_1439.f_4.f_1);
	}
	switch (uParam0->f_726.f_1)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				func_285(uParam0, 1, 0);
			}
			func_284(uParam0, 0);
			func_283(uParam0);
			func_281(uParam0);
			break;
		
		case 5:
			break;
	}
}

void func_281(var uParam0)
{
	func_282(&(uParam0->f_741.f_1), 0, 1);
	CAM::SET_WIDESCREEN_BORDERS(false, 0);
}

void func_282(var uParam0, bool bParam1, bool bParam2)
{
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		if (bParam2)
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, bParam1, 0);
		}
		if (CAM::IS_CAM_ACTIVE(*uParam0))
		{
			CAM::SET_CAM_ACTIVE(*uParam0, false);
		}
		CAM::DESTROY_CAM(*uParam0, bParam1);
	}
	if (uParam0->f_23)
	{
		HUD::UNLOCK_MINIMAP_ANGLE();
		uParam0->f_23 = 0;
	}
	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_4 = { 0f, 0f, 0f };
	uParam0->f_7 = 0f;
	uParam0->f_20 = 0;
	uParam0->f_21 = 0;
	uParam0->f_22 = 0;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = 0f;
	uParam0->f_18 = 0f;
}

void func_283(var uParam0)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_712))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_712));
	}
}

void func_284(var uParam0, int iParam1)
{
	if (uParam0->f_704 != iParam1)
	{
	}
	uParam0->f_704 = iParam1;
}

void func_285(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if ((uParam0->f_1092 && !func_286(PLAYER::PLAYER_ID())) || iParam2)
		{
			func_85(PLAYER::PLAYER_ID(), 1, 0, 0);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			uParam0->f_1092 = 0;
		}
	}
	else
	{
		func_85(PLAYER::PLAYER_ID(), 0, 0, 0);
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
		uParam0->f_1092 = 1;
	}
}

int func_286(int iParam0)
{
	if (iParam0 != func_15() && func_75(iParam0, 1, 1))
	{
		return BitTest(Global_2689224[iParam0 /*451*/].f_317, 3);
	}
	return 0;
}

bool func_287(var uParam0)
{
	return !BitTest(uParam0->f_726.f_4, uParam0->f_726.f_1);
}

void func_288(var uParam0)
{
	if (Local_1439.f_4.f_2 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_1439.f_4.f_2);
	}
	switch (uParam0->f_726)
	{
		case 0:
			if (!uParam0->f_1091)
			{
				func_447(uParam0);
			}
			break;
		
		case 1:
			func_447(uParam0);
			break;
		
		case 2:
			if (func_446(uParam0) && func_445())
			{
				func_447(uParam0);
			}
			break;
		
		case 3:
			func_353(uParam0);
			if (func_352(uParam0))
			{
				func_447(uParam0);
			}
			break;
		
		case 4:
			func_351(uParam0);
			func_348(uParam0);
			func_353(uParam0);
			func_331(uParam0);
			func_330(uParam0);
			func_325(uParam0);
			func_294(uParam0);
			func_290();
			func_81(uParam0, 0);
			if (!func_352(uParam0))
			{
				func_289(uParam0);
			}
			break;
		
		case 5:
			break;
	}
}

void func_289(var uParam0)
{
	int iVar0;
	
	uParam0->f_726.f_1 = uParam0->f_726;
	MISC::SET_BIT(&(uParam0->f_726.f_4), uParam0->f_726.f_1);
	MISC::CLEAR_BIT(&(uParam0->f_726.f_3), uParam0->f_726.f_1);
	iVar0 = uParam0->f_726;
	iVar0 = (iVar0 - 1);
	uParam0->f_726 = iVar0;
	if (uParam0->f_726 == 0)
	{
		uParam0->f_726 = 1;
	}
}

void func_290()
{
	HUD::THEFEED_HIDE_THIS_FRAME();
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	func_293(0);
	PAD::DISABLE_CONTROL_ACTION(0, 199, true);
	CAM::INVALIDATE_IDLE_CAM();
	func_291();
	HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
	func_152(11, -1);
}

void func_291()
{
	NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(PLAYER::PLAYER_ID(), false);
	func_292();
}

void func_292()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (iVar1 != func_15() && iVar1 != PLAYER::PLAYER_ID())
			{
				NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(iVar1, false);
			}
		}
		iVar0++;
	}
}

void func_293(int iParam0)
{
	if (func_58())
	{
		return;
	}
	if (!Global_19954.f_1 == 1)
	{
		if (func_59(0))
		{
			func_54(iParam0);
		}
		MISC::SET_BIT(&Global_7825, 2);
	}
}

void func_294(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<6> Var2;
	char cVar8[24];
	
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 53)
	{
		if (func_324(uParam0, iVar0) && !func_323(uParam0, iVar0))
		{
			if (func_297(uParam0, iVar0))
			{
				iVar1 = iVar0;
			}
			else
			{
				Jump @123; //curOff = 61
				if (func_323(uParam0, iVar0))
				{
					Var2 = { func_296() };
					StringCopy(&cVar8, func_295(iVar0), 24);
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var2) && MISC::ARE_STRINGS_EQUAL(&Var2, &cVar8))
					{
						iVar1 = iVar0;
					}
					else
					{
						iVar0++;
					}
					if (Local_1525.f_6 != iVar1)
					{
						Local_1525.f_6 = iVar1;
					}
				}

char* func_295(int iParam0)
{
	if (Local_1439.f_43.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1439.f_43.f_1);
		return StackVal;
	}
	return "";
}

struct<6> func_296()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21285 == 4)
	{
		return Global_20904;
	}
	return Var0;
}

int func_297(var uParam0, int iParam1)
{
	struct<2> Var0;
	
	if (!func_10())
	{
		StringCopy(&Var0, func_295(iParam1), 16);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
		{
			func_319(&(Local_1525.f_7), func_322(iParam1), func_321(iParam1), func_320(iParam1), 0, 1);
			if (func_299(&(Local_1525.f_7), func_318(iParam1), &Var0, 9, 0, 0, 0))
			{
				func_298(uParam0, iParam1);
				return 1;
			}
		}
	}
	return 0;
}

void func_298(var uParam0, int iParam1)
{
	MISC::SET_BIT(&(Local_1525.f_3[(iParam1 / 32)]), (iParam1 % 32));
	if (Local_1439.f_43.f_7 != 0)
	{
		Stack.Push(iParam1);
		Call_Loc(Local_1439.f_43.f_7);
	}
}

bool func_299(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_317(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21292 = 0;
	Global_21294 = 0;
	Global_21299 = 0;
	Global_22276 = 0;
	Global_22278 = 0;
	Global_22282 = 0;
	Global_2883585 = 0;
	return func_300(sParam2, iParam3, 0);
}

int func_300(char* sParam0, int iParam1, bool bParam2)
{
	Global_21286 = 0;
	if (Global_21285 == 0 || Global_21287 == 2)
	{
		if (Global_21285 != 0)
		{
			if (iParam1 > Global_21287)
			{
				if (Global_21292 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_19954.f_1 = 3;
					Global_21285 = 0;
					Global_21286 = 1;
					Global_21338 = 0;
					Global_21281 = 0;
					Global_21282 = 0;
					Global_21296 = 0;
					Global_21295 = 0;
					Global_19953 = 0;
				}
				else
				{
					func_316();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_315(8, -1))
		{
			return 0;
		}
		Global_21361 = { Global_21355 };
		func_314();
		Global_20574 = { Global_20739 };
		Global_21291 = Global_21292;
		Global_21298 = Global_21299;
		Global_2883586 = Global_2883585;
		Global_21300 = { Global_21316 };
		Global_21293 = Global_21294;
		Global_22275 = Global_22276;
		Global_22283 = { Global_22289 };
		Global_22277 = Global_22278;
		Global_22279 = Global_22280;
		Global_22281 = Global_22282;
		Global_20904.f_370 = Global_22274;
		Global_20904.f_368 = Global_22272;
		Global_20904.f_369 = Global_22273;
		Global_21281 = Global_21282;
		if (Global_21291)
		{
			MISC::CLEAR_BIT(&Global_7824, 20);
			MISC::CLEAR_BIT(&Global_7825, 17);
			MISC::CLEAR_BIT(&Global_7826, false);
			if (bParam2)
			{
				func_306();
				if (Global_8629[Global_19954 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19954.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19920 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_305())
				{
					return 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_77858)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
					{
						return 0;
					}
				}
			}
			if (func_55())
			{
				return 0;
			}
			else
			{
				switch (Global_19954.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (BitTest(Global_7824, 9))
				{
					return 0;
				}
			}
			func_304();
			Global_21295 = bParam2;
		}
		Global_21287 = iParam1;
		StringCopy(&Global_20904, sParam0, 24);
		Global_20151 = 0;
		func_303();
		func_301();
		return 1;
	}
	if (Global_21285 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21287 || iParam1 == Global_21287)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_316();
	}
	return 0;
}

void func_301()
{
	if (!func_302())
	{
		return;
	}
	if (Global_21291)
	{
		MemCopy(&(Global_1973354.f_1), {Global_20904}, 4);
		Global_1973354 = Global_7139;
		Global_1973354.f_6 = Global_21295;
	}
}

int func_302()
{
	if (!Global_262145.f_28542)
	{
		return 0;
	}
	if (!Global_77858)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_15())
	{
		return 0;
	}
	if (func_119(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

void func_303()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_20153[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_21285 = 1;
}

void func_304()
{
	Global_21338 = Global_21337;
	Global_21332 = Global_21333;
	Global_21379 = { Global_21367 };
	Global_21385 = { Global_21373 };
	Global_21340 = Global_21339;
	Global_21409 = { Global_21391 };
	Global_21415 = { Global_21397 };
	Global_21421 = { Global_21403 };
	Global_21427 = { Global_21433 };
	Global_7139 = Global_7140;
	Global_7141 = Global_7142;
	Global_21296 = Global_21297;
	Global_21298 = Global_21299;
	Global_21300 = { Global_21316 };
	Global_21289 = Global_21290;
	Global_22301 = 0;
	Global_21334 = 0;
	Global_21335 = 0;
	MISC::CLEAR_BIT(&Global_7825, 16);
}

int func_305()
{
	int iVar0;
	int iVar1;
	
	if (Global_77858)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_306()
{
	if (func_313(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_112922.f_28050[0 /*29*/])
			{
				Global_19954 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_112922.f_28050[1 /*29*/])
			{
				Global_19954 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_112922.f_28050[2 /*29*/])
			{
				Global_19954 = 2;
			}
			else
			{
				Global_19954 = 0;
			}
		}
	}
	else
	{
		Global_19954 = func_307();
		if (Global_19954 == 145)
		{
			Global_19954 = 3;
		}
		if (Global_77858)
		{
			Global_19954 = 3;
		}
		if (Global_19954 > 3)
		{
			Global_19954 = 3;
		}
	}
}

var func_307()
{
	func_308();
	return Global_112922.f_2363.f_539.f_4321;
}

void func_308()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_311(Global_112922.f_2363.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_310(PLAYER::PLAYER_PED_ID());
			if (func_309(iVar0) && (!func_313(14) || Global_111873))
			{
				if (Global_112922.f_2363.f_539.f_4321 != iVar0 && func_309(Global_112922.f_2363.f_539.f_4321))
				{
					Global_112922.f_2363.f_539.f_4322 = Global_112922.f_2363.f_539.f_4321;
				}
				Global_112922.f_2363.f_539.f_4323 = iVar0;
				Global_112922.f_2363.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_112922.f_2363.f_539.f_4321 != 145)
			{
				Global_112922.f_2363.f_539.f_4323 = Global_112922.f_2363.f_539.f_4321;
			}
			return;
		}
	}
	Global_112922.f_2363.f_539.f_4321 = 145;
}

bool func_309(int iParam0)
{
	return iParam0 < 3;
}

int func_310(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_311(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_311(int iParam0)
{
	if (func_309(iParam0))
	{
		return func_312(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_312(int iParam0)
{
	return Global_1918[iParam0 /*29*/];
}

bool func_313(int iParam0)
{
	return Global_42602 == iParam0;
}

void func_314()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20574[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20574[iVar0 /*10*/].f_1), "", 24);
		Global_20574[iVar0 /*10*/].f_7 = 0;
		Global_20574[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20574.f_161 = -99;
	Global_20574.f_162 = { 0f, 0f, 0f };
}

bool func_315(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1644218.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1644218.f_1048, iParam0);
}

void func_316()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22296 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_19954.f_1 == 9) || Global_19953 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21285 = 6;
		Global_19954.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_21285 = 6;
		return;
	}
}

void func_317(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_20739 = { *uParam0 };
	Global_7140 = iParam1;
	StringCopy(&Global_21355, sParam2, 24);
	Global_22274 = uParam5;
	if (iParam3 == 0)
	{
		Global_22272 = 1;
		Global_22270 = 0;
	}
	else
	{
		Global_22272 = 0;
		Global_22270 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22273 = 1;
		Global_22271 = 0;
	}
	else
	{
		Global_22273 = 0;
		Global_22271 = 1;
	}
}

char* func_318(var uParam0)
{
	if (Local_1439.f_43.f_2 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_1439.f_43.f_2);
		return StackVal;
	}
	return "";
}

void func_319(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_77858)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, false);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, true);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, false);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, true);
			}
		}
	}
}

char* func_320(var uParam0)
{
	if (Local_1439.f_43.f_5 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_1439.f_43.f_5);
		return StackVal;
	}
	return "";
}

int func_321(var uParam0)
{
	if (Local_1439.f_43.f_4 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_1439.f_43.f_4);
		return StackVal;
	}
	return 0;
}

int func_322(var uParam0)
{
	if (Local_1439.f_43.f_3 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_1439.f_43.f_3);
		return StackVal;
	}
	return -1;
}

bool func_323(var uParam0, int iParam1)
{
	return BitTest(Local_1525.f_3[(iParam1 / 32)], (iParam1 % 32));
}

var func_324(var uParam0, int iParam1)
{
	return BitTest(Local_1525[(iParam1 / 32)], (iParam1 % 32));
}

void func_325(var uParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = func_328(uParam0);
	if (((uParam0->f_741.f_62 || func_327(uParam0)) || uParam0->f_1086 != -1) || uParam0->f_1093)
	{
		return;
	}
	if (Local_1439.f_28 != 0)
	{
		Stack.Push(uParam0);
		Stack.Push(uVar0);
		Stack.Push(&uVar1);
		Call_Loc(Local_1439.f_28);
	}
	if (BitTest(uVar1, 0))
	{
		if (Local_1439.f_3 != 0)
		{
			Stack.Push(uParam0);
			Call_Loc(Local_1439.f_3);
		}
		else
		{
			func_326(uParam0);
		}
	}
}

void func_326(var uParam0)
{
	uParam0->f_726.f_5 = 0;
}

var func_327(var uParam0)
{
	return uParam0->f_820;
}

int func_328(var uParam0)
{
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return -1;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return -1;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 188) || func_329(uParam0, 0, 0))
	{
		return 0;
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2, 187) || func_329(uParam0, 0, 1))
	{
		return 1;
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2, 189) || func_329(uParam0, 0, 2))
	{
		return 2;
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2, 190) || func_329(uParam0, 0, 3))
	{
		return 3;
	}
	else if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
	{
		return 4;
	}
	else if (PAD::IS_CONTROL_JUST_RELEASED(2, 202))
	{
		return 5;
	}
	else if (PAD::IS_CONTROL_JUST_RELEASED(2, 203))
	{
		return 6;
	}
	else if (PAD::IS_CONTROL_JUST_RELEASED(2, 204))
	{
		return 7;
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2, 205))
	{
		return 8;
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2, 206))
	{
		return 9;
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2, 207))
	{
		return 10;
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2, 208))
	{
		return 11;
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2, 209))
	{
		return 12;
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2, 210))
	{
		return 13;
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2, 199))
	{
		return 14;
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2, 217))
	{
		return 15;
	}
	return -1;
}

int func_329(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	switch (iParam1)
	{
		case 0:
			iVar1 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 218) * 127f));
			iVar2 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 219) * 127f));
			switch (bParam2)
			{
				case 0:
					if (iVar2 <= -110)
					{
						if (!BitTest(uParam0->f_820.f_1, bParam2))
						{
							iVar0 = 1;
							MISC::SET_BIT(&(uParam0->f_820.f_1), bParam2);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(uParam0->f_820.f_1), bParam2);
					}
					break;
				
				case 1:
					if (iVar2 >= 110)
					{
						if (!BitTest(uParam0->f_820.f_1, bParam2))
						{
							iVar0 = 1;
							MISC::SET_BIT(&(uParam0->f_820.f_1), bParam2);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(uParam0->f_820.f_1), bParam2);
					}
					break;
				
				case 2:
					if (iVar1 <= -110)
					{
						if (!BitTest(uParam0->f_820.f_1, bParam2))
						{
							iVar0 = 1;
							MISC::SET_BIT(&(uParam0->f_820.f_1), bParam2);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(uParam0->f_820.f_1), bParam2);
					}
					break;
				
				case 3:
					if (iVar1 >= 110)
					{
						if (!BitTest(uParam0->f_820.f_1, bParam2))
						{
							iVar0 = 1;
							MISC::SET_BIT(&(uParam0->f_820.f_1), bParam2);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(uParam0->f_820.f_1), bParam2);
					}
					break;
			}
			break;
		
		case 1:
			iVar1 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 220) * 127f));
			iVar2 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 221) * 127f));
			switch (bParam2)
			{
				case 0:
					if (iVar2 <= -110)
					{
						if (!BitTest(uParam0->f_820.f_2, bParam2))
						{
							iVar0 = 1;
							MISC::SET_BIT(&(uParam0->f_820.f_2), bParam2);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(uParam0->f_820.f_2), bParam2);
					}
					break;
				
				case 1:
					if (iVar2 >= 110)
					{
						if (!BitTest(uParam0->f_820.f_2, bParam2))
						{
							iVar0 = 1;
							MISC::SET_BIT(&(uParam0->f_820.f_2), bParam2);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(uParam0->f_820.f_2), bParam2);
					}
					break;
				
				case 2:
					if (iVar1 <= -110)
					{
						if (!BitTest(uParam0->f_820.f_2, bParam2))
						{
							iVar0 = 1;
							MISC::SET_BIT(&(uParam0->f_820.f_2), bParam2);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(uParam0->f_820.f_2), bParam2);
					}
					break;
				
				case 3:
					if (iVar1 >= 110)
					{
						if (!BitTest(uParam0->f_820.f_2, bParam2))
						{
							iVar0 = 1;
							MISC::SET_BIT(&(uParam0->f_820.f_2), bParam2);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(uParam0->f_820.f_2), bParam2);
					}
					break;
			}
			break;
	}
	return iVar0;
}

void func_330(var uParam0)
{
	bool bVar0;
	
	if (uParam0->f_1086 == -1)
	{
		return;
	}
	if (func_124(uParam0, uParam0->f_1086, &bVar0))
	{
		if (bVar0)
		{
			switch (uParam0->f_1086)
			{
				case 1:
					Global_1974627[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_21 = 1;
					break;
				
				case 2:
					if (Local_1439.f_56.f_8 != 0)
					{
						Stack.Push(uParam0);
						Call_Loc(Local_1439.f_56.f_8);
					}
					break;
			}
		}
		else
		{
			switch (uParam0->f_1086)
			{
				case 2:
					if (Local_1439.f_56.f_9 != 0)
					{
						Stack.Push(uParam0);
						Call_Loc(Local_1439.f_56.f_9);
					}
					break;
				
				default:
					break;
				}
		}
		uParam0->f_1086 = -1;
		uParam0->f_1087 = -1;
		func_81(uParam0, 1);
	}
}

void func_331(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (uParam0->f_741.f_32 != uParam0->f_741.f_33)
	{
		func_347(uParam0, uParam0->f_741.f_33);
		uParam0->f_741.f_62 = 1;
		Var0 = { 0f, 0f, 0f };
		Var3 = { 0f, 0f, 0f };
		uParam0->f_741.f_44 = { func_346(uParam0) };
		uParam0->f_741.f_47 = { func_345(uParam0) };
		uParam0->f_741.f_1.f_17 = func_344(uParam0);
		uParam0->f_741.f_38 = { CAM::GET_CAM_COORD(uParam0->f_741.f_1) };
		uParam0->f_741.f_41 = { CAM::GET_CAM_ROT(uParam0->f_741.f_1, 2) };
		uParam0->f_741.f_1.f_18 = CAM::GET_CAM_FOV(uParam0->f_741.f_1);
		uParam0->f_741.f_1.f_14 = { 0f, 0f, 0f };
		uParam0->f_741.f_63 = 750;
		if (func_343())
		{
			CAM::SHAKE_CAM(uParam0->f_741.f_1, func_342(), func_341());
		}
		CAM::SET_CAM_PARAMS(uParam0->f_741.f_1, uParam0->f_741.f_38, uParam0->f_741.f_41, uParam0->f_741.f_1.f_18, 0, 1, 1, 2);
		CAM::SET_CAM_PARAMS(uParam0->f_741.f_1, uParam0->f_741.f_44, uParam0->f_741.f_47, uParam0->f_741.f_1.f_17, uParam0->f_741.f_63, 1, 1, 2);
	}
	if (uParam0->f_741.f_62)
	{
		uParam0->f_741.f_1.f_18 = func_344(uParam0);
		if (!CAM::IS_CAM_INTERPOLATING(uParam0->f_741.f_1))
		{
			uParam0->f_741.f_38 = { uParam0->f_741.f_44 };
			uParam0->f_741.f_41 = { uParam0->f_741.f_47 };
			uParam0->f_741.f_1.f_1 = { uParam0->f_741.f_44 };
			uParam0->f_741.f_1.f_4 = { uParam0->f_741.f_47 };
			if (func_343())
			{
				CAM::SHAKE_CAM(uParam0->f_741.f_1, func_342(), func_341());
			}
			uParam0->f_741.f_62 = 0;
			func_340(uParam0, uParam0->f_741.f_1.f_18);
			func_336(&(uParam0->f_741.f_1), 0, 0, 1, 0, 1045220557, 0, 1065353216, 0);
		}
	}
	else
	{
		func_336(&(uParam0->f_741.f_1), func_335(), func_334(), func_333(), 0, 1045220557, 0, 1065353216, func_332());
	}
}

int func_332()
{
	if (Local_1439.f_18.f_4.f_2 != 0)
	{
		Call_Loc(Local_1439.f_18.f_4.f_2);
		return StackVal;
	}
	return 1;
}

int func_333()
{
	if (Local_1439.f_18.f_4.f_1 != 0)
	{
		Call_Loc(Local_1439.f_18.f_4.f_1);
		return StackVal;
	}
	return 0;
}

int func_334()
{
	if (Local_1439.f_18.f_3 != 0)
	{
		Call_Loc(Local_1439.f_18.f_3);
		return StackVal;
	}
	return 1;
}

int func_335()
{
	if (Local_1439.f_18.f_4 != 0)
	{
		Call_Loc(Local_1439.f_18.f_4);
		return StackVal;
	}
	return 1;
}

void func_336(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, float fParam7, bool bParam8)
{
	int iVar0[4];
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	struct<3> Var10;
	int iVar13;
	int iVar14;
	
	PAD::_0x7F4724035FDCA1DD(2);
	func_339(&(iVar0[0]), &(iVar0[1]), &(iVar0[2]), &(iVar0[3]), 0, 0);
	if (PAD::IS_LOOK_INVERTED())
	{
		iVar0[3] = (iVar0[3] * -1);
	}
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		fVar5 = PAD::GET_CONTROL_UNBOUND_NORMAL(2, 239);
		fVar6 = PAD::GET_CONTROL_UNBOUND_NORMAL(2, 240);
		fVar7 = (fVar5 - uParam0->f_29);
		fVar8 = (fVar6 - uParam0->f_30);
		uParam0->f_29 = fVar5;
		uParam0->f_30 = fVar6;
		if (bParam4)
		{
			iVar0[2] = -SYSTEM::ROUND(((fVar7 * fParam5) * 127f));
			iVar0[3] = -SYSTEM::ROUND(((fVar8 * fParam5) * 127f));
		}
		else
		{
			iVar0[2] = SYSTEM::ROUND(((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 290) * fParam5) * 127f));
			iVar0[3] = SYSTEM::ROUND(((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 291) * fParam5) * 127f));
		}
		iVar0[2] = func_338((iVar0[2] + uParam0->f_24), -127, 127);
		iVar0[3] = func_338((iVar0[3] + uParam0->f_25), -127, 127);
	}
	if (uParam0->f_24 == iVar0[2] && uParam0->f_25 == iVar0[3])
	{
		if (uParam0->f_27 < MISC::GET_GAME_TIMER())
		{
			uParam0->f_24 = 0;
			uParam0->f_25 = 0;
			if (PAD::_IS_USING_KEYBOARD(2))
			{
				iVar0[2] = 0;
				iVar0[3] = 0;
				uParam0->f_28 = 1;
			}
		}
	}
	else
	{
		uParam0->f_24 = iVar0[2];
		uParam0->f_25 = iVar0[3];
		uParam0->f_27 = MISC::GET_GAME_TIMER() + 4000;
		uParam0->f_28 = 0;
	}
	if (bParam2)
	{
		uParam0->f_8.f_2 = (-(SYSTEM::TO_FLOAT(iVar0[2]) / 127f) * IntToFloat(uParam0->f_20));
		uParam0->f_8.f_1 = ((-uParam0->f_8.f_2 * IntToFloat(uParam0->f_22)) / IntToFloat(uParam0->f_20));
		uParam0->f_8 = (-(SYSTEM::TO_FLOAT(iVar0[3]) / 127f) * IntToFloat(uParam0->f_21));
	}
	else
	{
		uParam0->f_8 = { 0f, 0f, 0f };
		uParam0->f_24 = 0;
		uParam0->f_25 = 0;
	}
	fVar9 = (30f * SYSTEM::TIMESTEP());
	Var10 = { uParam0->f_8 + uParam0->f_11 };
	if ((PAD::_IS_USING_KEYBOARD(2) && bParam2) && !uParam0->f_28)
	{
		uParam0->f_14 = Var10.f_0;
		uParam0->f_14.f_1 = Var10.f_1;
		uParam0->f_14.f_2 = Var10.f_2;
	}
	else
	{
		uParam0->f_14 = (uParam0->f_14 + func_337(((((Var10.f_0 - uParam0->f_14) * 0.05f) * fVar9) * fParam7), -3f, 3f));
		uParam0->f_14.f_1 = (uParam0->f_14.f_1 + func_337(((((Var10.f_1 - uParam0->f_14.f_1) * 0.05f) * fVar9) * fParam7), -3f, 3f));
		uParam0->f_14.f_2 = (uParam0->f_14.f_2 + func_337(((((Var10.f_2 - uParam0->f_14.f_2) * 0.05f) * fVar9) * fParam7), -3f, 3f));
	}
	if (uParam0->f_26)
	{
		uParam0->f_14 = func_337(uParam0->f_14, SYSTEM::TO_FLOAT(-uParam0->f_21), SYSTEM::TO_FLOAT(uParam0->f_21));
		uParam0->f_14.f_1 = func_337(uParam0->f_14.f_1, SYSTEM::TO_FLOAT(-uParam0->f_22), SYSTEM::TO_FLOAT(uParam0->f_22));
		uParam0->f_14.f_2 = func_337(uParam0->f_14.f_2, SYSTEM::TO_FLOAT(-uParam0->f_20), SYSTEM::TO_FLOAT(uParam0->f_20));
	}
	if (PAD::_IS_USING_KEYBOARD(0) && bParam1)
	{
		if (uParam0->f_28)
		{
			uParam0->f_17 = uParam0->f_7;
		}
	}
	else
	{
		uParam0->f_17 = uParam0->f_7;
	}
	if (bParam1)
	{
		if (PAD::_IS_USING_KEYBOARD(0))
		{
			iVar13 = 40;
			iVar14 = 41;
			if (bParam6)
			{
				iVar13 = 241;
				iVar14 = 242;
			}
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, iVar13))
			{
				uParam0->f_17 = (uParam0->f_17 - 5f);
				uParam0->f_27 = MISC::GET_GAME_TIMER() + 4000;
				uParam0->f_28 = 0;
			}
			else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, iVar14))
			{
				uParam0->f_17 = (uParam0->f_17 + 5f);
				uParam0->f_27 = MISC::GET_GAME_TIMER() + 4000;
				uParam0->f_28 = 0;
			}
			if (bParam3)
			{
				uParam0->f_17 = func_337(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), uParam0->f_7);
			}
			else
			{
				uParam0->f_17 = func_337(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), (uParam0->f_7 + uParam0->f_19));
			}
		}
		else if (bParam8)
		{
			iVar0[1] = PAD::GET_CONTROL_VALUE(2, 207);
			iVar0[3] = PAD::GET_CONTROL_VALUE(2, 208);
			if (bParam3)
			{
				if (SYSTEM::TO_FLOAT(iVar0[3]) > 127f)
				{
					uParam0->f_17 = (uParam0->f_17 - IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[3]) / 128f) * (uParam0->f_19 / 2f)))));
				}
			}
			else
			{
				uParam0->f_17 = (uParam0->f_17 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[1]) / 128f) * uParam0->f_19))));
				uParam0->f_17 = (uParam0->f_17 - IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[3]) / 128f) * uParam0->f_19))));
			}
		}
		else if (bParam3)
		{
			if (SYSTEM::TO_FLOAT(iVar0[1]) < 0f)
			{
				uParam0->f_17 = (uParam0->f_17 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[1]) / 128f) * uParam0->f_19))));
			}
		}
		else
		{
			uParam0->f_17 = (uParam0->f_17 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[1]) / 128f) * uParam0->f_19))));
		}
	}
	uParam0->f_18 = (uParam0->f_18 + (((uParam0->f_17 - uParam0->f_18) * 0.06f) * fVar9));
	CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4 + uParam0->f_14, uParam0->f_18, 0, 1, 1, 2);
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		if (CAM::IS_CAM_ACTIVE(*uParam0))
		{
			if (CAM::IS_CAM_RENDERING(*uParam0))
			{
				RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
			}
		}
	}
}

float func_337(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_338(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_339(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 218) * 127f));
	*uParam1 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 221) * 127f));
	if (bParam4)
	{
		if (!PAD::IS_CONTROL_ENABLED(2, 218))
		{
			*uParam0 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 218) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2, 219))
		{
			*uParam1 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 219) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2, 220))
		{
			*uParam2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 220) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2, 221))
		{
			*uParam3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 221) * 127f));
		}
	}
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (bParam5)
		{
			if (PAD::IS_LOOK_INVERTED())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (PAD::_0xE1615EC03B3BB4FD())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_340(var uParam0, var uParam1)
{
	uParam0->f_741.f_1.f_7 = uParam1;
	uParam0->f_741.f_1.f_20 = 15;
	uParam0->f_741.f_1.f_21 = 10;
	uParam0->f_741.f_1.f_22 = 1;
	uParam0->f_741.f_1.f_19 = 10f;
}

float func_341()
{
	if (Local_1439.f_18.f_7.f_2 != 0)
	{
		Call_Loc(Local_1439.f_18.f_7.f_2);
		return StackVal;
	}
	return 1f;
}

char* func_342()
{
	if (Local_1439.f_18.f_7.f_1 != 0)
	{
		Call_Loc(Local_1439.f_18.f_7.f_1);
		return StackVal;
	}
	return "HAND_SHAKE";
}

int func_343()
{
	if (Local_1439.f_18.f_7 != 0)
	{
		Call_Loc(Local_1439.f_18.f_7);
		return StackVal;
	}
	return 1;
}

var func_344(var uParam0)
{
	Stack.Push(uParam0->f_741.f_33);
	Call_Loc(Local_1439.f_18.f_2);
	return StackVal;
}

Vector3 func_345(var uParam0)
{
	Stack.Push(uParam0->f_741.f_33);
	Call_Loc(Local_1439.f_18.f_1);
	return StackVal, StackVal, StackVal;
}

Vector3 func_346(var uParam0)
{
	Stack.Push(uParam0->f_741.f_33);
	Call_Loc(Local_1439.f_18);
	return StackVal, StackVal, StackVal;
}

void func_347(var uParam0, var uParam1)
{
	uParam0->f_741.f_32 = uParam1;
}

void func_348(var uParam0)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return;
	}
	iVar0 = uParam0->f_1084;
	if (iVar0 == -1)
	{
		return;
	}
	Stack.Push(Local_1439.f_51 == 0);
	Stack.Push(uParam0);
	Call_Loc(Local_1439.f_51);
	if (StackVal || !StackVal)
	{
		return;
	}
	if (!func_350(&(Global_1974627[iVar0 /*25*/].f_18)))
	{
		if (uParam0->f_1084 == PLAYER::PLAYER_ID())
		{
			Stack.Push(uParam0);
			Call_Loc(Local_1439.f_51.f_1);
			if (StackVal)
			{
				func_41(&(Global_1974627[iVar0 /*25*/].f_18), 0, 0);
			}
		}
	}
	else
	{
		Call_Loc(Local_1439.f_51.f_2);
		uParam0->f_823.f_245 = (StackVal - func_349(&(Global_1974627[iVar0 /*25*/].f_18), 0, 0));
		if (uParam0->f_823.f_245 > 0)
		{
			if (uParam0->f_823.f_245 < (uParam0->f_823.f_246 - 1000))
			{
				Stack.Push(uParam0);
				Call_Loc(Local_1439.f_51.f_3);
				uParam0->f_823.f_246 = uParam0->f_823.f_245;
			}
		}
		else
		{
			uParam0->f_823.f_245 = 0;
			Stack.Push(uParam0);
			Call_Loc(Local_1439.f_51.f_4);
		}
	}
}

int func_349(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *uParam0);
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}

bool func_350(var uParam0)
{
	return uParam0->f_1;
}

void func_351(var uParam0)
{
	if (Local_1439.f_28.f_1 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_1439.f_28.f_1);
	}
	else if (PAD::_IS_USING_KEYBOARD(2))
	{
		PAD::SET_INPUT_EXCLUSIVE(2, 202);
	}
}

bool func_352(var uParam0)
{
	return uParam0->f_726.f_5;
}

void func_353(var uParam0)
{
	if (func_444(uParam0))
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_711))
		{
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
			HUD::SET_TEXT_RENDER_ID(uParam0->f_700);
			switch (func_443())
			{
				case 1:
					GRAPHICS::_SET_SCALEFORM_FIT_RENDERTARGET(uParam0->f_711, true);
					break;
				
				case 0:
					GRAPHICS::_0x32F34FF7F617643B(uParam0->f_711, 1);
					break;
			}
			GRAPHICS::DRAW_SCALEFORM_MOVIE(uParam0->f_711, func_442(), func_441(), func_440(), func_439(), 255, 255, 255, 255, 0);
			HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);
			if (uParam0->f_706)
			{
			}
		}
	}
	else if (func_438(uParam0))
	{
		if (Local_1439.f_7.f_2.f_7 != 0)
		{
			Stack.Push(uParam0);
			Call_Loc(Local_1439.f_7.f_2.f_7);
		}
	}
	if (func_437(uParam0))
	{
		func_354(uParam0);
	}
}

void func_354(var uParam0)
{
	struct<9> Var0;
	
	Var0 = { func_436() };
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (Local_1525.f_6 != -1)
	{
		func_434(uParam0);
		return;
	}
	else if (iLocal_1699)
	{
		func_433(uParam0, 1);
		iLocal_1699 = 0;
	}
	if (!func_432(uParam0))
	{
		func_425(&(uParam0->f_712), &Var0, uParam0, 0);
		return;
	}
	if (!GRAPHICS::GET_IS_WIDESCREEN() || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10)
	{
		func_424(uParam0, 0.5f);
	}
	else
	{
		func_424(uParam0, 0.7f);
	}
	func_422(uParam0);
	func_355(uParam0);
	func_425(&(uParam0->f_712), &Var0, uParam0, uParam0->f_707);
	func_433(uParam0, 0);
}

void func_355(var uParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = uParam0->f_1084 == PLAYER::PLAYER_ID();
	if (func_350(&(Global_1974627[uParam0->f_1084 /*25*/].f_18)))
	{
		func_421("", "HEIST_IB_CONT", uParam0->f_823.f_245, uParam0, 0);
	}
	iVar1 = uParam0->f_806;
	bLocal_1421 = true;
	if (iLocal_1432 != 0)
	{
		if (((func_420(iLocal_1432) || iLocal_1432 == -2) || iLocal_1432 == -3) || iLocal_1432 == -4)
		{
			func_419(2, 201, "CH_INSTR_SEL", uParam0, 1, 361);
		}
		else if (iVar1 == 1002)
		{
			func_419(2, 201, "CH_INSTR_LM", uParam0, 1, 361);
		}
		else
		{
			func_419(2, 201, "CH_INSTR_SEL", uParam0, 1, 361);
		}
		func_419(2, 202, "CH_INSTR_BACK", uParam0, 1, 361);
		if ((iLocal_1432 != -2 && iLocal_1432 != -3) && iLocal_1432 != -4)
		{
			func_418(2, 0, "HEIST_IB_NAV", uParam0);
		}
		return;
	}
	if (func_417(uParam0, iVar1))
	{
		func_419(2, 201, "H4P_INSTR_EQU", uParam0, 1, 361);
	}
	else if (func_416(uParam0, iVar1))
	{
		func_419(2, 201, "H4P_INSTR_REM", uParam0, 1, 361);
	}
	else if (func_415(uParam0, iVar1))
	{
		func_419(2, 201, "CH_INSTR_PREV", uParam0, 1, 361);
	}
	else if (func_414(uParam0, iVar1))
	{
		func_419(2, 201, "CH_INSTR_SEL", uParam0, 1, 361);
	}
	else if (bVar0 && func_413(uParam0, iVar1))
	{
		func_419(2, 201, "CH_INSTR_LM", uParam0, 1, 361);
	}
	else if (bVar0 && func_410(uParam0, iVar1))
	{
		func_419(2, 201, "H4P_INSTR_PUR", uParam0, 1, 361);
	}
	else if (!bVar0 && func_409(uParam0, iVar1))
	{
		func_419(2, 201, "HEIST_IB_RDY", uParam0, 1, 361);
	}
	else if (!bVar0 && func_407(uParam0, iVar1))
	{
		func_419(2, 201, "HEIST_IB_UNRDY", uParam0, 1, 361);
	}
	else
	{
		bLocal_1421 = false;
	}
	if (func_406(iVar1))
	{
		func_419(2, 202, "CH_INSTR_QUIT", uParam0, 1, 361);
	}
	else
	{
		func_419(2, 202, "CH_INSTR_BACK", uParam0, 1, 361);
	}
	if (func_405(uParam0))
	{
		func_419(2, 203, "HP_MAP", uParam0, 1, 361);
	}
	if (func_359(uParam0, iVar1))
	{
		func_419(2, 204, "CH_INSTR_INFO", uParam0, 1, 361);
	}
	if (func_17(uParam0->f_1084, 0))
	{
		func_418(2, 14, "H4P_INSTR_SCR", uParam0);
	}
	if (func_17(uParam0->f_1084, 0) || func_358(uParam0->f_1084))
	{
		func_418(2, 0, "HEIST_IB_NAV", uParam0);
	}
	if (func_357(iVar1))
	{
		if ((MISC::IS_PS3_VERSION() || func_62()) || MISC::IS_PC_VERSION())
		{
			func_419(2, 217, "HEIST_IB_PSN", uParam0, 1, 361);
		}
		else if (MISC::IS_XBOX360_VERSION() || func_63())
		{
			func_356(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 217, true), "HEIST_IB_XBL", uParam0, 0);
		}
		else
		{
			func_356(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 217, true), "HEIST_IB_PSNXBL", uParam0, 0);
		}
	}
}

void func_356(char* sParam0, char* sParam1, var uParam2, char* sParam3)
{
	int iVar0;
	
	if (uParam2->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam2->f_693;
	StringCopy(&(uParam2->f_1[iVar0 /*57*/]), sParam0, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_16), sParam3, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_32), sParam1, 16);
	uParam2->f_693++;
}

int func_357(int iParam0)
{
	switch (iParam0)
	{
		case 105:
		case 106:
		case 107:
		case 108:
			return 1;
		
		default:
	}
	return 0;
}

int func_358(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975428[iParam0 /*53*/].f_1, 1);
	}
	return 0;
}

int func_359(var uParam0, int iParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(func_360(uParam0, iParam1)))
	{
		return 0;
	}
	return 1;
}

char* func_360(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			return "H4P_INT0_GATH_I";
		
		case 2:
			return "H4P_INT0_LOOT_I";
		
		case 3:
			return "H4P_INT0_ENTR_I";
		
		case 4:
			return "H4P_INT0_EXIT_I";
		
		case 5:
			return "H4P_INT0_COMP_I";
		
		case 6:
			return "H4P_INT0_ITEM_I";
		
		case 7:
			return "H4P_INT2_CASH_I";
		
		case 8:
			return "H4P_INT2_WEED_I";
		
		case 9:
			return "H4P_INT2_COKE_I";
		
		case 10:
			return "H4P_INT2_GOLD_I";
		
		case 11:
			return "H4P_INT2_PAIN_I";
		
		case 12:
			return "H4P_INT3_AIRS_I";
		
		case 13:
			return "H4P_INT3_PARA_I";
		
		case 14:
			return "H4P_INT3_BEAC_I";
		
		case 15:
			return "H4P_INT3_MDCK_I";
		
		case 16:
			return "H4P_INT3_NDCK_I";
		
		case 17:
			return "H4P_INT3_NDRP_I";
		
		case 18:
			return "H4P_INT3_SDRP_I";
		
		case 19:
			return "H4P_INT3_DTUN_I";
		
		case 20:
			return "H4P_INT4_AIRS_I";
		
		case 21:
			return "H4P_INT4_MDCK_I";
		
		case 22:
			return "H4P_INT4_NDCK_I";
		
		case 23:
			return "H4P_INT4_SUBM_I";
		
		case 30:
			return func_403(func_404(uParam0->f_1084), "H4P_INT6_PWRS_I", "");
		
		case 31:
			return func_403(func_402(uParam0->f_1084), "H4P_INT6_CTOW_I", "");
		
		case 32:
			return func_403(func_396(uParam0->f_1084), "H4P_INT6_BCUT_I", "");
		
		case 33:
			return func_403(func_390(uParam0->f_1084), "H4P_INT6_GRAP_I", "");
		
		case 34:
			return func_403(func_384(uParam0->f_1084), "H4P_INT6_UNIF_I", "");
		
		case 35:
			return func_403(func_383(uParam0->f_1084), "H4P_INT6_TROJ_I", "");
		
		case 24:
			return "H4P_INT5_MGAT_I";
		
		case 25:
			return "H4P_INT5_NWAL_I";
		
		case 26:
			return "H4P_INT5_NSGT_I";
		
		case 27:
			return "H4P_INT5_SWAL_I";
		
		case 28:
			return "H4P_INT5_SSGT_I";
		
		case 29:
			return "H4P_INT5_DTUN_I";
		
		case 36:
			return "";
		
		case 37:
			return "";
		
		case 38:
			return "";
		
		case 39:
			return "";
		
		case 40:
			return "H4P_PRP1_SUBM_I";
		
		case 41:
			return "";
		
		case 42:
			return "H4P_PRP1_SPLA_I";
		
		case 43:
			return "";
		
		case 44:
			return "H4P_PRP1_PBOA_I";
		
		case 45:
			return "H4P_PRP1_SBOA_I";
		
		case 46:
			return "H4P_PRP1_BOM1_I";
		
		case 47:
			return "H4P_PRP1_BOM2_I";
		
		case 48:
			return "H4P_PRP1_HEL1_I";
		
		case 49:
			return "H4P_PRP1_HEL2_I";
		
		case 50:
			return "H4P_PRP2_DEMC_I";
		
		case 53:
			return "H4P_PRP2_ATOR_I";
		
		case 51:
			return func_403(func_382(uParam0->f_1084) == 11, "H4P_PRP2_TAR1_I", "H4P_PRP2_TAR2_I");
		
		case 52:
			return "H4P_PRP2_FING_I";
		
		case 54:
			return "H4P_PRP3_SHOT_I";
		
		case 55:
			return "H4P_PRP3_RIFL_I";
		
		case 56:
			return "H4P_PRP3_SNIP_I";
		
		case 57:
			return func_403(func_366(uParam0, iParam1), "H4P_PRP3_M2SM_2", "H4P_PRP3_M2SM_I");
		
		case 58:
			return func_403(func_366(uParam0, iParam1), "H4P_PRP3_M2RI_2", "H4P_PRP3_M2RI_I");
		
		case 59:
			return "H4P_PRP3_SUPP_I";
		
		case 60:
			return "H4P_PRP4_WEAP_I";
		
		case 61:
			return "H4P_PRP4_ARMR_I";
		
		case 62:
			return "H4P_PRP4_BRES_I";
		
		case 63:
			return "";
		
		case 64:
			return "";
		
		case 65:
			return "";
		
		case 66:
			return "";
		
		case 67:
			return "";
		
		case 68:
			return "";
		
		case 69:
			return "";
		
		case 70:
			return "";
		
		case 71:
			return "H4P_FIN1_SUBM_I";
		
		case 72:
			return "H4P_FIN1_BOMB_I";
		
		case 73:
			return "H4P_FIN1_SMPL_I";
		
		case 74:
			return "H4P_FIN1_SHEL_I";
		
		case 75:
			return "H4P_FIN1_PBOA_I";
		
		case 76:
			return "H4P_FIN1_SBOA_I";
		
		case 77:
			return "H4P_FIN2_AIRS_I";
		
		case 78:
			return "H4P_FIN2_PARA_I";
		
		case joaat("mpsv_lp0_31"):
			return "H4P_FIN2_WBEA_I";
		
		case 80:
			return "H4P_FIN2_MDOC_I";
		
		case 81:
			return "H4P_FIN2_NDOC_I";
		
		case 82:
			return "H4P_FIN2_NDRP_I";
		
		case 83:
			return "H4P_FIN2_SDRP_I";
		
		case 84:
			return "H4P_FIN2_DTUN_I";
		
		case 85:
			return "H4P_FIN3_MGAT_I";
		
		case 86:
			return "H4P_FIN3_DTUN_I";
		
		case 87:
			return "H4P_FIN4_AIRS_I";
		
		case 88:
			return "H4P_FIN4_MDOC_I";
		
		case 89:
			return "H4P_FIN4_NDOC_I";
		
		case 90:
			return "H4P_FIN4_SUBM_I";
		
		case 91:
			return "H4P_FIN5_TDAY_I";
		
		case 92:
			return "H4P_FIN5_TNGT_I";
		
		case 93:
			return "H4P_FIN6_SHOT_I";
		
		case 94:
			return "H4P_FIN6_RIFL_I";
		
		case 95:
			return "H4P_FIN6_SNIP_I";
		
		case 96:
			return "H4P_FIN6_MKSM_I";
		
		case 97:
			return "H4P_FIN6_MKAR_I";
		
		case 98:
			return "H4P_FIN6_SUPP_I";
		
		case 99:
			return func_403(func_361(uParam0, iParam1), "H4P_FIN7_AIRS_I", "H4P_FIN7_AIRS_2");
		
		case 100:
			return "H4P_FIN7_WDRP_I";
		
		case 101:
			return "H4P_FIN7_SNIP_I";
		
		case 102:
			return "H4P_FIN7_HELI_I";
		
		case 103:
			return func_403(func_361(uParam0, iParam1), "H4P_FIN7_SPYD_I", "H4P_FIN7_SPYD_2");
		
		case 104:
			return "H4P_FIN7_WEAP_I";
		
		default:
	}
	return "";
}

int func_361(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 99:
			return func_362(uParam0->f_1084, 0);
		
		case 103:
			return func_362(uParam0->f_1084, 3);
		
		default:
	}
	return 1;
}

int func_362(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			if (!func_365(iParam0) || !func_364(iParam0))
			{
				return 0;
			}
			break;
		
		case 3:
			if (!func_363(iParam0) || !BitTest(Global_1971102[iParam0 /*68*/].f_42, 4))
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_363(int iParam0)
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return BitTest(Global_4718592.f_132175.f_14, 12);
	}
	if (iParam0 != -1)
	{
		return BitTest(Global_1853131[iParam0 /*888*/].f_267.f_361, 31);
	}
	return 0;
}

int func_364(int iParam0)
{
	if (iParam0 == func_15())
	{
		return 0;
	}
	return Global_1853131[iParam0 /*888*/].f_267.f_274.f_5;
}

int func_365(int iParam0)
{
	if (iParam0 != func_15())
	{
		return Global_1853131[iParam0 /*888*/].f_267.f_274 != 0;
	}
	return 0;
}

int func_366(var uParam0, bool bParam1)
{
	switch (bParam1)
	{
		case 2:
			return 0;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return !func_381(uParam0->f_1084, 0, 0, 0);
		
		case 8:
			return !func_381(uParam0->f_1084, 1, 0, 0);
		
		case 9:
			return !func_381(uParam0->f_1084, 2, 0, 0);
		
		case 10:
			return !func_381(uParam0->f_1084, 3, 0, 0);
		
		case 11:
			return !func_381(uParam0->f_1084, 4, 0, 0);
		
		case 12:
			return !func_379(uParam0->f_1084, func_380(bParam1));
		
		case 13:
			return !func_379(uParam0->f_1084, func_380(bParam1));
		
		case 14:
			return !func_379(uParam0->f_1084, func_380(bParam1));
		
		case 15:
			return !func_379(uParam0->f_1084, func_380(bParam1));
		
		case 16:
			return !func_379(uParam0->f_1084, func_380(bParam1));
		
		case 17:
			return !func_379(uParam0->f_1084, func_380(bParam1));
		
		case 18:
			return !func_379(uParam0->f_1084, func_380(bParam1));
		
		case 19:
			return !func_379(uParam0->f_1084, func_380(bParam1));
		
		case 20:
			return !func_377(uParam0->f_1084, func_378(bParam1));
		
		case 21:
			return !func_377(uParam0->f_1084, func_378(bParam1));
		
		case 22:
			return !func_377(uParam0->f_1084, func_378(bParam1));
		
		case 23:
			return !func_377(uParam0->f_1084, func_378(bParam1));
		
		case 30:
			return !func_404(uParam0->f_1084);
		
		case 31:
			return !func_402(uParam0->f_1084);
		
		case 32:
			return !func_396(uParam0->f_1084);
		
		case 33:
			return !func_390(uParam0->f_1084);
		
		case 34:
			return !func_384(uParam0->f_1084);
		
		case 35:
			return !func_383(uParam0->f_1084);
		
		case 24:
			return !func_375(uParam0->f_1084, func_376(bParam1));
		
		case 25:
			return !func_375(uParam0->f_1084, func_376(bParam1));
		
		case 26:
			return !func_375(uParam0->f_1084, func_376(bParam1));
		
		case 27:
			return !func_375(uParam0->f_1084, func_376(bParam1));
		
		case 28:
			return !func_375(uParam0->f_1084, func_376(bParam1));
		
		case 29:
			return !func_375(uParam0->f_1084, func_376(bParam1));
		
		case 36:
			return 0;
		
		case 37:
			return 0;
		
		case 38:
			return 0;
		
		case 39:
			return 0;
		
		case 40:
			return 0;
		
		case 41:
		case 42:
			return 0;
		
		case 43:
			if (!func_379(uParam0->f_1084, 5) && !func_379(uParam0->f_1084, 6))
			{
				return 1;
			}
			return 0;
		
		case 44:
			return !(func_379(uParam0->f_1084, 3) || func_379(uParam0->f_1084, 4));
		
		case 45:
			return !(func_379(uParam0->f_1084, 3) || func_379(uParam0->f_1084, 4));
		
		case 46:
			return 0;
		
		case 47:
			if (func_17(uParam0->f_1084, 6))
			{
				return 0;
			}
			if (func_17(uParam0->f_1084, 1))
			{
				return 0;
			}
			return 1;
		
		case 48:
			return !(func_379(uParam0->f_1084, 5) || func_379(uParam0->f_1084, 6));
		
		case 49:
			if (!func_379(uParam0->f_1084, 5) && !func_379(uParam0->f_1084, 6))
			{
				return 1;
			}
			if (func_17(uParam0->f_1084, 6))
			{
				return 0;
			}
			if (func_17(uParam0->f_1084, 2))
			{
				return 0;
			}
			return 1;
		
		case 50:
			return 0;
		
		case 53:
			return !func_379(uParam0->f_1084, 7);
		
		case 51:
			return 0;
		
		case 52:
			return 0;
		
		case 54:
			return (func_17(uParam0->f_1084, 13) && func_374(uParam0->f_1084) != 1);
		
		case 55:
			return (func_17(uParam0->f_1084, 13) && func_374(uParam0->f_1084) != 2);
		
		case 56:
			return (func_17(uParam0->f_1084, 13) && func_374(uParam0->f_1084) != 3);
		
		case 57:
			if (func_17(uParam0->f_1084, 13) && func_374(uParam0->f_1084) != 4)
			{
				return 1;
			}
			if (func_373(uParam0->f_1084) && func_369(uParam0->f_1084, func_263(uParam0->f_1084)))
			{
				return 0;
			}
			if (func_368(uParam0->f_1084) && func_367(uParam0->f_1084))
			{
				return 0;
			}
			return 1;
		
		case 58:
			if (func_17(uParam0->f_1084, 13) && func_374(uParam0->f_1084) != 5)
			{
				return 1;
			}
			if (func_373(uParam0->f_1084) && func_369(uParam0->f_1084, func_263(uParam0->f_1084)))
			{
				return 0;
			}
			if (func_368(uParam0->f_1084) && func_367(uParam0->f_1084))
			{
				return 0;
			}
			return 1;
		
		case 60:
			return 0;
		
		case 61:
			return 0;
		
		case 62:
			return 0;
		
		case 99:
			return !func_361(uParam0, bParam1);
		
		case 103:
			return !func_361(uParam0, bParam1);
		
		default:
	}
	return 0;
}

int func_367(int iParam0)
{
	if (iParam0 != func_15())
	{
		return BitTest(Global_1853131[iParam0 /*888*/].f_267.f_349.f_2, 13);
	}
	return 0;
}

int func_368(int iParam0)
{
	if (iParam0 != func_15())
	{
		if (Global_1853131[iParam0 /*888*/].f_267.f_349 != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_369(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_372(iParam0, iParam1))
	{
		iVar0 = func_370(iParam0, iParam1);
		if (Global_1853131[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/].f_4 > 0 && Global_1853131[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

int func_370(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_371(iParam1) && iParam0 != func_15())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1853131[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_371(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_372(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_371(iParam1) && iParam0 != func_15())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1853131[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_373(int iParam0)
{
	return func_263(iParam0) != 0;
}

int func_374(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_1975428[iParam0 /*53*/].f_5.f_35;
	}
	return 0;
}

int func_375(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975428[iParam0 /*53*/].f_5.f_2, iParam1);
	}
	return 0;
}

int func_376(bool bParam0)
{
	switch (bParam0)
	{
		case 24:
			return 0;
		
		case 25:
			return 1;
		
		case 26:
			return 2;
		
		case 27:
			return 3;
		
		case 28:
			return 4;
		
		case 29:
			return 5;
		
		default:
	}
	return 6;
}

int func_377(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 0:
				return BitTest(Global_1975428[iParam0 /*53*/].f_5.f_1, 0);
			
			case 1:
				return BitTest(Global_1975428[iParam0 /*53*/].f_5.f_1, 3);
			
			case 2:
				return BitTest(Global_1975428[iParam0 /*53*/].f_5.f_1, 4);
			
			case 3:
				return BitTest(Global_1975428[iParam0 /*53*/].f_5.f_1, 2);
			}
		
		default:
	}
	return 0;
}

int func_378(bool bParam0)
{
	switch (bParam0)
	{
		case 20:
		case 87:
			return 0;
		
		case 21:
		case 88:
			return 1;
		
		case 22:
		case 89:
			return 2;
		
		case 23:
		case 90:
			return 3;
		
		default:
	}
	return 4;
}

int func_379(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975428[iParam0 /*53*/].f_5.f_1, iParam1);
	}
	return 0;
}

int func_380(bool bParam0)
{
	switch (bParam0)
	{
		case 12:
		case 77:
			return 0;
		
		case 13:
		case 78:
			return 1;
		
		case 14:
		case joaat("mpsv_lp0_31"):
			return 2;
		
		case 15:
		case 80:
			return 3;
		
		case 16:
		case 81:
			return 4;
		
		case 17:
		case 82:
			return 5;
		
		case 18:
		case 83:
			return 6;
		
		case 19:
		case 84:
			return 7;
		
		default:
	}
	return 8;
}

int func_381(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 0:
				if (!bParam3)
				{
					bVar0 = false;
					while (bVar0 < 24)
					{
						if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_10.f_5, bVar0))
						{
							return 1;
						}
						bVar0++;
					}
				}
				if (!bParam2)
				{
					bVar0 = false;
					while (bVar0 < 8)
					{
						if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_10.f_13, bVar0))
						{
							return 1;
						}
						bVar0++;
					}
				}
				break;
			
			case 1:
				if (!bParam3)
				{
					bVar0 = false;
					while (bVar0 < 24)
					{
						if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_10.f_6, bVar0))
						{
							return 1;
						}
						bVar0++;
					}
				}
				if (!bParam2)
				{
					bVar0 = false;
					while (bVar0 < 8)
					{
						if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_10.f_14, bVar0))
						{
							return 1;
						}
						bVar0++;
					}
				}
				break;
			
			case 2:
				if (!bParam3)
				{
					bVar0 = false;
					while (bVar0 < 24)
					{
						if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_10.f_7, bVar0))
						{
							return 1;
						}
						bVar0++;
					}
				}
				if (!bParam2)
				{
					bVar0 = false;
					while (bVar0 < 8)
					{
						if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_10.f_15, bVar0))
						{
							return 1;
						}
						bVar0++;
					}
				}
				break;
			
			case 3:
				if (!bParam3)
				{
					bVar0 = false;
					while (bVar0 < 24)
					{
						if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_10.f_8, bVar0))
						{
							return 1;
						}
						bVar0++;
					}
				}
				if (!bParam2)
				{
					bVar0 = false;
					while (bVar0 < 8)
					{
						if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_10.f_16, bVar0))
						{
							return 1;
						}
						bVar0++;
					}
				}
				break;
			
			case 4:
				bVar0 = false;
				while (bVar0 < 7)
				{
					if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_10.f_18, bVar0))
					{
						return 1;
					}
					bVar0++;
				}
				break;
			}
	}
	return 0;
}

int func_382(int iParam0)
{
	if (iParam0 != -1)
	{
		switch (Global_1975428[iParam0 /*53*/].f_5.f_9)
		{
			case 4:
			case 2:
				return 11;
			
			default:
		}
		return 10;
	}
	return -1;
}

int func_383(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975428[iParam0 /*53*/].f_5, 15);
	}
	return 0;
}

int func_384(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_385(iParam0, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_385(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_389(iParam0);
		
		case 1:
			return func_388(iParam0);
		
		case 2:
			return func_387(iParam0);
		
		case 3:
			return func_386(iParam0);
		
		default:
	}
	return 0;
}

int func_386(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975428[iParam0 /*53*/].f_5, 7);
	}
	return 0;
}

int func_387(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975428[iParam0 /*53*/].f_5, 6);
	}
	return 0;
}

int func_388(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975428[iParam0 /*53*/].f_5, 5);
	}
	return 0;
}

int func_389(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975428[iParam0 /*53*/].f_5, 4);
	}
	return 0;
}

int func_390(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_391(iParam0, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_391(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_395(iParam0);
		
		case 1:
			return func_394(iParam0);
		
		case 2:
			return func_393(iParam0);
		
		case 3:
			return func_392(iParam0);
		
		default:
	}
	return 0;
}

int func_392(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975428[iParam0 /*53*/].f_5, 3);
	}
	return 0;
}

int func_393(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975428[iParam0 /*53*/].f_5, 2);
	}
	return 0;
}

int func_394(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975428[iParam0 /*53*/].f_5, 1);
	}
	return 0;
}

int func_395(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975428[iParam0 /*53*/].f_5, 0);
	}
	return 0;
}

int func_396(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_397(iParam0, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_397(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_401(iParam0);
		
		case 1:
			return func_400(iParam0);
		
		case 2:
			return func_399(iParam0);
		
		case 3:
			return func_398(iParam0);
		
		default:
	}
	return 0;
}

int func_398(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975428[iParam0 /*53*/].f_5, 11);
	}
	return 0;
}

int func_399(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975428[iParam0 /*53*/].f_5, 10);
	}
	return 0;
}

int func_400(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975428[iParam0 /*53*/].f_5, 9);
	}
	return 0;
}

int func_401(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975428[iParam0 /*53*/].f_5, 8);
	}
	return 0;
}

int func_402(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975428[iParam0 /*53*/].f_5, 16);
	}
	return 0;
}

char* func_403(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_404(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975428[iParam0 /*53*/].f_5, 14);
	}
	return 0;
}

int func_405(var uParam0)
{
	if (!func_17(uParam0->f_1084, 0) && !func_358(uParam0->f_1084))
	{
		return 0;
	}
	return 1;
}

int func_406(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 36:
		case 37:
		case 38:
		case 39:
		case 67:
		case 63:
		case 64:
		case 66:
		case 65:
		case 68:
		case 69:
		case 70:
		case 1000:
			return 1;
		
		default:
	}
	return 0;
}

int func_407(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1000:
			if (func_408(uParam0, PLAYER::PLAYER_ID()) != -1)
			{
				return uParam0->f_823.f_67[func_408(uParam0, PLAYER::PLAYER_ID())] == 1;
			}
			break;
	}
	return 0;
}

int func_408(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (uParam0->f_823.f_51[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_409(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1000:
			if (func_408(uParam0, PLAYER::PLAYER_ID()) != -1)
			{
				return uParam0->f_823.f_67[func_408(uParam0, PLAYER::PLAYER_ID())] == 0;
			}
			break;
	}
	return 0;
}

int func_410(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 99:
			return !func_412(uParam0->f_1084, 0);
		
		case 100:
			return !func_412(uParam0->f_1084, 4);
		
		case 101:
			return !func_412(uParam0->f_1084, 1);
		
		case 102:
			return !func_412(uParam0->f_1084, 2);
		
		case 103:
			return !func_412(uParam0->f_1084, 3);
		
		case 104:
			return !func_412(uParam0->f_1084, 5);
		
		case 59:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				return 0;
			}
			return !func_411(uParam0->f_1084);
		
		default:
	}
	return 0;
}

int func_411(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975428[iParam0 /*53*/].f_5, 12);
	}
	return 0;
}

int func_412(int iParam0, bool bParam1)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975428[iParam0 /*53*/].f_5.f_45, bParam1);
	}
	return 0;
}

int func_413(var uParam0, int iParam1)
{
	if (func_366(uParam0, iParam1))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			return 1;
		
		case 40:
			return !func_17(uParam0->f_1084, 7);
		
		case 42:
			return !func_17(uParam0->f_1084, 5);
		
		case 44:
			return !func_17(uParam0->f_1084, 3);
		
		case 45:
			return !func_17(uParam0->f_1084, 4);
		
		case 46:
			return !func_17(uParam0->f_1084, 1);
		
		case 48:
			return !func_17(uParam0->f_1084, 2);
		
		case 47:
			return !func_17(uParam0->f_1084, 6);
		
		case 49:
			return !func_17(uParam0->f_1084, 6);
		
		case 50:
			return !func_17(uParam0->f_1084, 8);
		
		case 53:
			return !func_17(uParam0->f_1084, 9);
		
		case 51:
			return !func_17(uParam0->f_1084, 11);
		
		case 52:
			return !func_17(uParam0->f_1084, 12);
		
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			if (func_374(uParam0->f_1084) == 0 || !func_17(uParam0->f_1084, 13))
			{
				return 1;
			}
			break;
		
		case 60:
			return !func_17(uParam0->f_1084, 14);
		
		case 61:
			return !func_17(uParam0->f_1084, 15);
		
		case 62:
			return !func_17(uParam0->f_1084, 16);
	}
	return 0;
}

int func_414(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1000:
			return 1;
		
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 36:
		case 37:
		case 38:
		case 39:
		case 41:
		case 43:
			if (func_366(uParam0, iParam1))
			{
				return 0;
			}
			return 1;
		
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			if (uParam0->f_1084 != iLocal_1438)
			{
				return 0;
			}
			return NETWORK::NETWORK_IS_ACTIVITY_SESSION();
		
		case 68:
		case 70:
			return NETWORK::NETWORK_IS_ACTIVITY_SESSION();
		
		case 91:
		case 92:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
		case 98:
		case 105:
		case 106:
		case 107:
		case 108:
			return (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && uParam0->f_1084 == iLocal_1438);
		
		default:
	}
	return 0;
}

int func_415(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 67:
		case 63:
		case 64:
		case 65:
		case 66:
		case 68:
		case 69:
		case 70:
			return !NETWORK::NETWORK_IS_ACTIVITY_SESSION();
		
		default:
	}
	return 0;
}

int func_416(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 98:
			if ((NETWORK::NETWORK_IS_ACTIVITY_SESSION() && uParam0->f_1084 == PLAYER::PLAYER_ID()) && Global_1975428[PLAYER::PLAYER_ID() /*53*/].f_5.f_44)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_417(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 98:
			if ((NETWORK::NETWORK_IS_ACTIVITY_SESSION() && uParam0->f_1084 == PLAYER::PLAYER_ID()) && !Global_1975428[PLAYER::PLAYER_ID() /*53*/].f_5.f_44)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_418(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	int iVar0;
	
	if (uParam3->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam3->f_693;
	StringCopy(&(uParam3->f_1[iVar0 /*57*/].f_32), sParam2, 16);
	MISC::SET_BIT(&(uParam3->f_689), iVar0);
	uParam3->f_1[bVar0 /*57*/].f_54 = iParam0;
	uParam3->f_1[bVar0 /*57*/].f_55 = iParam1;
	MISC::SET_BIT(&(uParam3->f_690), bVar0);
	uParam3->f_693++;
}

void func_419(int iParam0, int iParam1, char* sParam2, var uParam3, bool bParam4, int iParam5)
{
	int iVar0;
	
	if (uParam3->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam3->f_693;
	StringCopy(&(uParam3->f_1[iVar0 /*57*/].f_32), sParam2, 16);
	MISC::SET_BIT(&(uParam3->f_689), iVar0);
	uParam3->f_1[bVar0 /*57*/].f_54 = iParam0;
	uParam3->f_1[bVar0 /*57*/].f_55 = iParam1;
	uParam3->f_1[bVar0 /*57*/].f_56 = iParam5;
	if (bParam4)
	{
		MISC::SET_BIT(&(uParam3->f_691), bVar0);
		if (iParam5 < 361)
		{
		}
	}
	uParam3->f_693++;
}

int func_420(int iParam0)
{
	switch (iParam0)
	{
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
			return 1;
		
		default:
	}
	return 0;
}

void func_421(char* sParam0, char* sParam1, var uParam2, var uParam3, char* sParam4)
{
	int iVar0;
	
	if (uParam3->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam3->f_693;
	StringCopy(&(uParam3->f_1[iVar0 /*57*/]), sParam0, 64);
	StringCopy(&(uParam3->f_1[iVar0 /*57*/].f_16), sParam4, 64);
	StringCopy(&(uParam3->f_1[iVar0 /*57*/].f_32), sParam1, 16);
	uParam3->f_1[iVar0 /*57*/].f_36 = uParam2;
	MISC::SET_BIT(&(uParam3->f_686), iVar0);
	uParam3->f_694 = bVar0;
	uParam3->f_693++;
}

void func_422(var uParam0)
{
	func_423(uParam0);
	uParam0->f_692 = 1;
}

void func_423(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(uParam0->f_1[iVar0 /*57*/]), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_16), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_32), "", 16);
		uParam0->f_1[iVar0 /*57*/].f_36 = 0;
		uParam0->f_1[iVar0 /*57*/].f_37 = 0;
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_38), "", 64);
		uParam0->f_1[iVar0 /*57*/].f_54 = 2;
		uParam0->f_1[iVar0 /*57*/].f_55 = 361;
		uParam0->f_1[iVar0 /*57*/].f_56 = 361;
		iVar0++;
	}
	uParam0->f_686 = 0;
	uParam0->f_687 = 0;
	uParam0->f_688 = 0;
	uParam0->f_689 = 0;
	uParam0->f_691 = 0;
	uParam0->f_690 = 0;
	uParam0->f_692 = 0;
	uParam0->f_693 = 0;
	uParam0->f_695 = 0f;
	uParam0->f_696 = 0f;
	uParam0->f_697 = 0f;
	uParam0->f_698 = 0f;
	uParam0->f_699 = 1f;
}

void func_424(var uParam0, float fParam1)
{
	uParam0->f_699 = fParam1;
}

void func_425(var uParam0, var uParam1, var uParam2, int iParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam3 == 1 || PAD::_0x6CD79468A1E595C6(2))
	{
		*uParam2 = 0;
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		func_431(uParam2);
	}
	if (Global_1577892 < 2)
	{
		func_430(1);
	}
	if (*uParam2 == 0)
	{
		if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("instructional_buttons");
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL");
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			bVar0 = false;
			bVar0 = false;
			while (bVar0 < uParam2->f_693)
			{
				if (BitTest(uParam2->f_689, bVar0))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar0);
					if (!BitTest(uParam2->f_690, bVar0))
					{
						iVar1 = uParam2->f_1[bVar0 /*57*/].f_54;
						iVar2 = uParam2->f_1[bVar0 /*57*/].f_55;
						iVar3 = uParam2->f_1[bVar0 /*57*/].f_56;
						func_429(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(iVar1, iVar2, true));
						if (iVar3 < 361)
						{
							func_429(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(iVar1, iVar3, true));
						}
					}
					else
					{
						iVar4 = uParam2->f_1[bVar0 /*57*/].f_54;
						iVar5 = uParam2->f_1[bVar0 /*57*/].f_55;
						func_429(PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(iVar4, iVar5, true));
					}
					if (BitTest(uParam2->f_686, bVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
						if (uParam2->f_694 == bVar0)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam2->f_1[bVar0 /*57*/].f_36, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[bVar0 /*57*/].f_36);
							if (BitTest(uParam2->f_687, bVar0))
							{
								HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[bVar0 /*57*/].f_37);
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else if (BitTest(uParam2->f_688, bVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam2->f_1[bVar0 /*57*/].f_38));
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						func_428(&(uParam2->f_1[bVar0 /*57*/].f_32));
					}
					if (MISC::IS_PC_VERSION())
					{
						if (BitTest(uParam2->f_691, bVar0))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam2->f_1[bVar0 /*57*/].f_55);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(361);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar0);
					func_429(&(uParam2->f_1[bVar0 /*57*/]));
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1[bVar0 /*57*/].f_16)))
					{
						func_429(&(uParam2->f_1[bVar0 /*57*/].f_16));
					}
					if (BitTest(uParam2->f_686, bVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
						if (uParam2->f_694 == bVar0)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam2->f_1[bVar0 /*57*/].f_36, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[bVar0 /*57*/].f_36);
							if (BitTest(uParam2->f_687, bVar0))
							{
								HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[bVar0 /*57*/].f_37);
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else if (BitTest(uParam2->f_688, bVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam2->f_1[bVar0 /*57*/].f_38));
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						func_428(&(uParam2->f_1[bVar0 /*57*/].f_32));
					}
					if (MISC::IS_PC_VERSION())
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(361);
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				bVar0++;
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam2->f_699);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			*uParam2 = 1;
		}
	}
	uParam2->f_695 = 0.05f;
	uParam2->f_696 = 0.045f;
	uParam2->f_697 = 0f;
	uParam2->f_698 = 0f;
	if (*uParam2 == 1)
	{
		func_427(*uParam0, uParam1);
	}
	func_426();
}

void func_426()
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
}

void func_427(int iParam0, var uParam1)
{
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_428(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_429(char* sParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

void func_430(int iParam0)
{
	Global_1577892 = iParam0;
}

void func_431(var uParam0)
{
	uParam0->f_692 = 0;
}

bool func_432(var uParam0)
{
	return uParam0->f_707;
}

void func_433(var uParam0, int iParam1)
{
	if (uParam0->f_707 != iParam1)
	{
	}
	uParam0->f_707 = iParam1;
}

void func_434(var uParam0)
{
	struct<9> Var0;
	int iVar9;
	
	if (!func_435(Local_1525.f_6))
	{
		return;
	}
	Var0 = { func_436() };
	if (iLocal_1699 && !uParam0->f_707)
	{
		func_425(&(uParam0->f_712), &Var0, uParam0, 0);
		return;
	}
	if (!GRAPHICS::GET_IS_WIDESCREEN() || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10)
	{
		func_424(uParam0, 0.5f);
	}
	else
	{
		func_424(uParam0, 0.7f);
	}
	func_422(uParam0);
	iVar9 = uParam0->f_806;
	if (func_415(uParam0, iVar9))
	{
		func_419(2, 201, "CH_INSTR_PREV", uParam0, 1, 361);
	}
	else if (func_414(uParam0, iVar9))
	{
		func_419(2, 201, "CH_INSTR_SEL", uParam0, 1, 361);
	}
	if (func_406(iVar9))
	{
		func_419(2, 202, "CH_INSTR_QUIT", uParam0, 1, 361);
	}
	else
	{
		func_419(2, 202, "CH_INSTR_BACK", uParam0, 1, 361);
	}
	if (func_405(uParam0))
	{
		func_419(2, 203, "HP_MAP", uParam0, 1, 361);
	}
	func_418(2, 0, "HEIST_IB_NAV", uParam0);
	func_425(&(uParam0->f_712), &Var0, uParam0, 1);
	if (!iLocal_1699)
	{
		iLocal_1699 = 1;
	}
	else if (uParam0->f_707)
	{
		uParam0->f_707 = 0;
	}
}

int func_435(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 19:
		case 37:
			return 1;
		
		default:
	}
	return 0;
}

struct<9> func_436()
{
	struct<9> Var0;
	
	Var0.f_0 = 0.5f;
	Var0.f_1 = 0.5f;
	Var0.f_2 = 1f;
	Var0.f_3 = 1f;
	Var0.f_4 = 255;
	Var0.f_5 = 255;
	Var0.f_6 = 255;
	Var0.f_7 = 200;
	Var0.f_8 = 0f;
	return Var0;
}

bool func_437(var uParam0)
{
	return uParam0->f_704;
}

bool func_438(var uParam0)
{
	if (Local_1439.f_7.f_2.f_6 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_1439.f_7.f_2.f_6);
		return StackVal;
	}
	return uParam0->f_703;
}

float func_439()
{
	if (Local_1439.f_7.f_2.f_5 != 0)
	{
		Call_Loc(Local_1439.f_7.f_2.f_5);
		return StackVal;
	}
	return 1f;
}

float func_440()
{
	if (Local_1439.f_7.f_2.f_4 != 0)
	{
		Call_Loc(Local_1439.f_7.f_2.f_4);
		return StackVal;
	}
	return 1f;
}

float func_441()
{
	if (Local_1439.f_7.f_2.f_3 != 0)
	{
		Call_Loc(Local_1439.f_7.f_2.f_3);
		return StackVal;
	}
	return 0.5f;
}

float func_442()
{
	if (Local_1439.f_7.f_2.f_2 != 0)
	{
		Call_Loc(Local_1439.f_7.f_2.f_2);
		return StackVal;
	}
	return 0.5f;
}

int func_443()
{
	if (Local_1439.f_7.f_2.f_1 != 0)
	{
		Call_Loc(Local_1439.f_7.f_2.f_1);
		return StackVal;
	}
	return 1;
}

bool func_444(var uParam0)
{
	return uParam0->f_702;
}

var func_445()
{
	return Global_2723442.f_6;
}

int func_446(var uParam0)
{
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_711))
	{
		return 0;
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_712))
	{
		return 0;
	}
	return 1;
}

void func_447(var uParam0)
{
	int iVar0;
	
	uParam0->f_726.f_1 = uParam0->f_726;
	MISC::SET_BIT(&(uParam0->f_726.f_4), uParam0->f_726.f_1);
	MISC::CLEAR_BIT(&(uParam0->f_726.f_3), uParam0->f_726.f_1);
	iVar0 = uParam0->f_726;
	iVar0++;
	uParam0->f_726 = iVar0;
	if (uParam0->f_726 == 7)
	{
		uParam0->f_726 = 5;
	}
}

void func_448(var uParam0)
{
	MISC::SET_BIT(&(uParam0->f_726.f_3), uParam0->f_726);
}

void func_449(var uParam0)
{
	if (Local_1439.f_4 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_1439.f_4);
	}
	switch (uParam0->f_726)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			func_453(uParam0);
			break;
		
		case 3:
			uParam0->f_1096 = 0;
			uParam0->f_1097 = 0;
			break;
		
		case 4:
			func_450(uParam0);
			func_284(uParam0, 1);
			func_433(uParam0, 1);
			func_285(uParam0, 0, 0);
			break;
		
		case 5:
			break;
	}
}

void func_450(var uParam0)
{
	uParam0->f_741.f_35 = 0f;
	uParam0->f_741.f_35.f_1 = 0f;
	uParam0->f_741.f_35.f_2 = -180f;
	func_452(uParam0, 0);
	func_451(&(uParam0->f_741.f_1), func_346(uParam0), func_345(uParam0), func_344(uParam0), 20, 10, 3, 10f, 1, 0, -1f, 1);
	if (func_343())
	{
		CAM::SHAKE_CAM(uParam0->f_741.f_1, func_342(), func_341());
	}
	func_340(uParam0, func_344(uParam0));
	CAM::SET_WIDESCREEN_BORDERS(true, 0);
	uParam0->f_741.f_38 = { func_346(uParam0) };
	uParam0->f_741.f_41 = { func_345(uParam0) };
	if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
	{
		CAM::DO_SCREEN_FADE_IN(250);
	}
}

void func_451(var uParam0, struct<3> Param1, struct<3> Param4, var uParam7, int iParam8, int iParam9, int iParam10, float fParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	uParam0->f_1 = { Param1 };
	uParam0->f_4 = { Param4 };
	uParam0->f_7 = uParam7;
	uParam0->f_20 = iParam8;
	uParam0->f_21 = iParam9;
	uParam0->f_22 = iParam10;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = uParam7;
	uParam0->f_18 = uParam7;
	uParam0->f_23 = iParam12;
	uParam0->f_19 = fParam11;
	*uParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
	CAM::SET_CAM_ACTIVE(*uParam0, true);
	CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 1, 2);
	if (!bParam15)
	{
		CAM::SHAKE_CAM(*uParam0, "HAND_SHAKE", 0.19f);
	}
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	if (fParam14 > 0f)
	{
		CAM::SET_CAM_NEAR_CLIP(*uParam0, fParam14);
	}
	if (uParam0->f_23)
	{
		HUD::LOCK_MINIMAP_ANGLE(iParam13);
	}
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	uParam0->f_29 = 0f;
	uParam0->f_30 = 0f;
	uParam0->f_26 = 0;
	uParam0->f_28 = 0;
	uParam0->f_27 = 0;
}

void func_452(var uParam0, int iParam1)
{
	uParam0->f_741.f_33 = iParam1;
}

void func_453(var uParam0)
{
	uParam0->f_711 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(func_455(uParam0));
	uParam0->f_712 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(func_454(uParam0));
}

char* func_454(var uParam0)
{
	if (Local_1439.f_7.f_10 != 0)
	{
		Call_Loc(Local_1439.f_7.f_10);
		return StackVal;
	}
	return "INSTRUCTIONAL_BUTTONS";
}

char* func_455(var uParam0)
{
	if (Local_1439.f_7.f_2 != 0)
	{
		Call_Loc(Local_1439.f_7.f_2);
		return StackVal;
	}
	return "";
}

bool func_456(var uParam0)
{
	return BitTest(uParam0->f_726.f_3, uParam0->f_726);
}

void func_457(int iParam0)
{
	if (iLocal_1521 != iParam0)
	{
	}
	iLocal_1521 = iParam0;
}

void func_458()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && func_459() == 25)
	{
		Global_1974627[PLAYER::PLAYER_ID() /*25*/].f_20 = 1;
	}
}

int func_459()
{
	return Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_192;
}

int func_460(var uParam0)
{
	if (!func_467(uParam0))
	{
		return 0;
	}
	if (!func_462(uParam0))
	{
		return 0;
	}
	if (!func_461())
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() != -1 && !Global_1974627[PLAYER::PLAYER_ID() /*25*/].f_20)
	{
		Global_1974627[PLAYER::PLAYER_ID() /*25*/].f_20 = 1;
	}
	return 1;
}

int func_461()
{
	return 1;
}

int func_462(var uParam0)
{
	char* sVar0;
	int iVar1;
	
	if (!BitTest(uParam0->f_1085, 1))
	{
		Call_Loc(Local_1439.f_7);
		sVar0 = StackVal;
		Call_Loc(Local_1439.f_7.f_1);
		iVar1 = StackVal;
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			return 0;
		}
		if (iVar1 == 0)
		{
			return 0;
		}
		if (func_464(sVar0, iVar1))
		{
			uParam0->f_700 = func_463(sVar0);
			MISC::SET_BIT(&(uParam0->f_1085), true);
		}
	}
	return BitTest(uParam0->f_1085, 1);
}

int func_463(char* sParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return HUD::GET_NAMED_RENDERTARGET_RENDER_ID(sParam0);
	}
	return -1;
}

bool func_464(char* sParam0, int iParam1)
{
	return (func_466(sParam0) && func_465(iParam1));
}

int func_465(int iParam0)
{
	if (iParam0 != 0)
	{
		if (!HUD::IS_NAMED_RENDERTARGET_LINKED(iParam0))
		{
			HUD::LINK_NAMED_RENDERTARGET(iParam0);
		}
		return 1;
	}
	return 0;
}

int func_466(char* sParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED(sParam0))
		{
			HUD::REGISTER_NAMED_RENDERTARGET(sParam0, false);
		}
		return 1;
	}
	return 0;
}

bool func_467(var uParam0)
{
	if (!BitTest(uParam0->f_1085, 0))
	{
		uParam0->f_1082 = func_963();
		uParam0->f_732 = { func_961() };
		uParam0->f_732.f_6 = { uParam0->f_732 };
		uParam0->f_741.f_33 = func_960();
		if (func_959() == 0)
		{
			uParam0->f_1073 = { 1561.161f, 384.824f, -48.6215f };
			uParam0->f_1073.f_3 = { -89.3034f, -0.1435f, 180f };
			uParam0->f_1073.f_6 = 69f;
		}
		else
		{
			uParam0->f_1073 = { 1561.16f, 384.8204f, -48.9135f };
			uParam0->f_1073.f_3 = { -89.5003f, -0.204f, 180f };
			uParam0->f_1073.f_6 = 69f;
		}
		if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			uParam0->f_1084 = func_958();
		}
		Local_1439.f_0 = 141921;
		Local_1439.f_1 = 141877;
		Local_1439.f_2 = 141858;
		Local_1439.f_3 = 141839;
		Local_1439.f_4 = 123135;
		Local_1439.f_4.f_1 = 123050;
		Local_1439.f_4.f_2 = 72741;
		Local_1439.f_7 = 72729;
		Local_1439.f_7.f_1 = 72716;
		Local_1439.f_7.f_2 = 72704;
		Local_1439.f_7.f_2.f_1 = 72695;
		Local_1439.f_7.f_2.f_2 = 72682;
		Local_1439.f_7.f_2.f_3 = 72669;
		Local_1439.f_7.f_2.f_4 = 72656;
		Local_1439.f_7.f_2.f_5 = 72643;
		Local_1439.f_7.f_2.f_7 = 72516;
		Local_1439.f_28 = 69723;
		Local_1439.f_18 = 69655;
		Local_1439.f_18.f_1 = 69587;
		Local_1439.f_18.f_2 = 69557;
		Local_1439.f_18.f_3 = 69548;
		Local_1439.f_18.f_4 = 69539;
		Local_1439.f_18.f_7.f_2 = 69526;
		Local_1439.f_30 = 69462;
		Local_1439.f_31 = 69345;
		Local_1439.f_32 = 69255;
		Local_1439.f_33.f_2 = 69242;
		Local_1439.f_33 = 69164;
		Local_1439.f_33.f_1 = 66588;
		Local_1439.f_33.f_3 = 66573;
		Local_1439.f_33.f_5 = 66561;
		Local_1439.f_33.f_4 = 66521;
		Local_1439.f_33.f_6 = 66505;
		Local_1439.f_33.f_7 = 66493;
		Local_1439.f_33.f_8 = 62766;
		Local_1439.f_33.f_9 = 62754;
		Local_1439.f_43 = 62742;
		Local_1439.f_43.f_1 = 62034;
		Local_1439.f_43.f_2 = 62022;
		Local_1439.f_43.f_3 = 62013;
		Local_1439.f_43.f_5 = 62001;
		Local_1439.f_43.f_6 = 61955;
		Local_1439.f_43.f_7 = 61847;
		Local_1439.f_51 = 61838;
		Local_1439.f_51.f_1 = 61700;
		Local_1439.f_51.f_2 = 61688;
		Local_1439.f_51.f_3 = 61674;
		Local_1439.f_51.f_4 = 60856;
		MISC::SET_BIT(&(uParam0->f_1085), false);
	}
	return BitTest(uParam0->f_1085, 0);
}

void func_468(var uParam0)
{
	func_470(uParam0);
	if (uParam0->f_1084 == PLAYER::PLAYER_ID())
	{
		func_469(uParam0);
		Global_1974627[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_22 = 1;
	}
}

void func_469(var uParam0)
{
	uParam0->f_823.f_67[0] = 1;
	Global_1974627[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_7[0] = 1;
}

void func_470(var uParam0)
{
	int iVar0;
	int iVar1;
	
	switch (uParam0->f_823.f_49)
	{
		case 1:
			if (uParam0->f_1084 == PLAYER::PLAYER_ID())
			{
				Global_1974627[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[0] = 100;
				Global_1974627[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[1] = 0;
				Global_1974627[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[2] = 0;
				Global_1974627[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[3] = 0;
				Global_1974627[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[4] = 0;
			}
			uParam0->f_823.f_56[0] = 100;
			uParam0->f_823.f_56[1] = 0;
			uParam0->f_823.f_56[2] = 0;
			uParam0->f_823.f_56[3] = 0;
			uParam0->f_823.f_56[4] = 0;
			break;
		
		case 2:
			if (uParam0->f_1084 == PLAYER::PLAYER_ID())
			{
				Global_1974627[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[0] = 85;
				Global_1974627[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[1] = 15;
				Global_1974627[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[2] = 0;
				Global_1974627[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[3] = 0;
				Global_1974627[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[4] = 0;
			}
			uParam0->f_823.f_56[0] = 85;
			uParam0->f_823.f_56[1] = 15;
			uParam0->f_823.f_56[2] = 0;
			uParam0->f_823.f_56[3] = 0;
			uParam0->f_823.f_56[4] = 0;
			break;
		
		case 3:
			if (uParam0->f_1084 == PLAYER::PLAYER_ID())
			{
				Global_1974627[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[0] = 70;
				Global_1974627[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[1] = 15;
				Global_1974627[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[2] = 15;
				Global_1974627[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[3] = 0;
				Global_1974627[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[4] = 0;
			}
			uParam0->f_823.f_56[0] = 70;
			uParam0->f_823.f_56[1] = 15;
			uParam0->f_823.f_56[2] = 15;
			uParam0->f_823.f_56[3] = 0;
			uParam0->f_823.f_56[4] = 0;
			break;
		
		case 4:
			if (uParam0->f_1084 == PLAYER::PLAYER_ID())
			{
				Global_1974627[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[0] = 55;
				Global_1974627[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[1] = 15;
				Global_1974627[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[2] = 15;
				Global_1974627[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[3] = 15;
				Global_1974627[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[4] = 0;
			}
			uParam0->f_823.f_56[0] = 55;
			uParam0->f_823.f_56[1] = 15;
			uParam0->f_823.f_56[2] = 15;
			uParam0->f_823.f_56[3] = 15;
			uParam0->f_823.f_56[4] = 0;
			break;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (uParam0->f_823.f_51[iVar0] != PLAYER::NETWORK_PLAYER_ID_TO_INT())
		{
		}
		else
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	Global_2715551.f_6546 = uParam0->f_823.f_56[iVar1];
	Global_1945276.f_29 = Global_2715551.f_6546;
}

void func_471(var uParam0)
{
	uParam0->f_707 = 1;
}

int func_472()
{
	return 120000;
}

int func_473(var uParam0)
{
	if (((((uParam0->f_1084 == -1 || Global_1975428[uParam0->f_1084 /*53*/].f_5.f_39 == 0) || Global_1975428[uParam0->f_1084 /*53*/].f_5.f_40 == -1) || Global_1975428[uParam0->f_1084 /*53*/].f_5.f_41 == -1) || Global_1975428[uParam0->f_1084 /*53*/].f_5.f_42 == -1) || Global_1975428[uParam0->f_1084 /*53*/].f_5.f_43 == 0)
	{
		return 0;
	}
	return 1;
}

int func_474(var uParam0)
{
	return 1;
}

void func_475(int iParam0)
{
	int iVar0;
	
	if (func_476(iParam0) != 12581)
	{
		iVar0 = func_7(func_476(iParam0), -1, 0);
		MISC::SET_BIT(&iVar0, (iParam0 % 32));
		func_4(func_476(iParam0), iVar0, -1, 1, 0);
	}
}

int func_476(int iParam0)
{
	switch ((iParam0 / 32))
	{
		case 0:
			return 9540;
		
		case 1:
			return 9541;
		
		default:
	}
	return 12581;
}

int func_477(int iParam0)
{
	if (func_476(iParam0) != 12581)
	{
		if (BitTest(func_7(func_476(iParam0), -1, 0), (iParam0 % 32)))
		{
			return 0;
		}
	}
	return 1;
}

char* func_478(var uParam0)
{
	return "HS4_PAVEL";
}

int func_479(var uParam0)
{
	return 2;
}

char* func_480(var uParam0)
{
	return "HS4PAAU";
}

char* func_481(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HS4PA_PS_1";
		
		case 1:
			return "HS4PA_PS_2";
		
		case 2:
			return "HS4PA_PS_3";
		
		case 3:
			return "HS4PA_PS_49";
		
		case 4:
			return "HS4PA_PS_50";
		
		case 5:
			return "HS4PA_PS_4";
		
		case 6:
			return "HS4PA_PS_5";
		
		case 7:
			return "HS4PA_PS_6";
		
		case 8:
			return "HS4PA_PS_7";
		
		case 9:
			return "HS4PA_PS_8";
		
		case 10:
			return "HS4PA_PS_15";
		
		case 11:
			return "HS4PA_PS_9";
		
		case 12:
			return "HS4PA_PS_10";
		
		case 13:
			return "HS4PA_PS_11";
		
		case 14:
			return "HS4PA_PS_51";
		
		case 15:
			return "HS4PA_PS_12";
		
		case 16:
			return "HS4PA_PS_52";
		
		case 17:
			return "HS4PA_PS_13";
		
		case 18:
			return "HS4PA_PS_14";
		
		case 19:
			return "HS4PA_PS_16";
		
		case 20:
			return "HS4PA_PS_17";
		
		case 21:
			return "HS4PA_PS_18";
		
		case 22:
			return "HS4PA_PS_19";
		
		case 23:
			return "HS4PA_PS_20";
		
		case 24:
			return "HS4PA_PS_21";
		
		case 25:
			return "HS4PA_PS_22";
		
		case 26:
			return "HS4PA_PS_23";
		
		case 27:
			return "HS4PA_PS_24";
		
		case 28:
			return "HS4PA_PS_25";
		
		case 29:
			return "HS4PA_PS_53";
		
		case 30:
			return "HS4PA_PS_26";
		
		case 31:
			return "HS4PA_PS_27";
		
		case 32:
			return "HS4PA_PS_28";
		
		case 33:
			return "HS4PA_PS_29";
		
		case 34:
			return "HS4PA_PS_30";
		
		case 35:
			return "HS4PA_PS_31";
		
		case 36:
			return "HS4PA_PS_32";
		
		case 37:
			return "HS4PA_PS_33";
		
		case 38:
			return "HS4PA_PS_34";
		
		case 39:
			return "HS4PA_PS_35";
		
		case 40:
			return "HS4PA_PS_36";
		
		case 41:
			return "HS4PA_PS_37";
		
		case 42:
			return "HS4PA_PS_38";
		
		case 43:
			return "HS4PA_PS_39";
		
		case 44:
			return "HS4PA_PS_40";
		
		case 45:
			return "HS4PA_PS_41";
		
		case 46:
			return "HS4PA_PS_42";
		
		case 47:
			return "HS4PA_PS_43";
		
		case 48:
			return "HS4PA_PS_44";
		
		case 49:
			return "HS4PA_PS_45";
		
		case 50:
			return "HS4PA_PS_46";
		
		case 51:
			return "HS4PA_PS_47";
		
		case 52:
			return "HS4PA_PS_48";
		
		default:
	}
	return "";
}

var func_482()
{
	return Global_1579017;
}

char* func_483()
{
	return "HIP_SETUP_CASH";
}

int func_484()
{
	var uVar0;
	struct<10> Var1;
	
	if (func_499())
	{
		if (func_498())
		{
			func_486(396623013, Global_262145.f_29580, &uVar0, 0, 1, 0);
		}
		else
		{
			Var1 = -1;
			Var1.f_1 = -1;
			Var1.f_2 = -1;
			Var1.f_3 = -1;
			Var1.f_4 = -1;
			Var1.f_5 = -1;
			Var1.f_6 = -1;
			Var1.f_7 = -1;
			Var1.f_8 = -1;
			Var1.f_9 = -1;
			func_485(&Var1);
			Var1.f_7 = Global_262145.f_29580;
			MONEY::_NETWORK_SPENT_ISLAND_HEIST(Global_262145.f_29580, 0, 1, &Var1);
		}
		return 1;
	}
	return 0;
}

void func_485(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_3 = -1;
	uParam0->f_4 = -1;
	uParam0->f_5 = -1;
	uParam0->f_6 = -1;
	uParam0->f_7 = -1;
	uParam0->f_8 = -1;
	uParam0->f_9 = -1;
}

void func_486(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_498())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_28039)
			{
				func_487(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_487(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
		case -1896606724:
		case -1291433573:
		case 538631715:
		case 133782822:
		case 2081885153:
		case -1314365345:
		case 1322977732:
		case 396623013:
		case 1981664462:
		case -1921250821:
		case -1370731547:
		case 1683798242:
		case -910968288:
		case -168319378:
		case 1637817605:
		case 830018386:
		case 1051883823:
			if (iParam1 > 0 || Global_262145.f_28039)
			{
				func_487(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
		case -518651910:
		case 14658715:
		case -604793592:
		case -823426392:
		case -1401862980:
		case -173354274:
		case 409533976:
		case -1472522337:
		case 542574408:
		case -1261799063:
		case 784631574:
		case -2027479156:
		case -837690641:
		case -1029672338:
		case -1503749970:
		case -1843409092:
		case 1669058563:
		case 2102747615:
		case 2030771998:
		case 1708747007:
		case 645293860:
		case -818859193:
		case 300796227:
		case -1999832346:
		case 1058055395:
		case -321151125:
		case 2078731875:
		case 1280785534:
		case -1878824774:
		case 247992227:
		case -229237358:
		case -1123183389:
		case 1814197076:
		case 713955548:
		case -2026544524:
		case -719580138:
		case -163417439:
		case -550417574:
			func_487(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_487(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_498())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_6()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4529831 = 1;
			return 0;
		}
		if (Global_2726400)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4529832 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4528329[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar4))
		{
			*uParam0 = func_494(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4528329[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4528329[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4529816 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4529830 = 1;
			Global_4529833 = iParam4;
			Global_4529835 = iParam3;
			Global_4529836 = 1;
			Global_4529834 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4529833 = iParam4;
			Global_4529835 = iParam3;
			Global_4529836 = 1;
			Global_4529834 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_493(1, iParam4);
			Global_4529830 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_488(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_488(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_124.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_489(iParam0);
	}
}

void func_489(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_498())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_492(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::_NET_GAMESERVER_BASKET_DELETE();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4528329[iParam0 /*85*/].f_66);
		}
		func_490(&(Global_4528329[iParam0 /*85*/]));
	}
}

void func_490(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_491(&(uParam0->f_14));
	func_491(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_491(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_492(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4528329[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_493(int iParam0, int iParam1)
{
	Global_2727588 = iParam1;
	Global_2727587 = iParam0;
}

int func_494(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4528329[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_498())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4528329[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4528329[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4528329[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4528329[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4528329[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4528329[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4528329[iVar0 /*85*/].f_66 = iParam0;
			Global_4528329[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4528329[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4528329[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4528329[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4528329[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4528329[iVar0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4528329[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4529816 = 0;
			if (bParam6)
			{
				Global_4528329[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_495(Global_4528329[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_495(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
{
	struct<3> Var0;
	int iVar36;
	
	if (iParam85 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = -1141953949;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam85;
	iVar36 = func_497(Var0.f_1);
	if ((Global_262145.f_23845 && !Global_262145.f_23846) && !Global_262145.f_23847)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_496();
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 36, iVar36);
	}
}

void func_496()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_497(bool bParam0)
{
	var uVar0;
	
	if (bParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, bParam0);
	}
	return uVar0;
}

int func_498()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_499()
{
	int iVar0;
	int iVar1;
	
	if (STATS::_0x6DEE77AFF8C21BD1(&iVar0, &iVar1))
	{
		func_4(9570, iVar0, -1, 1, 0);
		func_4(9571, iVar1, -1, 1, 0);
		return 1;
	}
	return 0;
}

char* func_500()
{
	return "HIP_COOLDOWN";
}

var func_501()
{
	return BitTest(Global_1977125.f_10, 6);
}

struct<16> func_502()
{
	struct<16> Var0;
	
	StringCopy(&Var0, "HIP_WARN_SETUP", 64);
	if (BitTest(Global_1977125.f_10, 7))
	{
		StringCopy(&Var0, "HIP_WARN_SETUP2", 64);
	}
	return Var0;
}

char* func_503()
{
	return "HIP_PROMPT_S";
}

var func_504()
{
	return Global_262145.f_29580;
}

void func_505()
{
	if (BitTest(Global_1977125.f_10, 7))
	{
		func_510(0);
		func_506(1, 1);
		MISC::SET_BIT(&(Global_1973525.f_1085), 7);
		Global_1973525.f_1096 = 1;
	}
	else
	{
		func_510(1);
	}
}

void func_506(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_7(9510, -1, 0);
	if (bParam0)
	{
		MISC::SET_BIT(&iVar0, 12);
		MISC::SET_BIT(&(Global_1975428[PLAYER::PLAYER_ID() /*53*/].f_1), 12);
	}
	else
	{
		MISC::CLEAR_BIT(&iVar0, 12);
		MISC::CLEAR_BIT(&(Global_1975428[PLAYER::PLAYER_ID() /*53*/].f_1), 12);
	}
	func_4(9510, iVar0, -1, 1, 0);
	if (bParam1)
	{
		func_507(-1713398555, 18, 0);
	}
}

void func_507(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_509(iParam1, iParam2))
	{
		iVar0 = func_508();
		Global_2725127[iVar0] = iParam1;
		Global_2725138[iVar0] = iParam0;
	}
}

int func_508()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2725127[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_509(int iParam0, var uParam1)
{
	if (Global_1575042)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575054) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_510(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_7(9510, -1, 0);
	MISC::SET_BIT(&iVar0, false);
	MISC::SET_BIT(&(Global_1975428[PLAYER::PLAYER_ID() /*53*/].f_1), false);
	func_4(9510, iVar0, -1, 1, 0);
	func_518(6);
	func_517();
	func_514();
	func_512();
	func_511(1);
	if (bParam0)
	{
		func_507(-1713398555, 18, 0);
	}
}

void func_511(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_7(9510, -1, 0);
	if (bParam0)
	{
		MISC::SET_BIT(&iVar0, 5);
		MISC::SET_BIT(&(Global_1975428[PLAYER::PLAYER_ID() /*53*/].f_1), 5);
	}
	else
	{
		MISC::CLEAR_BIT(&iVar0, 5);
		MISC::CLEAR_BIT(&(Global_1975428[PLAYER::PLAYER_ID() /*53*/].f_1), 5);
	}
	func_4(9510, iVar0, -1, 1, 0);
}

void func_512()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17[24];
	int iVar42[8];
	int iVar51[7];
	int iVar59;
	int iVar60;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(Global_262145.f_29411, Global_262145.f_29412);
	bVar1 = false;
	while (bVar1 < iVar0)
	{
		iVar17[bVar1] = 1;
		bVar1++;
	}
	bVar1 = false;
	bVar1 = false;
	while (bVar1 < 24)
	{
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 24);
		iVar59 = iVar17[bVar1];
		iVar17[bVar1] = iVar17[iVar2];
		iVar17[iVar2] = iVar59;
		bVar1++;
	}
	bVar1 = false;
	bVar1 = false;
	while (bVar1 < 24)
	{
		bVar1++;
	}
	bVar1 = false;
	bVar1 = false;
	while (bVar1 < 24)
	{
		if (iVar17[bVar1])
		{
			iVar60 = func_513(bVar1, 1);
			switch (iVar60)
			{
				case 0:
					MISC::SET_BIT(&iVar3, bVar1);
					break;
				
				case 1:
					MISC::SET_BIT(&iVar5, bVar1);
					break;
				
				case 2:
					MISC::SET_BIT(&iVar7, bVar1);
					break;
				
				case 3:
					MISC::SET_BIT(&iVar9, bVar1);
					break;
				}
		}
		bVar1++;
	}
	if (!func_358(PLAYER::PLAYER_ID()))
	{
		MISC::CLEAR_BIT(&iVar3, 6);
		MISC::CLEAR_BIT(&iVar3, 7);
		MISC::SET_BIT(&iVar5, 6);
		MISC::SET_BIT(&iVar5, 7);
		MISC::CLEAR_BIT(&iVar7, 6);
		MISC::CLEAR_BIT(&iVar7, 7);
		MISC::CLEAR_BIT(&iVar9, 6);
		MISC::CLEAR_BIT(&iVar9, 7);
		MISC::CLEAR_BIT(&iVar3, 11);
		MISC::CLEAR_BIT(&iVar3, 12);
		MISC::CLEAR_BIT(&iVar5, 11);
		MISC::CLEAR_BIT(&iVar5, 12);
		MISC::CLEAR_BIT(&iVar7, 11);
		MISC::CLEAR_BIT(&iVar7, 12);
		MISC::CLEAR_BIT(&iVar9, 11);
		MISC::CLEAR_BIT(&iVar9, 12);
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(Global_262145.f_29413, Global_262145.f_29414);
	bVar1 = false;
	while (bVar1 < iVar0)
	{
		iVar42[bVar1] = 1;
		bVar1++;
	}
	bVar1 = false;
	bVar1 = false;
	while (bVar1 < 8)
	{
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
		iVar59 = iVar42[bVar1];
		iVar42[bVar1] = iVar42[iVar2];
		iVar42[iVar2] = iVar59;
		bVar1++;
	}
	bVar1 = false;
	bVar1 = false;
	while (bVar1 < 8)
	{
		bVar1++;
	}
	bVar1 = false;
	bVar1 = false;
	while (bVar1 < 8)
	{
		if (iVar42[bVar1])
		{
			iVar60 = func_513(bVar1, 0);
			switch (iVar60)
			{
				case 0:
					MISC::SET_BIT(&iVar4, bVar1);
					break;
				
				case 1:
					MISC::SET_BIT(&iVar6, bVar1);
					break;
				
				case 2:
					MISC::SET_BIT(&iVar8, bVar1);
					break;
				
				case 3:
					MISC::SET_BIT(&iVar10, bVar1);
					break;
				}
		}
		bVar1++;
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(Global_262145.f_29415, Global_262145.f_29416);
	bVar1 = false;
	while (bVar1 < iVar0)
	{
		iVar51[bVar1] = 1;
		bVar1++;
	}
	bVar1 = false;
	bVar1 = false;
	while (bVar1 < 7)
	{
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
		iVar59 = iVar51[bVar1];
		iVar51[bVar1] = iVar51[iVar2];
		iVar51[iVar2] = iVar59;
		bVar1++;
	}
	bVar1 = false;
	bVar1 = false;
	while (bVar1 < 7)
	{
		if (iVar51[bVar1])
		{
			MISC::SET_BIT(&iVar11, bVar1);
		}
		bVar1++;
	}
	iVar12 = MISC::GET_RANDOM_INT_IN_RANGE(Global_262145.f_29417, Global_262145.f_29418 + 1);
	iVar13 = MISC::GET_RANDOM_INT_IN_RANGE(Global_262145.f_29419, Global_262145.f_29420 + 1);
	iVar14 = MISC::GET_RANDOM_INT_IN_RANGE(Global_262145.f_29421, Global_262145.f_29422 + 1);
	iVar15 = MISC::GET_RANDOM_INT_IN_RANGE(Global_262145.f_29423, Global_262145.f_29424 + 1);
	iVar16 = MISC::GET_RANDOM_INT_IN_RANGE(Global_262145.f_29425, Global_262145.f_29426 + 1);
	iVar12 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(iVar12) / 100f)) * 100;
	iVar13 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(iVar13) / 100f)) * 100;
	iVar14 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(iVar14) / 100f)) * 100;
	iVar15 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(iVar15) / 100f)) * 100;
	iVar16 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(iVar16) / 100f)) * 100;
	func_4(9494, iVar3, -1, 1, 0);
	func_4(9495, iVar4, -1, 1, 0);
	func_4(9496, iVar12, -1, 1, 0);
	func_4(9497, iVar5, -1, 1, 0);
	func_4(9498, iVar6, -1, 1, 0);
	func_4(9499, iVar13, -1, 1, 0);
	func_4(9500, iVar7, -1, 1, 0);
	func_4(9501, iVar8, -1, 1, 0);
	func_4(9502, iVar14, -1, 1, 0);
	func_4(9503, iVar9, -1, 1, 0);
	func_4(9504, iVar10, -1, 1, 0);
	func_4(9505, iVar15, -1, 1, 0);
	func_4(9506, iVar11, -1, 1, 0);
	func_4(9507, iVar16, -1, 1, 0);
}

int func_513(bool bParam0, bool bParam1)
{
	var uVar0[4];
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	
	if (bParam1)
	{
		uVar0[0] = Global_262145.f_29429[bParam0];
		uVar0[1] = Global_262145.f_29454[bParam0];
		uVar0[2] = Global_262145.f_29479[bParam0];
		uVar0[3] = Global_262145.f_29504[bParam0];
	}
	else
	{
		uVar0[0] = Global_262145.f_29529[bParam0];
		uVar0[1] = Global_262145.f_29538[bParam0];
		uVar0[2] = Global_262145.f_29547[bParam0];
		uVar0[3] = Global_262145.f_29556[bParam0];
	}
	iVar8 = 0;
	while (iVar8 <= 3)
	{
		fVar5 = (fVar5 + uVar0[iVar8]);
		iVar8++;
	}
	fVar7 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fVar5);
	iVar8 = 0;
	while (iVar8 <= 3)
	{
		fVar6 = (fVar6 + uVar0[iVar8]);
		if (fVar7 < fVar6)
		{
			iVar9 = iVar8;
			return iVar9;
		}
		iVar8++;
	}
	return -1;
}

void func_514()
{
	var uVar0[4];
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	
	if (!func_516(0))
	{
		func_4(9488, 4, -1, 1, 0);
		return;
	}
	if (Global_262145.f_29572 != 0)
	{
		if (func_515(9360, -1) != Global_262145.f_29572)
		{
			func_4(9488, 5, -1, 1, 0);
			return;
		}
	}
	uVar0[0] = Global_262145.f_29567;
	uVar0[1] = Global_262145.f_29568;
	uVar0[2] = Global_262145.f_29569;
	uVar0[3] = Global_262145.f_29571;
	iVar8 = 0;
	while (iVar8 < 4)
	{
		fVar5 = (fVar5 + uVar0[iVar8]);
		iVar8++;
	}
	fVar7 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fVar5);
	iVar8 = 0;
	while (iVar8 < 4)
	{
		fVar6 = (fVar6 + uVar0[iVar8]);
		if (fVar7 < fVar6)
		{
			func_4(9488, iVar8, -1, 1, 0);
			return;
		}
		iVar8++;
	}
}

int func_515(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_6();
	}
	return STATS::_GET_PACKED_STAT_INT(iParam0, iParam1);
}

bool func_516(bool bParam0)
{
	if (bParam0)
	{
		return BitTest(func_7(9510, -1, 0), 1);
	}
	return func_358(PLAYER::PLAYER_ID());
}

void func_517()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3 + 1);
	MISC::SET_BIT(&iVar1, bVar0);
	bVar0 = MISC::GET_RANDOM_INT_IN_RANGE(4, 7 + 1);
	MISC::SET_BIT(&iVar1, bVar0);
	bVar0 = MISC::GET_RANDOM_INT_IN_RANGE(8, 11 + 1);
	MISC::SET_BIT(&iVar1, bVar0);
	bVar0 = MISC::GET_RANDOM_INT_IN_RANGE(12, 15 + 1);
	MISC::SET_BIT(&iVar1, bVar0);
	func_4(9489, iVar1, -1, 1, 0);
	iVar1 = 0;
	bVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3 + 1);
	MISC::SET_BIT(&iVar1, bVar0);
	bVar0 = MISC::GET_RANDOM_INT_IN_RANGE(4, 7 + 1);
	MISC::SET_BIT(&iVar1, bVar0);
	bVar0 = MISC::GET_RANDOM_INT_IN_RANGE(8, 11 + 1);
	MISC::SET_BIT(&iVar1, bVar0);
	bVar0 = MISC::GET_RANDOM_INT_IN_RANGE(12, 15 + 1);
	MISC::SET_BIT(&iVar1, bVar0);
	func_4(9490, iVar1, -1, 1, 0);
	iVar1 = 0;
	bVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3 + 1);
	MISC::SET_BIT(&iVar1, bVar0);
	bVar0 = MISC::GET_RANDOM_INT_IN_RANGE(4, 7 + 1);
	if (!func_358(PLAYER::PLAYER_ID()))
	{
		bVar0 = 6;
	}
	MISC::SET_BIT(&iVar1, bVar0);
	bVar0 = MISC::GET_RANDOM_INT_IN_RANGE(8, 11 + 1);
	MISC::SET_BIT(&iVar1, bVar0);
	bVar0 = MISC::GET_RANDOM_INT_IN_RANGE(12, 15 + 1);
	MISC::SET_BIT(&iVar1, bVar0);
	func_4(9491, iVar1, -1, 1, 0);
}

void func_518(int iParam0)
{
	if (iParam0 == 6)
	{
		iParam0 = MISC::GET_RANDOM_INT_IN_RANGE(0 + 1, 6);
	}
	func_4(9492, iParam0, -1, 1, 0);
}

int func_519()
{
	return func_520(1);
}

int func_520(bool bParam0)
{
	if (bParam0)
	{
		return BitTest(func_7(9510, -1, 0), 0);
	}
	return func_521(PLAYER::PLAYER_ID());
}

int func_521(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975428[iParam0 /*53*/].f_1, 0);
	}
	return 0;
}

bool func_522()
{
	return func_516(1);
}

int func_523(var uParam0)
{
	return func_524(0);
}

int func_524(int iParam0)
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_525(iParam0);
	iVar1 = unk_0xECF041186C5A94DC(uVar0);
	if (iVar1 != -1)
	{
		return iVar1;
	}
	return -1;
}

int func_525(int iParam0)
{
	if (iParam0 == -1 || iParam0 == 11)
	{
		return 0;
	}
	return Global_262145.f_29583[iParam0];
}

int func_526()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1437) && func_75(iLocal_1438, 1, 1))
	{
		if ((!func_118() && !func_117()) && !func_116())
		{
			if ((INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iLocal_1437) != joaat("Rm_Command") && INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iLocal_1437) != joaat("Rm_Stair1")) && INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iLocal_1437) != joaat("Rm_Room2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

char* func_527(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (!func_358(iLocal_1438) && !func_17(iLocal_1438, 0))
			{
				return "HIP_HELP_BBOSS2";
			}
			return "HIP_HELP_BBOSS";
		
		default:
	}
	return "";
}

float func_528()
{
	return 0.1f;
}

int func_529()
{
	return 0;
}

int func_530()
{
	return 0;
}

float func_531(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 69f;
		
		default:
	}
	return 0f;
}

Vector3 func_532(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (func_959() == 0)
			{
				return -89.3034f, -0.1435f, 180f;
			}
			return -89.5003f, -0.204f, 180f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_533(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (func_959() == 0)
			{
				return 1561.161f, 384.824f, -48.6215f;
			}
			return 1561.16f, 384.8204f, -48.9135f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_534(var uParam0, int iParam1, int* iParam2)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	
	if ((iLocal_1411 || iLocal_1412) || (Local_1525.f_6 != -1 && !func_435(Local_1525.f_6)))
	{
		return;
	}
	iVar0 = uParam0->f_806;
	func_545(uParam0, iParam1, iVar0);
	switch (iParam1)
	{
		case 0:
			if (iLocal_1432 != 0)
			{
				return;
			}
			func_544(uParam0->f_711, 188);
			func_543(uParam0->f_711);
			break;
		
		case 1:
			if (iLocal_1432 != 0)
			{
				return;
			}
			func_544(uParam0->f_711, 187);
			func_543(uParam0->f_711);
			break;
		
		case 2:
			if (func_357(iVar0))
			{
				func_541(uParam0, iVar0, iParam1);
			}
			else
			{
				func_544(uParam0->f_711, 189);
				func_543(uParam0->f_711);
			}
			break;
		
		case 3:
			if (func_357(iVar0))
			{
				func_541(uParam0, iVar0, iParam1);
			}
			else
			{
				func_544(uParam0->f_711, 190);
				func_543(uParam0->f_711);
			}
			break;
		
		case 8:
			if (Local_1525.f_6 != -1)
			{
				return;
			}
			func_544(uParam0->f_711, 205);
			func_543(uParam0->f_711);
			break;
		
		case 9:
			if (Local_1525.f_6 != -1)
			{
				return;
			}
			func_544(uParam0->f_711, 206);
			func_543(uParam0->f_711);
			break;
		
		case 4:
			if (func_540(uParam0, iVar0))
			{
				func_544(uParam0->f_711, 201);
				func_539(uParam0->f_711);
				func_543(uParam0->f_711);
			}
			if (iVar0 == 5 || iVar0 == 65)
			{
				if (!bLocal_1417)
				{
					bLocal_1417 = true;
				}
			}
			break;
		
		case 5:
			if (iLocal_1432 != 0)
			{
				func_537(uParam0);
			}
			else if (func_406(iVar0))
			{
				if (Local_1525.f_6 == -1)
				{
					if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
					{
						uParam0->f_1086 = 1;
					}
					else
					{
						MISC::SET_BIT(iParam2, false);
					}
				}
			}
			else
			{
				func_544(uParam0->f_711, 202);
				func_543(uParam0->f_711);
				if (func_536(iVar0))
				{
					if (bLocal_1417)
					{
						bLocal_1417 = false;
					}
				}
			}
			break;
		
		case 6:
			if (iLocal_1432 != 0)
			{
				return;
			}
			if (!func_405(uParam0))
			{
				return;
			}
			bLocal_1417 = !bLocal_1417;
			break;
		
		case 7:
			if (iLocal_1432 != 0)
			{
				return;
			}
			if (Local_1525.f_6 != -1)
			{
				return;
			}
			iLocal_1415 = !iLocal_1415;
			break;
		
		case 15:
			if (func_357(iVar0))
			{
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_823.f_51[func_535(iVar0)]);
				Var2 = { func_204(iVar1) };
				func_34(uParam0, 5);
				NETWORK::NETWORK_SHOW_PROFILE_UI(&Var2);
			}
			break;
	}
}

int func_535(int iParam0)
{
	switch (iParam0)
	{
		case 105:
			return 0;
		
		case 106:
			return 1;
		
		case 107:
			return 2;
		
		case 108:
			return 3;
		
		default:
	}
	return -1;
}

int func_536(int iParam0)
{
	switch (iParam0)
	{
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 85:
		case 86:
			return 1;
		
		default:
	}
	return 0;
}

void func_537(var uParam0)
{
	iLocal_1432 = 0;
	uParam0->f_707 = 1;
	func_538(uParam0->f_711);
}

void func_538(int iParam0)
{
	GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(iParam0, "HIDE_OVERLAY");
}

void func_539(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "REQUEST_CURRENT_SELECTION");
	iLocal_1410 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
	iLocal_1412 = 1;
}

int func_540(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && uParam0->f_1084 != iLocal_1438)
			{
				return 0;
			}
			break;
	}
	return 1;
}

void func_541(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1084 != PLAYER::PLAYER_ID())
	{
		return;
	}
	if (uParam0->f_823.f_49 == 1)
	{
		func_34(uParam0, 4);
		return;
	}
	switch (iParam2)
	{
		case 2:
			iVar0 = -5;
			break;
		
		case 3:
			if (uParam0->f_823.f_56[4] >= 5)
			{
				iVar0 = 5;
			}
			break;
	}
	iVar1 = func_535(iParam1);
	func_542(uParam0, iVar1, iVar0);
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar1++;
	}
}

void func_542(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = 15;
	iVar1 = 85;
	if (uParam0->f_823.f_49 == 1)
	{
		iVar1 = 100;
	}
	if (iParam2 < 0)
	{
		iVar2 = uParam0->f_823.f_56[iParam1];
		if (iVar2 < MISC::ABSI(iParam2))
		{
			iParam2 = iVar2;
		}
		if (uParam0->f_823.f_56[iParam1] < iVar0)
		{
			iVar3 = (iVar0 - uParam0->f_823.f_56[iParam1]);
			uParam0->f_823.f_56[iParam1] = (uParam0->f_823.f_56[iParam1] + iVar3);
			func_34(uParam0, 4);
		}
		else if (uParam0->f_823.f_56[iParam1] == iVar0)
		{
			func_34(uParam0, 4);
		}
		else
		{
			if (uParam0->f_823.f_56[4] <= (100 - MISC::ABSI(iParam2)))
			{
				uParam0->f_823.f_56[4] = (uParam0->f_823.f_56[4] + MISC::ABSI(iParam2));
				uParam0->f_823.f_56[iParam1] = (uParam0->f_823.f_56[iParam1] - MISC::ABSI(iParam2));
			}
			if (iParam2 == 0)
			{
				func_34(uParam0, 4);
			}
			else
			{
				func_34(uParam0, 13);
			}
		}
		if (uParam0->f_823.f_56[iParam1] <= iVar0)
		{
			if (!func_12("HEIST_NOTE_6"))
			{
				HUD::CLEAR_HELP(true);
				func_9("HEIST_NOTE_6", 5000);
			}
		}
	}
	else
	{
		iVar4 = uParam0->f_823.f_56[4];
		if (iVar4 < MISC::ABSI(iParam2))
		{
			iParam2 = iVar4;
		}
		if (uParam0->f_823.f_56[iParam1] > iVar1)
		{
			iVar5 = (uParam0->f_823.f_56[iParam1] - iVar1);
			uParam0->f_823.f_56[4] = (uParam0->f_823.f_56[4] + iVar5);
			func_34(uParam0, 4);
		}
		else if (uParam0->f_823.f_56[iParam1] == iVar1)
		{
			func_34(uParam0, 4);
		}
		else
		{
			if (uParam0->f_823.f_56[4] >= MISC::ABSI(iParam2))
			{
				uParam0->f_823.f_56[4] = (uParam0->f_823.f_56[4] - MISC::ABSI(iParam2));
				uParam0->f_823.f_56[iParam1] = (uParam0->f_823.f_56[iParam1] + MISC::ABSI(iParam2));
			}
			if (iParam2 == 0)
			{
				func_34(uParam0, 4);
			}
			else
			{
				func_34(uParam0, 12);
			}
		}
		if (uParam0->f_823.f_56[iParam1] >= iVar1)
		{
			if (!func_12("HEIST_NOTE_5"))
			{
				HUD::CLEAR_HELP(true);
				func_9("HEIST_NOTE_5", 5000);
			}
		}
	}
}

void func_543(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "REQUEST_CURRENT_ROLLOVER");
	iLocal_1409 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
	iLocal_1411 = 1;
}

void func_544(int iParam0, int iParam1)
{
	GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iParam0, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(iParam1), -1f, -1f, -1f, -1f);
}

void func_545(var uParam0, int iParam1, int iParam2)
{
	if (!func_17(uParam0->f_1084, 0) && !func_358(uParam0->f_1084))
	{
		switch (iParam1)
		{
			case 0:
			case 1:
			case 8:
			case 9:
				func_34(uParam0, 4);
				return;
				break;
			}
	}
	switch (iParam1)
	{
		case 0:
			if (func_357(iParam2) && uParam0->f_823.f_49 == 1)
			{
				func_34(uParam0, 4);
				return;
			}
			if (iLocal_1432 == 0)
			{
				func_34(uParam0, 0);
				if (!func_357(iParam2))
				{
					if (func_548(iParam2))
					{
						func_34(uParam0, 21);
					}
					else
					{
						func_34(uParam0, 22);
					}
				}
			}
			else
			{
				func_34(uParam0, 4);
			}
			break;
		
		case 1:
			if (func_357(iParam2) && uParam0->f_823.f_49 == 1)
			{
				func_34(uParam0, 4);
				return;
			}
			if (iLocal_1432 == 0)
			{
				func_34(uParam0, 0);
				if (!func_357(iParam2))
				{
					if (func_548(iParam2))
					{
						func_34(uParam0, 21);
					}
					else
					{
						func_34(uParam0, 22);
					}
				}
			}
			else
			{
				func_34(uParam0, 4);
			}
			break;
		
		case 2:
			if (iLocal_1432 == 0)
			{
				if (iParam2 == 1000)
				{
					func_34(uParam0, 1);
				}
				else if (!func_357(iParam2))
				{
					func_34(uParam0, 4);
				}
			}
			else if (iLocal_1432 > 0)
			{
				if (iParam2 == 1002)
				{
					func_34(uParam0, 1);
				}
				else
				{
					func_34(uParam0, 4);
				}
			}
			break;
		
		case 3:
			if (iLocal_1432 == 0)
			{
				if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					if ((func_8(iParam2, 2) && !func_357(iParam2)) && func_546(uParam0))
					{
						func_34(uParam0, 1);
					}
					else
					{
						func_34(uParam0, 4);
					}
				}
				else if (func_8(iParam2, 2) && iParam2 != 1000)
				{
					func_34(uParam0, 1);
				}
				else
				{
					func_34(uParam0, 4);
				}
			}
			else if (iLocal_1432 > 0)
			{
				if (iParam2 == 1001)
				{
					func_34(uParam0, 1);
				}
				else
				{
					func_34(uParam0, 4);
				}
			}
			break;
		
		case 8:
			func_34(uParam0, 1);
			break;
		
		case 9:
			func_34(uParam0, 1);
			break;
		
		case 4:
			if (bLocal_1421)
			{
				func_34(uParam0, 5);
			}
			else
			{
				func_34(uParam0, 7);
			}
			break;
		
		case 5:
			if (!func_406(iParam2))
			{
				func_34(uParam0, 6);
			}
			break;
		
		case 6:
			if (func_405(uParam0) && iLocal_1432 == 0)
			{
				func_34(uParam0, 8);
			}
			break;
		
		case 7:
			if (func_359(uParam0, iParam2) && iLocal_1432 == 0)
			{
				func_34(uParam0, 9);
			}
			break;
	}
}

int func_546(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0->f_806;
	if (func_547(iVar0) != 2)
	{
		return 0;
	}
	if (uParam0->f_1084 == PLAYER::PLAYER_ID() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (Global_1975428[uParam0->f_1084 /*53*/].f_5.f_39 == 0)
		{
			return 0;
		}
		if (Global_1975428[uParam0->f_1084 /*53*/].f_5.f_40 == -1)
		{
			return 0;
		}
		if (Global_1975428[uParam0->f_1084 /*53*/].f_5.f_41 == -1)
		{
			return 0;
		}
		if (Global_1975428[uParam0->f_1084 /*53*/].f_5.f_42 == -1)
		{
			return 0;
		}
		if (Global_1975428[uParam0->f_1084 /*53*/].f_5.f_43 == 0)
		{
			return 0;
		}
		if (Global_1974627[uParam0->f_1084 /*25*/].f_12[4] > 0)
		{
			return 0;
		}
		iVar1 = 1;
		while (iVar1 <= 3)
		{
			if (uParam0->f_823.f_51[iVar1] == -1)
			{
			}
			else if (uParam0->f_823.f_67[iVar1] == 0)
			{
				return 0;
			}
			iVar1++;
		}
	}
	return 1;
}

int func_547(int iParam0)
{
	if (func_8(iParam0, 0))
	{
		return 0;
	}
	else if (func_8(iParam0, 1))
	{
		return 1;
	}
	return 2;
}

int func_548(int iParam0)
{
	switch (iParam0)
	{
		case 36:
		case 37:
		case 38:
		case 39:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 91:
		case 92:
			return 0;
		
		default:
	}
	return 1;
}

void func_549(var uParam0)
{
	char* sVar0;
	char* sVar1;
	
	if (BitTest(Global_1941731.f_233, 1))
	{
		sVar1 = "hs4f_int";
		sVar0 = "cutscene_ui_3_screen_island_2";
	}
	else if (BitTest(Global_1941731.f_233, 0))
	{
		sVar1 = "hs4f_int";
		sVar0 = "cutscene_ui_3_screen_island_3";
	}
	HUD::SET_TEXT_RENDER_ID(uParam0->f_700);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(73, 73);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
	GRAPHICS::_DRAW_INTERACTIVE_SPRITE(sVar1, sVar0, 0.5f, 0.75f, 1f, 0.5f, 0f, 255, 255, 255, 255, 0);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
}

float func_550()
{
	return 0.5f;
}

float func_551()
{
	return 0.5f;
}

float func_552()
{
	return 0.75f;
}

float func_553()
{
	return 0.25f;
}

int func_554()
{
	return 1;
}

char* func_555()
{
	return "ISLAND_HEIST_BOARD";
}

int func_556()
{
	return joaat("h4_int_sub_command_table");
}

char* func_557()
{
	return "submarine_table";
}

void func_558(var uParam0)
{
	switch (uParam0->f_726)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !iLocal_1423)
			{
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HS4F_INT", false);
				iLocal_1423 = 1;
			}
			func_842(uParam0);
			break;
		
		case 3:
			func_819(uParam0);
			break;
		
		case 4:
			func_815(uParam0);
			func_593(uParam0);
			func_819(uParam0);
			func_559(uParam0);
			break;
		
		case 5:
			break;
	}
}

void func_559(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return;
	}
	iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	iVar2 = uParam0->f_1084;
	if (iVar2 == -1)
	{
		return;
	}
	if (uParam0->f_1084 == PLAYER::PLAYER_ID())
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (iVar0 >= 4)
			{
				if (Global_1974627[iVar3 /*25*/].f_12[4] != uParam0->f_823.f_56[4])
				{
					Global_1974627[iVar3 /*25*/].f_12[4] = uParam0->f_823.f_56[4];
				}
			}
			else
			{
				if (Global_1974627[iVar3 /*25*/].f_12[iVar0] != uParam0->f_823.f_56[iVar0])
				{
					Global_1974627[iVar3 /*25*/].f_12[iVar0] = uParam0->f_823.f_56[iVar0];
					if (uParam0->f_823.f_51[iVar0] == PLAYER::NETWORK_PLAYER_ID_TO_INT())
					{
						Global_2715551.f_6546 = Global_1974627[iVar3 /*25*/].f_12[iVar0];
						Global_1945276.f_29 = Global_2715551.f_6546;
					}
					iLocal_1427 = 1;
				}
				if (Global_1974627[iVar3 /*25*/].f_2[iVar0] != uParam0->f_823.f_51[iVar0])
				{
					Global_1974627[iVar3 /*25*/].f_2[iVar0] = uParam0->f_823.f_51[iVar0];
				}
				iVar1 = 0;
				while (iVar1 <= 31)
				{
					if (uParam0->f_823.f_51[iVar0] != iVar1 || uParam0->f_823.f_51[iVar0] == uParam0->f_1084)
					{
					}
					else if (uParam0->f_823.f_67[iVar0] != Global_1974627[iVar1 /*25*/].f_7[iVar0])
					{
						uParam0->f_823.f_67[iVar0] = Global_1974627[iVar1 /*25*/].f_7[iVar0];
						if (uParam0->f_823.f_67[iVar0] == 1)
						{
							func_34(uParam0, 16);
						}
						else
						{
							func_34(uParam0, 17);
						}
						Global_1974627[iVar3 /*25*/].f_7[iVar0] = uParam0->f_823.f_67[iVar0];
						iLocal_1427 = 1;
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
	else
	{
		if (Global_1975428[PLAYER::PLAYER_ID() /*53*/].f_5.f_39 != Global_1975428[uParam0->f_1084 /*53*/].f_5.f_39)
		{
			func_588(uParam0, func_592(Global_1975428[uParam0->f_1084 /*53*/].f_5.f_39));
		}
		if (Global_1975428[PLAYER::PLAYER_ID() /*53*/].f_5.f_40 != Global_1975428[uParam0->f_1084 /*53*/].f_5.f_40)
		{
			func_570(uParam0, func_587(Global_1975428[uParam0->f_1084 /*53*/].f_5.f_40));
		}
		if (Global_1975428[PLAYER::PLAYER_ID() /*53*/].f_5.f_41 != Global_1975428[uParam0->f_1084 /*53*/].f_5.f_41)
		{
			func_567(uParam0, func_569(Global_1975428[uParam0->f_1084 /*53*/].f_5.f_41));
		}
		if (Global_1975428[PLAYER::PLAYER_ID() /*53*/].f_5.f_42 != Global_1975428[uParam0->f_1084 /*53*/].f_5.f_42)
		{
			func_564(uParam0, func_566(Global_1975428[uParam0->f_1084 /*53*/].f_5.f_42));
		}
		if (Global_1975428[PLAYER::PLAYER_ID() /*53*/].f_5.f_43 != Global_1975428[uParam0->f_1084 /*53*/].f_5.f_43)
		{
			func_560(uParam0, func_563(Global_1975428[uParam0->f_1084 /*53*/].f_5.f_43));
		}
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (uParam0->f_823.f_51[iVar0] != PLAYER::NETWORK_PLAYER_ID_TO_INT())
			{
			}
			else
			{
				Global_1974627[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_7[iVar0] = uParam0->f_823.f_67[iVar0];
				iVar4 = iVar0;
			}
			iVar0++;
		}
		bVar5 = true;
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (Global_1974627[iVar2 /*25*/].f_2[iVar0] != 0)
			{
				bVar5 = false;
			}
			iVar0++;
		}
		if (bVar5)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (iVar0 >= 4)
			{
				if (uParam0->f_823.f_56[4] != Global_1974627[iVar2 /*25*/].f_12[4])
				{
					uParam0->f_823.f_56[4] = Global_1974627[iVar2 /*25*/].f_12[4];
				}
			}
			else
			{
				if (uParam0->f_823.f_56[iVar0] != Global_1974627[iVar2 /*25*/].f_12[iVar0])
				{
					uParam0->f_823.f_56[iVar0] = Global_1974627[iVar2 /*25*/].f_12[iVar0];
					if (iVar4 == iVar0)
					{
						Global_2715551.f_6546 = Global_1974627[iVar2 /*25*/].f_12[iVar0];
						Global_1945276.f_29 = Global_2715551.f_6546;
					}
					iLocal_1427 = 1;
				}
				if (uParam0->f_823.f_51[iVar0] != Global_1974627[iVar2 /*25*/].f_2[iVar0])
				{
					uParam0->f_823.f_51[iVar0] = Global_1974627[iVar2 /*25*/].f_2[iVar0];
				}
				if (uParam0->f_823.f_67[iVar0] != Global_1974627[iVar2 /*25*/].f_7[iVar0])
				{
					if (iVar4 != iVar0)
					{
						uParam0->f_823.f_67[iVar0] = Global_1974627[iVar2 /*25*/].f_7[iVar0];
						if (uParam0->f_823.f_67[iVar0] == 1)
						{
							func_34(uParam0, 16);
						}
						else
						{
							func_34(uParam0, 17);
						}
						iLocal_1427 = 1;
					}
				}
			}
			iVar0++;
		}
	}
}

void func_560(var uParam0, bool bParam1)
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return;
	}
	func_562(uParam0);
	func_561(uParam0->f_711, bParam1, 1);
	switch (bParam1)
	{
		case 91:
			Global_1975428[PLAYER::PLAYER_ID() /*53*/].f_5.f_43 = 1;
			break;
		
		case 92:
			Global_1975428[PLAYER::PLAYER_ID() /*53*/].f_5.f_43 = 2;
			break;
	}
}

void func_561(int iParam0, bool bParam1, bool bParam2)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_FINALE_ITEM_SELECTED");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_562(var uParam0)
{
	func_561(uParam0->f_711, 91, 0);
	func_561(uParam0->f_711, 92, 0);
}

int func_563(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 91;
		
		case 2:
			return 92;
		
		default:
	}
	return 0;
}

void func_564(var uParam0, bool bParam1)
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return;
	}
	func_565(uParam0);
	func_561(uParam0->f_711, bParam1, 1);
	switch (bParam1)
	{
		case 87:
			Global_1975428[PLAYER::PLAYER_ID() /*53*/].f_5.f_42 = 0;
			break;
		
		case 88:
			Global_1975428[PLAYER::PLAYER_ID() /*53*/].f_5.f_42 = 1;
			break;
		
		case 89:
			Global_1975428[PLAYER::PLAYER_ID() /*53*/].f_5.f_42 = 2;
			break;
		
		case 90:
			Global_1975428[PLAYER::PLAYER_ID() /*53*/].f_5.f_42 = 3;
			break;
	}
}

void func_565(var uParam0)
{
	func_561(uParam0->f_711, 87, 0);
	func_561(uParam0->f_711, 88, 0);
	func_561(uParam0->f_711, 89, 0);
	func_561(uParam0->f_711, 90, 0);
}

int func_566(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 87;
		
		case 1:
			return 88;
		
		case 2:
			return 89;
		
		case 3:
			return 90;
		
		default:
	}
	return 0;
}

void func_567(var uParam0, bool bParam1)
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return;
	}
	func_568(uParam0);
	func_561(uParam0->f_711, bParam1, 1);
	switch (bParam1)
	{
		case 85:
			Global_1975428[PLAYER::PLAYER_ID() /*53*/].f_5.f_41 = 0;
			break;
		
		case 86:
			Global_1975428[PLAYER::PLAYER_ID() /*53*/].f_5.f_41 = 5;
			break;
	}
}

void func_568(var uParam0)
{
	func_561(uParam0->f_711, 85, 0);
	func_561(uParam0->f_711, 86, 0);
}

int func_569(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 85;
		
		case 5:
			return 86;
		
		default:
	}
	return 0;
}

void func_570(var uParam0, bool bParam1)
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return;
	}
	func_586(uParam0);
	func_561(uParam0->f_711, bParam1, 1);
	if (bParam1 == 84)
	{
		func_585(uParam0);
	}
	else
	{
		func_571(uParam0);
	}
	switch (bParam1)
	{
		case 77:
			Global_1975428[PLAYER::PLAYER_ID() /*53*/].f_5.f_40 = 0;
			break;
		
		case 78:
			Global_1975428[PLAYER::PLAYER_ID() /*53*/].f_5.f_40 = 1;
			break;
		
		case joaat("mpsv_lp0_31"):
			Global_1975428[PLAYER::PLAYER_ID() /*53*/].f_5.f_40 = 2;
			break;
		
		case 80:
			Global_1975428[PLAYER::PLAYER_ID() /*53*/].f_5.f_40 = 3;
			break;
		
		case 81:
			Global_1975428[PLAYER::PLAYER_ID() /*53*/].f_5.f_40 = 4;
			break;
		
		case 82:
			Global_1975428[PLAYER::PLAYER_ID() /*53*/].f_5.f_40 = 5;
			break;
		
		case 83:
			Global_1975428[PLAYER::PLAYER_ID() /*53*/].f_5.f_40 = 6;
			break;
		
		case 84:
			Global_1975428[PLAYER::PLAYER_ID() /*53*/].f_5.f_40 = 7;
			break;
	}
}

void func_571(var uParam0)
{
	struct<9> Var0;
	int iVar9;
	int iVar10;
	
	func_561(uParam0->f_711, 85, 0);
	func_584(uParam0->f_711, 85);
	func_561(uParam0->f_711, 86, 0);
	func_584(uParam0->f_711, 86);
	Local_1187[0 /*9*/] = { Var0 };
	Local_1187[1 /*9*/] = { Var0 };
	if (func_17(uParam0->f_1084, 8))
	{
		func_574(uParam0, &(Local_1187[iVar9 /*9*/]), 65, 85);
		iVar9++;
	}
	if (func_17(uParam0->f_1084, 9))
	{
		func_574(uParam0, &(Local_1187[iVar9 /*9*/]), 65, 86);
		iVar9++;
	}
	iVar10 = 0;
	while (iVar10 < iVar9)
	{
		func_572(uParam0->f_711, Local_1187[iVar10 /*9*/], 0);
		iVar10++;
	}
	Global_1975428[PLAYER::PLAYER_ID() /*53*/].f_5.f_41 = -1;
}

void func_572(int iParam0, struct<9> Param1, bool bParam10)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "ADD_FINALE_ITEM");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Param1.f_1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Param1.f_2);
	if (bParam10)
	{
		func_573(Param1.f_3);
	}
	else
	{
		func_428(Param1.f_3);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(Param1.f_4);
		func_428(Param1.f_5);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(Param1.f_6);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Param1.f_7);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(Param1.f_8);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_573(char* sParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

void func_574(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	*uParam1 = 1;
	uParam1->f_1 = iParam2;
	uParam1->f_2 = bParam3;
	uParam1->f_4 = func_583(uParam0, bParam3);
	uParam1->f_3 = func_582(uParam0, bParam3);
	uParam1->f_5 = func_580(uParam0, bParam3);
	uParam1->f_6 = func_577(uParam0, bParam3);
	if (func_366(uParam0, bParam3))
	{
		uParam1->f_7 = func_576(uParam0, bParam3);
	}
	else
	{
		uParam1->f_7 = 0;
	}
	uParam1->f_8 = func_575(bParam3);
}

int func_575(bool bParam0)
{
	switch (bParam0)
	{
		case 59:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
			return 1;
		
		default:
	}
	return 0;
}

int func_576(var uParam0, bool bParam1)
{
	switch (bParam1)
	{
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 99:
		case 103:
			return 1;
		
		case 47:
			return 1;
		
		case 49:
			if (!func_379(uParam0->f_1084, 5) && !func_379(uParam0->f_1084, 6))
			{
				return 2;
			}
			return 1;
		
		default:
	}
	return 2;
}

char* func_577(var uParam0, bool bParam1)
{
	switch (bParam1)
	{
		case 1:
			return func_578(uParam0);
		
		case 2:
			return "ADDITIONAL_LOOT";
		
		case 3:
			return "INFILTRATION_POINTS";
		
		case 4:
			return "ESCAPE_POINTS";
		
		case 5:
			return "COMPOUND_ENTRY_POINTS";
		
		case 6:
			return "POINTS_OF_INTEREST";
		
		case 7:
			return "CASH";
		
		case 8:
			return "WEED";
		
		case 9:
			return "COCAINE";
		
		case 10:
			return "GOLD";
		
		case 11:
			return "PAINTINGS";
		
		case 12:
			return "AIRSTRIP";
		
		case 13:
			return "PARACHUTING";
		
		case 14:
			return "WEST_BEACH";
		
		case 15:
			return "MAIN_DOCK";
		
		case 16:
			return "NORTH_DOCK";
		
		case 17:
			return "NORTH_DROP_ZONE";
		
		case 18:
			return "SOUTH_DROP_ZONE";
		
		case 19:
			return "DRAINAGE_TUNNEL";
		
		case 20:
			return "AIRSTRIP";
		
		case 21:
			return "MAIN_DOCK";
		
		case 22:
			return "NORTH_DOCK";
		
		case 23:
			return "SUBMARINE";
		
		case 30:
			return "POWER_STATION";
		
		case 31:
			return "CONTROL_TOWER";
		
		case 32:
			return "BOLT_CUTTERS";
		
		case 33:
			return "GRAPPLING_EQUIPMENT";
		
		case 34:
			return "GUARD_UNIFORM";
		
		case 35:
			return "GUARD_TRUCK";
		
		case 24:
			return "MAIN_GATE";
		
		case 25:
			return "NORTH_WALL";
		
		case 26:
			return "NORTH_SIDE_GATE";
		
		case 27:
			return "SOUTH_WALL";
		
		case 28:
			return "SOUTH_SIDE_GATE";
		
		case 29:
			return "DRAINAGE_TUNNEL";
		
		case 36:
			return "";
		
		case 37:
			return "";
		
		case 38:
			return "";
		
		case 39:
			return "";
		
		case 40:
			return "SUBMARINE";
		
		case 41:
			return "BOMBER";
		
		case 42:
			return "PLANE";
		
		case 43:
			return "HELICOPTER";
		
		case 44:
			return "PATROL_BOAT";
		
		case 45:
			return "SMUGGLER_BOAT";
		
		case 46:
			return "BOMBER";
		
		case 47:
			return "PILOT";
		
		case 48:
			return "HELICOPTER";
		
		case 49:
			return "PILOT";
		
		case 50:
			return "DEMOLITION_CHARGES";
		
		case 53:
			return "ACETYLENE_TORCH";
		
		case 51:
			return func_403(func_382(uParam0->f_1084) == 11, "SAFE_CODE", "PLASMA_CUTTER");
		
		case 52:
			return "FINGERPRINT";
		
		case 54:
			return "SHOTGUN";
		
		case 55:
			return "BULLPUP_RIFLE";
		
		case 56:
			return "SNIPER";
		
		case 57:
			return "SMG";
		
		case 58:
			return "ASSAULT_RIFLE";
		
		case 59:
			return "SUPPRESSORS";
		
		case 60:
			return "WEAPONS";
		
		case 61:
			return "ARMOR";
		
		case 62:
			return "BACKUP";
		
		case 63:
			return "";
		
		case 64:
			return "";
		
		case 65:
			return "";
		
		case 66:
			return "";
		
		case 67:
			return "";
		
		case 68:
			return "";
		
		case 69:
			return "";
		
		case 70:
			return "";
		
		case 71:
			return "SUBMARINE";
		
		case 72:
			return "BOMBER";
		
		case 73:
			return "PLANE";
		
		case 74:
			return "HELICOPTER";
		
		case 75:
			return "PATROL_BOAT";
		
		case 76:
			return "SMUGGLER_BOAT";
		
		case 77:
			return "AIRSTRIP";
		
		case 78:
			return "PARACHUTING";
		
		case joaat("mpsv_lp0_31"):
			return "WEST_BEACH";
		
		case 80:
			return "MAIN_DOCK";
		
		case 81:
			return "NORTH_DOCK";
		
		case 82:
			return "NORTH_DROP_ZONE";
		
		case 83:
			return "SOUTH_DROP_ZONE";
		
		case 84:
			return "DRAINAGE_TUNNEL";
		
		case 85:
			return "MAIN_GATE";
		
		case 86:
			return "DRAINAGE_TUNNEL";
		
		case 87:
			return "AIRSTRIP";
		
		case 88:
			return "MAIN_DOCK";
		
		case 89:
			return "NORTH_DOCK";
		
		case 90:
			return "SUBMARINE";
		
		case 91:
			return "";
		
		case 92:
			return "";
		
		case 93:
			return "SHOTGUN";
		
		case 94:
			return "BULLPUP_RIFLE";
		
		case 95:
			return "SNIPER";
		
		case 96:
			return "SMG";
		
		case 97:
			return "ASSAULT_RIFLE";
		
		case 98:
			return "SUPPRESSORS";
		
		case 99:
			return "AIRSTRIKE_SUPPORT";
		
		case 100:
			return "HEAVY_WEAPON_SUPPORT";
		
		case 101:
			return "SNIPER_SUPPORT";
		
		case 102:
			return "HELICOPTER_SUPPORT";
		
		case 103:
			return "SPY_DRONE_SUPPORT";
		
		case 104:
			return "WEAPON_STASH_SUPPORT";
		
		default:
	}
	return "";
}

char* func_578(var uParam0)
{
	if (func_17(uParam0->f_1084, 0))
	{
		switch (func_579(uParam0->f_1084))
		{
			case 0:
				return "GATHER_INTEL_TEQUILA";
			
			case 1:
				return "GATHER_INTEL_NECKLACE";
			
			case 2:
				return "GATHER_INTEL_BONDS";
			
			case 3:
				return "GATHER_INTEL_DIAMOND";
			
			case 4:
				return "GATHER_INTEL_FILES";
			
			case 5:
				return "GATHER_INTEL_STATUE";
			}
		
		default:
	}
	return "GATHER_INTEL";
}

int func_579(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_1975428[iParam0 /*53*/].f_5.f_9;
	}
	return -1;
}

char* func_580(var uParam0, bool bParam1)
{
	switch (bParam1)
	{
		case 1:
			if (!func_358(uParam0->f_1084))
			{
				if (!func_17(uParam0->f_1084, 0))
				{
					return "H4P_INT0_GAT_D1";
				}
			}
			else if (!func_17(uParam0->f_1084, 0))
			{
				return "H4P_INT0_GAT_D2";
			}
			return "H4P_INT0_GAT_D3";
		
		case 2:
			return "H4P_INT0_LOOT_D";
		
		case 3:
			return "H4P_INT0_ENTR_D";
		
		case 4:
			return "H4P_INT0_EXIT_D";
		
		case 5:
			return "H4P_INT0_COMP_D";
		
		case 6:
			return "H4P_INT0_ITEM_D";
		
		case 7:
			return "H4P_INT2_CASH_D";
		
		case 8:
			return "H4P_INT2_WEED_D";
		
		case 9:
			return "H4P_INT2_COKE_D";
		
		case 10:
			return "H4P_INT2_GOLD_D";
		
		case 11:
			return "H4P_INT2_PAIN_D";
		
		case 12:
			return "H4P_INT3_AIRS_D";
		
		case 13:
			return "H4P_INT3_PARA_D";
		
		case 14:
			return "H4P_INT3_BEAC_D";
		
		case 15:
			return "H4P_INT3_MDCK_D";
		
		case 16:
			return "H4P_INT3_NDCK_D";
		
		case 17:
			return "H4P_INT3_NDRP_D";
		
		case 18:
			return "H4P_INT3_SDRP_D";
		
		case 19:
			return "H4P_INT3_DTUN_D";
		
		case 20:
			return "H4P_INT4_AIRS_D";
		
		case 21:
			return "H4P_INT4_MDCK_D";
		
		case 22:
			return "H4P_INT4_NDCK_D";
		
		case 23:
			return "H4P_INT4_SUBM_D";
		
		case 30:
			return "H4P_INT6_PWRS_D";
		
		case 31:
			return "H4P_INT6_CTOW_D";
		
		case 32:
			return "H4P_INT6_BCUT_D";
		
		case 33:
			return "H4P_INT6_GRAP_D";
		
		case 34:
			return "H4P_INT6_UNIF_D";
		
		case 35:
			return "H4P_INT6_TROJ_D";
		
		case 24:
			return "H4P_INT5_MGAT_D";
		
		case 25:
			return "H4P_INT5_NWAL_D";
		
		case 26:
			return "H4P_INT5_NSGT_D";
		
		case 27:
			return "H4P_INT5_SWAL_D";
		
		case 28:
			return "H4P_INT5_SSGT_D";
		
		case 29:
			return "H4P_INT5_DTUN_D";
		
		case 36:
			return "H4P_PRP0_APVH_D";
		
		case 37:
			return "H4P_PRP0_EQUI_D";
		
		case 38:
			return "H4P_PRP0_WEPL_D";
		
		case 39:
			return "H4P_PRP0_DISR_D";
		
		case 40:
			return func_403(func_581(uParam0->f_1084, 1), "H4P_PREP_OPT", "H4P_PREP_MAND");
		
		case 41:
			return func_403(func_581(uParam0->f_1084, 1), "H4P_PREP_OPT", "H4P_PREP_MAND");
		
		case 42:
			return func_403(func_581(uParam0->f_1084, 1), "H4P_PREP_OPT", "H4P_PREP_MAND");
		
		case 43:
			return func_403(func_581(uParam0->f_1084, 1), "H4P_PREP_OPT", "H4P_PREP_MAND");
		
		case 44:
			return func_403(func_581(uParam0->f_1084, 1), "H4P_PREP_OPT", "H4P_PREP_MAND");
		
		case 45:
			return func_403(func_581(uParam0->f_1084, 1), "H4P_PREP_OPT", "H4P_PREP_MAND");
		
		case 46:
			return func_403(func_581(uParam0->f_1084, 1), "H4P_PREP_OPT", "H4P_PREP_MAND");
		
		case 47:
			return func_403(func_581(uParam0->f_1084, 1), "H4P_PREP_OPT", "H4P_PREP_MAND");
		
		case 48:
			return func_403(func_581(uParam0->f_1084, 1), "H4P_PREP_OPT", "H4P_PREP_MAND");
		
		case 49:
			return func_403(func_581(uParam0->f_1084, 1), "H4P_PREP_OPT", "H4P_PREP_MAND");
		
		case 50:
			return func_403(func_17(uParam0->f_1084, 9), "H4P_PREP_OPT", "H4P_PREP_MAND");
		
		case 53:
			return func_403(func_17(uParam0->f_1084, 8), "H4P_PREP_OPT", "H4P_PREP_MAND");
		
		case 51:
			return "H4P_PREP_MAND";
		
		case 52:
			return "H4P_PREP_MAND";
		
		case 54:
			return "H4P_PREP_MAND";
		
		case 55:
			return "H4P_PREP_MAND";
		
		case 56:
			return "H4P_PREP_MAND";
		
		case 57:
			if (!func_373(uParam0->f_1084) || !func_369(uParam0->f_1084, func_263(uParam0->f_1084)))
			{
				return "H4P_PRP3_UKNW_D";
			}
			return "H4P_PREP_MAND";
		
		case 58:
			if (!func_373(uParam0->f_1084) || !func_369(uParam0->f_1084, func_263(uParam0->f_1084)))
			{
				return "H4P_PRP3_UKNW_D";
			}
			return "H4P_PREP_MAND";
		
		case 59:
			return "H4P_PRP3_SUPP_D";
		
		case 60:
			return "H4P_PREP_OPT";
		
		case 61:
			return "H4P_PREP_OPT";
		
		case 62:
			return "H4P_PREP_OPT";
		
		case 63:
			return func_403(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN0_APRV_2", "H4P_FIN0_APRV_D");
		
		case 64:
			return func_403(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN0_INFI_2", "H4P_FIN0_INFI_D");
		
		case 65:
			return func_403(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN0_CENT_2", "H4P_FIN0_CENT_D");
		
		case 66:
			return func_403(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN0_ESCA_2", "H4P_FIN0_ESCA_D");
		
		case 67:
			return func_403(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN0_TIMD_2", "H4P_FIN0_TIMD_D");
		
		case 68:
			return func_403(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN0_WEAP_2", "H4P_FIN0_WEAP_D");
		
		case 69:
			return "H4P_FIN0_SUPP_D";
		
		case 70:
			return "H4P_FIN0_CREW_D";
		
		case 71:
			return func_403(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN1_SUBM_D", "H4P_FIN1_APRV_D");
		
		case 72:
			return func_403(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN1_BOMB_D", "H4P_FIN1_APRV_D");
		
		case 73:
			return func_403(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN1_SMPL_D", "H4P_FIN1_APRV_D");
		
		case 74:
			return func_403(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN1_SHEL_D", "H4P_FIN1_APRV_D");
		
		case 75:
			return func_403(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN1_PBOA_D", "H4P_FIN1_APRV_D");
		
		case 76:
			return func_403(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN1_SBOA_D", "H4P_FIN1_APRV_D");
		
		case 77:
			return func_403(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN2_AIRS_D", "H4P_FIN2_INFI_D");
		
		case 78:
			return func_403(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN2_PARA_D", "H4P_FIN2_INFI_D");
		
		case joaat("mpsv_lp0_31"):
			return func_403(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN2_WBEA_D", "H4P_FIN2_INFI_D");
		
		case 80:
			return func_403(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN2_MDOC_D", "H4P_FIN2_INFI_D");
		
		case 81:
			return func_403(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN2_NDOC_D", "H4P_FIN2_INFI_D");
		
		case 82:
			return func_403(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN2_NDRP_D", "H4P_FIN2_INFI_D");
		
		case 83:
			return func_403(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN2_SDRP_D", "H4P_FIN2_INFI_D");
		
		case 84:
			return func_403(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN2_DTUN_D", "H4P_FIN2_INFI_D");
		
		case 85:
			return func_403(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN3_MGAT_D", "H4P_FIN3_CENT_D");
		
		case 86:
			return func_403(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN3_DTUN_D", "H4P_FIN3_CENT_D");
		
		case 87:
			return func_403(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN4_AIRS_D", "H4P_FIN4_ESCA_D");
		
		case 88:
			return func_403(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN4_MDOC_D", "H4P_FIN4_ESCA_D");
		
		case 89:
			return func_403(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN4_NDOC_D", "H4P_FIN4_ESCA_D");
		
		case 90:
			return func_403(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN4_SUBM_D", "H4P_FIN4_ESCA_D");
		
		case 91:
			return func_403(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN5_TDAY_D", "H4P_FIN5_TIMD_D");
		
		case 92:
			return func_403(NETWORK::NETWORK_IS_ACTIVITY_SESSION(), "H4P_FIN5_TNGT_D", "H4P_FIN5_TIMD_D");
		
		case 93:
			return "H4P_FIN6_SHOT_D";
		
		case 94:
			return "H4P_FIN6_RIFL_D";
		
		case 95:
			return "H4P_FIN6_SNIP_D";
		
		case 96:
			return "H4P_FIN6_MKSM_D";
		
		case 97:
			return "H4P_FIN6_MKAR_D";
		
		case 98:
			return "H4P_FIN6_SUPP_D";
		
		case 99:
			return func_403(func_366(uParam0, bParam1), "H4P_PRP3_UKNW_D", "H4P_FIN7_AIRS_D");
		
		case 100:
			return "H4P_FIN7_WDRP_D";
		
		case 101:
			return "H4P_FIN7_SNIP_D";
		
		case 102:
			return "H4P_FIN7_HELI_D";
		
		case 103:
			return func_403(func_366(uParam0, bParam1), "H4P_PRP3_UKNW_D", "H4P_FIN7_SPYD_D");
		
		case 104:
			return "H4P_FIN7_WEAP_D";
		
		default:
	}
	return "";
}

int func_581(int iParam0, bool bParam1)
{
	if (((func_17(iParam0, 7) || func_17(iParam0, 5)) || func_17(iParam0, 3)) || func_17(iParam0, 4))
	{
		return 1;
	}
	if (func_17(iParam0, 1) || func_17(iParam0, 2))
	{
		if (bParam1)
		{
			return func_17(iParam0, 6);
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

char* func_582(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			return "H4P_INT0_GATH_T";
		
		case 2:
			return "H4P_INT0_LOOT_T";
		
		case 3:
			return "H4P_INT0_ENTR_T";
		
		case 4:
			return "H4P_INT0_EXIT_T";
		
		case 5:
			return "H4P_INT0_COMP_T";
		
		case 6:
			return "H4P_INT0_ITEM_T";
		
		case 7:
			return "H4P_INT2_CASH_T";
		
		case 8:
			return "H4P_INT2_WEED_T";
		
		case 9:
			return "H4P_INT2_COKE_T";
		
		case 10:
			return "H4P_INT2_GOLD_T";
		
		case 11:
			return "H4P_INT2_PAIN_T";
		
		case 12:
			return "H4P_INT3_AIRS_T";
		
		case 13:
			return "H4P_INT3_PARA_T";
		
		case 14:
			return "H4P_INT3_BEAC_T";
		
		case 15:
			return "H4P_INT3_MDCK_T";
		
		case 16:
			return "H4P_INT3_NDCK_T";
		
		case 17:
			return "H4P_INT3_NDRP_T";
		
		case 18:
			return "H4P_INT3_SDRP_T";
		
		case 19:
			return "H4P_INT3_DTUN_T";
		
		case 20:
			return "H4P_INT4_AIRS_T";
		
		case 21:
			return "H4P_INT4_MDCK_T";
		
		case 22:
			return "H4P_INT4_NDCK_T";
		
		case 23:
			return "H4P_INT4_SUBM_T";
		
		case 30:
			return "H4P_INT6_PWRS_T";
		
		case 31:
			return "H4P_INT6_CTOW_T";
		
		case 32:
			return "H4P_INT6_BCUT_T";
		
		case 33:
			return "H4P_INT6_GRAP_T";
		
		case 34:
			return "H4P_INT6_UNIF_T";
		
		case 35:
			return "H4P_INT6_TROJ_T";
		
		case 24:
			return "H4P_INT5_MGAT_T";
		
		case 25:
			return "H4P_INT5_NWAL_T";
		
		case 26:
			return "H4P_INT5_NSGT_T";
		
		case 27:
			return "H4P_INT5_SWAL_T";
		
		case 28:
			return "H4P_INT5_SSGT_T";
		
		case 29:
			return "H4P_INT5_DTUN_T";
		
		case 36:
			return "H4P_PRP0_APVH_T";
		
		case 37:
			return "H4P_PRP0_EQUI_T";
		
		case 38:
			return "H4P_PRP0_WEPL_T";
		
		case 39:
			return "H4P_PRP0_DISR_T";
		
		case 40:
			return "H4P_PRP1_SUBM_T";
		
		case 41:
			return "H4P_PRP1_SBOM_T";
		
		case 42:
			return "H4P_PRP1_SPLA_T";
		
		case 43:
			return "H4P_PRP1_SHEL_T";
		
		case 44:
			return "H4P_PRP1_PBOA_T";
		
		case 45:
			return "H4P_PRP1_SBOA_T";
		
		case 46:
			return "H4P_PRP1_BOM1_T";
		
		case 47:
			return "H4P_PRP1_BOM2_T";
		
		case 48:
			return "H4P_PRP1_HEL1_T";
		
		case 49:
			return "H4P_PRP1_HEL2_T";
		
		case 50:
			return "H4P_PRP2_DEMC_T";
		
		case 53:
			return "H4P_PRP2_ATOR_T";
		
		case 51:
			return func_403(func_382(uParam0->f_1084) == 11, "H4P_PRP2_TAR1_T", "H4P_PRP2_TAR2_T");
		
		case 52:
			return "H4P_PRP2_FING_T";
		
		case 54:
			return "H4P_PRP3_SHOT_T";
		
		case 55:
			return "H4P_PRP3_RIFL_T";
		
		case 56:
			return "H4P_PRP3_SNIP_T";
		
		case 57:
			return "H4P_PRP3_M2SM_T";
		
		case 58:
			return "H4P_PRP3_M2RI_T";
		
		case 59:
			return "H4P_PRP3_SUPP_T";
		
		case 60:
			return "H4P_PRP4_WEAP_T";
		
		case 61:
			return "H4P_PRP4_ARMR_T";
		
		case 62:
			return "H4P_PRP4_BRES_T";
		
		case 63:
			return "H4P_FIN0_APRV_T";
		
		case 64:
			return "H4P_FIN0_INFI_T";
		
		case 65:
			return "H4P_FIN0_CENT_T";
		
		case 66:
			return "H4P_FIN0_ESCA_T";
		
		case 67:
			return "H4P_FIN0_TIMD_T";
		
		case 68:
			return "H4P_FIN0_WEAP_T";
		
		case 69:
			return "H4P_FIN0_SUPP_T";
		
		case 70:
			return "H4P_FIN0_CREW_T";
		
		case 71:
			return "H4P_FIN1_SUBM_T";
		
		case 72:
			return "H4P_FIN1_BOMB_T";
		
		case 73:
			return "H4P_FIN1_SMPL_T";
		
		case 74:
			return "H4P_FIN1_SHEL_T";
		
		case 75:
			return "H4P_FIN1_PBOA_T";
		
		case 76:
			return "H4P_FIN1_SBOA_T";
		
		case 77:
			return "H4P_FIN2_AIRS_T";
		
		case 78:
			return "H4P_FIN2_PARA_T";
		
		case joaat("mpsv_lp0_31"):
			return "H4P_FIN2_WBEA_T";
		
		case 80:
			return "H4P_FIN2_MDOC_T";
		
		case 81:
			return "H4P_FIN2_NDOC_T";
		
		case 82:
			return "H4P_FIN2_NDRP_T";
		
		case 83:
			return "H4P_FIN2_SDRP_T";
		
		case 84:
			return "H4P_FIN2_DTUN_T";
		
		case 85:
			return "H4P_FIN3_MGAT_T";
		
		case 86:
			return "H4P_FIN3_DTUN_T";
		
		case 87:
			return "H4P_FIN4_AIRS_T";
		
		case 88:
			return "H4P_FIN4_MDOC_T";
		
		case 89:
			return "H4P_FIN4_NDOC_T";
		
		case 90:
			return "H4P_FIN4_SUBM_T";
		
		case 91:
			return "H4P_FIN5_TDAY_T";
		
		case 92:
			return "H4P_FIN5_TNGT_T";
		
		case 93:
			return "H4P_FIN6_SHOT_T";
		
		case 94:
			return "H4P_FIN6_RIFL_T";
		
		case 95:
			return "H4P_FIN6_SNIP_T";
		
		case 96:
			return "H4P_FIN6_MKSM_T";
		
		case 97:
			return "H4P_FIN6_MKAR_T";
		
		case 98:
			return "H4P_FIN6_SUPP_T";
		
		case 99:
			return "H4P_FIN7_AIRS_T";
		
		case 100:
			return "H4P_FIN7_WDRP_T";
		
		case 101:
			return "H4P_FIN7_SNIP_T";
		
		case 102:
			return "H4P_FIN7_HELI_T";
		
		case 103:
			return "H4P_FIN7_SPYD_T";
		
		case 104:
			return "H4P_FIN7_WEAP_T";
		
		default:
	}
	return "";
}

int func_583(var uParam0, var uParam1)
{
	return 0;
}

void func_584(int iParam0, bool bParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "REMOVE_FINALE_ITEM");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_585(var uParam0)
{
	struct<9> Var0;
	
	func_584(uParam0->f_711, 85);
	func_584(uParam0->f_711, 86);
	Local_1187[0 /*9*/] = { Var0 };
	Local_1187[1 /*9*/] = { Var0 };
	func_574(uParam0, &(Local_1187[0 /*9*/]), 65, 86);
	func_561(uParam0->f_711, 86, 1);
	func_572(uParam0->f_711, Local_1187[0 /*9*/], 0);
}

void func_586(var uParam0)
{
	func_561(uParam0->f_711, 77, 0);
	func_561(uParam0->f_711, 78, 0);
	func_561(uParam0->f_711, 79, 0);
	func_561(uParam0->f_711, 80, 0);
	func_561(uParam0->f_711, 81, 0);
	func_561(uParam0->f_711, 82, 0);
	func_561(uParam0->f_711, 83, 0);
	func_561(uParam0->f_711, 84, 0);
}

int func_587(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 77;
		
		case 1:
			return 78;
		
		case 2:
			return 79;
		
		case 3:
			return 80;
		
		case 4:
			return 81;
		
		case 5:
			return 82;
		
		case 6:
			return 83;
		
		case 7:
			return 84;
		
		default:
	}
	return 0;
}

void func_588(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return;
	}
	func_591(uParam0);
	func_590(uParam0);
	func_584(uParam0->f_711, 90);
	func_571(uParam0);
	func_561(uParam0->f_711, bParam1, 1);
	switch (bParam1)
	{
		case 71:
			Global_1975428[PLAYER::PLAYER_ID() /*53*/].f_5.f_39 = 1;
			func_574(uParam0, &(Local_1114[iVar0 /*9*/]), 64, 79);
			iVar0++;
			if (func_379(uParam0->f_1084, 3))
			{
				func_574(uParam0, &(Local_1114[iVar0 /*9*/]), 64, 80);
				iVar0++;
			}
			if (func_379(uParam0->f_1084, 4))
			{
				func_574(uParam0, &(Local_1114[iVar0 /*9*/]), 64, 81);
				iVar0++;
			}
			if (func_379(uParam0->f_1084, 7))
			{
				func_574(uParam0, &(Local_1114[iVar0 /*9*/]), 64, 84);
				iVar0++;
			}
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				func_572(uParam0->f_711, Local_1114[iVar1 /*9*/], 0);
				iVar1++;
			}
			func_589(uParam0);
			break;
		
		case 72:
			Global_1975428[PLAYER::PLAYER_ID() /*53*/].f_5.f_39 = 2;
			func_574(uParam0, &(Local_1114[iVar0 /*9*/]), 64, 78);
			iVar0++;
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				func_572(uParam0->f_711, Local_1114[iVar1 /*9*/], 0);
				iVar1++;
			}
			break;
		
		case 73:
			Global_1975428[PLAYER::PLAYER_ID() /*53*/].f_5.f_39 = 3;
			func_574(uParam0, &(Local_1114[iVar0 /*9*/]), 64, 77);
			iVar0++;
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				func_572(uParam0->f_711, Local_1114[iVar1 /*9*/], 0);
				iVar1++;
			}
			break;
		
		case 74:
			Global_1975428[PLAYER::PLAYER_ID() /*53*/].f_5.f_39 = 4;
			if (func_379(uParam0->f_1084, 5))
			{
				func_574(uParam0, &(Local_1114[iVar0 /*9*/]), 64, 82);
				iVar0++;
			}
			if (func_379(uParam0->f_1084, 6))
			{
				func_574(uParam0, &(Local_1114[iVar0 /*9*/]), 64, 83);
				iVar0++;
			}
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				func_572(uParam0->f_711, Local_1114[iVar1 /*9*/], 0);
				iVar1++;
			}
			break;
		
		case 75:
			Global_1975428[PLAYER::PLAYER_ID() /*53*/].f_5.f_39 = 5;
			if (func_379(uParam0->f_1084, 3))
			{
				func_574(uParam0, &(Local_1114[iVar0 /*9*/]), 64, 80);
				iVar0++;
			}
			if (func_379(uParam0->f_1084, 4))
			{
				func_574(uParam0, &(Local_1114[iVar0 /*9*/]), 64, 81);
				iVar0++;
			}
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				func_572(uParam0->f_711, Local_1114[iVar1 /*9*/], 0);
				iVar1++;
			}
			break;
		
		case 76:
			Global_1975428[PLAYER::PLAYER_ID() /*53*/].f_5.f_39 = 6;
			if (func_379(uParam0->f_1084, 3))
			{
				func_574(uParam0, &(Local_1114[iVar0 /*9*/]), 64, 80);
				iVar0++;
			}
			if (func_379(uParam0->f_1084, 4))
			{
				func_574(uParam0, &(Local_1114[iVar0 /*9*/]), 64, 81);
				iVar0++;
			}
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				func_572(uParam0->f_711, Local_1114[iVar1 /*9*/], 0);
				iVar1++;
			}
			break;
	}
}

void func_589(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_584(uParam0->f_711, 87);
	func_584(uParam0->f_711, 88);
	func_584(uParam0->f_711, 89);
	iVar1 = 0;
	while (iVar1 < 4)
	{
		iVar2 = (87 + iVar1);
		if (func_377(uParam0->f_1084, func_378(iVar2)))
		{
			func_574(uParam0, &(Local_1206[iVar0 /*9*/]), 66, iVar2);
			iVar0++;
		}
		iVar1++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Local_1206.f_0)
	{
		if (Local_1206[iVar1 /*9*/])
		{
			func_572(uParam0->f_711, Local_1206[iVar1 /*9*/], 0);
		}
		iVar1++;
	}
}

void func_590(var uParam0)
{
	int iVar0;
	struct<9> Var1;
	
	func_584(uParam0->f_711, 77);
	func_584(uParam0->f_711, 78);
	func_584(uParam0->f_711, 79);
	func_584(uParam0->f_711, 80);
	func_584(uParam0->f_711, 81);
	func_584(uParam0->f_711, 82);
	func_584(uParam0->f_711, 83);
	func_584(uParam0->f_711, 84);
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Local_1114[iVar0 /*9*/] = { Var1 };
		iVar0++;
	}
	Global_1975428[PLAYER::PLAYER_ID() /*53*/].f_5.f_40 = -1;
}

void func_591(var uParam0)
{
	func_561(uParam0->f_711, 71, 0);
	func_561(uParam0->f_711, 72, 0);
	func_561(uParam0->f_711, 73, 0);
	func_561(uParam0->f_711, 74, 0);
	func_561(uParam0->f_711, 75, 0);
	func_561(uParam0->f_711, 76, 0);
}

int func_592(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 71;
		
		case 2:
			return 72;
		
		case 3:
			return 73;
		
		case 4:
			return 74;
		
		case 5:
			return 75;
		
		case 6:
			return 76;
		
		default:
	}
	return 0;
}

void func_593(var uParam0)
{
	int iVar0;
	
	if (!iLocal_1412)
	{
		return;
	}
	iVar0 = -1;
	if (func_814(&iVar0))
	{
		uParam0->f_806.f_3 = uParam0->f_806.f_2;
		uParam0->f_806.f_2 = iVar0;
		uParam0->f_707 = 1;
		func_594(uParam0);
		iLocal_1412 = 0;
	}
}

void func_594(var uParam0)
{
	bool bVar0;
	
	bVar0 = uParam0->f_806.f_2;
	if (uParam0->f_1084 != PLAYER::PLAYER_ID() && bVar0 != 1000)
	{
		return;
	}
	switch (bVar0)
	{
		case 1:
			if (Local_1525.f_6 != -1)
			{
				return;
			}
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				return;
			}
			if (func_366(uParam0, bVar0))
			{
				return;
			}
			if (func_17(uParam0->f_1084, 0))
			{
				func_803(uParam0);
				return;
			}
			func_622(uParam0, bVar0);
			break;
		
		case 40:
		case 42:
		case 44:
		case 45:
		case 46:
		case 48:
		case 47:
		case 49:
		case 50:
		case 53:
		case 51:
		case 52:
		case 60:
		case 61:
		case 62:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				return;
			}
			if (func_366(uParam0, bVar0))
			{
				return;
			}
			if (Local_1525.f_6 != -1)
			{
				return;
			}
			func_622(uParam0, bVar0);
			break;
		
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			if (func_366(uParam0, bVar0))
			{
				return;
			}
			if (Local_1525.f_6 != -1)
			{
				return;
			}
			func_619(uParam0, bVar0);
			break;
		
		case 59:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				return;
			}
			func_617(uParam0);
			break;
		
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
			func_588(uParam0, bVar0);
			break;
		
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
			func_570(uParam0, bVar0);
			break;
		
		case 85:
		case 86:
			func_567(uParam0, bVar0);
			break;
		
		case 87:
		case 88:
		case 89:
		case 90:
			func_564(uParam0, bVar0);
			break;
		
		case 91:
		case 92:
			func_560(uParam0, bVar0);
			break;
		
		case 98:
			func_616(uParam0, bVar0);
			break;
		
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
			if (func_366(uParam0, bVar0))
			{
				return;
			}
			func_610(uParam0, bVar0);
			break;
		
		case 1000:
			if (Local_1525.f_6 != -1)
			{
				return;
			}
			if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				if (uParam0->f_1084 == PLAYER::PLAYER_ID())
				{
					func_609(uParam0);
				}
			}
			else if (uParam0->f_1084 == PLAYER::PLAYER_ID())
			{
				func_469(uParam0);
			}
			else
			{
				func_606(uParam0);
			}
			break;
		
		case 1002:
			func_595(uParam0);
			break;
		
		case 1001:
			func_537(uParam0);
			break;
	}
}

void func_595(var uParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	struct<10> Var3;
	struct<10> Var13;
	
	switch (iLocal_1432)
	{
		case -2:
			func_605(uParam0, 0);
			iVar2 = func_7(9510, -1, 0);
			MISC::SET_BIT(&iVar2, 16);
			func_4(9510, iVar2, -1, 1, 0);
			break;
		
		case -3:
			iVar2 = func_7(9510, -1, 0);
			MISC::SET_BIT(&iVar2, 14);
			func_4(9510, iVar2, -1, 1, 0);
			break;
		
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
			iVar0 = func_604(iLocal_1432);
			if (func_498())
			{
				func_486(func_603(iLocal_1432), iVar0, &uVar1, 0, 1, 0);
			}
			else
			{
				Var3 = -1;
				Var3.f_1 = -1;
				Var3.f_2 = -1;
				Var3.f_3 = -1;
				Var3.f_4 = -1;
				Var3.f_5 = -1;
				Var3.f_6 = -1;
				Var3.f_7 = -1;
				Var3.f_8 = -1;
				Var3.f_9 = -1;
				func_485(&Var3);
				func_602(&Var3, iLocal_1432, iVar0);
				MONEY::_NETWORK_SPENT_ISLAND_HEIST(iVar0, 0, 1, &Var3);
			}
			func_600(func_601(iLocal_1432), 1);
			func_561(uParam0->f_711, iLocal_1432, 1);
			func_34(uParam0, 11);
			func_41(&uLocal_1435, 0, 0);
			break;
		
		case 1:
			func_622(uParam0, iLocal_1432);
			break;
		
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			func_598(func_599(iLocal_1432));
			func_622(uParam0, iLocal_1432);
			break;
		
		case 59:
			if (func_498())
			{
				func_486(1322977732, Global_262145.f_29579, &uVar1, 0, 1, 0);
			}
			else
			{
				Var13 = -1;
				Var13.f_1 = -1;
				Var13.f_2 = -1;
				Var13.f_3 = -1;
				Var13.f_4 = -1;
				Var13.f_5 = -1;
				Var13.f_6 = -1;
				Var13.f_7 = -1;
				Var13.f_8 = -1;
				Var13.f_9 = -1;
				func_485(&Var13);
				Var13.f_6 = Global_262145.f_29579;
				MONEY::_NETWORK_SPENT_ISLAND_HEIST(Global_262145.f_29579, 0, 1, &Var13);
			}
			func_597(1);
			func_596(uParam0->f_711, 59, 1);
			func_561(uParam0->f_711, 98, 1);
			func_34(uParam0, 11);
			func_41(&uLocal_1435, 0, 0);
			break;
	}
	iLocal_1432 = 0;
	uParam0->f_707 = 1;
	func_538(uParam0->f_711);
}

void func_596(int iParam0, bool bParam1, bool bParam2)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_SETUP_ITEM_NUM_COMPLETE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_597(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_7(9481, -1, 0);
	if (bParam0)
	{
		MISC::SET_BIT(&iVar0, 12);
		MISC::SET_BIT(&(Global_1975428[PLAYER::PLAYER_ID() /*53*/].f_5), 12);
	}
	else
	{
		MISC::CLEAR_BIT(&iVar0, 12);
		MISC::CLEAR_BIT(&(Global_1975428[PLAYER::PLAYER_ID() /*53*/].f_5), 12);
	}
	func_4(9481, iVar0, -1, 1, 0);
}

void func_598(int iParam0)
{
	func_4(9484, iParam0, -1, 1, 0);
}

int func_599(bool bParam0)
{
	switch (bParam0)
	{
		case 54:
			return 1;
		
		case 55:
			return 2;
		
		case 56:
			return 3;
		
		case 57:
			return 4;
		
		case 58:
			return 5;
		
		default:
	}
	return 0;
}

void func_600(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_7(9483, -1, 0);
	if (bParam1)
	{
		MISC::SET_BIT(&iVar0, bParam0);
		MISC::SET_BIT(&(Global_1975428[PLAYER::PLAYER_ID() /*53*/].f_5.f_45), bParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&iVar0, bParam0);
		MISC::CLEAR_BIT(&(Global_1975428[PLAYER::PLAYER_ID() /*53*/].f_5.f_45), bParam0);
	}
	func_4(9483, iVar0, -1, 1, 0);
}

int func_601(int iParam0)
{
	switch (iParam0)
	{
		case 99:
			return 0;
		
		case 100:
			return 4;
		
		case 101:
			return 1;
		
		case 102:
			return 2;
		
		case 103:
			return 3;
		
		case 104:
			return 5;
		
		default:
	}
	return 6;
}

void func_602(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 99:
			*uParam0 = iParam2;
			break;
		
		case 100:
			uParam0->f_1 = iParam2;
			break;
		
		case 101:
			uParam0->f_2 = iParam2;
			break;
		
		case 102:
			uParam0->f_3 = iParam2;
			break;
		
		case 103:
			uParam0->f_4 = iParam2;
			break;
		
		case 104:
			uParam0->f_5 = iParam2;
			break;
	}
}

int func_603(int iParam0)
{
	switch (iParam0)
	{
		case 99:
			return -1896606724;
		
		case 100:
			return -1291433573;
		
		case 101:
			return 538631715;
		
		case 102:
			return 133782822;
		
		case 103:
			return 2081885153;
		
		case 104:
			return -1314365345;
		
		default:
	}
	return -2085313189;
}

int func_604(int iParam0)
{
	switch (iParam0)
	{
		case 99:
			return Global_262145.f_29573;
		
		case 100:
			return Global_262145.f_29574;
		
		case 101:
			return Global_262145.f_29575;
		
		case 102:
			return Global_262145.f_29576;
		
		case 103:
			return Global_262145.f_29577;
		
		case 104:
			return Global_262145.f_29578;
		
		default:
	}
	return 0;
}

void func_605(var uParam0, int iParam1)
{
	if (uParam0->f_1084 != PLAYER::PLAYER_ID())
	{
		return;
	}
	if (Local_1439.f_43.f_6 != 0)
	{
		Stack.Push(iParam1);
		Call_Loc(Local_1439.f_43.f_6);
		if (!StackVal)
		{
			return;
		}
	}
	if (!BitTest(Local_1525[(iParam1 / 32)], (iParam1 % 32)))
	{
	}
	MISC::SET_BIT(&(Local_1525[(iParam1 / 32)]), (iParam1 % 32));
}

void func_606(var uParam0)
{
	int iVar0;
	
	iVar0 = func_408(uParam0, PLAYER::PLAYER_ID());
	if (iVar0 != -1)
	{
		if (uParam0->f_823.f_67[iVar0] == 0)
		{
			uParam0->f_823.f_67[iVar0] = 1;
		}
		else
		{
			uParam0->f_823.f_67[iVar0] = 0;
		}
		func_607(uParam0->f_711, 1, func_608(uParam0));
		iLocal_1427 = 1;
	}
}

void func_607(int iParam0, bool bParam1, char* sParam2)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_LAUNCH_BUTTON");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
	func_428(sParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

char* func_608(var uParam0)
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (uParam0->f_1084 == PLAYER::PLAYER_ID())
		{
			return "H4_FINALE_CONT";
		}
		else if (func_408(uParam0, PLAYER::PLAYER_ID()) != -1)
		{
			if (uParam0->f_823.f_67[func_408(uParam0, PLAYER::PLAYER_ID())] == 0)
			{
				return "H4_FINALE_RDY";
			}
			else
			{
				return "H4_FINALE_NRDY";
			}
		}
	}
	return "CH_FINALE_LBS";
}

void func_609(var uParam0)
{
	MISC::SET_BIT(&(uParam0->f_1085), 3);
	uParam0->f_726.f_5 = 0;
	iLocal_1428 = 6;
	iLocal_1414 = 1;
	uParam0->f_704 = 0;
	func_34(uParam0, 15);
}

void func_610(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_601(bParam1);
	if (iVar0 == 6)
	{
		return;
	}
	if (func_412(PLAYER::PLAYER_ID(), iVar0))
	{
		return;
	}
	if (!MONEY::NETWORK_CAN_SPEND_MONEY(func_604(bParam1), false, true, false, -1, 0))
	{
		return;
	}
	func_611(uParam0->f_711, func_615(bParam1), func_614(bParam1), func_613(), func_612());
	uParam0->f_707 = 1;
	iLocal_1432 = bParam1;
}

void func_611(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SHOW_OVERLAY");
	func_428(sParam1);
	func_428(sParam2);
	func_428(sParam3);
	func_428(sParam4);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

char* func_612()
{
	return "H4P_OVERLAY_CAN";
}

char* func_613()
{
	return "H4P_OVERLAY_CON";
}

char* func_614(int iParam0)
{
	switch (iParam0)
	{
		case 99:
			return "H4P_OVR_SC1_M";
		
		case 100:
			return "H4P_OVR_SC2_M";
		
		case 101:
			return "H4P_OVR_SC3_M";
		
		case 102:
			return "H4P_OVR_SC4_M";
		
		case 103:
			return "H4P_OVR_SC5_M";
		
		case 104:
			return "H4P_OVR_SC6_M";
		
		default:
	}
	return "";
}

char* func_615(int iParam0)
{
	switch (iParam0)
	{
		case 99:
			return "H4P_OVR_SC1_T";
		
		case 100:
			return "H4P_OVR_SC2_T";
		
		case 101:
			return "H4P_OVR_SC3_T";
		
		case 102:
			return "H4P_OVR_SC4_T";
		
		case 103:
			return "H4P_OVR_SC5_T";
		
		case 104:
			return "H4P_OVR_SC6_T";
		
		default:
	}
	return "";
}

void func_616(var uParam0, bool bParam1)
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return;
	}
	if (Global_1975428[PLAYER::PLAYER_ID() /*53*/].f_5.f_44)
	{
		Global_1975428[PLAYER::PLAYER_ID() /*53*/].f_5.f_44 = 0;
		func_561(uParam0->f_711, bParam1, 0);
	}
	else
	{
		Global_1975428[PLAYER::PLAYER_ID() /*53*/].f_5.f_44 = 1;
		func_561(uParam0->f_711, bParam1, 1);
	}
}

void func_617(var uParam0)
{
	if (func_411(uParam0->f_1084))
	{
		return;
	}
	if (!MONEY::NETWORK_CAN_SPEND_MONEY(Global_262145.f_29579, false, true, false, -1, 0))
	{
		return;
	}
	func_611(uParam0->f_711, "H4P_OVR_SUP_T", "H4P_OVR_SUP_M", func_618(), func_612());
	uParam0->f_707 = 1;
	iLocal_1432 = 59;
}

char* func_618()
{
	return "H4P_OVERLAY_ACC";
}

void func_619(var uParam0, int iParam1)
{
	if (func_374(uParam0->f_1084) == 0)
	{
		func_611(uParam0->f_711, func_621(iParam1), func_620(iParam1), func_618(), func_612());
		uParam0->f_707 = 1;
		iLocal_1432 = iParam1;
	}
	else if (!func_17(uParam0->f_1084, 13))
	{
		func_622(uParam0, iParam1);
	}
}

char* func_620(int iParam0)
{
	switch (iParam0)
	{
		case 54:
			return "H4P_OVR_WL1_M";
		
		case 55:
			return "H4P_OVR_WL2_M";
		
		case 56:
			return "H4P_OVR_WL3_M";
		
		case 57:
			return "H4P_OVR_WL4_M";
		
		case 58:
			return "H4P_OVR_WL5_M";
		
		default:
	}
	return "";
}

char* func_621(int iParam0)
{
	switch (iParam0)
	{
		case 54:
			return "H4P_OVR_WL1_T";
		
		case 55:
			return "H4P_OVR_WL2_T";
		
		case 56:
			return "H4P_OVR_WL3_T";
		
		case 57:
			return "H4P_OVR_WL4_T";
		
		case 58:
			return "H4P_OVR_WL5_T";
		
		default:
	}
	return "";
}

void func_622(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_802(uParam0, bParam1);
	if (iVar0 == -1)
	{
		return;
	}
	if (!func_16(uParam0, iVar0))
	{
		return;
	}
	if (func_801(iLocal_1438, 0))
	{
		return;
	}
	iVar1 = func_641(PLAYER::PLAYER_ID(), 256, 0);
	if (iVar1 != -1)
	{
		func_638(uParam0, bParam1, iVar1);
		return;
	}
	func_623(iVar0);
	Global_1974627[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_23 = 1;
	Global_1974627[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_24 = 0;
	iLocal_1428 = 5;
	func_34(uParam0, 15);
}

void func_623(int iParam0)
{
	func_624(-1, iParam0);
}

void func_624(int iParam0, var uParam1)
{
	if (!func_108())
	{
		return;
	}
	if (!func_637(-1))
	{
		return;
	}
	if (iParam0 != -1)
	{
		func_636(iParam0);
	}
	func_635(uParam1);
	func_625(256, -1);
}

void func_625(int iParam0, int iParam1)
{
	if ((func_108() || !func_634(1)) || func_633(iParam0) == 3)
	{
		if (!func_632(PLAYER::PLAYER_ID(), 0) && !func_632(PLAYER::PLAYER_ID(), 3))
		{
			func_631(iParam0);
			func_626(iParam0, func_630(1, 1), func_629(), func_628(), func_627(), iParam1);
		}
	}
}

void func_626(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	struct<7> Var0;
	
	Var0.f_0 = 985284033;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = uParam2;
	Var0.f_4 = uParam3;
	Var0.f_5 = uParam4;
	Var0.f_6 = uParam5;
	if (!iParam1 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 7, iParam1);
	}
}

var func_627()
{
	return Global_2810701.f_5194.f_346;
}

var func_628()
{
	return Global_2810701.f_5194.f_345;
}

var func_629()
{
	return Global_2810701.f_5194.f_344;
}

int func_630(int iParam0, bool bParam1)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = false;
	while (bVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(bVar1);
		if (func_75(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, bVar1);
				}
				else if (!func_76(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, bVar1);
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

void func_631(int iParam0)
{
	Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_32 = iParam0;
}

int func_632(int iParam0, int iParam1)
{
	if (func_120(iParam0, 0))
	{
		return func_633(Global_1893551[iParam0 /*599*/].f_10.f_33) == iParam1;
	}
	return 0;
}

int func_633(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
		case 256:
		case 258:
		case 262:
		case 263:
		case 264:
		case 271:
		case 277:
			return 0;
		
		case 276:
			return 3;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

bool func_634(bool bParam0)
{
	return func_228(PLAYER::PLAYER_ID(), bParam0);
}

void func_635(var uParam0)
{
	Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_308 = uParam0;
}

void func_636(int iParam0)
{
	if (Global_2810701.f_5194.f_344 != iParam0)
	{
		Global_2810701.f_5194.f_344 = iParam0;
	}
}

bool func_637(int iParam0)
{
	return func_7(9516, iParam0, 0) != 0;
}

void func_638(var uParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case 15:
			if (func_13(iLocal_1438))
			{
				func_9("GENERAL_MLF_G1", -1);
			}
			else if (func_640(iLocal_1438))
			{
				func_9("GENERAL_MLF_G2", -1);
			}
			else
			{
				func_9("GENERAL_MLF_G3", -1);
			}
			break;
		
		case 16:
			if (func_13(iLocal_1438))
			{
				func_9("GENERAL_MLF_G4", -1);
			}
			else if (func_640(iLocal_1438))
			{
				func_9("GENERAL_MLF_G5", -1);
			}
			else
			{
				func_9("GENERAL_MLF_G6", -1);
			}
			break;
		
		default:
			if (func_639(func_802(uParam0, iParam1)))
			{
				func_9("CSH_LAUNCHF_0", -1);
			}
			else
			{
				func_9("CSH_LAUNCHF_1", -1);
			}
			break;
	}
}

int func_639(int iParam0)
{
	switch (iParam0)
	{
		case 10:
		case 7:
		case 8:
		case 9:
		case 13:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_640(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_1853131[iParam0 /*888*/].f_267.f_28, 26);
}

int func_641(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (!func_670(func_773(iParam1, -1, -1, -1), func_730(iParam1, -1, 1, -1, -1, iParam0), func_679(iParam1, -1, -1, -1, -1, iParam0), 0, 1))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (func_13(iParam0))
	{
		if (iParam1 == 153)
		{
			iVar0 = 211;
		}
	}
	if (func_668(iParam1) >= func_667(iVar0))
	{
		return 5;
	}
	if (func_666(iParam0))
	{
		return 6;
	}
	if (func_665(iParam0))
	{
		return 14;
	}
	iVar1 = func_660(iParam0);
	if (iVar1 != -1)
	{
		return iVar1;
	}
	if (func_633(iParam1) == 1)
	{
		if ((func_659() || func_658()) || ((!bParam2 && func_657() != 0) && func_633(iParam1) == 1))
		{
			return 2;
		}
	}
	else if (func_633(iParam1) == 2)
	{
		if (!func_654(iParam1))
		{
			return 3;
		}
		if (!bParam2)
		{
			if (Global_1893551[iParam0 /*599*/].f_10.f_34 != func_15())
			{
				return 9;
			}
		}
		if (func_653(iParam0))
		{
			return 10;
		}
	}
	else if (func_651(iParam1))
	{
		if (func_21(iParam0) <= 0)
		{
			return 4;
		}
	}
	if (func_650(iParam1))
	{
		if (func_649())
		{
			return 13;
		}
		if (func_647())
		{
			return 12;
		}
	}
	if (func_21(iParam0) + 1 < func_646(iVar0))
	{
		return 4;
	}
	switch (iParam1)
	{
		case 157:
			break;
		
		case 152:
		case 164:
		case 173:
		case 170:
		case 201:
		case 200:
			if (!func_643(iParam0, 0))
			{
				return 1;
			}
			break;
		
		case 189:
			if (func_642(iParam0, 21) || func_642(iParam0, 25))
			{
				return 0;
			}
			break;
	}
	return -1;
}

var func_642(int iParam0, int iParam1)
{
	return BitTest(Global_2689224[iParam0 /*451*/].f_215, iParam1);
}

int func_643(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (!func_644(iVar1, iParam0, 1))
			{
				if (iParam1 || !func_122(iVar1, 31))
				{
					return 1;
				}
			}
		}
		bVar0++;
	}
	return 0;
}

int func_644(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_15())
	{
		if (!bParam2)
		{
			if (func_645(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1893551[iParam0 /*599*/].f_10 != func_15())
		{
			return iParam1 == Global_1893551[iParam0 /*599*/].f_10;
		}
	}
	return 0;
}

int func_645(int iParam0, int iParam1)
{
	if (iParam1 != func_15())
	{
		if (iParam0 != func_15())
		{
			if (Global_1893551[iParam0 /*599*/].f_10 != func_15())
			{
				if (Global_1893551[iParam0 /*599*/].f_10 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

int func_646(int iParam0)
{
	switch (iParam0)
	{
		case 180:
			return Global_262145.f_18430;
		
		case 183:
			return Global_262145.f_18438;
		
		case 185:
			return Global_262145.f_18447;
		
		case 182:
			return Global_262145.f_18458;
		
		case 186:
			return Global_262145.f_18467;
		
		case 195:
			return Global_262145.f_18485;
		
		case 198:
			return Global_262145.f_18495;
		
		case 197:
			return Global_262145.f_18507;
		
		case 207:
			return Global_262145.f_18515;
		
		case 209:
			return Global_262145.f_18528;
		
		case 208:
			return Global_262145.f_18536;
		
		case 201:
			return Global_262145.f_18569;
		
		case 211:
			return Global_262145.f_18637;
		
		case 193:
			return Global_262145.f_18660;
		
		case 205:
			return Global_262145.f_18678;
		
		case 189:
			return Global_262145.f_18643;
		
		case 216:
			return 2;
		
		case 220:
			return 2;
		
		default:
	}
	return 1;
}

int func_647()
{
	if (func_648())
	{
		return 1;
	}
	return Global_2714635.f_744;
}

bool func_648()
{
	return Global_1575013 == 10;
}

bool func_649()
{
	return Global_262145.f_15487;
}

int func_650(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_651(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_652(iParam0, 0);
	return 0;
}

int func_652(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_653(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if ((Global_1893551[iParam0 /*599*/].f_10.f_34 != func_15() && Global_1893551[iParam0 /*599*/].f_10.f_34 == iVar1) && Global_1893551[iVar1 /*599*/].f_10.f_34 == iParam0)
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

int func_654(int iParam0)
{
	switch (iParam0)
	{
		case 179:
			if (func_656() < 2)
			{
				return 0;
			}
			break;
		
		case 148:
			if (func_655() < 2)
			{
				return 0;
			}
			break;
		
		default:
			if (func_655() < 2)
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_655()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
			if (func_104(iVar2))
			{
				iVar1++;
			}
		}
		bVar0++;
	}
	return iVar1;
}

int func_656()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
			if (func_13(iVar2))
			{
				iVar1++;
			}
		}
		bVar0++;
	}
	return iVar1;
}

int func_657()
{
	return Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_103;
}

bool func_658()
{
	return Global_1921039.f_11.f_144 != -1;
}

bool func_659()
{
	return Global_1921039.f_11.f_143 != -1;
}

int func_660(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < func_662())
	{
		iVar1 = Global_1893551[iParam0 /*599*/].f_10.f_11[iVar0];
		if (iVar1 != func_15())
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
				if (func_666(iVar1))
				{
					return 7;
				}
				if (func_665(iVar1))
				{
					return 15;
				}
				if (func_661(iVar1))
				{
					return 16;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_661(int iParam0)
{
	if (iParam0 == func_15())
	{
		return 0;
	}
	if (((((BitTest(Global_2689224[iParam0 /*451*/].f_317.f_4, 2) || BitTest(Global_2689224[iParam0 /*451*/].f_317.f_4, 3)) || BitTest(Global_2689224[iParam0 /*451*/].f_317.f_4, 5)) || BitTest(Global_2689224[iParam0 /*451*/].f_317.f_4, 6)) || BitTest(Global_2689224[iParam0 /*451*/].f_317.f_4, 7)) || BitTest(Global_1853131[iParam0 /*888*/].f_267.f_379.f_1, 1))
	{
		return 1;
	}
	return 0;
}

int func_662()
{
	return (func_663() - 1);
}

int func_663()
{
	return func_664(PLAYER::PLAYER_ID());
}

int func_664(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_1893551[iParam0 /*599*/].f_10;
	if (iVar0 != func_15() && Global_1893551[iVar0 /*599*/].f_10.f_428 == 1)
	{
		return 8;
	}
	return 4;
}

int func_665(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2784005;
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_666(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1893551[iVar0 /*599*/].f_1, 0);
	}
	return 0;
}

int func_667(int iParam0)
{
	switch (iParam0)
	{
		case 162:
			return Global_262145.f_12831;
		
		case 155:
			return Global_262145.f_12856;
		
		case 153:
			return Global_262145.f_12820;
		
		case 163:
			return Global_262145.f_12796;
		
		case 160:
			return Global_262145.f_12809;
		
		case 154:
			return Global_262145.f_12866;
		
		case 169:
			return 1;
		
		case 171:
			return Global_262145.f_15314;
		
		case 172:
			return Global_262145.f_15333;
		
		case 148:
			return Global_262145.f_18544;
		
		case 179:
			return Global_262145.f_18552;
		
		case 201:
			return Global_262145.f_18566;
		
		case 200:
			return Global_262145.f_18606;
		
		case 211:
			return Global_262145.f_18635;
		
		case 194:
			return Global_262145.f_18647;
		
		case 193:
			return Global_262145.f_18658;
		
		case 210:
			return Global_262145.f_18670;
		
		case 205:
			return Global_262145.f_18676;
		
		case 199:
			return Global_262145.f_18689;
		
		case 249:
			return 1;
		
		case 238:
			return 1;
		
		default:
	}
	return 2147483647;
}

int func_668(int iParam0)
{
	return Global_1921039.f_11.f_147[func_669(iParam0)];
}

int func_669(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return 0;
		
		case 152:
			return 1;
		
		case 151:
			return 2;
		
		case 142:
			return 3;
		
		case 157:
			return 4;
		
		case 159:
			return 5;
		
		case 164:
			return 6;
		
		case 160:
			return 7;
		
		case 162:
			return 8;
		
		case 163:
			return 9;
		
		case 154:
			return 10;
		
		case 155:
			return 11;
		
		case 153:
			return 12;
		
		case 166:
			return 13;
		
		case 167:
			return 14;
		
		case 168:
			return 15;
		
		case 169:
			return 16;
		
		case 170:
			return 17;
		
		case 171:
			return 18;
		
		case 172:
			return 19;
		
		case 173:
			return 20;
		
		case 178:
			return 21;
		
		case 179:
			return 22;
		
		case 180:
			return 23;
		
		case 182:
			return 24;
		
		case 183:
			return 25;
		
		case 185:
			return 26;
		
		case 186:
			return 27;
		
		case 189:
			return 28;
		
		case 190:
			return 29;
		
		case 191:
			return 30;
		
		case 192:
			return 31;
		
		case 193:
			return 32;
		
		case 194:
			return 33;
		
		case 195:
			return 34;
		
		case 197:
			return 35;
		
		case 198:
			return 36;
		
		case 199:
			return 37;
		
		case 200:
			return 38;
		
		case 201:
			return 39;
		
		case 205:
			return 40;
		
		case 207:
			return 41;
		
		case 208:
			return 42;
		
		case 209:
			return 43;
		
		case 210:
			return 44;
		
		case 214:
			return 45;
		
		case 215:
			return 46;
		
		case 216:
			return 47;
		
		case 217:
			return 48;
		
		case 218:
			return 49;
		
		case 219:
			return 50;
		
		case 220:
			return 51;
		
		case 221:
			return 52;
		
		case 188:
			return 53;
		
		case 225:
			return 54;
		
		case 226:
			return 55;
		
		case 227:
			return 56;
		
		case 229:
			return 57;
		
		case 230:
			return 58;
		
		case 233:
			return 59;
		
		case 237:
			return 60;
		
		case 238:
			return 61;
		
		case 239:
			return 62;
		
		case 240:
			return 63;
		
		case 241:
			return 64;
		
		case 242:
			return 65;
		
		case 244:
			return 66;
		
		case 248:
			return 67;
		
		case 249:
			return 68;
		
		case 250:
			return 69;
		
		case 243:
			return 70;
		
		case 158:
			return 71;
		
		case 256:
			return 72;
		
		case 258:
			return 73;
		
		case 271:
			return 74;
		
		case 276:
			return 75;
		
		case 277:
			return 76;
		
		case 262:
			return 79;
		
		case 263:
			return 78;
		
		case 264:
			return 77;
		
		default:
	}
	return -1;
}

int func_670(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if ((func_678(iParam0, bParam3, bParam4) || func_677(iParam1, bParam3, bParam4)) || func_671(iParam2, bParam3, bParam4))
	{
		return 1;
	}
	return 0;
}

int func_671(int iParam0, bool bParam1, bool bParam2)
{
	return func_672(2, iParam0, 0, bParam1, bParam2);
}

int func_672(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1656884, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_676(iParam0) - func_675(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_675(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_676(iParam0) - func_674(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_675(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_676(iParam0) - func_675(iParam0, 1));
		}
		if (!bParam4 && Global_1853131[PLAYER::PLAYER_ID() /*888*/] != 3)
		{
			iVar1 = (iVar1 - func_673(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_673(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_674(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1656884.f_1;
			break;
		
		case 1:
			return Global_1656884.f_2;
			break;
		
		case 2:
			return Global_1656884.f_3;
			break;
	}
	return 0;
}

int func_675(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2689224[iVar0 /*451*/].f_216;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2689224[iVar0 /*451*/].f_217;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2689224[iVar0 /*451*/].f_218;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_676(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1656892;
			break;
		
		case 1:
			return Global_1656893;
			break;
		
		case 2:
			return Global_1656894;
			break;
	}
	return 0;
}

int func_677(int iParam0, bool bParam1, bool bParam2)
{
	return func_672(1, iParam0, 0, bParam1, bParam2);
}

int func_678(int iParam0, bool bParam1, bool bParam2)
{
	return func_672(0, iParam0, 0, bParam1, bParam2);
}

int func_679(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 159:
		case 142:
			return 1;
		
		case 167:
			return func_729(iParam1);
		
		case 170:
			return 2;
		
		case 171:
			return 0;
		
		case 172:
			return 9;
		
		case 173:
			return 0;
		
		case 168:
			return 5;
		
		case 178:
		case 188:
			return func_727(iParam1, iParam2, iParam3);
		
		case 225:
		case 226:
			return func_721(iParam1, iParam2, iParam3, iParam4);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_709(iParam1, iParam2, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
		
		case 233:
			return func_702(iParam1, iParam2, iParam3, PLAYER::INT_TO_PLAYERINDEX(bParam5), iParam4);
		
		case 179:
			return 0;
		
		case 182:
			return 7;
		
		case 185:
			return 6;
		
		case 186:
			return 2;
		
		case 180:
			return 9;
		
		case 190:
			return 8;
		
		case 191:
			return 0;
		
		case 192:
			return func_695(iParam1, iParam2);
		
		case 193:
			return 0;
		
		case 194:
			return 0;
		
		case 199:
			return 0;
		
		case 195:
			return 9;
		
		case 201:
			return 16;
		
		case 198:
			return 12;
		
		case 205:
			return 8;
		
		case 207:
			return 0;
		
		case 208:
			return 15;
		
		case 209:
			return 0;
		
		case 210:
			return 0;
		
		case 214:
			return 9;
		
		case 215:
			return 0;
		
		case 216:
			return 16;
		
		case 217:
			return 0;
		
		case 218:
			return 0;
		
		case 219:
			return 0;
		
		case 220:
			return 30;
		
		case 221:
			return 30;
		
		case 237:
		case 250:
			return func_692(iParam1, iParam2, iParam3);
		
		case 238:
		case 249:
			return func_691(iParam1);
		
		case 239:
			return 4;
		
		case 240:
			return 1;
		
		case 241:
			return 1;
		
		case 242:
			return 1;
		
		case 244:
			return 4;
		
		case 248:
			return 5;
		
		case 243:
			return func_687(iParam1, iParam2, PLAYER::INT_TO_PLAYERINDEX(bParam5), iParam4);
		
		case 158:
			return func_683(iParam1, iParam2, PLAYER::INT_TO_PLAYERINDEX(bParam5), iParam4);
		
		case 181:
			return func_680(iParam1, iParam2, PLAYER::INT_TO_PLAYERINDEX(bParam5), iParam4);
		
		default:
	}
	return 0;
}

int func_680(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_682(iParam0, iParam1, iParam3);
	iVar0 = (iVar0 + func_681(iParam0, iParam2));
	return iVar0;
}

int func_681(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 2:
			return 5;
		
		default:
	}
	return 1;
}

int func_682(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		default:
	}
	return 0;
}

int func_683(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_686(iParam0, iParam1, iParam3);
	iVar0 = (iVar0 + func_684(iParam0, iParam2));
	return iVar0;
}

int func_684(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	switch (iParam0)
	{
		case 4:
		case 2:
		case 1:
		case 3:
		case 30:
		case 31:
		case 32:
		case 28:
		case 29:
		case 52:
		case 37:
			return 0;
		
		case 19:
		case 20:
			return 1;
		
		case 38:
		case 8:
		case 14:
		case 17:
		case 11:
		case 18:
		case 21:
		case 22:
		case 7:
		case 34:
		case 23:
		case 41:
		case 49:
		case 48:
		case 27:
		case 15:
		case 50:
		case 24:
		case 6:
		case 9:
		case 10:
		case 47:
		case 42:
		case 26:
		case 25:
			return 2;
		
		case 43:
			return 3;
		
		case 16:
			return 4;
		
		case 12:
		case 13:
			if (func_228(iParam1, 1))
			{
				Var0 = { func_685(iParam1) };
			}
			if (Var0.f_1 == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		
		case 33:
			return 5;
	}
	return 1;
}

Vector3 func_685(int iParam0)
{
	return Global_1893551[iParam0 /*599*/].f_10.f_305;
}

int func_686(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		
		case 24:
			return 1;
		
		case 10:
			switch (iParam1)
			{
				case 30:
					return 11;
				
				case 31:
				case 32:
					return 9;
				
				default:
			}
			break;
		
		case 36:
			return 0;
		
		case 38:
			return 3;
		
		case 40:
			return 4;
		
		case 41:
			return 4;
		
		case 8:
			return 13;
		
		case 13:
			switch (iParam1)
			{
				case 38:
				case 39:
					return 10;
				
				case 40:
					return 11;
				
				default:
			}
			break;
		
		case 35:
			return 5;
		
		case 46:
			return 2;
		
		case 9:
			return 8;
		
		case 4:
			return 7;
		
		case 14:
			return 11;
		
		case 17:
			return 8;
		
		case 47:
			return 11;
		
		case 11:
			return 9;
		
		case 18:
			return 13;
		
		case 6:
			return 17;
		
		case 48:
			return 21;
		
		case 33:
			return 5;
		
		case 44:
			return 2;
		
		case 21:
			return 22;
		
		case 22:
			return 12;
		
		case 7:
			return 10;
		
		case 2:
			return 0;
		
		case 34:
			switch (iParam1)
			{
				case 91:
					return 16;
				
				case 92:
					return 14;
				
				default:
			}
			break;
		
		case 27:
			return 12;
		
		case 23:
			return 17;
		
		case 31:
			return 3;
		
		case 12:
			return 4;
		
		case 3:
			return 2;
		
		case 49:
			return 15;
		
		case 19:
			return 14;
		
		case 50:
			return 12;
		
		case 20:
			return 12;
		
		case 32:
			return 15;
		
		case 30:
			return 6;
		
		case 16:
			return 12;
		
		case 39:
			return 5;
		
		case 42:
			return 3;
		
		case 37:
			return 19;
		
		case 52:
			return 6;
		
		case 15:
			return 2;
		
		case 25:
			switch (iParam1)
			{
				case 69:
					return 11;
				
				case 70:
					return 12;
				
				default:
			}
			break;
	}
	return 0;
}

int func_687(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_690(iParam0, iParam1, iParam3);
	if (!func_689(iParam0))
	{
		iVar0 = (iVar0 + func_688(iParam0, iParam2));
	}
	return iVar0;
}

int func_688(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 14:
		case 5:
		case 0:
		case 3:
		case 2:
			return 0;
		
		case 6:
			if (func_21(iParam1) + 1 == 1)
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_689(int iParam0)
{
	return 0;
}

int func_690(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 13:
			return 3;
		
		case 5:
			switch (iParam1)
			{
				case 15:
					return 17;
				
				case 16:
					return 12;
				
				case 17:
					return 12;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 35:
				case 36:
					return 1;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 18:
					return 3;
				
				default:
			}
			break;
		
		case 12:
			return 15;
		
		case 0:
			return 1;
		
		case 9:
			switch (iParam1)
			{
				case 28:
					switch (iParam2)
					{
						case 0:
							return 1;
						
						case 1:
							return 0;
						
						case 2:
							return 3;
						
						default:
					}
					break;
				
				case 29:
					switch (iParam2)
					{
						case 0:
							return 1;
						
						case 1:
							return 2;
						
						case 2:
							return 0;
						
						default:
					}
					break;
				
				case 30:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 0;
						
						case 2:
							return 0;
						
						default:
					}
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 10:
					return 6;
				
				default:
			}
			return 5;
		
		case 2:
			switch (iParam1)
			{
				case 6:
					return 22;
				
				case 7:
					return 23;
				
				case 8:
					return 25;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					return 3;
				
				case 26:
					return 8;
				
				case 27:
					return 4;
				
				default:
			}
			break;
	}
	return 0;
}

int func_691(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		
		case 1:
			return 3;
		
		case 2:
			return 4;
		
		case 3:
			return 0;
		
		case 4:
			return 3;
		
		case 5:
			return 0;
		
		default:
	}
	return 0;
}

int func_692(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_694(iParam0, iParam1);
	if (func_693(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_693(int iParam0)
{
	return 1;
}

int func_694(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 12:
			return 3;
		
		case 9:
			switch (iParam1)
			{
				case 71:
				case 72:
				case 73:
					return 3;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 77:
					return 2;
				
				default:
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 102:
				case 103:
				case 104:
					return 4;
				
				default:
			}
			break;
		
		case 23:
			switch (iParam1)
			{
				case 133:
				case 135:
					return 1;
				
				case 136:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			return 10;
		
		case 18:
			return 3;
		
		case 3:
			return 4;
		
		case 21:
			return 2;
		
		case 0:
			switch (iParam1)
			{
				case 0:
					return 9;
				
				case 1:
					return 9;
				
				case 2:
					return 8;
				
				case 3:
					return 6;
				
				case 4:
					return 8;
				
				case 5:
					return 8;
				
				case 6:
					return 8;
				
				case 7:
					return 8;
				
				case 8:
					return 8;
				
				case 9:
					return 6;
				
				default:
			}
			break;
	}
	return 0;
}

int func_695(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_701(iParam0, iParam1);
	if (!func_700(iParam0))
	{
		iVar0 = (iVar0 + func_696(iParam0, func_20() + 1));
	}
	if (iParam0 == 14 || ((((func_700(iParam0) && iParam0 != 9) && iParam0 != 16) && iParam0 != 7) && iParam0 != 17))
	{
		iVar0 = (iVar0 + func_696(iParam0, func_20() + 1));
	}
	if (iParam0 == 7)
	{
		iVar0 += 6;
	}
	if (iParam0 == 17)
	{
		iVar0 += 2;
	}
	return iVar0;
}

int func_696(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_699(iParam0))
	{
		iVar0 = 1;
	}
	else
	{
		if (iVar0 == 0)
		{
			iVar0 = iParam1;
			iVar1 = func_698(iParam0, iParam1);
			iVar2 = func_697(iParam0);
			if (iVar0 > iVar1)
			{
				iVar0 = iVar1;
			}
			else if (iVar0 < iVar2)
			{
				iVar0 = iVar2;
			}
		}
		if (func_700(iParam0))
		{
			if (iVar0 > Global_262145.f_18181)
			{
				iVar0 = Global_262145.f_18181;
			}
		}
		else
		{
			if (iVar0 < Global_262145.f_18180)
			{
				iVar0 = Global_262145.f_18180;
			}
			if (iVar0 > Global_262145.f_18179)
			{
				iVar0 = Global_262145.f_18179;
			}
		}
	}
	return iVar0;
}

int func_697(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return Global_262145.f_18218;
		
		case 10:
			return Global_262145.f_18243;
		
		default:
	}
	return 1;
}

int func_698(int iParam0, int iParam1)
{
	if (func_700(iParam0))
	{
		if (iParam1 >= Global_262145.f_18182)
		{
			return 2;
		}
		return 1;
	}
	switch (iParam0)
	{
		case 5:
			return Global_262145.f_18219;
		
		case 10:
			return Global_262145.f_18244;
		
		default:
	}
	return 8;
}

int func_699(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

int func_700(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 32:
		case 0:
		case 2:
		case 4:
		case 18:
		case 6:
		case 5:
		case 10:
		case 12:
		case 13:
			return 0;
		
		default:
	}
	return 1;
}

int func_701(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 32:
			switch (iParam1)
			{
				case 195:
					return 3;
				
				case 196:
					return 3;
				
				case 197:
					return 3;
				
				case 198:
					return 3;
				
				case 199:
					return 3;
				
				default:
			}
			break;
		
		case 37:
			switch (iParam1)
			{
				case 231:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 7:
					return 9;
				
				case 8:
					return 8;
				
				case 9:
					return 7;
				
				case 10:
					return 4;
				
				case 11:
					return 5;
				
				case 12:
					return 6;
				
				default:
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 1:
					return 10;
				
				case 2:
					return 10;
				
				case 3:
					return 8;
				
				case 4:
					return 10;
				
				case 5:
					return 10;
				
				case 6:
					return 10;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 13:
					return 10;
				
				case 14:
					return 8;
				
				case 15:
					return 8;
				
				case 16:
					return 8;
				
				case 17:
					return 10;
				
				case 18:
					return 9;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 19:
					return 5;
				
				case 20:
					return 8;
				
				case 21:
					return 4;
				
				case 22:
					return 0;
				
				case 23:
					return 10;
				
				case 24:
					return 1;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 25:
					return 20;
				
				case 26:
					return 15;
				
				case 27:
					return 13;
				
				case 28:
					return 16;
				
				case 29:
					return 14;
				
				case 30:
					return 14;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 74:
					return 7;
				
				case 75:
					return 5;
				
				case 76:
					return 5;
				
				case 77:
					return 4;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 64:
					return 1;
				
				case 67:
					return 1;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 38:
					return 6;
				
				case 39:
					return 6;
				
				case 40:
					return 7;
				
				case 41:
					return 6;
				
				default:
			}
			break;
	}
	return 0;
}

int func_702(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = func_708(iParam0, iParam1, iParam2, iParam4);
	if (!func_707(iParam0))
	{
		if (iParam3 != func_15())
		{
			iVar0 = (iVar0 + func_704(iParam0, func_21(iParam3) + 1, iParam3, -1, iParam2));
		}
	}
	if (func_703(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_703(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 5:
		case 7:
			return 1;
		
		default:
	}
	return 0;
}

int func_704(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	if (iParam4 > 0)
	{
		return iParam4;
	}
	switch (iParam0)
	{
		case 5:
		case 7:
		case 6:
		case 4:
		case 10:
			iVar0 = 1;
			break;
		
		case 8:
			iVar0 = 2;
			break;
		
		case 3:
		case 2:
			iVar0 = 4;
			break;
		
		default:
			if (func_707(iParam0))
			{
				iVar0 = 2;
			}
			else
			{
				iVar0 = 1;
			}
			break;
	}
	if (iVar0 > func_706(iParam0))
	{
		iVar0 = func_706(iParam0);
	}
	else if (iVar0 < func_705(iParam0))
	{
		iVar0 = func_705(iParam0);
	}
	return iVar0;
}

int func_705(int iParam0)
{
	return 1;
}

int func_706(int iParam0)
{
	return 4;
}

int func_707(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case 2:
		case 4:
		case 5:
		case 6:
		case 7:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_708(int iParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 5;
		
		case 3:
			iVar0 = 1;
			switch (iParam1)
			{
				case 26:
					return iVar0 + 1;
				
				case 34:
					return iVar0 + 1;
				
				default:
			}
			return iVar0;
			break;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		case 8:
			return 7;
		
		case 12:
			switch (iParam1)
			{
				case 125:
					return 6;
				
				default:
			}
			return 2;
			break;
		
		case 9:
			return 0;
		
		case 13:
			return 1;
		
		case 10:
			return 12;
	}
	return 0;
}

int func_709(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = func_720(iParam0, iParam1, iParam2, iParam4);
	if (!func_719(iParam0))
	{
		if (iParam3 != func_15())
		{
			iVar0 = (iVar0 + func_711(iParam0, func_21(iParam3) + 1, iParam3, -1, iParam2));
		}
	}
	if (func_710(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_710(int iParam0)
{
	switch (iParam0)
	{
		case 23:
			return 1;
		
		default:
	}
	return 0;
}

int func_711(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (iParam4 > 0)
	{
		return iParam4;
	}
	if (func_718(iParam0))
	{
		iVar1 = func_717(iParam3);
		switch (iParam0)
		{
			case 21:
				iVar0 = 1;
				break;
			
			case 23:
				switch (iVar1)
				{
					case 1:
						iVar0 = 1;
						break;
					
					case 2:
						iVar0 = 2;
						break;
					
					case 3:
						iVar0 = 2;
						break;
				}
				break;
			
			case 15:
				switch (iVar1)
				{
					case 1:
						iVar0 = 3;
						break;
					
					case 2:
						iVar0 = 6;
						break;
					
					case 3:
						iVar0 = 8;
						break;
				}
				break;
			
			case 20:
			case 24:
			case 22:
			case 16:
			case 17:
				switch (iVar1)
				{
					case 1:
						iVar0 = 1;
						break;
					
					case 2:
						iVar0 = 2;
						break;
					
					case 3:
						iVar0 = 3;
						break;
				}
				break;
			
			case 25:
				switch (iVar1)
				{
					case 1:
						iVar0 = 2;
						break;
					
					case 2:
						iVar0 = 3;
						break;
					
					case 3:
						iVar0 = 3;
						break;
				}
				break;
		}
		return iVar0;
	}
	else if (func_716(iParam0))
	{
		iVar0 = 1;
		return iVar0;
	}
	else
	{
		iVar0 = iParam1;
		if (iVar0 > func_715(iParam2))
		{
			iVar0 = func_715(iParam2);
		}
	}
	if (iVar0 > func_713(iParam0))
	{
		iVar0 = func_713(iParam0);
	}
	else if (iVar0 < func_712(iParam0))
	{
		iVar0 = func_712(iParam0);
	}
	return iVar0;
}

int func_712(int iParam0)
{
	switch (iParam0)
	{
		case 15:
			return 3;
		
		default:
	}
	return 1;
}

int func_713(int iParam0)
{
	if (!func_718(iParam0))
	{
		if (func_719(iParam0))
		{
			if (func_714(iParam0))
			{
				return 2;
			}
			return 3;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 21:
				return 1;
			
			case 23:
				return 2;
			
			case 15:
				return 9;
			
			default:
		}
		return 3;
	}
	return 4;
}

int func_714(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_715(int iParam0)
{
	if (iParam0 == func_15() || Global_1853131[iParam0 /*888*/].f_267.f_274 == 0)
	{
		return 50;
	}
	return (50 - Global_1853131[iParam0 /*888*/].f_267.f_274.f_3);
}

int func_716(int iParam0)
{
	switch (iParam0)
	{
		case 26:
			return 1;
		
		default:
	}
	return 0;
}

int func_717(int iParam0)
{
	if (iParam0 > 25)
	{
		return 3;
	}
	else if (iParam0 > 10)
	{
		return 2;
	}
	return 1;
}

int func_718(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			return 1;
		
		default:
	}
	return 0;
}

int func_719(int iParam0)
{
	if (func_718(iParam0) || func_716(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_720(int iParam0, int iParam1, int iParam2, var uParam3)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		
		case 2:
			return 12;
		
		case 11:
			return 1;
		
		case 5:
			return 10;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return 3;
				
				case 1:
					return 3;
				
				case 2:
					return 10;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 34:
					return 17;
				
				case 35:
					return 20;
				
				case 36:
					return 22;
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 6:
					return 9;
				
				case 7:
					return 0;
				
				case 8:
					return 5;
				
				default:
			}
			break;
		
		case 0:
			switch (iParam2)
			{
				case 1:
					return 7;
				
				case 2:
					return 14;
				
				case 3:
					return 14;
				
				case 4:
					return 14;
				
				default:
			}
			break;
		
		case 8:
			return 2;
		
		case 23:
			return (2 * iParam2);
		
		case 24:
			return (2 * iParam2);
		
		case 26:
			return 2;
	}
	return 0;
}

int func_721(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_726(iParam0, iParam1, iParam2, iParam3);
	if (!func_725(iParam0))
	{
		iVar0 = (iVar0 + func_723(iParam0, func_20() + 1, -1, iParam2));
	}
	if (func_722(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_722(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 12:
		case 6:
		case 14:
		case 15:
		case 16:
		case 17:
		case 7:
			return 1;
		
		default:
	}
	return 0;
}

int func_723(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam3 > 0)
	{
		return iParam3;
	}
	if (func_724(iParam0))
	{
		if (iParam2 <= Global_262145.f_21475)
		{
			iVar0 = 1;
			if (iParam0 == 15)
			{
				iVar0 = 2;
			}
		}
		else if (iParam2 <= Global_262145.f_21476)
		{
			iVar0 = 2;
			if (iParam0 == 18)
			{
				iVar0 = 1;
			}
		}
		else
		{
			iVar0 = 3;
			if (iParam0 == 18)
			{
				iVar0 = 2;
			}
			else if (iParam0 == 19 || iParam0 == 2)
			{
				iVar0 = 4;
			}
		}
	}
	else if (iParam0 == 8)
	{
		if (iParam1 < 4)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else if (iParam0 == 0 || iParam0 == 20)
	{
		iVar0 = 1;
	}
	else if (func_725(iParam0))
	{
		if (iParam1 < Global_262145.f_21435)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else
	{
		iVar0 = iParam1;
	}
	if (iVar0 == 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_724(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

int func_725(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 6:
		case 7:
		case 10:
		case 11:
		case 12:
		case 14:
		case 15:
		case 16:
		case 17:
		case 19:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

int func_726(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 3;
				
				case 1:
					return 6;
				
				case 2:
					return 8;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 3:
					return 0;
				
				case 4:
					return 0;
				
				case 5:
					return 0;
				
				case 6:
					return 0;
				
				case 7:
					return 0;
				
				case 8:
					return 0;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 9:
					return 0;
				
				case 10:
					return 0;
				
				case 11:
					return 0;
				
				case 12:
					return 0;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 14:
					return 10;
				
				case 15:
					return 12;
				
				case 13:
					return 2;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 16:
					return 0;
				
				case 17:
					return 0;
				
				case 18:
					return 0;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					return 15;
				
				case 20:
					return 15;
				
				case 21:
					return 11;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 22:
					return 10;
				
				case 23:
					return 7;
				
				case 24:
					return 6;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					return (6 + iParam2 * 2);
				
				case 26:
					return (7 + iParam2 * 2);
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					return 9;
				
				case 28:
					return 10;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 29:
					return 6;
				
				case 30:
					return 6;
				
				case 31:
					return 6;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 32:
					return 8;
				
				case 33:
					return 8;
				
				case 34:
					return 8;
				
				default:
			}
			break;
		
		case 12:
			return 0;
		
		case 13:
			switch (iParam1)
			{
				case 35:
					return 18;
				
				case 36:
					return 9;
				
				case 37:
					return 0;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam3)
			{
				case 0:
					return 9;
				
				case 1:
					return 16;
				
				case 2:
					return 6;
				
				case 3:
					return 3;
				
				case 4:
					return 9;
				
				case 5:
					return 6;
				
				case 6:
					return 6;
				
				case 7:
					return 3;
				
				case 8:
					return 3;
				
				case 9:
					return 3;
				
				case 10:
					return 0;
				
				case 11:
					return 9;
				
				case 12:
					return 3;
				
				default:
			}
			break;
		
		case 15:
			return iParam2;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 18:
			return 0;
		
		case 19:
			return 0;
		
		case 20:
			return 13;
	}
	return 0;
}

int func_727(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = func_728(iParam0, iParam1);
	if (iParam0 == 15)
	{
		iVar0++;
	}
	return iVar0;
}

int func_728(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 6:
			switch (iParam1)
			{
				case 18:
					return 9;
				
				case 19:
					return 7;
				
				case 20:
					return 8;
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					return 1;
				
				case 28:
					return 1;
				
				case 29:
					return 1;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 21:
					return 2;
				
				case 22:
					return 2;
				
				case 23:
					return 2;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 36:
					return 8;
				
				case 37:
					return 7;
				
				case 38:
					return 8;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 39:
					return 8;
				
				case 40:
					return 6;
				
				case 41:
					return 2;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					return 5;
				
				case 2:
					return 5;
				
				case 3:
					return 5;
				
				default:
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 42:
					return 1;
				
				case 43:
					return 1;
				
				case 44:
					return 1;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 45:
					return 12;
				
				case 46:
					return 12;
				
				case 47:
					return 12;
				
				default:
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 48:
					return 7;
				
				case 49:
					return 7;
				
				case 50:
					return 7;
				
				default:
			}
			break;
		
		case 12:
			return 3;
	}
	return 0;
}

int func_729(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 0;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return 0;
		
		case 8:
			return 0;
		
		case 9:
			return 0;
		
		case 10:
			return 0;
		
		case 11:
			return 0;
		
		case 12:
			return 3;
		
		case 13:
			return 0;
		
		case 14:
			return 0;
		
		case 15:
			return 0;
		
		case 16:
			return 1;
		
		case 17:
			return 3;
		
		case 19:
			return 0;
		
		case 18:
			return 0;
		
		default:
	}
	return 1;
}

int func_730(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 157:
			return 4;
		
		case 167:
			return func_772(iParam1);
		
		case 170:
			return 2;
		
		case 171:
			return 0;
		
		case 172:
			return 5;
		
		case 173:
			return 14;
		
		case 168:
			return 8;
		
		case 178:
		case 188:
			return func_768(iParam1, iParam3, iParam4);
		
		case 225:
		case 226:
			return func_764(iParam1, iParam3, iParam4, 0, 0);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_758(iParam1, iParam3, iParam4, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, 0, 0);
		
		case 233:
			return func_752(iParam1, iParam3, iParam4, PLAYER::INT_TO_PLAYERINDEX(bParam5), 0, 0, 0);
			return 6;
		
		case 190:
			return 18;
		
		case 191:
			return 0;
		
		case 192:
			return func_751(iParam1, iParam3);
		
		case 179:
			return 0;
		
		case 183:
			return 5;
		
		case 182:
			return 14;
		
		case 185:
			return 24;
		
		case 186:
			return 13;
		
		case 180:
			return 6;
		
		case 193:
			return 6;
		
		case 194:
			return 0;
		
		case 197:
			return 4;
		
		case 199:
			return 0;
		
		case 195:
			return 20;
		
		case 201:
			return 0;
		
		case 198:
			return 8;
		
		case 205:
			return 1;
		
		case 207:
			return 8;
		
		case 208:
			return 2;
		
		case 209:
			return 6;
		
		case 210:
			return 0;
		
		case 214:
			return 5;
		
		case 215:
			return 11;
		
		case 216:
			return 8;
		
		case 217:
			return 24;
		
		case 218:
			return 23;
		
		case 219:
			return 1;
		
		case 220:
			return 4;
		
		case 221:
			return 4;
		
		case 237:
		case 250:
			return func_750(iParam1, iParam3, iParam4);
		
		case 238:
		case 249:
			return func_749(iParam1);
		
		case 239:
			return 4;
		
		case 240:
			return 11;
		
		case 241:
			return 3;
		
		case 242:
			return 5;
		
		case 244:
			return 4;
		
		case 248:
			return 1;
		
		case 243:
			return func_743(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(bParam5), 0, -1, 0, 0);
		
		case 158:
			return func_737(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(bParam5), 0, -1, 0, 0);
		
		case 181:
			return func_731(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(bParam5), 0, -1, 0, 0);
		
		default:
	}
	return 0;
}

int func_731(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
	}
	if (!bParam5)
	{
		iVar0 = (iVar0 + func_736(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_735(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_734(func_21(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (func_733(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_732(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_732(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

bool func_733(int iParam0, int iParam1)
{
	return func_732(iParam0, iParam1) > 0;
}

int func_734(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 2:
			return 3;
		
		default:
	}
	return 1;
}

int func_735(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				default:
			}
			break;
	}
	return -1;
}

int func_736(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return 0;
		
		default:
	}
	return 0;
}

int func_737(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0++;
			break;
		
		case 24:
			iVar0++;
			break;
		
		case 10:
			switch (iParam1)
			{
				case 30:
					iVar0 += 4;
					break;
				
				case 31:
				case 32:
					iVar0 += 3;
					break;
			}
			break;
		
		case 33:
			switch (iParam1)
			{
				case 89:
					iVar0++;
					break;
				
				case 90:
					iVar0 += 2;
					break;
			}
			break;
		
		case 36:
			iVar0 += 2;
			break;
		
		case 37:
			iVar0 += 2;
			break;
		
		case 38:
			iVar0++;
			break;
		
		case 8:
			iVar0 += 7;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 38:
					iVar0 += 3;
					break;
				
				case 39:
					iVar0 += 3;
					break;
				
				case 40:
					iVar0 += 4;
					break;
			}
			break;
		
		case 16:
			iVar0 += 12;
			break;
		
		case 35:
			iVar0 += 4;
			break;
		
		case 4:
			iVar0 += 16;
			break;
		
		case 46:
			iVar0++;
			break;
		
		case 9:
			iVar0 += 7;
			break;
		
		case 14:
			iVar0 += 7;
			break;
		
		case 17:
			iVar0 += 7;
			break;
		
		case 47:
			iVar0 += 2;
			break;
		
		case 11:
			iVar0 += 3;
			break;
		
		case 18:
			iVar0 += 4;
			break;
		
		case 6:
			iVar0 += 11;
			break;
		
		case 48:
			iVar0 += 2;
			break;
		
		case 44:
			iVar0 += 2;
			break;
		
		case 21:
			iVar0 += 8;
			break;
		
		case 22:
			iVar0 += 3;
			break;
		
		case 7:
			iVar0 += 7;
			break;
		
		case 15:
			iVar0++;
			break;
		
		case 2:
			iVar0++;
			break;
		
		case 34:
			iVar0 += 5;
			break;
		
		case 27:
			iVar0 += 9;
			break;
		
		case 26:
			iVar0 += 3;
			break;
		
		case 31:
			iVar0++;
			break;
		
		case 3:
			iVar0 += 21;
			break;
		
		case 12:
			iVar0 += 20;
			break;
		
		case 41:
			iVar0 += 11;
			break;
		
		case 49:
			iVar0 += 3;
			break;
		
		case 29:
			iVar0++;
			break;
		
		case 5:
			iVar0 += 3;
			break;
		
		case 50:
			iVar0 += 4;
			break;
		
		case 23:
			iVar0 += 4;
			break;
		
		case 20:
			iVar0 += 3;
			break;
		
		case 32:
			iVar0 = iVar0;
			break;
		
		case 51:
			iVar0 += 4;
			break;
		
		case 52:
			iVar0 += 6;
			break;
		
		case 39:
			iVar0 += 2;
			break;
		
		case 40:
			iVar0++;
			break;
		
		case 25:
			iVar0 += 3;
			break;
	}
	if (!bParam5)
	{
		iVar0 = (iVar0 + func_742(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_741(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_740(func_21(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (func_739(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_738(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_738(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 13:
		case 18:
		case 34:
		case 27:
		case 49:
		case 48:
		case 6:
		case 50:
		case 7:
		case 16:
		case 47:
		case 5:
		case 25:
		case 26:
		case 22:
		case 11:
		case 17:
		case 14:
			return 2;
		
		default:
	}
	return 0;
}

bool func_739(int iParam0, int iParam1)
{
	return func_738(iParam0, iParam1) > 0;
}

int func_740(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	switch (iParam1)
	{
		case 43:
			return 3;
		
		case 17:
		case 18:
		case 15:
			return 2;
		
		case 12:
		case 13:
			if (iParam2 != func_15())
			{
				if (func_228(iParam2, 1))
				{
					Var0 = { func_685(iParam2) };
				}
			}
			else
			{
				return 4;
			}
			if (Var0.f_1 == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		
		case 53:
			if (iParam0 == 1)
			{
			}
			break;
	}
	return 1;
}

int func_741(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 96:
		case 97:
		case 98:
		case 108:
		case 109:
		case 110:
		case 118:
		case 119:
		case 120:
		case 105:
		case 106:
		case 107:
			return 0;
		
		case 66:
		case 67:
		case 68:
		case 30:
		case 31:
		case 32:
		case 121:
		case 122:
		case 123:
			return 1;
		
		case 93:
		case 94:
		case 95:
			return 3;
		
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		case 116:
		case 117:
			return 2;
		
		case 20:
			return 9;
		
		case 21:
			return 5;
		
		case 27:
		case 28:
		case 29:
			return 7;
		
		case 114:
		case 115:
			return iParam0;
		
		case 46:
		case 47:
		case 48:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 3;
				
				case 2:
					return 4;
				
				case 3:
					return 5;
				
				default:
			}
			break;
		
		case 38:
		case 39:
		case 40:
			switch (iParam0)
			{
				case 0:
					return 3;
				
				case 1:
					return 4;
				
				case 2:
					return 5;
				
				case 3:
					return 6;
				
				default:
			}
			break;
		
		case 41:
		case 42:
			switch (iParam0)
			{
				case 0:
					return 5;
				
				case 1:
					return 6;
				
				default:
			}
			break;
		
		case 49:
		case 50:
			switch (iParam0)
			{
				case 0:
					return 7;
				
				case 1:
					return 8;
				
				default:
			}
			break;
		
		case 33:
		case 34:
		case 35:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 3;
				
				default:
			}
			break;
		
		case 51:
		case 52:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 2;
				
				default:
			}
			break;
		
		case 43:
		case 44:
		case 45:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 2;
				
				default:
			}
			break;
		
		case 36:
		case 37:
			switch (iParam0)
			{
				case 0:
					return 20;
				
				case 1:
					return 21;
				
				case 2:
					return 22;
				
				case 3:
					return 23;
				
				default:
			}
			break;
		
		case 17:
		case 18:
		case 19:
			return 3;
		
		case 131:
			return 4;
	}
	return -1;
}

int func_742(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 53:
			return 0;
		
		default:
	}
	return 0;
}

int func_743(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 13:
			iVar0 += 4;
			break;
		
		case 1:
			iVar0 += 10;
			break;
		
		case 15:
			iVar0 += 21;
			break;
		
		case 14:
			iVar0 += 2;
			break;
		
		case 11:
			switch (iParam1)
			{
				case 35:
					iVar0 += 4;
					break;
				
				case 36:
					iVar0 += 5;
					break;
				
				case 37:
					iVar0 += 5;
					break;
			}
			break;
		
		case 5:
			iVar0 += 3;
			break;
		
		case 6:
			iVar0 += 2;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 0:
					iVar0 += 5;
					break;
				
				case 1:
					iVar0 += 5;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 31:
					iVar0 += 2;
					break;
				
				case 32:
					iVar0++;
					break;
				
				case 33:
					iVar0 += 2;
					break;
				
				case 34:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 += 3;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 28:
					switch (iParam4)
					{
						case 0:
							iVar0 += 3;
							break;
						
						case 1:
							iVar0 += 4;
							break;
						
						case 2:
							iVar0 += 3;
							break;
					}
					break;
				
				case 29:
					switch (iParam4)
					{
						case 0:
							iVar0 += 4;
							break;
						
						case 1:
							iVar0 += 3;
							break;
						
						case 2:
							iVar0 += 3;
							break;
					}
					break;
				
				case 30:
					switch (iParam4)
					{
						case 0:
							iVar0 += 3;
							break;
						
						case 1:
							iVar0 += 3;
							break;
						
						case 2:
							iVar0 += 3;
							break;
					}
					break;
			}
			break;
		
		case 3:
			iVar0 += 6;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 12:
					iVar0 += 7;
					break;
				
				case 13:
					iVar0 += 10;
					break;
				
				case 14:
					iVar0 += 8;
					break;
			}
			break;
		
		case 2:
			iVar0 += 3;
			break;
		
		case 8:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0++;
			break;
	}
	if (!bParam5)
	{
		if (func_689(iParam0))
		{
			iVar0 = (iVar0 + func_688(iParam0, iParam2));
		}
		iVar0 = (iVar0 + func_748(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_747(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_746(func_21(iParam2) + 1, iParam0));
		}
	}
	if (!bParam3)
	{
		if (func_745(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_744(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_744(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 4:
		case 9:
		case 8:
			return 2;
		
		default:
	}
	switch (iParam1)
	{
		case 37:
			return 2;
		
		default:
	}
	return 0;
}

bool func_745(int iParam0, int iParam1)
{
	return func_744(iParam0, iParam1) > 0;
}

int func_746(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 6:
			if (iParam0 == 1)
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_747(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 46:
		case 47:
		case 48:
			switch (iParam0)
			{
				case 0:
					return 20;
				
				default:
			}
			break;
		
		case 35:
		case 36:
		case 37:
			return 0;
		
		case 2:
		case 3:
		case 4:
		case 5:
			return 0;
		
		case 28:
		case 29:
		case 30:
			return 0;
		
		case 18:
		case 19:
		case 20:
		case 21:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 3;
				
				default:
			}
			break;
		
		case 31:
		case 32:
		case 33:
		case 34:
			return 0;
		
		case 38:
		case 39:
		case 40:
			return 0;
		
		case 12:
			return 6;
		
		case 13:
			return 9;
		
		case 14:
			return 7;
		
		case 22:
		case 23:
		case 24:
			return 0;
		
		case 25:
		case 26:
		case 27:
			return 0;
	}
	return -1;
}

int func_748(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 16:
			return 0;
		
		default:
	}
	return 0;
}

int func_749(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		
		case 1:
			return 4;
		
		case 2:
			return 6;
		
		case 3:
			return 1;
		
		case 4:
			return 3;
		
		case 5:
			return 4;
		
		default:
	}
	return 0;
}

int func_750(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 12:
			switch (iParam1)
			{
				case 80:
					iVar0++;
					break;
				
				case 81:
					iVar0++;
					break;
				
				case 82:
					iVar0++;
					break;
			}
			break;
		
		case 22:
			iVar0 += 4;
			break;
		
		case 18:
			iVar0 += 4;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 71:
				case 72:
				case 73:
					iVar0 += 3;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 77:
				case 78:
				case joaat("mpsv_lp0_31"):
					iVar0 += 2;
					break;
			}
			break;
		
		case 15:
			iVar0++;
			break;
		
		case 23:
			iVar0++;
			break;
		
		case 20:
			iVar0 += 4;
			break;
		
		case 17:
			iVar0++;
			break;
		
		case 19:
			iVar0++;
			break;
		
		case 16:
			iVar0++;
			break;
		
		case 3:
			iVar0 += 8;
			break;
		
		case 14:
			iVar0++;
			break;
		
		case 10:
			iVar0 += 8;
			break;
		
		case 4:
		case 24:
		case 2:
			iVar0++;
			break;
		
		case 1:
			iVar0 += 5;
			break;
		
		case 5:
			iVar0 += 3;
			break;
		
		case 0:
			iVar0 += 3;
			break;
	}
	if (func_693(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_751(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 20:
			iVar0 = iVar0;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 1:
					iVar0 += 7;
					break;
				
				case 2:
					iVar0 += 6;
					break;
				
				case 3:
					iVar0 += 4;
					break;
				
				case 4:
					iVar0 += 2;
					break;
				
				case 5:
					iVar0 += 3;
					break;
				
				case 6:
					iVar0 += 2;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 7:
					iVar0 += 4;
					break;
				
				case 8:
					iVar0 += 4;
					break;
				
				case 9:
					iVar0 += 2;
					break;
				
				case 10:
					iVar0 += 2;
					break;
				
				case 11:
					iVar0 += 2;
					break;
				
				case 12:
					iVar0 += 4;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 13:
					iVar0 += 2;
					break;
				
				case 14:
					iVar0 += 4;
					break;
				
				case 15:
					iVar0 += 6;
					break;
				
				case 16:
					iVar0 += 3;
					break;
				
				case 17:
					iVar0 += 3;
					break;
				
				case 18:
					iVar0 += 2;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 4;
					break;
				
				case 21:
					iVar0 += 6;
					break;
				
				case 22:
					iVar0 += 2;
					break;
				
				case 23:
					iVar0 += 4;
					break;
				
				case 24:
					iVar0 += 5;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 4;
					break;
				
				case 21:
					iVar0 += 6;
					break;
				
				case 22:
					iVar0 += 2;
					break;
				
				case 23:
					iVar0 += 4;
					break;
				
				case 24:
					iVar0 += 5;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 31:
					iVar0 += 5;
					break;
				
				case 32:
					iVar0 += 2;
					break;
				
				case 33:
					iVar0 += 3;
					break;
				
				case 34:
					iVar0 += 5;
					break;
				
				case 35:
					iVar0 += 5;
					break;
				
				case 36:
					iVar0 += 5;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 68:
					iVar0 = iVar0;
					break;
				
				case 69:
					iVar0 = iVar0;
					break;
				
				case 70:
					iVar0 = iVar0;
					break;
				
				case 71:
					iVar0 = iVar0;
					break;
				
				case 72:
					iVar0 = iVar0;
					break;
				
				case 73:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 74:
					iVar0++;
					break;
				
				case 75:
					iVar0++;
					break;
				
				case 76:
					iVar0++;
					break;
				
				case 77:
					iVar0++;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 78:
					iVar0 = iVar0;
					break;
				
				case joaat("mpsv_lp0_31"):
					iVar0 = iVar0;
					break;
				
				case 80:
					iVar0 = iVar0;
					break;
				
				case 81:
					iVar0 = iVar0;
					break;
				
				case 82:
					iVar0 = iVar0;
					break;
				
				case 83:
					iVar0 = iVar0;
					break;
				
				case 84:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 7:
			iVar0 += 4;
			break;
		
		case 8:
			switch (iParam1)
			{
				case 62:
					iVar0 += 6;
					break;
				
				case 63:
					iVar0 += 6;
					break;
				
				case 64:
					iVar0 += 6;
					break;
				
				case 65:
					iVar0 += 6;
					break;
				
				case 66:
					iVar0 += 6;
					break;
				
				case 67:
					iVar0 += 6;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 85:
					iVar0 = iVar0;
					break;
				
				case 86:
					iVar0 = iVar0;
					break;
				
				case 87:
					iVar0 = iVar0;
					break;
				
				case 88:
					iVar0 = iVar0;
					break;
				
				case 89:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 90:
					iVar0 += 2;
					break;
				
				case 91:
					iVar0 += 2;
					break;
				
				case 92:
					iVar0 += 2;
					break;
				
				case 93:
					iVar0 += 2;
					break;
				
				case 94:
					iVar0 += 2;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 37:
					iVar0 += 3;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 38:
					iVar0 += 4;
					break;
				
				case 39:
					iVar0 += 4;
					break;
				
				case 40:
					iVar0 += 4;
					break;
				
				case 41:
					iVar0 += 4;
					break;
			}
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		default:
			iVar0 = iVar0;
			break;
	}
	if ((func_700(iParam0) && iParam0 != 7) || iParam0 == 12)
	{
		iVar0 = (iVar0 + func_696(iParam0, func_20() + 1));
	}
	return iVar0;
}

int func_752(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 += 5;
			break;
		
		case 2:
			iVar0 += 2;
			break;
		
		case 3:
			iVar0++;
			break;
		
		case 4:
			iVar0 += 3;
			break;
		
		case 5:
			iVar0 += 2;
			break;
		
		case 8:
			iVar0 += 3;
			break;
		
		case 6:
			iVar0++;
			break;
		
		case 12:
			iVar0 += 2;
			break;
		
		case 7:
			iVar0 += 6;
			break;
		
		case 9:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 = iVar0;
			break;
		
		case 13:
			iVar0 += 2;
			break;
		
		case 10:
			iVar0 += 4;
			break;
	}
	if (!bParam5)
	{
		if (func_707(iParam0))
		{
			if (iParam3 != func_15())
			{
				iVar0 = (iVar0 + func_704(iParam0, func_21(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != func_15())
		{
			iVar0 = (iVar0 + func_757(iParam0, func_21(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (func_756(0, iParam1) != -1)
		{
			if (iParam3 != func_15())
			{
				iVar0 = (iVar0 + func_755(func_21(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_754(iParam0))
		{
			iVar0 = (iVar0 + func_753(iParam0));
		}
	}
	return iVar0;
}

int func_753(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 8:
		case 1:
		case 12:
		case 10:
		case 11:
		case 13:
			return 2;
		
		default:
	}
	return 0;
}

bool func_754(int iParam0)
{
	return func_753(iParam0) > 0;
}

int func_755(var uParam0, int iParam1)
{
	return 2;
}

int func_756(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 136:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
	}
	return -1;
}

int func_757(int iParam0, int iParam1)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 8:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 1:
			uVar0 = func_7(5328, -1, 0);
			if (BitTest(uVar0, 7))
			{
				if (iParam1 > 4)
				{
					return 4;
				}
				return iParam1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

int func_758(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 11:
			iVar0 += 9;
			break;
		
		case 1:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0 += 10;
			break;
		
		case 2:
			iVar0 += 12;
			break;
		
		case 4:
			iVar0 += 10;
			break;
		
		case 8:
			iVar0++;
			break;
		
		case 5:
			iVar0 += 2;
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					iVar0++;
					break;
				
				case 1:
					iVar0++;
					break;
				
				case 2:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 3:
					iVar0 += 4;
					break;
				
				case 4:
					iVar0 += 2;
					break;
				
				case 5:
					iVar0 += 5;
					break;
			}
			break;
		
		case 3:
			if (iParam2 >= 4)
			{
				iVar0 += 10;
			}
			else if (iParam2 == 3)
			{
				iVar0 += 8;
			}
			else if (iParam2 == 2)
			{
				iVar0 += 7;
			}
			else if (iParam2 == 1)
			{
				iVar0 += 6;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 34:
					iVar0++;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 6:
					iVar0++;
					break;
				
				case 7:
					iVar0 += 4;
					break;
				
				case 8:
					iVar0 += 2;
					break;
			}
			break;
		
		case 0:
			if (iParam2 >= 3)
			{
				iVar0 += 2;
			}
			else
			{
				iVar0++;
			}
			break;
		
		case 23:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 5;
			break;
		
		case 22:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 25:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 24:
			iVar0 = (iVar0 + (3 * iParam2));
			break;
		
		case 16:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 17:
			iVar0 += 5;
			break;
		
		case 26:
			iVar0++;
			break;
	}
	if (!bParam5)
	{
		if (func_719(iParam0))
		{
			if (iParam3 != func_15())
			{
				iVar0 = (iVar0 + func_711(iParam0, func_21(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != func_15())
		{
			iVar0 = (iVar0 + func_763(iParam0, func_21(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (func_762(0, iParam1) != -1)
		{
			if (iParam3 != func_15())
			{
				iVar0 = (iVar0 + func_761(func_21(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_760(iParam0))
		{
			iVar0 = (iVar0 + func_759(iParam0));
		}
	}
	return iVar0;
}

int func_759(int iParam0)
{
	switch (iParam0)
	{
		case 12:
		case 11:
		case 1:
		case 2:
		case 14:
		case 4:
		case 10:
		case 7:
		case 3:
		case 8:
		case 0:
		case 5:
			return 2;
		
		case 21:
		case 16:
		case 17:
			return 2;
		
		default:
	}
	return 0;
}

bool func_760(int iParam0)
{
	return func_759(iParam0) > 0;
}

int func_761(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			if (func_714(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_714(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 3:
			if (func_714(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 4:
			if (func_714(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 5:
			if (func_714(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 6:
			if (func_714(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 7:
			if (func_714(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 8:
			if (func_714(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_762(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 19:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 20:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 21:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 0:
					return 4;
				
				case 1:
					return 4;
				
				case 2:
					return 5;
				
				case 3:
					return 5;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 3:
					return 3;
				
				default:
			}
			break;
		
		case 48:
		case 49:
		case 50:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 3:
					return 3;
				
				default:
			}
			break;
		
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 28:
		case 29:
		case 30:
			switch (iParam0)
			{
				case 0:
					return 6;
				
				case 1:
					return 7;
				
				case 2:
					return 8;
				
				case 3:
					return 9;
				
				default:
			}
			break;
		
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 40:
		case 41:
		case 42:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 0;
				
				case 3:
					return 0;
				
				default:
			}
			break;
	}
	return -1;
}

int func_763(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			if (iParam1 > 4)
			{
				return 2;
			}
			return 1;
		
		case 14:
			if (iParam1 > 3)
			{
				return 2;
			}
			return 1;
		
		case 7:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 2:
		case 4:
		case 3:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 10:
			if (iParam1 > 4)
			{
				return 2;
			}
			return 1;
		
		case 9:
			return 1;
		
		case 0:
			if (iParam1 > 1)
			{
				return 2;
			}
			return 1;
		
		case 8:
			if (iParam1 > 3)
			{
				return 2;
			}
			return 1;
		
		case 5:
			if (iParam1 > 2)
			{
				return 2;
			}
			return 1;
		
		case 13:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 11:
			if (iParam1 > 2)
			{
				return 2;
			}
			return 1;
		
		default:
	}
	return SYSTEM::CEIL((IntToFloat(iParam1) / 2f));
}

int func_764(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 += 3;
					break;
				
				case 1:
					iVar0 += 3;
					break;
				
				case 2:
					iVar0 += 3;
					break;
			}
			break;
		
		case 2:
			if (iParam2 >= 4)
			{
				iVar0 = (iVar0 + iParam2 + 2);
			}
			else
			{
				iVar0 += 5;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 9:
					iVar0 += 3;
					break;
				
				case 10:
					iVar0 += 3;
					break;
				
				case 11:
					iVar0 += 2;
					break;
				
				case 12:
					iVar0 += 2;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 14:
					iVar0 += 2;
					break;
				
				case 15:
					iVar0 += 4;
					break;
				
				case 13:
					iVar0 += 2;
					break;
			}
			break;
		
		case 5:
			iVar0 += 4;
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 5;
					break;
				
				case 21:
					iVar0 += 5;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 22:
					iVar0 += 4;
					break;
				
				case 23:
					iVar0 += 3;
					break;
				
				case 24:
					iVar0 += 3;
					break;
			}
			if (func_723(iParam0, func_20() + 1, -1, iParam2) == 1)
			{
				iVar0++;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					iVar0 += 5;
					break;
				
				case 26:
					iVar0 += 5;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 2;
					break;
				
				case 28:
					iVar0 += 2;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 29:
					iVar0 += 4;
					break;
				
				case 30:
					iVar0 += 4;
					break;
				
				case 31:
					iVar0 += 4;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 32:
					iVar0 += 2;
					break;
				
				case 33:
					iVar0 += 2;
					break;
				
				case 34:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 = iVar0;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 35:
					iVar0 += 3;
					break;
				
				case 36:
					iVar0 += 3;
					break;
				
				case 37:
					iVar0 += 2;
					break;
			}
			break;
		
		case 14:
			iVar0 += 8;
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 5;
			break;
	}
	if (!bParam4)
	{
		if (func_725(iParam0))
		{
			iVar0 = (iVar0 + func_723(iParam0, func_20() + 1, -1, iParam2));
		}
		iVar0 = (iVar0 + func_767(iParam0, func_20() + 1));
	}
	if (!bParam3)
	{
		if (func_766(iParam0))
		{
			iVar0 = (iVar0 + func_765(iParam0));
		}
	}
	return iVar0;
}

int func_765(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 6:
		case 7:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 15:
		case 16:
		case 17:
		case 19:
		case 8:
			return 2;
		
		default:
	}
	return 0;
}

bool func_766(int iParam0)
{
	return func_765(iParam0) > 0;
}

int func_767(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			if (iParam1 == 1)
			{
				return 1;
			}
			return SYSTEM::FLOOR((IntToFloat(iParam1) / 1.5f));
		
		case 5:
			if (iParam1 == 1)
			{
				return 1;
			}
			return SYSTEM::FLOOR((IntToFloat(iParam1) / 2f));
		
		default:
	}
	return 0;
}

int func_768(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0 = iVar0;
			break;
		
		case 8:
			iVar0 = iVar0;
			break;
		
		case 5:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 += 3;
			break;
		
		case 13:
			iVar0 = iVar0;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					iVar0 += 2;
					break;
				
				case 2:
					iVar0 += 2;
					break;
				
				case 3:
					iVar0 += 2;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 18:
					iVar0 += 2;
					break;
				
				case 19:
					iVar0 += 2;
					break;
				
				case 20:
					iVar0 += 2;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 21:
					iVar0 += 7;
					break;
				
				case 22:
					iVar0 += 7;
					break;
				
				case 23:
					iVar0 += 7;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 = iVar0;
					break;
				
				case 28:
					iVar0 = iVar0;
					break;
				
				case 29:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 30:
					iVar0 += 2;
					break;
				
				case 31:
					iVar0 += 2;
					break;
				
				case 32:
					iVar0 += 2;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 36:
					iVar0 += 7;
					break;
				
				case 37:
					iVar0 += 7;
					break;
				
				case 38:
					iVar0 += 7;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 39:
					iVar0 += 4;
					break;
				
				case 40:
					iVar0 += 4;
					break;
				
				case 41:
					iVar0 += 6;
					break;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 42:
					iVar0 += 2;
					break;
				
				case 43:
					iVar0 += 2;
					break;
				
				case 44:
					iVar0 += 2;
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 45:
					iVar0 += 6;
					break;
				
				case 46:
					iVar0 += 6;
					break;
				
				case 47:
					iVar0 += 6;
					break;
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 48:
					iVar0 += 2;
					break;
				
				case 49:
					iVar0 += 2;
					break;
				
				case 50:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 += 11;
			break;
	}
	iVar0 = (iVar0 + func_771(iParam0, func_20() + 1, iParam2));
	iVar0 = (iVar0 + func_769(iParam0));
	return iVar0;
}

int func_769(int iParam0)
{
	if (func_770(iParam0))
	{
		return 2;
	}
	return 0;
}

int func_770(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 2:
		case 9:
		case 4:
		case 17:
		case 15:
		case 16:
		case 8:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_771(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	if (iVar0 == 0)
	{
		if (iParam0 == 8)
		{
			iVar0 = iParam2;
		}
		else
		{
			iVar0 = 1;
		}
	}
	if (iVar0 == 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_772(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 0;
		
		case 3:
			return 3;
		
		case 4:
			return 8;
		
		case 5:
			return 3;
		
		case 6:
			return 1;
		
		case 7:
			return 1;
		
		case 8:
			return 6;
		
		case 9:
			return 6;
		
		case 10:
			return 3;
		
		case 11:
			return 3;
		
		case 12:
			return 2;
		
		case 13:
			return 1;
		
		case 14:
			return 3;
		
		case 15:
			return 5;
		
		case 16:
			return 6;
		
		case 17:
			return 2;
		
		case 19:
			return 4;
		
		case 18:
			return 5;
		
		default:
	}
	return 2;
}

int func_773(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 167:
			return func_800(iParam1);
		
		case 168:
			return 12;
		
		case 170:
			return 4;
		
		case 171:
			return 0;
		
		case 172:
			return 0;
		
		case 173:
			return 4;
		
		case 178:
		case 188:
			return func_797(iParam1, iParam2, iParam3);
		
		case 225:
		case 226:
			return func_794(iParam1, iParam2, iParam3, 0);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_791(iParam1, iParam2, iParam3, 0);
		
		case 233:
			return func_788(iParam1, iParam2, iParam3, 0);
		
		case 190:
			return 20;
		
		case 191:
			return 4;
		
		case 192:
			return func_787(iParam1, iParam2);
		
		case 179:
			return 0;
		
		case 183:
			return 15;
		
		case 182:
			return 20;
		
		case 185:
			return 21;
		
		case 186:
			return 36;
		
		case 180:
			return 10;
		
		case 193:
			return 10;
		
		case 194:
			return 0;
		
		case 197:
			return 12;
		
		case 199:
			return 6;
		
		case 195:
			return 15;
		
		case 201:
			return 0;
		
		case 198:
			return 18;
		
		case 205:
			return 1;
		
		case 207:
			return 24;
		
		case 208:
			return 14;
		
		case 209:
			return 11;
		
		case 210:
			return 0;
		
		case 214:
			return 12;
		
		case 215:
			return 20;
		
		case 216:
			return 20;
		
		case 217:
			return func_786();
		
		case 218:
			return func_785();
		
		case 219:
			return 0;
		
		case 220:
			return 0;
		
		case 221:
			return 0;
		
		case 237:
		case 250:
			return func_784(iParam1, iParam2, iParam3);
		
		case 238:
		case 249:
			return func_783(iParam1, iParam2);
		
		case 239:
			return 6;
		
		case 240:
			return 11;
		
		case 241:
			return 14;
		
		case 242:
			return 14;
		
		case 244:
			return 9;
		
		case 248:
			return 10;
		
		case 243:
			return func_780(iParam1, iParam2, 0, -1);
		
		case 158:
			return func_777(iParam1, iParam2, 0, -1);
		
		case 181:
			return func_774(iParam1, iParam2, 0, -1);
		
		default:
	}
	return 0;
}

int func_774(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 2:
			iVar0 += 6;
			break;
	}
	if (!bParam2)
	{
		if (func_733(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_775(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_775(int iParam0, var uParam1)
{
	if (func_733(iParam0, uParam1))
	{
		return (func_732(iParam0, uParam1) + func_776(iParam0, uParam1));
	}
	return 0;
}

int func_776(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

int func_777(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 += 6;
			break;
		
		case 24:
			iVar0 += 2;
			break;
		
		case 10:
			switch (iParam1)
			{
				case 30:
					iVar0 += 12;
					break;
				
				case 31:
				case 32:
					iVar0 += 10;
					break;
			}
			break;
		
		case 33:
			switch (iParam1)
			{
				case 88:
					iVar0 += 10;
					break;
				
				case 89:
					iVar0 += 9;
					break;
				
				case 90:
					iVar0 += 10;
					break;
			}
			break;
		
		case 36:
			iVar0 += 9;
			break;
		
		case 43:
			iVar0 += 6;
			break;
		
		case 38:
			iVar0 += 6;
			break;
		
		case 40:
			iVar0 += 6;
			break;
		
		case 8:
			iVar0 += 16;
			break;
		
		case 16:
			iVar0 += 14;
			break;
		
		case 35:
			iVar0 += 13;
			break;
		
		case 4:
			iVar0 += 32;
			break;
		
		case 45:
			iVar0 += 2;
			break;
		
		case 46:
			iVar0 += 9;
			break;
		
		case 9:
			iVar0 += 15;
			break;
		
		case 14:
			iVar0 += 16;
			break;
		
		case 17:
			iVar0 += 14;
			break;
		
		case 47:
			iVar0 += 13;
			break;
		
		case 11:
			iVar0 += 11;
			break;
		
		case 18:
			iVar0 += 24;
			break;
		
		case 6:
			iVar0 += 14;
			break;
		
		case 48:
			iVar0 += 15;
			break;
		
		case 44:
			iVar0 += 9;
			break;
		
		case 21:
			iVar0 += 20;
			break;
		
		case 22:
			iVar0 += 14;
			break;
		
		case 7:
			iVar0 += 22;
			break;
		
		case 15:
			iVar0 += 10;
			break;
		
		case 2:
			iVar0 += 2;
			break;
		
		case 34:
			iVar0 += 18;
			break;
		
		case 27:
			iVar0 += 16;
			break;
		
		case 26:
			iVar0 += 10;
			break;
		
		case 23:
			iVar0 += 10;
			break;
		
		case 31:
			iVar0 += 20;
			break;
		
		case 3:
			iVar0 += 14;
			break;
		
		case 12:
			iVar0 += 7;
			break;
		
		case 41:
			iVar0 += 10;
			break;
		
		case 49:
			iVar0 += 30;
			break;
		
		case 19:
			iVar0 += 15;
			break;
		
		case 5:
			iVar0 += 7;
			break;
		
		case 30:
			iVar0++;
			break;
		
		case 13:
			iVar0 += 20;
			break;
		
		case 29:
			iVar0 += 9;
			break;
		
		case 50:
			iVar0 += 24;
			break;
		
		case 20:
			iVar0 += 26;
			break;
		
		case 32:
			iVar0 += 30;
			break;
		
		case 28:
			iVar0 += 3;
			break;
		
		case 42:
			iVar0 += 13;
			break;
		
		case 52:
			iVar0 += 12;
			break;
		
		case 39:
			iVar0 += 5;
			break;
		
		case 37:
			iVar0 += 6;
			break;
		
		case 25:
			iVar0 += 6;
			break;
		
		case 51:
			iVar0 += 20;
			break;
	}
	if (!bParam2)
	{
		if (func_739(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_778(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_778(int iParam0, int iParam1)
{
	if (func_739(iParam0, iParam1))
	{
		return (func_738(iParam0, iParam1) + func_779(iParam0, iParam1));
	}
	return 0;
}

int func_779(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 13:
		case 18:
		case 34:
		case 49:
		case 48:
		case 7:
		case 16:
		case 5:
		case 26:
		case 22:
		case 25:
		case 11:
		case 17:
		case 14:
			return 2;
		
		case 6:
		case 50:
		case 47:
			return 4;
		
		case 27:
			return 2;
		
		default:
	}
	return 0;
}

int func_780(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 13:
			iVar0 += 8;
			break;
		
		case 1:
			switch (iParam1)
			{
				case 2:
					iVar0 += 10;
					break;
				
				case 3:
					iVar0 += 10;
					break;
				
				case 4:
					iVar0 += 14;
					break;
				
				case 5:
					iVar0 += 10;
					break;
			}
			break;
		
		case 15:
			iVar0 += 20;
			break;
		
		case 14:
			iVar0 += 19;
			break;
		
		case 11:
			switch (iParam1)
			{
				case 35:
					iVar0 += 6;
					break;
				
				case 36:
					iVar0 += 7;
					break;
				
				case 37:
					iVar0 += 17;
					break;
			}
			break;
		
		case 6:
			iVar0 += 8;
			break;
		
		case 5:
			iVar0 += 11;
			break;
		
		case 0:
			iVar0 += 12;
			break;
		
		case 10:
			switch (iParam1)
			{
				case 31:
					iVar0++;
					break;
				
				case 32:
					iVar0 += 7;
					break;
				
				case 33:
					iVar0 += 2;
					break;
				
				case 34:
					iVar0++;
					break;
			}
			break;
		
		case 12:
			iVar0 += 30;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 28:
					iVar0 += 10;
					break;
				
				case 29:
					iVar0 += 8;
					break;
				
				case 30:
					iVar0 += 9;
					break;
			}
			break;
		
		case 3:
			iVar0 += 19;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 12:
					iVar0 += 12;
					break;
				
				case 13:
					iVar0 += 14;
					break;
				
				case 14:
					iVar0 += 12;
					break;
			}
			break;
		
		case 2:
			iVar0 += 12;
			break;
		
		case 8:
			iVar0 += 7;
			break;
		
		case 7:
			iVar0++;
			break;
	}
	if (!bParam2)
	{
		if (func_745(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_781(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_781(int iParam0, int iParam1)
{
	if (func_745(iParam0, iParam1))
	{
		return (func_744(iParam0, iParam1) + func_782(iParam0, iParam1));
	}
	return 0;
}

int func_782(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 4:
		case 9:
		case 8:
			return 2;
		
		default:
	}
	switch (iParam1)
	{
		case 37:
			return 2;
		
		default:
	}
	return 0;
}

int func_783(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 14;
		
		case 1:
			return 7;
		
		case 2:
			return 27;
		
		case 3:
			return 3;
		
		case 4:
			return 8;
		
		case 5:
			switch (iParam1)
			{
				case 0:
				case 2:
					return 11;
				
				case 1:
					return 9;
				
				default:
			}
			break;
	}
	return 0;
}

int func_784(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
					iVar0 += 19;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 77:
				case 78:
				case joaat("mpsv_lp0_31"):
					iVar0 += 2;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 71:
				case 72:
				case 73:
					iVar0 += 9;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 80:
				case 81:
				case 82:
					iVar0 += 3;
					break;
			}
			break;
		
		case 22:
			iVar0 += 8;
			break;
		
		case 15:
			iVar0++;
			break;
		
		case 23:
			iVar0 += 3;
			break;
		
		case 20:
			iVar0 += 12;
			break;
		
		case 18:
			iVar0 += 20;
			break;
		
		case 17:
			iVar0 += 9;
			break;
		
		case 19:
			iVar0++;
			break;
		
		case 3:
			iVar0 += 5;
			break;
		
		case 14:
			iVar0++;
			break;
		
		case 10:
			iVar0 += 17;
			break;
		
		case 4:
			iVar0 += 3;
			break;
		
		case 1:
			iVar0 += 30;
			break;
		
		case 2:
			iVar0 += 4;
			break;
		
		case 5:
			iVar0 += 16;
			break;
	}
	return iVar0;
}

int func_785()
{
	int iVar0;
	
	iVar0 = 32;
	return iVar0;
}

int func_786()
{
	int iVar0;
	
	iVar0 = 8;
	return iVar0;
}

int func_787(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 20:
			iVar0 += 2;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 1:
					iVar0 += 16;
					break;
				
				case 2:
					iVar0 += 14;
					break;
				
				case 3:
					iVar0 += 13;
					break;
				
				case 4:
					iVar0 += 12;
					break;
				
				case 5:
					iVar0 += 12;
					break;
				
				case 6:
					iVar0 += 12;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 7:
					iVar0 += 12;
					break;
				
				case 8:
					iVar0 += 12;
					break;
				
				case 9:
					iVar0 += 12;
					break;
				
				case 10:
					iVar0 += 12;
					break;
				
				case 11:
					iVar0 += 12;
					break;
				
				case 12:
					iVar0 += 12;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 13:
					iVar0 += 17;
					break;
				
				case 14:
					iVar0 += 12;
					break;
				
				case 15:
					iVar0 += 13;
					break;
				
				case 16:
					iVar0 += 14;
					break;
				
				case 17:
					iVar0 += 12;
					break;
				
				case 18:
					iVar0 += 14;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 19:
					iVar0 += 14;
					break;
				
				case 20:
					iVar0 += 14;
					break;
				
				case 21:
					iVar0 += 14;
					break;
				
				case 22:
					iVar0 += 14;
					break;
				
				case 23:
					iVar0 += 14;
					break;
				
				case 24:
					iVar0 += 14;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 25:
					iVar0 += 4;
					break;
				
				case 26:
					iVar0 += 4;
					break;
				
				case 27:
					iVar0 += 4;
					break;
				
				case 28:
					iVar0 += 4;
					break;
				
				case 29:
					iVar0 += 4;
					break;
				
				case 30:
					iVar0 += 4;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 31:
					iVar0 += 13;
					break;
				
				case 32:
					iVar0 += 13;
					break;
				
				case 33:
					iVar0 += 13;
					break;
				
				case 34:
					iVar0 += 13;
					break;
				
				case 35:
					iVar0 += 13;
					break;
				
				case 36:
					iVar0 += 13;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 68:
					iVar0 = iVar0;
					break;
				
				case 69:
					iVar0 = iVar0;
					break;
				
				case 70:
					iVar0 = iVar0;
					break;
				
				case 71:
					iVar0 = iVar0;
					break;
				
				case 72:
					iVar0 = iVar0;
					break;
				
				case 73:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 74:
					iVar0 += 10;
					break;
				
				case 75:
					iVar0 += 10;
					break;
				
				case 76:
					iVar0 += 10;
					break;
				
				case 77:
					iVar0 += 10;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 78:
					iVar0 += 3;
					break;
				
				case joaat("mpsv_lp0_31"):
					iVar0 += 3;
					break;
				
				case 80:
					iVar0 += 3;
					break;
				
				case 81:
					iVar0 += 3;
					break;
				
				case 82:
					iVar0 += 5;
					break;
				
				case 83:
					iVar0 += 3;
					break;
				
				case 84:
					iVar0 += 3;
					break;
			}
			break;
		
		case 7:
			iVar0 += 8;
			break;
		
		case 8:
			switch (iParam1)
			{
				case 62:
					iVar0 += 8;
					break;
				
				case 63:
					iVar0 += 8;
					break;
				
				case 64:
					iVar0 += 8;
					break;
				
				case 65:
					iVar0 += 8;
					break;
				
				case 66:
					iVar0 += 8;
					break;
				
				case 67:
					iVar0 += 8;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 85:
					iVar0 += 3;
					break;
				
				case 86:
					iVar0 += 3;
					break;
				
				case 87:
					iVar0 += 3;
					break;
				
				case 88:
					iVar0 += 3;
					break;
				
				case 89:
					iVar0 += 3;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 90:
					iVar0 += 2;
					break;
				
				case 91:
					iVar0 += 2;
					break;
				
				case 92:
					iVar0 += 2;
					break;
				
				case 93:
					iVar0 += 2;
					break;
				
				case 94:
					iVar0 += 2;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 37:
					iVar0 += 18;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 38:
					iVar0 += 8;
					break;
				
				case 39:
					iVar0 += 8;
					break;
				
				case 40:
					iVar0 += 8;
					break;
				
				case 41:
					iVar0 += 8;
					break;
			}
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		default:
			iVar0 = iVar0;
			break;
	}
	if (iParam0 == 12 || iParam0 == 9)
	{
		iVar0 = (iVar0 + func_696(iParam0, func_20() + 1));
	}
	return iVar0;
}

int func_788(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 += 14;
			break;
		
		case 2:
			iVar0 += 12;
			break;
		
		case 3:
			iVar0 += 23;
			break;
		
		case 4:
			iVar0 += 20;
			break;
		
		case 5:
			iVar0 += 5;
			break;
		
		case 8:
			iVar0 += 11;
			break;
		
		case 6:
			iVar0 += 7;
			break;
		
		case 12:
			iVar0 += 8;
			break;
		
		case 7:
			iVar0 += 18;
			break;
		
		case 9:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 += 12;
			break;
		
		case 13:
			iVar0++;
			break;
		
		case 10:
			iVar0 += 16;
			break;
	}
	if (!bParam3)
	{
		if (func_754(iParam0))
		{
			iVar0 = (iVar0 + func_789(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_789(int iParam0, var uParam1)
{
	if (func_754(iParam0))
	{
		return (func_753(iParam0) + func_790(iParam0, uParam1));
	}
	return 0;
}

int func_790(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		
		case 2:
		case 12:
		case 1:
		case 11:
		case 10:
			return 2;
		
		case 8:
			return 4;
		
		default:
	}
	return 0;
}

int func_791(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 12:
			iVar0 += 16;
			break;
		
		case 11:
			iVar0 += 21;
			break;
		
		case 1:
			iVar0 += 4;
			break;
		
		case 14:
			iVar0 += 15;
			break;
		
		case 7:
			iVar0 += 10;
			break;
		
		case 2:
			iVar0 += 15;
			break;
		
		case 4:
			iVar0 += 9;
			break;
		
		case 10:
			iVar0 += 20;
			break;
		
		case 3:
			iVar0 += 7;
			break;
		
		case 8:
			iVar0 += 2;
			break;
		
		case 5:
			iVar0 += 10;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 7:
					iVar0 += 17;
					break;
				
				default:
					iVar0 += 16;
					break;
			}
			break;
		
		case 0:
			if (iParam2 >= 3)
			{
				iVar0 += 2;
			}
			else
			{
				iVar0++;
			}
			break;
		
		case 23:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 10;
			break;
		
		case 22:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 25:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 24:
			iVar0 = (iVar0 + (3 * iParam2));
			break;
		
		case 26:
			iVar0 += 2;
			break;
	}
	if (!bParam3)
	{
		if (func_760(iParam0))
		{
			iVar0 = (iVar0 + func_792(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_792(int iParam0, int iParam1)
{
	if (func_760(iParam0))
	{
		return (func_759(iParam0) + func_793(iParam0, iParam1));
	}
	return 0;
}

int func_793(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
		case 14:
		case 2:
		case 10:
		case 5:
			return 2;
		
		case 1:
		case 0:
			return 4;
		
		case 4:
			return 1;
		
		case 12:
			switch (iParam1)
			{
				case 2:
					return 2;
				
				default:
			}
			break;
		
		case 21:
			return 2;
		
		case 17:
			return 4;
	}
	return 0;
}

int func_794(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 += 18;
					break;
				
				case 1:
					iVar0 += 18;
					break;
				
				case 2:
					iVar0 += 18;
					break;
			}
			break;
		
		case 2:
			if (iParam2 >= 4)
			{
				iVar0 = (iVar0 + iParam2 + 2);
			}
			else
			{
				iVar0 += 5;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 9:
					iVar0 += 4;
					break;
				
				case 10:
					iVar0 += 4;
					break;
				
				case 11:
					iVar0 += 4;
					break;
				
				case 12:
					iVar0 += 4;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 13:
					iVar0 += 20;
					break;
				
				case 14:
					iVar0 += 20;
					break;
				
				case 15:
					iVar0 += 20;
					break;
			}
			break;
		
		case 5:
			iVar0 += 12;
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 24;
					break;
				
				case 20:
					iVar0 += 24;
					break;
				
				case 21:
					iVar0 += 24;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 22:
					iVar0 += 12;
					break;
				
				case 23:
					iVar0 += 12;
					break;
				
				case 24:
					iVar0 += 12;
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					iVar0 += 16;
					break;
				
				case 26:
					iVar0 += 15;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 25;
					break;
				
				case 28:
					iVar0 += 25;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 29:
					iVar0 += 15;
					break;
				
				case 30:
					iVar0 += 15;
					break;
				
				case 31:
					iVar0 += 15;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 32:
					iVar0 += 12;
					break;
				
				case 33:
					iVar0 += 12;
					break;
				
				case 34:
					iVar0 += 12;
					break;
			}
			break;
		
		case 12:
			iVar0 = iVar0;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 35:
					iVar0 += 22;
					break;
				
				case 36:
					iVar0 += 22;
					break;
				
				case 37:
					iVar0 += 22;
					break;
			}
			break;
		
		case 14:
			iVar0 += 16;
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		case 20:
			iVar0 += 22;
			break;
	}
	if (!bParam3)
	{
		if (func_766(iParam0))
		{
			iVar0 = (iVar0 + func_795(iParam0));
		}
	}
	return iVar0;
}

int func_795(int iParam0)
{
	if (func_766(iParam0))
	{
		return (func_765(iParam0) + func_796(iParam0));
	}
	return 0;
}

int func_796(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 12:
		case 13:
		case 17:
		case 11:
			return 2;
		
		case 15:
		case 16:
		case 19:
			return 3;
		
		case 10:
		case 8:
		case 5:
			return 4;
		
		default:
	}
	return 0;
}

int func_797(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 += 5;
			break;
		
		case 7:
			iVar0 += 6;
			break;
		
		case 8:
			iVar0 = iVar0;
			break;
		
		case 5:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 += 6;
			break;
		
		case 2:
			iVar0 += 10;
			break;
		
		case 12:
			iVar0 += 11;
			break;
		
		case 13:
			iVar0 += 10;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					iVar0 += 12;
					break;
				
				case 2:
					iVar0 += 12;
					break;
				
				case 3:
					iVar0 += 12;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 18:
					iVar0 += 8;
					break;
				
				case 19:
					iVar0 += 8;
					break;
				
				case 20:
					iVar0 += 8;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 21:
					iVar0 += 14;
					break;
				
				case 22:
					iVar0 += 14;
					break;
				
				case 23:
					iVar0 += 14;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 14;
					break;
				
				case 28:
					iVar0 += 14;
					break;
				
				case 29:
					iVar0 += 14;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 30:
					iVar0 += 3;
					break;
				
				case 31:
					iVar0 += 3;
					break;
				
				case 32:
					iVar0 += 3;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 36:
					iVar0 += 18;
					break;
				
				case 37:
					iVar0 += 18;
					break;
				
				case 38:
					iVar0 += 18;
					break;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 42:
					iVar0 += 10;
					break;
				
				case 43:
					iVar0 += 10;
					break;
				
				case 44:
					iVar0 += 10;
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 45:
					iVar0 += 17;
					break;
				
				case 46:
					iVar0 += 17;
					break;
				
				case 47:
					iVar0 += 17;
					break;
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 48:
					iVar0 += 11;
					break;
				
				case 49:
					iVar0 += 11;
					break;
				
				case 50:
					iVar0 += 11;
					break;
			}
			break;
	}
	iVar0 = (iVar0 + func_798(iParam0));
	return iVar0;
}

int func_798(int iParam0)
{
	if (func_770(iParam0))
	{
		if (func_799(iParam0))
		{
			return 4;
		}
		return 2;
	}
	return 0;
}

int func_799(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 2:
		case 9:
		case 4:
		case 17:
		case 15:
		case 16:
		case 8:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_800(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 0;
		
		case 3:
			return 5;
		
		case 4:
			return 12;
		
		case 5:
			return 4;
		
		case 6:
			return 4;
		
		case 7:
			return 2;
		
		case 8:
			return 12;
		
		case 9:
			return 12;
		
		case 10:
			return 9;
		
		case 11:
			return 8;
		
		case 12:
			return 7;
		
		case 13:
			return 5;
		
		case 14:
			return 12;
		
		case 15:
			return 13;
		
		case 16:
			return 5;
		
		case 17:
			return 15;
		
		case 19:
			return 4;
		
		case 18:
			return 11;
		
		default:
	}
	return 8;
}

int func_801(int iParam0, int iParam1)
{
	if (Global_1893551[iParam0 /*599*/].f_10.f_32 != -1 || (iParam1 && Global_1893551[iParam0 /*599*/].f_10.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

int func_802(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			return 0;
		
		case 40:
			return 7;
		
		case 42:
			return 5;
		
		case 44:
			return 3;
		
		case 45:
			return 4;
		
		case 46:
			return 1;
		
		case 48:
			return 2;
		
		case 47:
			return 6;
		
		case 49:
			return 6;
		
		case 50:
			return 8;
		
		case 53:
			return 9;
		
		case 51:
			return func_382(uParam0->f_1084);
		
		case 52:
			return 12;
		
		case 54:
			return 13;
		
		case 55:
			return 13;
		
		case 56:
			return 13;
		
		case 57:
			return 13;
		
		case 58:
			return 13;
		
		case 59:
			return 13;
		
		case 60:
			return 14;
		
		case 61:
			return 15;
		
		case 62:
			return 16;
		
		default:
	}
	return -1;
}

void func_803(var uParam0)
{
	func_611(uParam0->f_711, "H4P_OVR_GAT_T", func_804(uParam0), func_618(), func_612());
	uParam0->f_707 = 1;
	iLocal_1432 = 1;
}

char* func_804(var uParam0)
{
	if (func_805(uParam0->f_1084))
	{
		return "H4P_OVR_GAT_2";
	}
	return "H4P_OVR_GAT_M";
}

int func_805(int iParam0)
{
	if (((func_812(iParam0) && func_811(iParam0)) && func_810(iParam0)) && func_806(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_806(int iParam0)
{
	if (iParam0 != -1)
	{
		if (((((func_809(iParam0) && func_808(iParam0)) && func_807(iParam0)) && func_383(iParam0)) && func_404(iParam0)) && func_402(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_807(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_385(iParam0, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_808(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_391(iParam0, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_809(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_397(iParam0, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_810(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!func_375(iParam0, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_811(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_379(iParam0, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_812(int iParam0)
{
	if (iParam0 != -1)
	{
		if ((((func_813(iParam0, 0) && func_813(iParam0, 1)) && func_813(iParam0, 2)) && func_813(iParam0, 3)) && func_813(iParam0, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_813(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 0:
				if (Global_1975428[iParam0 /*53*/].f_5.f_10.f_1 == Global_1975428[iParam0 /*53*/].f_5.f_10.f_5 && Global_1975428[iParam0 /*53*/].f_5.f_10.f_9 == Global_1975428[iParam0 /*53*/].f_5.f_10.f_13)
				{
					return 1;
				}
				break;
			
			case 1:
				if (Global_1975428[iParam0 /*53*/].f_5.f_10.f_2 == Global_1975428[iParam0 /*53*/].f_5.f_10.f_6 && Global_1975428[iParam0 /*53*/].f_5.f_10.f_10 == Global_1975428[iParam0 /*53*/].f_5.f_10.f_14)
				{
					return 1;
				}
				break;
			
			case 2:
				if (Global_1975428[iParam0 /*53*/].f_5.f_10.f_3 == Global_1975428[iParam0 /*53*/].f_5.f_10.f_7 && Global_1975428[iParam0 /*53*/].f_5.f_10.f_11 == Global_1975428[iParam0 /*53*/].f_5.f_10.f_15)
				{
					return 1;
				}
				break;
			
			case 3:
				if (Global_1975428[iParam0 /*53*/].f_5.f_10.f_4 == Global_1975428[iParam0 /*53*/].f_5.f_10.f_8 && Global_1975428[iParam0 /*53*/].f_5.f_10.f_12 == Global_1975428[iParam0 /*53*/].f_5.f_10.f_16)
				{
					return 1;
				}
				break;
			
			case 4:
				if (Global_1975428[iParam0 /*53*/].f_5.f_10.f_17 == Global_1975428[iParam0 /*53*/].f_5.f_10.f_18)
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

int func_814(int iParam0)
{
	if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_1410))
	{
		*iParam0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_1410);
		return 1;
	}
	*iParam0 = -1;
	return 0;
}

void func_815(var uParam0)
{
	int iVar0;
	
	if (!iLocal_1411)
	{
		return;
	}
	iVar0 = -1;
	if (func_818(&iVar0))
	{
		uParam0->f_806.f_8 = uParam0->f_806;
		uParam0->f_806 = iVar0;
		Global_1975428[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*53*/].f_4 = iVar0;
		uParam0->f_707 = 1;
		if (func_420(uParam0->f_806) && uParam0->f_1098)
		{
			func_817(uParam0);
			uParam0->f_1098 = 0;
		}
		func_816(uParam0, uParam0->f_806);
		iLocal_1411 = 0;
		iLocal_1415 = 0;
	}
}

void func_816(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 36:
			if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				func_605(uParam0, 19);
			}
			break;
		
		case 63:
			if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				func_605(uParam0, 37);
			}
			break;
		
		case 1000:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				func_605(uParam0, 52);
			}
			else
			{
				func_605(uParam0, 50);
			}
			break;
		
		case 105:
		case 106:
		case 107:
		case 108:
			func_605(uParam0, 51);
			break;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		switch (iParam1)
		{
			case 71:
			case 72:
			case 73:
			case 74:
			case 75:
			case 76:
				func_605(uParam0, 40);
				break;
			
			case 77:
			case 78:
			case joaat("mpsv_lp0_31"):
			case 80:
			case 81:
			case 82:
			case 83:
			case 84:
				func_605(uParam0, 38);
				break;
			
			case 85:
			case 86:
				func_605(uParam0, 42);
				break;
			
			case 87:
			case 88:
			case 89:
			case 90:
				func_605(uParam0, 39);
				break;
			
			case 91:
			case 92:
				func_605(uParam0, 41);
				break;
			}
	}
}

void func_817(var uParam0)
{
	func_611(uParam0->f_711, "H4P_OVR_CRE_T", "H4P_OVR_CRE_M", func_613(), "");
	uParam0->f_707 = 1;
	uParam0->f_806 = 1002;
	iLocal_1432 = -4;
}

int func_818(int iParam0)
{
	if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_1409))
	{
		*iParam0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_1409);
		return 1;
	}
	*iParam0 = -1;
	return 0;
}

void func_819(var uParam0)
{
	if (iLocal_1424 && !func_841(uParam0))
	{
		iLocal_1424 = 0;
		return;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		func_839(uParam0);
		func_834(uParam0);
		func_831(uParam0);
	}
	func_830(uParam0);
	func_826(uParam0);
	func_824(uParam0);
	func_821(uParam0);
	func_820(uParam0);
	iLocal_1424 = 1;
}

void func_820(var uParam0)
{
	if (func_841(uParam0))
	{
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(3);
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(4);
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(13);
	}
}

void func_821(var uParam0)
{
	bool bVar0;
	bool bVar1;
	
	if (uParam0->f_1084 == PLAYER::PLAYER_ID())
	{
		return;
	}
	if (iLocal_1430 != Global_1975428[uParam0->f_1084 /*53*/].f_5.f_45)
	{
		bVar0 = false;
		while (bVar0 < 6)
		{
			if (BitTest(Global_1975428[uParam0->f_1084 /*53*/].f_5.f_45, bVar0) && !BitTest(iLocal_1430, bVar0))
			{
				MISC::SET_BIT(&iLocal_1430, bVar0);
				func_561(uParam0->f_711, func_823(bVar0), 1);
			}
			bVar0++;
		}
	}
	if (bLocal_1419 != func_411(uParam0->f_1084))
	{
		bLocal_1419 = func_411(uParam0->f_1084);
		func_596(uParam0->f_711, 59, 1);
	}
	if (bLocal_1420 != Global_1975428[uParam0->f_1084 /*53*/].f_5.f_44)
	{
		bLocal_1420 = Global_1975428[uParam0->f_1084 /*53*/].f_5.f_44;
		func_561(uParam0->f_711, 98, bLocal_1420);
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return;
	}
	if (uParam0->f_806 != Global_1975428[uParam0->f_1084 /*53*/].f_4)
	{
		uParam0->f_806 = Global_1975428[uParam0->f_1084 /*53*/].f_4;
		bVar1 = uParam0->f_806;
		if (bVar1 != 1002 && bVar1 != 1001)
		{
			func_822(uParam0->f_711, bVar1);
		}
	}
	if (iLocal_1415 != Global_1975428[uParam0->f_1084 /*53*/].f_51)
	{
		iLocal_1415 = Global_1975428[uParam0->f_1084 /*53*/].f_51;
	}
	if (bLocal_1417 != Global_1975428[uParam0->f_1084 /*53*/].f_52)
	{
		bLocal_1417 = Global_1975428[uParam0->f_1084 /*53*/].f_52;
	}
}

void func_822(int iParam0, bool bParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_CURRENT_SELECTION");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_823(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return 99;
		
		case 1:
			return 101;
		
		case 2:
			return 102;
		
		case 3:
			return 103;
		
		case 4:
			return 100;
		
		case 5:
			return 104;
		
		default:
	}
	return 0;
}

void func_824(var uParam0)
{
	if (bLocal_1417)
	{
		if (!iLocal_1418)
		{
			func_825(uParam0->f_711, 1);
			iLocal_1418 = 1;
		}
	}
	else if (iLocal_1418)
	{
		func_825(uParam0->f_711, 0);
		iLocal_1418 = 0;
	}
	if (uParam0->f_1084 == PLAYER::PLAYER_ID() && Global_1975428[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*53*/].f_52 != iLocal_1418)
	{
		Global_1975428[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*53*/].f_52 = iLocal_1418;
	}
}

void func_825(int iParam0, bool bParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_MAP_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_826(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0->f_806;
	if (iLocal_1415)
	{
		if (!iLocal_1416)
		{
			if (func_359(uParam0, iVar0))
			{
				func_829(uParam0->f_711, func_360(uParam0, iVar0));
				func_828(uParam0, iVar0);
				iLocal_1416 = 1;
			}
			else
			{
				iLocal_1415 = 0;
			}
		}
	}
	else if (iLocal_1416)
	{
		func_827(uParam0->f_711);
		iLocal_1416 = 0;
	}
	if (uParam0->f_1084 == PLAYER::PLAYER_ID() && Global_1975428[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*53*/].f_51 != iLocal_1416)
	{
		Global_1975428[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*53*/].f_51 = iLocal_1416;
	}
}

void func_827(int iParam0)
{
	GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(iParam0, "HIDE_TIP_TEXT");
}

void func_828(var uParam0, int iParam1)
{
	if (func_366(uParam0, iParam1))
	{
		return;
	}
	switch (iParam1)
	{
		case 1:
			if (func_17(uParam0->f_1084, 0))
			{
				func_605(uParam0, 5);
			}
			break;
		
		case 2:
			func_605(uParam0, 8);
			break;
		
		case 3:
			func_605(uParam0, 6);
			break;
		
		case 4:
			func_605(uParam0, 7);
			break;
		
		case 5:
			func_605(uParam0, 10);
			break;
		
		case 6:
			func_605(uParam0, 9);
			break;
		
		case 30:
			func_605(uParam0, 18);
			break;
		
		case 31:
			func_605(uParam0, 17);
			break;
		
		case 32:
			func_605(uParam0, 11);
			break;
		
		case 33:
			func_605(uParam0, 12);
			break;
		
		case 34:
			if (func_383(uParam0->f_1084))
			{
				func_605(uParam0, 14);
			}
			else
			{
				func_605(uParam0, 13);
			}
			break;
		
		case 35:
			if (func_384(uParam0->f_1084))
			{
				func_605(uParam0, 16);
			}
			else
			{
				func_605(uParam0, 15);
			}
			break;
		
		case 40:
			func_605(uParam0, 20);
			break;
		
		case 44:
			func_605(uParam0, 22);
			break;
		
		case 45:
			func_605(uParam0, 23);
			break;
		
		case 42:
			func_605(uParam0, 24);
			break;
		
		case 46:
		case 47:
			func_605(uParam0, 25);
			break;
		
		case 48:
		case 49:
			func_605(uParam0, 21);
			break;
		
		case 50:
			func_605(uParam0, 26);
			break;
		
		case 53:
			func_605(uParam0, 27);
			break;
		
		case 51:
			if (func_382(uParam0->f_1084) == 11)
			{
				if (!func_358(uParam0->f_1084))
				{
					func_605(uParam0, 28);
				}
				else
				{
					func_605(uParam0, 29);
				}
			}
			else
			{
				func_605(uParam0, 30);
			}
			break;
		
		case 52:
			func_605(uParam0, 31);
			break;
		
		case 38:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			func_605(uParam0, 32);
			break;
		
		case 59:
			func_605(uParam0, 33);
			break;
		
		case 60:
			func_605(uParam0, 34);
			break;
		
		case 61:
			func_605(uParam0, 35);
			break;
		
		case 62:
			func_605(uParam0, 36);
			break;
		
		case 64:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				func_605(uParam0, 38);
			}
			break;
		
		case 66:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				func_605(uParam0, 39);
			}
			break;
		
		case 63:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				func_605(uParam0, 40);
			}
			break;
		
		case 67:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				func_605(uParam0, 41);
			}
			break;
		
		case 65:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				func_605(uParam0, 42);
			}
			break;
		
		case 69:
			func_605(uParam0, 43);
			break;
		
		case 99:
			func_605(uParam0, 44);
			break;
		
		case 100:
			func_605(uParam0, 45);
			break;
		
		case 101:
			func_605(uParam0, 46);
			break;
		
		case 102:
			func_605(uParam0, 47);
			break;
		
		case 103:
			func_605(uParam0, 48);
			break;
		
		case 104:
			func_605(uParam0, 49);
			break;
	}
}

void func_829(int iParam0, char* sParam1)
{
	GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_STRING(iParam0, "SHOW_TIP_TEXT", sParam1, 0, 0, 0, 0);
}

void func_830(var uParam0)
{
	if (func_546(uParam0))
	{
		if (!iLocal_1426)
		{
			func_607(uParam0->f_711, 1, func_608(uParam0));
			iLocal_1426 = 1;
		}
	}
	else if (iLocal_1426)
	{
		func_607(uParam0->f_711, 0, func_608(uParam0));
		iLocal_1426 = 0;
	}
}

void func_831(var uParam0)
{
	if (func_833(uParam0))
	{
		if (!iLocal_1425)
		{
			func_832(uParam0->f_711, 1);
			iLocal_1425 = 1;
		}
	}
	else if (iLocal_1425)
	{
		func_832(uParam0->f_711, 0);
		iLocal_1425 = 0;
	}
}

void func_832(int iParam0, bool bParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_CREW_CUTS_VISIBLE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_833(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0->f_806;
	if (func_547(iVar0) != 2)
	{
		return 0;
	}
	return NETWORK::NETWORK_IS_ACTIVITY_SESSION();
}

void func_834(var uParam0)
{
	int iVar0;
	
	if (!iLocal_1427)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_823.f_49)
	{
		if (uParam0->f_823.f_51[iVar0] != -1)
		{
			func_835(uParam0->f_711, func_838(iVar0), func_837(uParam0, iVar0), uParam0->f_823.f_56[iVar0], uParam0->f_823.f_239[iVar0], func_836(uParam0->f_823.f_67[iVar0]));
		}
		iVar0++;
	}
	iLocal_1427 = 0;
}

void func_835(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_CREW_MEMBER");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bParam1);
	func_573(PLAYER::GET_PLAYER_NAME(iParam2));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam5);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_836(int iParam0)
{
	return iParam0 == 1;
}

int func_837(var uParam0, int iParam1)
{
	if (iParam1 != -1 && uParam0->f_823.f_51[iParam1] != -1)
	{
		return PLAYER::INT_TO_PLAYERINDEX(uParam0->f_823.f_51[iParam1]);
	}
	return func_15();
}

int func_838(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 105;
		
		case 1:
			return 106;
		
		case 2:
			return 107;
		
		case 3:
			return 108;
		
		default:
	}
	return 0;
}

void func_839(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_823.f_49)
	{
		if (uParam0->f_823.f_51[iVar0] != -1)
		{
			iVar1 = func_840(func_837(uParam0, iVar0));
			if (uParam0->f_823.f_239[iVar0] != iVar1)
			{
				uParam0->f_823.f_239[iVar0] = iVar1;
				iLocal_1427 = 1;
			}
		}
		iVar0++;
	}
}

int func_840(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_15() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		Var0 = { func_204(iParam0) };
		if (func_203(Var0))
		{
			if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var0))
			{
				if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var0))
				{
					return 2;
				}
				else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var0))
			{
				return 1;
			}
			else
			{
				return 3;
			}
		}
	}
	return 0;
}

int func_841(var uParam0)
{
	switch (iLocal_1432)
	{
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
		case 59:
			return 1;
			break;
	}
	if (func_350(&uLocal_1435))
	{
		if (func_40(&uLocal_1435, 4000, 0))
		{
			func_38(&uLocal_1435);
		}
		return 1;
	}
	return 0;
}

void func_842(var uParam0)
{
	int iVar0;
	
	uParam0->f_823.f_49 = func_843(uParam0);
	switch (uParam0->f_823.f_49)
	{
		case 1:
			uParam0->f_823.f_56[0] = 100;
			uParam0->f_823.f_56[1] = 0;
			uParam0->f_823.f_56[2] = 0;
			uParam0->f_823.f_56[3] = 0;
			uParam0->f_823.f_56[4] = 0;
			break;
		
		case 2:
			uParam0->f_823.f_56[0] = 85;
			uParam0->f_823.f_56[1] = 15;
			uParam0->f_823.f_56[2] = 0;
			uParam0->f_823.f_56[3] = 0;
			uParam0->f_823.f_56[4] = 0;
			break;
		
		case 3:
			uParam0->f_823.f_56[0] = 70;
			uParam0->f_823.f_56[1] = 15;
			uParam0->f_823.f_56[2] = 15;
			uParam0->f_823.f_56[3] = 0;
			uParam0->f_823.f_56[4] = 0;
			break;
		
		case 4:
			uParam0->f_823.f_56[0] = 55;
			uParam0->f_823.f_56[1] = 15;
			uParam0->f_823.f_56[2] = 15;
			uParam0->f_823.f_56[3] = 15;
			uParam0->f_823.f_56[4] = 0;
			break;
	}
	if (uParam0->f_1084 == PLAYER::PLAYER_ID())
	{
		Global_1974627[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[4] = uParam0->f_823.f_56[4];
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (uParam0->f_1084 == PLAYER::PLAYER_ID())
		{
			Global_1974627[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_12[iVar0] = uParam0->f_823.f_56[iVar0];
		}
		if (uParam0->f_823.f_51[iVar0] == PLAYER::NETWORK_PLAYER_ID_TO_INT())
		{
			Global_2715551.f_6546 = uParam0->f_823.f_56[iVar0];
			Global_1945276.f_29 = Global_2715551.f_6546;
		}
		iVar0++;
	}
	iLocal_1427 = 1;
}

int func_843(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		uParam0->f_823.f_51[0] = uParam0->f_1084;
		uParam0->f_823.f_51[1] = -1;
		uParam0->f_823.f_51[2] = -1;
		uParam0->f_823.f_51[3] = -1;
		return 1;
	}
	iVar0 = func_15();
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		uParam0->f_823.f_51[iVar1] = -1;
		uParam0->f_823.f_67[iVar1] = 0;
		uParam0->f_823.f_239[iVar1] = 0;
		Global_1974627[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*25*/].f_7[iVar1] = 0;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_75(iVar0, 1, 1))
		{
			if (iVar0 != func_15())
			{
				if (!func_844(iVar0))
				{
					if (iVar2 > 3)
					{
					}
					else
					{
						uParam0->f_823.f_51[iVar2] = iVar0;
						iVar2++;
					}
				}
			}
		}
		bVar1++;
	}
	return iVar2;
}

int func_844(int iParam0)
{
	if (func_76(iParam0, 0) || func_845(iParam0))
	{
		return 1;
	}
	return 0;
}

var func_845(int iParam0)
{
	return BitTest(Global_1853131[iParam0 /*888*/].f_96.f_32, 5);
}

void func_846(var uParam0)
{
	switch (uParam0->f_726.f_1)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
			}
			break;
		
		case 5:
			break;
	}
}

void func_847(var uParam0)
{
	switch (uParam0->f_726)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			if (!iLocal_1413)
			{
				func_951(uParam0);
				func_930(uParam0);
				func_929(uParam0);
				func_927(uParam0);
				func_885(uParam0);
				func_852(uParam0);
				iLocal_1413 = 1;
			}
			break;
		
		case 4:
			iLocal_1411 = 0;
			iLocal_1412 = 0;
			func_851(uParam0);
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				GRAPHICS::SET_TIMECYCLE_MODIFIER("h4_sub_commandroom_BloomRedux");
			}
			func_848();
			break;
		
		case 5:
			break;
	}
}

void func_848()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2703660.f_2400[iVar0 /*80*/].f_2 != 0)
		{
			Global_2703660.f_2400[iVar0 /*80*/].f_2 = 5;
			func_849(&(Global_2703660.f_2400[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_849(var uParam0, int iParam1)
{
	func_850(uParam0, iParam1);
}

void func_850(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_851(var uParam0)
{
	int iVar0;
	
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(true);
	}
	if ((uParam0->f_1084 == iLocal_1438 && !func_358(iLocal_1438)) && !func_17(iLocal_1438, 0))
	{
		iVar0 = func_7(9510, -1, 0);
		if (!BitTest(iVar0, 13))
		{
			func_9("HIF_INTROVIBE", -1);
			MISC::SET_BIT(&iVar0, 13);
			func_4(9510, iVar0, -1, 1, 0);
		}
	}
}

void func_852(var uParam0)
{
	bool bVar0;
	
	if (func_17(uParam0->f_1084, 0))
	{
		func_870(uParam0->f_711, 1, func_881(uParam0), func_873(uParam0), func_872(uParam0), func_871());
		func_869(uParam0->f_711, 99, func_604(99));
		func_869(uParam0->f_711, 100, func_604(100));
		func_869(uParam0->f_711, 101, func_604(101));
		func_869(uParam0->f_711, 102, func_604(102));
		func_869(uParam0->f_711, 103, func_604(103));
		func_869(uParam0->f_711, 104, func_604(104));
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			func_868(uParam0->f_711, 67, 63, 64, 66, 68, 69, 70, 65);
			func_607(uParam0->f_711, 1, func_608(uParam0));
			iLocal_1426 = 1;
		}
		else
		{
			func_868(uParam0->f_711, 67, 63, 64, 66, 68, 69, -1, 65);
		}
		func_866(uParam0->f_711, func_867(uParam0));
	}
	else
	{
		if (func_865(uParam0->f_1084))
		{
			func_605(uParam0, 2);
		}
		else if (func_358(uParam0->f_1084))
		{
			func_605(uParam0, 1);
		}
		if (func_864(uParam0->f_1084))
		{
			func_605(uParam0, 4);
		}
	}
	func_863(uParam0->f_711, func_864(uParam0->f_1084));
	func_860(uParam0->f_711, func_862(0), func_861(uParam0, 0), func_862(1), func_861(uParam0, 1), func_862(2), func_861(uParam0, 2));
	func_858(uParam0->f_711, func_859());
	func_825(uParam0->f_711, 0);
	bVar0 = func_857(uParam0);
	func_856(uParam0->f_711, bVar0);
	if (func_859() == 0)
	{
		uParam0->f_806 = 1;
	}
	else
	{
		uParam0->f_806 = 63;
	}
	if (uParam0->f_1084 == iLocal_1438)
	{
		Global_1975428[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*53*/].f_4 = uParam0->f_806;
	}
	else if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		uParam0->f_806 = 1000;
		func_822(uParam0->f_711, 1000);
	}
	else if (Global_1974627[uParam0->f_1084 /*25*/].f_20)
	{
		uParam0->f_806 = Global_1975428[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*53*/].f_4;
		func_822(uParam0->f_711, uParam0->f_806);
	}
	if (bVar0 == 0)
	{
		func_34(uParam0, 18);
	}
	func_855(uParam0);
	func_853(uParam0);
}

void func_853(var uParam0)
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || uParam0->f_1084 != iLocal_1438)
	{
		return;
	}
	iVar0 = func_7(9510, -1, 0);
	if (func_17(uParam0->f_1084, 0) && !BitTest(iVar0, 16))
	{
		func_611(uParam0->f_711, "H4P_OVR_INT_T", "H4P_OVR_INT_M", func_618(), "");
		uParam0->f_707 = 1;
		uParam0->f_806 = 1002;
		iLocal_1432 = -2;
		return;
	}
	if (func_854(uParam0->f_1084) && !BitTest(iVar0, 14))
	{
		func_611(uParam0->f_711, "H4P_OVR_MAN_T", "H4P_OVR_MAN_M", func_618(), "");
		uParam0->f_707 = 1;
		uParam0->f_806 = 1002;
		iLocal_1432 = -3;
	}
}

int func_854(int iParam0)
{
	if (!func_581(iParam0, 1))
	{
		return 0;
	}
	if (!func_17(iParam0, 8) && !func_17(iParam0, 9))
	{
		return 0;
	}
	if (!func_18(iParam0, 10))
	{
		return 0;
	}
	if (!func_17(iParam0, 13))
	{
		return 0;
	}
	if (!func_17(iParam0, 12))
	{
		return 0;
	}
	return 1;
}

void func_855(var uParam0)
{
	if (!uParam0->f_1080)
	{
		uParam0->f_1080.f_1 = AUDIO::GET_SOUND_ID();
		if (uParam0->f_1080.f_1 != -1)
		{
			AUDIO::PLAY_SOUND_FROM_COORD(uParam0->f_1080.f_1, func_37(19), uParam0->f_732.f_6, func_36(19), false, 0, false);
			uParam0->f_1080 = 1;
		}
	}
}

void func_856(int iParam0, bool bParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SHOW_SCREEN");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_857(var uParam0)
{
	if (((NETWORK::NETWORK_IS_ACTIVITY_SESSION() || uParam0->f_1096) || (uParam0->f_1084 != iLocal_1438 && Global_1974627[uParam0->f_1084 /*25*/].f_20)) || uParam0->f_1097)
	{
		return 1;
	}
	return 0;
}

void func_858(int iParam0, bool bParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INITIAL_TAB_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_859()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 2;
	}
	return 0;
}

void func_860(int iParam0, char* sParam1, bool bParam2, char* sParam3, bool bParam4, char* sParam5, bool bParam6)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_TABS");
	func_428(sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam2);
	func_428(sParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam4);
	func_428(sParam5);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam6);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_861(var uParam0, int iParam1)
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			break;
		
		case 1:
			if (!func_17(uParam0->f_1084, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (!func_854(uParam0->f_1084))
			{
				return 1;
			}
			break;
	}
	return 0;
}

char* func_862(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "H4P_INTEL_TAB";
		
		case 1:
			return "H4P_PREP_TAB";
		
		case 2:
			return "H4P_FINALE_TAB";
		
		default:
	}
	return "";
}

void func_863(int iParam0, bool bParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_IS_HARD_MODE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_864(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975428[iParam0 /*53*/].f_1, 12);
	}
	return 0;
}

int func_865(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975428[iParam0 /*53*/].f_1, 3);
	}
	return 0;
}

void func_866(int iParam0, char* sParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_FINALE_LIST_TITLE");
	func_428(sParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

char* func_867(var uParam0)
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION() || uParam0->f_1084 != PLAYER::PLAYER_ID())
	{
		return "H4P_LIST_PREV";
	}
	return "H4P_LIST_MAKE";
}

void func_868(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_FINALE_MENU_IDS");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bParam5);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bParam6);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bParam7);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bParam8);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_869(int iParam0, bool bParam1, bool bParam2)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_FINALE_COST");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_870(int iParam0, bool bParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_PAYOUTS");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bParam3);
	func_428(sParam4);
	func_428(sParam5);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

char* func_871()
{
	return "H4_LOOT_ADD";
}

char* func_872(var uParam0)
{
	switch (func_579(uParam0->f_1084))
	{
		case 0:
			return "H4_LOOT_TEQ";
		
		case 1:
			return "H4_LOOT_NKLC";
		
		case 2:
			return "H4_LOOT_BONDS";
		
		case 3:
			return "H4_LOOT_DIAM";
		
		case 4:
			return "H4_LOOT_FILES";
		
		case 5:
			return "H4_LOOT_STAT";
		
		default:
	}
	return "";
}

int func_873(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = (iVar0 + (func_875(uParam0->f_1084, iVar1) * func_874(uParam0->f_1084, iVar1, 0, 0)));
		iVar1++;
	}
	return iVar0;
}

int func_874(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 0:
				if (!bParam3)
				{
					bVar1 = false;
					while (bVar1 < 24)
					{
						if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_10.f_5, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				if (!bParam2)
				{
					bVar1 = false;
					while (bVar1 < 8)
					{
						if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_10.f_13, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				break;
			
			case 1:
				if (!bParam3)
				{
					bVar1 = false;
					while (bVar1 < 24)
					{
						if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_10.f_6, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				if (!bParam2)
				{
					bVar1 = false;
					while (bVar1 < 8)
					{
						if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_10.f_14, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				break;
			
			case 2:
				if (!bParam3)
				{
					bVar1 = false;
					while (bVar1 < 24)
					{
						if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_10.f_7, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				if (!bParam2)
				{
					bVar1 = false;
					while (bVar1 < 8)
					{
						if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_10.f_15, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				break;
			
			case 3:
				if (!bParam3)
				{
					bVar1 = false;
					while (bVar1 < 24)
					{
						if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_10.f_8, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				if (!bParam2)
				{
					bVar1 = false;
					while (bVar1 < 8)
					{
						if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_10.f_16, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				break;
			
			case 4:
				bVar1 = false;
				while (bVar1 < 7)
				{
					if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_10.f_18, bVar1))
					{
						iVar0++;
					}
					bVar1++;
				}
				break;
			}
	}
	return iVar0;
}

int func_875(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_880(iParam0);
		
		case 1:
			return func_879(iParam0);
		
		case 2:
			return func_878(iParam0);
		
		case 3:
			return func_877(iParam0);
		
		case 4:
			return func_876(iParam0);
		
		default:
	}
	return 0;
}

int func_876(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_1975428[iParam0 /*53*/].f_5.f_10.f_23;
	}
	return 0;
}

int func_877(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_1975428[iParam0 /*53*/].f_5.f_10.f_22;
	}
	return 0;
}

int func_878(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_1975428[iParam0 /*53*/].f_5.f_10.f_21;
	}
	return 0;
}

int func_879(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_1975428[iParam0 /*53*/].f_5.f_10.f_20;
	}
	return 0;
}

int func_880(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_1975428[iParam0 /*53*/].f_5.f_10.f_19;
	}
	return 0;
}

int func_881(var uParam0)
{
	int iVar0;
	float fVar1;
	
	iVar0 = func_884(func_579(uParam0->f_1084));
	fVar1 = func_882(func_883(func_864(uParam0->f_1084), 2, 1));
	iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar1));
	return iVar0;
}

float func_882(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_29638;
		
		case 2:
			return Global_262145.f_29639;
		
		default:
	}
	return 1f;
}

int func_883(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_884(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_29632;
		
		case 1:
			return Global_262145.f_29633;
		
		case 2:
			return Global_262145.f_29634;
		
		case 3:
			return Global_262145.f_29635;
		
		case 4:
			return Global_262145.f_29636;
		
		case 5:
			return Global_262145.f_29637;
		
		default:
	}
	return 0;
}

void func_885(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_17(uParam0->f_1084, 0) && !func_358(uParam0->f_1084))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < 24)
	{
		if (func_926(uParam0->f_1084, bVar0) && func_925(uParam0->f_1084, bVar0))
		{
			iVar3 = func_924(uParam0->f_1084, bVar0);
			func_920(uParam0->f_711, func_923(iVar3), -1, func_922(iVar3), 0, func_921(bVar0));
		}
		bVar0++;
	}
	bVar1 = false;
	while (bVar1 < 8)
	{
		if (func_919(uParam0->f_1084, bVar1) && func_918(uParam0->f_1084, bVar1))
		{
			iVar3 = func_917(uParam0->f_1084, bVar1);
			func_920(uParam0->f_711, func_923(iVar3), -1, func_922(iVar3), 1, func_916(bVar1));
		}
		bVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 7)
	{
		if (func_915(uParam0->f_1084, iVar2) && func_914(uParam0->f_1084, iVar2))
		{
			func_920(uParam0->f_711, 11, -1, 7, 1, func_913(iVar2));
		}
		iVar2++;
	}
	iVar4 = 0;
	while (iVar4 < 4)
	{
		if (func_391(uParam0->f_1084, iVar4))
		{
			func_920(uParam0->f_711, 33, -1, 2, 0, func_907(func_908(uParam0->f_1084, iVar4)));
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 4)
	{
		if (func_385(uParam0->f_1084, iVar4))
		{
			func_920(uParam0->f_711, 34, -1, 2, 0, func_901(func_902(uParam0->f_1084, iVar4)));
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 4)
	{
		if (func_397(uParam0->f_1084, iVar4))
		{
			func_920(uParam0->f_711, 32, -1, 2, 0, func_895(func_896(uParam0->f_1084, iVar4)));
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 8)
	{
		if (func_379(uParam0->f_1084, iVar4))
		{
			func_920(uParam0->f_711, func_894(iVar4, 0), func_894(iVar4, 1), func_893(iVar4), 0, func_892(iVar4));
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 4)
	{
		if (func_377(uParam0->f_1084, iVar4))
		{
			func_920(uParam0->f_711, func_891(iVar4, 0), func_891(iVar4, 1), 1, 0, func_890(iVar4));
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 6)
	{
		if (func_375(uParam0->f_1084, iVar4))
		{
			func_920(uParam0->f_711, func_889(iVar4, 0), func_889(iVar4, 1), 0, 1, func_888(iVar4));
		}
		iVar4++;
	}
	if (func_402(uParam0->f_1084))
	{
		func_920(uParam0->f_711, 31, -1, 2, 0, 4367.82f, -4579f, 23.06f);
	}
	if (func_404(uParam0->f_1084))
	{
		func_920(uParam0->f_711, 30, -1, 2, 0, 4480.7f, -4588.52f, 4.56f);
	}
	func_920(uParam0->f_711, 5, -1, 8, 0, 5020.635f, -5746.534f, 31.93707f);
	if (func_383(uParam0->f_1084))
	{
		func_920(uParam0->f_711, 35, -1, 2, 0, func_886(func_887(uParam0->f_1084)));
	}
}

Vector3 func_886(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 4527.591f, -4526.633f, 3.211f;
		
		case 2:
			return 5152.974f, -4619.487f, 1.752f;
		
		case 3:
			return 5155.974f, -5132.699f, 1.312f;
		
		case 4:
			return 4900.456f, -5210.057f, 1.512f;
		
		case 5:
			return 4970.79f, -5695.73f, 18.888f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_887(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_1975428[iParam0 /*53*/].f_5.f_34;
	}
	return 0;
}

Vector3 func_888(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4982.59f, -5711.01f, 18.86f;
		
		case 1:
			return 5031.86f, -5685.84f, 23.87f;
		
		case 2:
			return 5085.03f, -5732.67f, 14.8f;
		
		case 3:
			return 4992.24f, -5807.17f, 24.87f;
		
		case 4:
			return 4960.13f, -5785.66f, 19.96f;
		
		case 5:
			return 5045.17f, -5817.24f, -12.7f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_889(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 85;
			
			case 5:
				return 86;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 24;
			
			case 1:
				return 25;
			
			case 2:
				return 26;
			
			case 3:
				return 27;
			
			case 4:
				return 28;
			
			case 5:
				return 29;
			}
		
		default:
	}
	return -1;
}

Vector3 func_890(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4052.4f, -4655.79f, 3.18f;
		
		case 1:
			return 4799.21f, -5157.77f, -4.34f;
		
		case 2:
			return 5176.88f, -4752.2f, -4.11f;
		
		case 3:
			return 4533.25f, -4278.35f, 0f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_891(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 87;
			
			case 1:
				return 88;
			
			case 2:
				return 89;
			
			case 3:
				return 90;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 20;
			
			case 1:
				return 21;
			
			case 2:
				return 22;
			
			case 3:
				return 23;
			}
		
		default:
	}
	return -1;
}

Vector3 func_892(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4052.4f, -4655.79f, 3.18f;
		
		case 3:
			return 4799.21f, -5157.77f, -4.34f;
		
		case 4:
			return 5176.88f, -4752.2f, -4.11f;
		
		case 2:
			return 4891.13f, -4925.02f, 9.31f;
		
		case 5:
			return 4820.73f, -4302.71f, 4.24f;
		
		case 6:
			return 5478.63f, -5847.74f, 19.54f;
		
		case 7:
			return 5045.17f, -5817.24f, -12.7f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_893(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 9;
		
		default:
	}
	return 0;
}

int func_894(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 77;
			
			case 1:
				return 78;
			
			case 2:
				return 79;
			
			case 3:
				return 80;
			
			case 4:
				return 81;
			
			case 5:
				return 82;
			
			case 6:
				return 83;
			
			case 7:
				return 84;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 12;
			
			case 1:
				return 13;
			
			case 2:
				return 14;
			
			case 3:
				return 15;
			
			case 4:
				return 16;
			
			case 5:
				return 17;
			
			case 6:
				return 18;
			
			case 7:
				return 19;
			}
		
		default:
	}
	return -1;
}

Vector3 func_895(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4534.709f, -4543.447f, 4.53f;
		
		case 1:
			return 4523.664f, -4511.79f, 4.184f;
		
		case 2:
			return 4076.849f, -4667.305f, 4.163f;
		
		case 3:
			return 4505.6f, -4653.089f, 10.456f;
		
		case 4:
			return 4805.025f, -4315.458f, 6.514f;
		
		case 5:
			return 5180.197f, -4670.979f, 6.231f;
		
		case 6:
			return 5098.02f, -4621.306f, 2.594f;
		
		case 7:
			return 5070.327f, -4638.299f, 2.902f;
		
		case 8:
			return 4955.743f, -5181.93f, 4.512f;
		
		case 9:
			return 5216.539f, -5126.448f, 5.984f;
		
		case 10:
			return 4879.029f, -5112.622f, 1.995f;
		
		case 11:
			return 4901.985f, -5348.011f, 9.409f;
		
		case 12:
			return 5362.94f, -5437.508f, 48.491f;
		
		case 13:
			return 5466.287f, -5232.051f, 27.065f;
		
		case 14:
			return 4754.99f, -5541.311f, 18.056f;
		
		case 15:
			return 5326.267f, -5266.071f, 32.237f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_896(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 0:
				return func_900(iParam0);
			
			case 1:
				return func_899(iParam0);
			
			case 2:
				return func_898(iParam0);
			
			case 3:
				return func_897(iParam0);
			}
		
		default:
	}
	return -1;
}

int func_897(int iParam0)
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_5, 12))
		{
			return 12;
		}
		else if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_5, 13))
		{
			return 13;
		}
		else if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_5, 14))
		{
			return 14;
		}
		else
		{
			BitTest(Global_1975428[iParam0 /*53*/].f_5.f_5, 15);
			return 15;
		}
	}
	return -1;
}

int func_898(int iParam0)
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_5, 8))
		{
			return 8;
		}
		else if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_5, 9))
		{
			return 9;
		}
		else if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_5, 10))
		{
			return 10;
		}
		else
		{
			BitTest(Global_1975428[iParam0 /*53*/].f_5.f_5, 11);
			return 11;
		}
	}
	return -1;
}

int func_899(int iParam0)
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_5, 4))
		{
			return 4;
		}
		else if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_5, 5))
		{
			return 5;
		}
		else if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_5, 6))
		{
			return 6;
		}
		else
		{
			BitTest(Global_1975428[iParam0 /*53*/].f_5.f_5, 7);
			return 7;
		}
	}
	return -1;
}

int func_900(int iParam0)
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_5, 0))
		{
			return 0;
		}
		else if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_5, 1))
		{
			return 1;
		}
		else if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_5, 2))
		{
			return 2;
		}
		else
		{
			BitTest(Global_1975428[iParam0 /*53*/].f_5.f_5, 3);
			return 3;
		}
	}
	return -1;
}

Vector3 func_901(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5163.384f, -4995.56f, 11.682f;
		
		case 1:
			return 4765.362f, -4778.338f, 2.781f;
		
		case 2:
			return 4502.198f, -4523.357f, 3.396f;
		
		case 3:
			return 4528.522f, -4536.311f, 6.558f;
		
		case 4:
			return 5098.933f, -4609.03f, 1.369f;
		
		case 5:
			return 5060.167f, -4589.7f, 1.9f;
		
		case 6:
			return 5148.113f, -4616.131f, 1.387f;
		
		case 7:
			return 5170.703f, -4675.337f, 1.439f;
		
		case 8:
			return 5116.664f, -5130.588f, 1.143f;
		
		case 9:
			return 5002.533f, -5125.336f, 1.955f;
		
		case 10:
			return 4949.935f, -5321.81f, 7.085f;
		
		case 11:
			return 5012.355f, -5203.456f, 1.516f;
		
		case 12:
			return 4923.873f, -5273.464f, 4.65f;
		
		case 13:
			return 5263.995f, -5435.548f, 64.881f;
		
		case 14:
			return 4886.995f, -5454.333f, 29.731f;
		
		case 15:
			return 5106.183f, -5524.682f, 53.239f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_902(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 0:
				return func_906(iParam0);
			
			case 1:
				return func_905(iParam0);
			
			case 2:
				return func_904(iParam0);
			
			case 3:
				return func_903(iParam0);
			}
		
		default:
	}
	return -1;
}

int func_903(int iParam0)
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_4, 12))
		{
			return 12;
		}
		else if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_4, 13))
		{
			return 13;
		}
		else if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_4, 14))
		{
			return 14;
		}
		else
		{
			BitTest(Global_1975428[iParam0 /*53*/].f_5.f_4, 15);
			return 15;
		}
	}
	return -1;
}

int func_904(int iParam0)
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_4, 8))
		{
			return 8;
		}
		else if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_4, 9))
		{
			return 9;
		}
		else if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_4, 10))
		{
			return 10;
		}
		else
		{
			BitTest(Global_1975428[iParam0 /*53*/].f_5.f_4, 11);
			return 11;
		}
	}
	return -1;
}

int func_905(int iParam0)
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_4, 4))
		{
			return 4;
		}
		else if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_4, 5))
		{
			return 5;
		}
		else if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_4, 6))
		{
			return 6;
		}
		else
		{
			BitTest(Global_1975428[iParam0 /*53*/].f_5.f_4, 7);
			return 7;
		}
	}
	return -1;
}

int func_906(int iParam0)
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_4, 0))
		{
			return 0;
		}
		else if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_4, 1))
		{
			return 1;
		}
		else if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_4, 2))
		{
			return 2;
		}
		else
		{
			BitTest(Global_1975428[iParam0 /*53*/].f_5.f_4, 3);
			return 3;
		}
	}
	return -1;
}

Vector3 func_907(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4896.678f, -4791.297f, 2.59f;
		
		case 1:
			return 4529.568f, -4703.347f, 3.134f;
		
		case 2:
			return 4493.661f, -4733.618f, 10.01f;
		
		case 3:
			return 3895.499f, -4695.022f, 5.547f;
		
		case 4:
			return 5103.035f, -4681.288f, 7.702f;
		
		case 5:
			return 5130.433f, -4610.441f, 11.724f;
		
		case 6:
			return 5109.232f, -4578.338f, 28.711f;
		
		case 7:
			return 4879.964f, -4487.782f, 9.922f;
		
		case 8:
			return 4901.395f, -5331.422f, 28.64f;
		
		case 9:
			return 4862.909f, -5158.419f, 2.283f;
		
		case 10:
			return 5124.89f, -5097.902f, 2.192f;
		
		case 11:
			return 4867.519f, -4642.129f, 13.571f;
		
		case 12:
			return 5568.438f, -5185.942f, 10.22f;
		
		case 13:
			return 5406.297f, -5170.91f, 31.198f;
		
		case 14:
			return 5265.993f, -5430.593f, 140.566f;
		
		case 15:
			return 5611.286f, -5654.516f, 9.051f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_908(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 0:
				return func_912(iParam0);
			
			case 1:
				return func_911(iParam0);
			
			case 2:
				return func_910(iParam0);
			
			case 3:
				return func_909(iParam0);
			}
		
		default:
	}
	return -1;
}

int func_909(int iParam0)
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_3, 12))
		{
			return 12;
		}
		else if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_3, 13))
		{
			return 13;
		}
		else if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_3, 14))
		{
			return 14;
		}
		else
		{
			BitTest(Global_1975428[iParam0 /*53*/].f_5.f_3, 15);
			return 15;
		}
	}
	return -1;
}

int func_910(int iParam0)
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_3, 8))
		{
			return 8;
		}
		else if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_3, 9))
		{
			return 9;
		}
		else if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_3, 10))
		{
			return 10;
		}
		else
		{
			BitTest(Global_1975428[iParam0 /*53*/].f_5.f_3, 11);
			return 11;
		}
	}
	return -1;
}

int func_911(int iParam0)
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_3, 4))
		{
			return 4;
		}
		else if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_3, 5))
		{
			return 5;
		}
		else if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_3, 6))
		{
			return 6;
		}
		else
		{
			BitTest(Global_1975428[iParam0 /*53*/].f_5.f_3, 7);
			return 7;
		}
	}
	return -1;
}

int func_912(int iParam0)
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_3, 0))
		{
			return 0;
		}
		else if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_3, 1))
		{
			return 1;
		}
		else if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_3, 2))
		{
			return 2;
		}
		else
		{
			BitTest(Global_1975428[iParam0 /*53*/].f_5.f_3, 3);
			return 3;
		}
	}
	return -1;
}

Vector3 func_913(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5081.14f, -5758.794f, 15.981f;
		
		case 1:
			return 5027.032f, -5738.977f, 18.027f;
		
		case 2:
			return 5008.773f, -5783.208f, 17.99f;
		
		case 3:
			return 5014.587f, -5751.069f, 29.006f;
		
		case 4:
			return 5004.83f, -5755.521f, 29.006f;
		
		case 5:
			return 4995.553f, -5748.032f, 15.002f;
		
		case 6:
			return 4997.112f, -5745.52f, 15.001f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_914(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975428[iParam0 /*53*/].f_5.f_10.f_18, iParam1);
	}
	return 0;
}

int func_915(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975428[iParam0 /*53*/].f_5.f_10.f_17, iParam1);
	}
	return 0;
}

Vector3 func_916(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return 5081.753f, -5754.63f, 15.764f;
		
		case 1:
			return 5082.945f, -5758.447f, 15.765f;
		
		case 2:
			return 5029.346f, -5733.933f, 17.81f;
		
		case 3:
			return 5029.777f, -5737.731f, 17.808f;
		
		case 4:
			return 5012.031f, -5788.325f, 17.773f;
		
		case 5:
			return 5006.233f, -5785.789f, 17.771f;
		
		case 6:
			return 4998.106f, -5752.379f, 14.783f;
		
		case 7:
			return 5003.947f, -5748.77f, 14.787f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_917(int iParam0, bool bParam1)
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_10.f_9, bParam1))
		{
			return 0;
		}
		else if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_10.f_10, bParam1))
		{
			return 1;
		}
		else if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_10.f_11, bParam1))
		{
			return 2;
		}
		else if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_10.f_12, bParam1))
		{
			return 3;
		}
	}
	return -1;
}

int func_918(int iParam0, bool bParam1)
{
	if (iParam0 != -1)
	{
		switch (func_917(iParam0, bParam1))
		{
			case 0:
				return BitTest(Global_1975428[iParam0 /*53*/].f_5.f_10.f_13, bParam1);
			
			case 1:
				return BitTest(Global_1975428[iParam0 /*53*/].f_5.f_10.f_14, bParam1);
			
			case 2:
				return BitTest(Global_1975428[iParam0 /*53*/].f_5.f_10.f_15, bParam1);
			
			case 3:
				return BitTest(Global_1975428[iParam0 /*53*/].f_5.f_10.f_16, bParam1);
			}
		
		default:
	}
	return 0;
}

int func_919(int iParam0, bool bParam1)
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_10.f_9, bParam1))
		{
			return 1;
		}
		else if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_10.f_10, bParam1))
		{
			return 1;
		}
		else if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_10.f_11, bParam1))
		{
			return 1;
		}
		else if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_10.f_12, bParam1))
		{
			return 1;
		}
	}
	return 0;
}

void func_920(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, struct<2> Param5, float fParam7)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "ADD_WORLD_MAP_ICON");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Param5.f_0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Param5.f_1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

Vector3 func_921(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return 4447.822f, -4442.135f, 7.175f;
		
		case 1:
			return 4448.821f, -4444.858f, 7.182f;
		
		case 2:
			return 4435.688f, -4446.595f, 4.25f;
		
		case 3:
			return 4438.332f, -4445.811f, 4.267f;
		
		case 4:
			return 4506.064f, -4555.47f, 4.095f;
		
		case 5:
			return 4503.678f, -4556.323f, 4.096f;
		
		case 6:
			return 5064.635f, -4589.759f, 2.801f;
		
		case 7:
			return 5067.557f, -4590.849f, 2.795f;
		
		case 8:
			return 5092.602f, -4680.137f, 2.35f;
		
		case 9:
			return 5093.195f, -4683.354f, 2.35f;
		
		case 10:
			return 5091.02f, -4685.678f, 2.351f;
		
		case 11:
			return 5136.102f, -4613.863f, 2.401f;
		
		case 12:
			return 5131.834f, -4612.648f, 2.404f;
		
		case 13:
			return 5329.472f, -5272.372f, 33.13f;
		
		case 14:
			return 5328.096f, -5270.587f, 33.129f;
		
		case 15:
			return 5196.664f, -5133.933f, 3.284f;
		
		case 16:
			return 5196.121f, -5136.333f, 3.285f;
		
		case 17:
			return 5000.313f, -5163.344f, 2.697f;
		
		case 18:
			return 5001.3f, -5165.434f, 2.697f;
		
		case 19:
			return 4959.845f, -5107.064f, 2.911f;
		
		case 20:
			return 4962.675f, -5106.771f, 2.913f;
		
		case 21:
			return 4963.856f, -5109.32f, 2.912f;
		
		case 22:
			return 4926.316f, -5244.514f, 2.461f;
		
		case 23:
			return 4924.385f, -5245.882f, 2.461f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_922(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		
		case 1:
			return 3;
		
		case 2:
			return 6;
		
		case 3:
			return 5;
		
		default:
	}
	return -1;
}

int func_923(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7;
		
		case 1:
			return 8;
		
		case 2:
			return 9;
		
		case 3:
			return 10;
		
		default:
	}
	return -1;
}

int func_924(int iParam0, bool bParam1)
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_10.f_1, bParam1))
		{
			return 0;
		}
		else if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_10.f_2, bParam1))
		{
			return 1;
		}
		else if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_10.f_3, bParam1))
		{
			return 2;
		}
		else if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_10.f_4, bParam1))
		{
			return 3;
		}
	}
	return -1;
}

int func_925(int iParam0, bool bParam1)
{
	if (iParam0 != -1)
	{
		switch (func_924(iParam0, bParam1))
		{
			case 0:
				return BitTest(Global_1975428[iParam0 /*53*/].f_5.f_10.f_5, bParam1);
			
			case 1:
				return BitTest(Global_1975428[iParam0 /*53*/].f_5.f_10.f_6, bParam1);
			
			case 2:
				return BitTest(Global_1975428[iParam0 /*53*/].f_5.f_10.f_7, bParam1);
			
			case 3:
				return BitTest(Global_1975428[iParam0 /*53*/].f_5.f_10.f_8, bParam1);
			}
		
		default:
	}
	return 0;
}

int func_926(int iParam0, bool bParam1)
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_10.f_1, bParam1))
		{
			return 1;
		}
		else if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_10.f_2, bParam1))
		{
			return 1;
		}
		else if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_10.f_3, bParam1))
		{
			return 1;
		}
		else if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_10.f_4, bParam1))
		{
			return 1;
		}
	}
	return 0;
}

void func_927(var uParam0)
{
	int iVar0;
	
	if (!func_17(uParam0->f_1084, 0) && !func_358(uParam0->f_1084))
	{
		func_928(uParam0->f_711, Local_107[iVar0 /*14*/]);
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_107.f_0)
	{
		if (Local_107[iVar0 /*14*/])
		{
			func_928(uParam0->f_711, Local_107[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_192.f_0)
	{
		if (Local_192[iVar0 /*14*/])
		{
			func_928(uParam0->f_711, Local_192[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_305.f_0)
	{
		if (Local_305[iVar0 /*14*/])
		{
			func_928(uParam0->f_711, Local_305[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_362.f_0)
	{
		if (Local_362[iVar0 /*14*/])
		{
			func_928(uParam0->f_711, Local_362[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_518.f_0)
	{
		if (Local_518[iVar0 /*14*/])
		{
			func_928(uParam0->f_711, Local_518[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_433.f_0)
	{
		if (Local_433[iVar0 /*14*/])
		{
			func_928(uParam0->f_711, Local_433[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_603.f_0)
	{
		if (Local_603[iVar0 /*14*/])
		{
			func_928(uParam0->f_711, Local_603[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_660.f_0)
	{
		if (Local_660[iVar0 /*14*/])
		{
			func_928(uParam0->f_711, Local_660[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_801.f_0)
	{
		if (Local_801[iVar0 /*14*/])
		{
			func_928(uParam0->f_711, Local_801[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_858.f_0)
	{
		if (Local_858[iVar0 /*14*/])
		{
			func_928(uParam0->f_711, Local_858[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_943.f_0)
	{
		if (Local_943[iVar0 /*14*/])
		{
			func_928(uParam0->f_711, Local_943[iVar0 /*14*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_986.f_0)
	{
		if (Local_986[iVar0 /*9*/])
		{
			func_572(uParam0->f_711, Local_986[iVar0 /*9*/], 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_1059.f_0)
	{
		if (Local_1059[iVar0 /*9*/])
		{
			func_572(uParam0->f_711, Local_1059[iVar0 /*9*/], 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_1114.f_0)
	{
		if (Local_1114[iVar0 /*9*/])
		{
			func_572(uParam0->f_711, Local_1114[iVar0 /*9*/], 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_1187.f_0)
	{
		if (Local_1187[iVar0 /*9*/])
		{
			func_572(uParam0->f_711, Local_1187[iVar0 /*9*/], 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_1206.f_0)
	{
		if (Local_1206[iVar0 /*9*/])
		{
			func_572(uParam0->f_711, Local_1206[iVar0 /*9*/], 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_1243.f_0)
	{
		if (Local_1243[iVar0 /*9*/])
		{
			func_572(uParam0->f_711, Local_1243[iVar0 /*9*/], 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_1262.f_0)
	{
		if (Local_1262[iVar0 /*9*/])
		{
			func_572(uParam0->f_711, Local_1262[iVar0 /*9*/], 0);
			if (Local_1262[iVar0 /*9*/].f_2 != 98 || func_411(uParam0->f_1084))
			{
				func_561(uParam0->f_711, Local_1262[iVar0 /*9*/].f_2, 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_1317.f_0)
	{
		if (Local_1317[iVar0 /*9*/])
		{
			func_572(uParam0->f_711, Local_1317[iVar0 /*9*/], 0);
			if (func_412(uParam0->f_1084, func_601(Local_1317[iVar0 /*9*/].f_2)))
			{
				func_561(uParam0->f_711, Local_1317[iVar0 /*9*/].f_2, 1);
			}
		}
		iVar0++;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && uParam0->f_1084 == PLAYER::PLAYER_ID())
	{
		iVar0 = 0;
		while (iVar0 < Local_1372.f_0)
		{
			if (Local_1372[iVar0 /*9*/])
			{
				func_572(uParam0->f_711, Local_1372[iVar0 /*9*/], 1);
			}
			iVar0++;
		}
	}
}

void func_928(int iParam0, struct<14> Param1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "ADD_SETUP_ITEM");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Param1.f_1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Param1.f_2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Param1.f_3);
	func_428(Param1.f_4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Param1.f_5);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Param1.f_6);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Param1.f_7);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(Param1.f_8);
	func_428(Param1.f_9);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(Param1.f_10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(Param1.f_11);
	if (Param1.f_12 != -2)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Param1.f_12);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Param1.f_13);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_929(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (func_861(uParam0, 2))
	{
		return;
	}
	func_574(uParam0, &(Local_986[0 /*9*/]), 0, 63);
	func_574(uParam0, &(Local_986[1 /*9*/]), 0, 64);
	func_574(uParam0, &(Local_986[2 /*9*/]), 0, 65);
	func_574(uParam0, &(Local_986[3 /*9*/]), 0, 66);
	func_574(uParam0, &(Local_986[4 /*9*/]), 0, 67);
	func_574(uParam0, &(Local_986[5 /*9*/]), 0, 68);
	func_574(uParam0, &(Local_986[6 /*9*/]), 0, 69);
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && uParam0->f_1084 == PLAYER::PLAYER_ID())
	{
		func_574(uParam0, &(Local_986[7 /*9*/]), 0, 70);
	}
	iVar0 = 0;
	if (func_17(uParam0->f_1084, 7))
	{
		func_574(uParam0, &(Local_1059[iVar0 /*9*/]), 63, 71);
		iVar0++;
	}
	if (func_17(uParam0->f_1084, 1) && func_17(uParam0->f_1084, 6))
	{
		func_574(uParam0, &(Local_1059[iVar0 /*9*/]), 63, 72);
		iVar0++;
	}
	if (func_17(uParam0->f_1084, 5))
	{
		func_574(uParam0, &(Local_1059[iVar0 /*9*/]), 63, 73);
		iVar0++;
	}
	if (func_17(uParam0->f_1084, 2) && func_17(uParam0->f_1084, 6))
	{
		func_574(uParam0, &(Local_1059[iVar0 /*9*/]), 63, 74);
		iVar0++;
	}
	if (func_17(uParam0->f_1084, 3))
	{
		func_574(uParam0, &(Local_1059[iVar0 /*9*/]), 63, 75);
		iVar0++;
	}
	if (func_17(uParam0->f_1084, 4))
	{
		func_574(uParam0, &(Local_1059[iVar0 /*9*/]), 63, 76);
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 8)
	{
		bVar2 = (77 + iVar1);
		if (func_379(uParam0->f_1084, func_380(bVar2)))
		{
			func_574(uParam0, &(Local_1114[iVar0 /*9*/]), 64, bVar2);
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	if (func_17(uParam0->f_1084, 8))
	{
		func_574(uParam0, &(Local_1187[iVar0 /*9*/]), 65, 85);
		iVar0++;
	}
	if (func_17(uParam0->f_1084, 9))
	{
		func_574(uParam0, &(Local_1187[iVar0 /*9*/]), 65, 86);
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		bVar2 = (87 + iVar1);
		if (func_377(uParam0->f_1084, func_378(bVar2)))
		{
			func_574(uParam0, &(Local_1206[iVar0 /*9*/]), 66, bVar2);
			iVar0++;
		}
		iVar1++;
	}
	func_574(uParam0, &(Local_1243[0 /*9*/]), 67, 91);
	func_574(uParam0, &(Local_1243[1 /*9*/]), 67, 92);
	if (func_374(uParam0->f_1084) == 1)
	{
		func_574(uParam0, &(Local_1262[0 /*9*/]), 68, 93);
	}
	else if (func_374(uParam0->f_1084) == 2)
	{
		func_574(uParam0, &(Local_1262[0 /*9*/]), 68, 94);
	}
	else if (func_374(uParam0->f_1084) == 3)
	{
		func_574(uParam0, &(Local_1262[0 /*9*/]), 68, 95);
	}
	else if (func_374(uParam0->f_1084) == 4)
	{
		func_574(uParam0, &(Local_1262[0 /*9*/]), 68, 96);
	}
	else if (func_374(uParam0->f_1084) == 5)
	{
		func_574(uParam0, &(Local_1262[0 /*9*/]), 68, 97);
	}
	func_574(uParam0, &(Local_1262[1 /*9*/]), 68, 98);
	bLocal_1419 = func_411(uParam0->f_1084);
	func_574(uParam0, &(Local_1317[0 /*9*/]), 69, 99);
	func_574(uParam0, &(Local_1317[1 /*9*/]), 69, 100);
	func_574(uParam0, &(Local_1317[2 /*9*/]), 69, 101);
	func_574(uParam0, &(Local_1317[3 /*9*/]), 69, 102);
	func_574(uParam0, &(Local_1317[4 /*9*/]), 69, 103);
	func_574(uParam0, &(Local_1317[5 /*9*/]), 69, 104);
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && uParam0->f_1084 == PLAYER::PLAYER_ID())
	{
		func_574(uParam0, &(Local_1372[0 /*9*/]), 70, 105);
		func_574(uParam0, &(Local_1372[1 /*9*/]), 70, 106);
		func_574(uParam0, &(Local_1372[2 /*9*/]), 70, 107);
		func_574(uParam0, &(Local_1372[3 /*9*/]), 70, 108);
	}
}

void func_930(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (func_861(uParam0, 1))
	{
		return;
	}
	func_931(uParam0, &(Local_603[0 /*14*/]), 1, 0, 36, 0);
	func_931(uParam0, &(Local_603[1 /*14*/]), 1, 0, 37, 0);
	func_931(uParam0, &(Local_603[2 /*14*/]), 1, 0, 38, 0);
	func_931(uParam0, &(Local_603[3 /*14*/]), 1, 0, 39, 0);
	func_931(uParam0, &(Local_660[0 /*14*/]), 1, 36, 40, 0);
	func_931(uParam0, &(Local_660[1 /*14*/]), 1, 36, 41, 0);
	func_931(uParam0, &(Local_660[2 /*14*/]), 1, 36, 42, 0);
	func_931(uParam0, &(Local_660[3 /*14*/]), 1, 36, 43, 0);
	func_931(uParam0, &(Local_660[4 /*14*/]), 1, 36, 44, 0);
	func_931(uParam0, &(Local_660[5 /*14*/]), 1, 36, 45, 0);
	func_931(uParam0, &(Local_660[6 /*14*/]), 1, 41, 46, 0);
	func_931(uParam0, &(Local_660[7 /*14*/]), 1, 41, 47, 0);
	func_931(uParam0, &(Local_660[8 /*14*/]), 1, 43, 48, 0);
	func_931(uParam0, &(Local_660[9 /*14*/]), 1, 43, 49, 0);
	func_931(uParam0, &(Local_801[0 /*14*/]), 1, 37, 50, 0);
	func_931(uParam0, &(Local_801[1 /*14*/]), 1, 37, 51, 0);
	func_931(uParam0, &(Local_801[2 /*14*/]), 1, 37, 52, 0);
	func_931(uParam0, &(Local_801[3 /*14*/]), 1, 37, 53, 0);
	iVar1 = 0;
	while (iVar1 < 5)
	{
		bVar2 = (54 + iVar1);
		if (!func_17(uParam0->f_1084, 13) || func_374(uParam0->f_1084) == func_599(bVar2))
		{
			func_931(uParam0, &(Local_858[iVar0 /*14*/]), 1, 38, bVar2, 0);
			iVar0++;
		}
		iVar1++;
	}
	func_931(uParam0, &(Local_858[iVar0 /*14*/]), 1, 38, 59, 0);
	func_931(uParam0, &(Local_943[0 /*14*/]), 1, 39, 60, 0);
	func_931(uParam0, &(Local_943[1 /*14*/]), 1, 39, 61, 0);
	func_931(uParam0, &(Local_943[2 /*14*/]), 1, 39, 62, 0);
}

void func_931(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	*uParam1 = 1;
	uParam1->f_1 = iParam2;
	uParam1->f_2 = iParam3;
	uParam1->f_3 = bParam4;
	if (bParam5)
	{
		uParam1->f_4 = "CH_LIST_BLANK";
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 2;
		uParam1->f_8 = 0;
		uParam1->f_9 = "CH_LIST_BLANK";
		uParam1->f_10 = "";
		uParam1->f_11 = 0;
		uParam1->f_12 = -1;
		uParam1->f_13 = -1;
	}
	else
	{
		uParam1->f_4 = func_582(uParam0, bParam4);
		uParam1->f_5 = func_949(uParam0, bParam4);
		uParam1->f_6 = func_948(uParam0, bParam4);
		if (func_366(uParam0, bParam4))
		{
			uParam1->f_7 = func_576(uParam0, bParam4);
		}
		else
		{
			uParam1->f_7 = 0;
		}
		uParam1->f_8 = func_947(uParam0, bParam4);
		uParam1->f_9 = func_580(uParam0, bParam4);
		uParam1->f_10 = func_577(uParam0, bParam4);
		uParam1->f_11 = func_575(bParam4);
		if (func_935(uParam0, bParam4) != -2)
		{
			uParam1->f_12 = func_935(uParam0, bParam4);
			uParam1->f_13 = func_932(uParam0, bParam4);
		}
	}
}

int func_932(var uParam0, bool bParam1)
{
	switch (bParam1)
	{
		case 2:
			if (func_812(uParam0->f_1084))
			{
				return func_934(uParam0->f_1084);
			}
			return -1;
		
		case 3:
			return 8;
		
		case 4:
			return 4;
		
		case 5:
			return 6;
		
		case 6:
			return 6;
		
		case 7:
			if (func_933(uParam0->f_1084, 0, 0, 0) > 0 && func_874(uParam0->f_1084, 0, 0, 0) == func_933(uParam0->f_1084, 0, 0, 0))
			{
				return func_933(uParam0->f_1084, 0, 0, 0);
			}
			break;
		
		case 8:
			if (func_933(uParam0->f_1084, 1, 0, 0) > 0 && func_874(uParam0->f_1084, 1, 0, 0) == func_933(uParam0->f_1084, 1, 0, 0))
			{
				return func_933(uParam0->f_1084, 1, 0, 0);
			}
			break;
		
		case 9:
			if (func_933(uParam0->f_1084, 2, 0, 0) > 0 && func_874(uParam0->f_1084, 2, 0, 0) == func_933(uParam0->f_1084, 2, 0, 0))
			{
				return func_933(uParam0->f_1084, 2, 0, 0);
			}
			break;
		
		case 10:
			if (func_933(uParam0->f_1084, 3, 0, 0) > 0 && func_874(uParam0->f_1084, 3, 0, 0) == func_933(uParam0->f_1084, 3, 0, 0))
			{
				return func_933(uParam0->f_1084, 3, 0, 0);
			}
			break;
		
		case 11:
			if (func_933(uParam0->f_1084, 4, 0, 0) > 0 && func_874(uParam0->f_1084, 4, 0, 0) == func_933(uParam0->f_1084, 4, 0, 0))
			{
				return func_933(uParam0->f_1084, 4, 0, 0);
			}
			break;
		
		case 30:
			return 1;
		
		case 31:
			return 1;
		
		case 33:
			return 4;
		
		case 34:
			return 4;
		
		case 32:
			return 4;
		
		case 35:
			return 1;
		
		case 36:
			if (func_379(uParam0->f_1084, 5) || func_379(uParam0->f_1084, 6))
			{
				return 6;
			}
			return 5;
		
		case 37:
			if (!func_379(uParam0->f_1084, 7))
			{
				return 3;
			}
			return 4;
		
		case 38:
			return 1;
		
		case 39:
			return 3;
	}
	return -2;
}

int func_933(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 0:
				if (!bParam3)
				{
					bVar1 = false;
					while (bVar1 < 24)
					{
						if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_10.f_1, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				if (!bParam2)
				{
					bVar1 = false;
					while (bVar1 < 8)
					{
						if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_10.f_9, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				break;
			
			case 1:
				if (!bParam3)
				{
					bVar1 = false;
					while (bVar1 < 24)
					{
						if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_10.f_2, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				if (!bParam2)
				{
					bVar1 = false;
					while (bVar1 < 8)
					{
						if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_10.f_10, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				break;
			
			case 2:
				if (!bParam3)
				{
					bVar1 = false;
					while (bVar1 < 24)
					{
						if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_10.f_3, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				if (!bParam2)
				{
					bVar1 = false;
					while (bVar1 < 8)
					{
						if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_10.f_11, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				break;
			
			case 3:
				if (!bParam3)
				{
					bVar1 = false;
					while (bVar1 < 24)
					{
						if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_10.f_4, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				if (!bParam2)
				{
					bVar1 = false;
					while (bVar1 < 8)
					{
						if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_10.f_12, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				break;
			
			case 4:
				bVar1 = false;
				while (bVar1 < 7)
				{
					if (BitTest(Global_1975428[iParam0 /*53*/].f_5.f_10.f_17, bVar1))
					{
						iVar0++;
					}
					bVar1++;
				}
				break;
			}
	}
	return iVar0;
}

int func_934(int iParam0)
{
	int iVar0;
	
	if (iParam0 != -1)
	{
		iVar0 = (iVar0 + func_933(iParam0, 0, 0, 0));
		iVar0 = (iVar0 + func_933(iParam0, 1, 0, 0));
		iVar0 = (iVar0 + func_933(iParam0, 2, 0, 0));
		iVar0 = (iVar0 + func_933(iParam0, 3, 0, 0));
		iVar0 = (iVar0 + func_933(iParam0, 4, 0, 0));
	}
	return iVar0;
}

int func_935(var uParam0, bool bParam1)
{
	switch (bParam1)
	{
		case 2:
			if (func_812(uParam0->f_1084))
			{
				return func_934(uParam0->f_1084);
			}
			return -1;
		
		case 3:
			return func_946(uParam0);
		
		case 4:
			return func_945(uParam0);
		
		case 5:
			return func_944(uParam0);
		
		case 6:
			return func_943(uParam0);
		
		case 7:
			if (func_933(uParam0->f_1084, 0, 0, 0) > 0 && func_874(uParam0->f_1084, 0, 0, 0) == func_933(uParam0->f_1084, 0, 0, 0))
			{
				return func_933(uParam0->f_1084, 0, 0, 0);
			}
			break;
		
		case 8:
			if (func_933(uParam0->f_1084, 1, 0, 0) > 0 && func_874(uParam0->f_1084, 1, 0, 0) == func_933(uParam0->f_1084, 1, 0, 0))
			{
				return func_933(uParam0->f_1084, 1, 0, 0);
			}
			break;
		
		case 9:
			if (func_933(uParam0->f_1084, 2, 0, 0) > 0 && func_874(uParam0->f_1084, 2, 0, 0) == func_933(uParam0->f_1084, 2, 0, 0))
			{
				return func_933(uParam0->f_1084, 2, 0, 0);
			}
			break;
		
		case 10:
			if (func_933(uParam0->f_1084, 3, 0, 0) > 0 && func_874(uParam0->f_1084, 3, 0, 0) == func_933(uParam0->f_1084, 3, 0, 0))
			{
				return func_933(uParam0->f_1084, 3, 0, 0);
			}
			break;
		
		case 11:
			if (func_933(uParam0->f_1084, 4, 0, 0) > 0 && func_874(uParam0->f_1084, 4, 0, 0) == func_933(uParam0->f_1084, 4, 0, 0))
			{
				return func_933(uParam0->f_1084, 4, 0, 0);
			}
			break;
		
		case 30:
			return func_942(func_404(uParam0->f_1084));
		
		case 31:
			return func_942(func_402(uParam0->f_1084));
		
		case 33:
			return func_941(uParam0);
		
		case 34:
			return func_940(uParam0);
		
		case 32:
			return func_939(uParam0);
		
		case 35:
			return func_942(func_383(uParam0->f_1084));
		
		case 36:
			return func_938(uParam0);
		
		case 37:
			return func_937(uParam0);
		
		case 38:
			if (func_17(uParam0->f_1084, 13))
			{
				return 1;
			}
			return 0;
		
		case 39:
			return func_936(uParam0);
	}
	return -2;
}

int func_936(var uParam0)
{
	int iVar0;
	
	if (func_17(uParam0->f_1084, 14))
	{
		iVar0++;
	}
	if (func_17(uParam0->f_1084, 15))
	{
		iVar0++;
	}
	if (func_17(uParam0->f_1084, 16))
	{
		iVar0++;
	}
	return iVar0;
}

int func_937(var uParam0)
{
	int iVar0;
	
	if (func_17(uParam0->f_1084, 8))
	{
		iVar0++;
	}
	if (func_17(uParam0->f_1084, 9))
	{
		iVar0++;
	}
	if (func_17(uParam0->f_1084, 11))
	{
		iVar0++;
	}
	if (func_17(uParam0->f_1084, 12))
	{
		iVar0++;
	}
	return iVar0;
}

int func_938(var uParam0)
{
	int iVar0;
	
	if (func_17(uParam0->f_1084, 7))
	{
		iVar0++;
	}
	if (func_17(uParam0->f_1084, 1) && func_17(uParam0->f_1084, 6))
	{
		iVar0++;
	}
	if (func_17(uParam0->f_1084, 5))
	{
		iVar0++;
	}
	if (func_17(uParam0->f_1084, 2) && func_17(uParam0->f_1084, 6))
	{
		iVar0++;
	}
	if (func_17(uParam0->f_1084, 3))
	{
		iVar0++;
	}
	if (func_17(uParam0->f_1084, 4))
	{
		iVar0++;
	}
	return iVar0;
}

int func_939(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (func_397(uParam0->f_1084, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_940(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (func_385(uParam0->f_1084, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_941(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (func_391(uParam0->f_1084, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_942(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_943(var uParam0)
{
	int iVar0;
	
	if (func_809(uParam0->f_1084))
	{
		iVar0++;
	}
	if (func_808(uParam0->f_1084))
	{
		iVar0++;
	}
	if (func_807(uParam0->f_1084))
	{
		iVar0++;
	}
	if (func_383(uParam0->f_1084))
	{
		iVar0++;
	}
	if (func_404(uParam0->f_1084))
	{
		iVar0++;
	}
	if (func_402(uParam0->f_1084))
	{
		iVar0++;
	}
	return iVar0;
}

int func_944(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (func_375(uParam0->f_1084, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_945(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (func_377(uParam0->f_1084, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_946(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (func_379(uParam0->f_1084, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_947(var uParam0, bool bParam1)
{
	if (func_366(uParam0, bParam1))
	{
		return 0;
	}
	switch (bParam1)
	{
		case 37:
		case 38:
			return 1;
		
		case 36:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
			if (!func_581(uParam0->f_1084, 1))
			{
				return 1;
			}
			break;
		
		case 50:
		case 53:
			if (!func_17(uParam0->f_1084, 8) && !func_17(uParam0->f_1084, 9))
			{
				return 1;
			}
			break;
		
		case 51:
		case 52:
			return 1;
		
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			if (!func_17(uParam0->f_1084, 13))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_948(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			return 0;
		
		case 2:
			return 0;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return 1;
		
		case 8:
			return 1;
		
		case 9:
			return 1;
		
		case 10:
			return 1;
		
		case 11:
			return 1;
		
		case 12:
			return 1;
		
		case 13:
			return 1;
		
		case 14:
			return 1;
		
		case 15:
			return 1;
		
		case 16:
			return 1;
		
		case 17:
			return 1;
		
		case 18:
			return 1;
		
		case 19:
			return 1;
		
		case 20:
			return 1;
		
		case 21:
			return 1;
		
		case 22:
			return 1;
		
		case 23:
			return 1;
		
		case 30:
			return 1;
		
		case 31:
			return 1;
		
		case 32:
			return 1;
		
		case 33:
			return 1;
		
		case 34:
			return 1;
		
		case 35:
			return 1;
		
		case 24:
			return 1;
		
		case 25:
			return 1;
		
		case 26:
			return 1;
		
		case 27:
			return 1;
		
		case 28:
			return 1;
		
		case 29:
			return 1;
		
		case 36:
			return 1;
		
		case 37:
			return 1;
		
		case 38:
			return 1;
		
		case 39:
			return 1;
		
		case 40:
			return 1;
		
		case 41:
			return 1;
		
		case 42:
			return 1;
		
		case 43:
			return 1;
		
		case 44:
			return 1;
		
		case 45:
			return 1;
		
		case 46:
			return 1;
		
		case 47:
			return 1;
		
		case 48:
			return 1;
		
		case 49:
			return 1;
		
		case 50:
			return 1;
		
		case 53:
			return 1;
		
		case 51:
			return 1;
		
		case 52:
			return 1;
		
		case 54:
			return 1;
		
		case 55:
			return 1;
		
		case 56:
			return 1;
		
		case 57:
			return 1;
		
		case 58:
			return 1;
		
		case 59:
			return 1;
		
		case 60:
			return 1;
		
		case 61:
			return 1;
		
		case 62:
			return 1;
		
		default:
	}
	return 0;
}

int func_949(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			return 0;
		
		case 2:
			return 0;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return func_942(func_813(uParam0->f_1084, 0));
		
		case 8:
			return func_942(func_813(uParam0->f_1084, 1));
		
		case 9:
			return func_942(func_813(uParam0->f_1084, 2));
		
		case 10:
			return func_942(func_813(uParam0->f_1084, 3));
		
		case 11:
			return func_942(func_950(uParam0->f_1084));
		
		case 12:
			return func_942(func_379(uParam0->f_1084, 0));
		
		case 13:
			return func_942(func_379(uParam0->f_1084, 1));
		
		case 14:
			return func_942(func_379(uParam0->f_1084, 2));
		
		case 15:
			return func_942(func_379(uParam0->f_1084, 3));
		
		case 16:
			return func_942(func_379(uParam0->f_1084, 4));
		
		case 17:
			return func_942(func_379(uParam0->f_1084, 5));
		
		case 18:
			return func_942(func_379(uParam0->f_1084, 6));
		
		case 19:
			return func_942(func_379(uParam0->f_1084, 7));
		
		case 20:
			return func_942(func_377(uParam0->f_1084, 0));
		
		case 21:
			return func_942(func_377(uParam0->f_1084, 1));
		
		case 22:
			return func_942(func_377(uParam0->f_1084, 2));
		
		case 23:
			return func_942(func_377(uParam0->f_1084, 3));
		
		case 30:
			return func_942(func_404(uParam0->f_1084));
		
		case 31:
			return func_942(func_402(uParam0->f_1084));
		
		case 32:
			return func_942(func_809(uParam0->f_1084));
		
		case 33:
			return func_942(func_808(uParam0->f_1084));
		
		case 34:
			return func_942(func_807(uParam0->f_1084));
		
		case 35:
			return func_942(func_383(uParam0->f_1084));
		
		case 24:
			return func_942(func_375(uParam0->f_1084, 0));
		
		case 25:
			return func_942(func_375(uParam0->f_1084, 1));
		
		case 26:
			return func_942(func_375(uParam0->f_1084, 2));
		
		case 27:
			return func_942(func_375(uParam0->f_1084, 3));
		
		case 28:
			return func_942(func_375(uParam0->f_1084, 4));
		
		case 29:
			return func_942(func_375(uParam0->f_1084, 5));
		
		case 36:
			if (func_581(uParam0->f_1084, 1))
			{
				return 1;
			}
			break;
		
		case 37:
			if (((func_18(uParam0->f_1084, 8) || func_18(uParam0->f_1084, 9)) && func_18(uParam0->f_1084, 10)) && func_18(uParam0->f_1084, 11))
			{
				return 1;
			}
			break;
		
		case 38:
			if (func_18(uParam0->f_1084, 12))
			{
				return 1;
			}
			break;
		
		case 39:
			if ((func_18(uParam0->f_1084, 13) && func_18(uParam0->f_1084, 14)) && func_18(uParam0->f_1084, 15))
			{
				return 1;
			}
			break;
		
		case 40:
			return func_942(func_18(uParam0->f_1084, 1));
		
		case 41:
			if (func_18(uParam0->f_1084, 2) && func_18(uParam0->f_1084, 7))
			{
				return 1;
			}
			break;
		
		case 42:
			return func_942(func_18(uParam0->f_1084, 3));
		
		case 43:
			if (func_18(uParam0->f_1084, 4) && func_18(uParam0->f_1084, 7))
			{
				return 2;
			}
			break;
		
		case 44:
			return func_942(func_18(uParam0->f_1084, 5));
		
		case 45:
			return func_942(func_18(uParam0->f_1084, 6));
		
		case 46:
			return func_942(func_18(uParam0->f_1084, 2));
		
		case 47:
			return func_942(func_18(uParam0->f_1084, 7));
		
		case 48:
			return func_942(func_18(uParam0->f_1084, 4));
		
		case 49:
			return func_942(func_18(uParam0->f_1084, 7));
		
		case 50:
			return func_942(func_18(uParam0->f_1084, 8));
		
		case 53:
			return func_942(func_18(uParam0->f_1084, 9));
		
		case 51:
			return func_942(func_18(uParam0->f_1084, 10));
		
		case 52:
			return func_942(func_18(uParam0->f_1084, 11));
		
		case 54:
			return func_942((func_18(uParam0->f_1084, 12) && func_374(uParam0->f_1084) == 1));
		
		case 55:
			return func_942((func_18(uParam0->f_1084, 12) && func_374(uParam0->f_1084) == 2));
		
		case 56:
			return func_942((func_18(uParam0->f_1084, 12) && func_374(uParam0->f_1084) == 3));
		
		case 57:
			return func_942((func_18(uParam0->f_1084, 12) && func_374(uParam0->f_1084) == 4));
		
		case 58:
			return func_942((func_18(uParam0->f_1084, 12) && func_374(uParam0->f_1084) == 5));
		
		case 59:
			return func_942(func_411(uParam0->f_1084));
		
		case 60:
			return func_942(func_18(uParam0->f_1084, 13));
		
		case 61:
			return func_942(func_18(uParam0->f_1084, 14));
		
		case 62:
			return func_942(func_18(uParam0->f_1084, 15));
	}
	return 0;
}

int func_950(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_1975428[iParam0 /*53*/].f_5.f_10.f_17 == Global_1975428[iParam0 /*53*/].f_5.f_10.f_18;
	}
	return 0;
}

void func_951(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	func_931(uParam0, &(Local_107[0 /*14*/]), 0, 0, 1, 0);
	if (!func_17(uParam0->f_1084, 0) && !func_358(uParam0->f_1084))
	{
		return;
	}
	func_931(uParam0, &(Local_107[1 /*14*/]), 0, 0, 2, 0);
	func_931(uParam0, &(Local_107[2 /*14*/]), 0, 0, 3, 0);
	func_931(uParam0, &(Local_107[3 /*14*/]), 0, 0, 4, 0);
	func_931(uParam0, &(Local_107[4 /*14*/]), 0, 0, 5, 0);
	func_931(uParam0, &(Local_107[5 /*14*/]), 0, 0, 6, 0);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		bVar2 = (7 + iVar0);
		if (func_381(uParam0->f_1084, func_952(bVar2), 0, 0))
		{
			func_931(uParam0, &(Local_362[iVar1 /*14*/]), 0, 2, bVar2, 0);
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 0)
	{
		func_931(uParam0, &(Local_362[iVar1 /*14*/]), 0, 2, 7, 1);
	}
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		bVar2 = (12 + iVar0);
		if (func_379(uParam0->f_1084, func_380(bVar2)))
		{
			func_931(uParam0, &(Local_192[iVar1 /*14*/]), 0, 3, bVar2, 0);
			iVar1++;
		}
		iVar0++;
	}
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		bVar2 = (20 + iVar0);
		if (func_377(uParam0->f_1084, func_378(bVar2)))
		{
			func_931(uParam0, &(Local_305[iVar1 /*14*/]), 0, 4, bVar2, 0);
			iVar1++;
		}
		iVar0++;
	}
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		bVar2 = (24 + iVar0);
		if (func_375(uParam0->f_1084, func_376(bVar2)))
		{
			func_931(uParam0, &(Local_518[iVar1 /*14*/]), 0, 5, bVar2, 0);
			iVar1++;
		}
		iVar0++;
	}
	iVar1 = 0;
	if (func_404(uParam0->f_1084))
	{
		func_931(uParam0, &(Local_433[iVar1 /*14*/]), 0, 6, 30, 0);
		iVar1++;
	}
	if (func_402(uParam0->f_1084))
	{
		func_931(uParam0, &(Local_433[iVar1 /*14*/]), 0, 6, 31, 0);
		iVar1++;
	}
	if (func_396(uParam0->f_1084))
	{
		func_931(uParam0, &(Local_433[iVar1 /*14*/]), 0, 6, 32, 0);
		iVar1++;
	}
	if (func_390(uParam0->f_1084))
	{
		func_931(uParam0, &(Local_433[iVar1 /*14*/]), 0, 6, 33, 0);
		iVar1++;
	}
	if (func_384(uParam0->f_1084))
	{
		func_931(uParam0, &(Local_433[iVar1 /*14*/]), 0, 6, 34, 0);
		iVar1++;
	}
	if (func_383(uParam0->f_1084))
	{
		func_931(uParam0, &(Local_433[iVar1 /*14*/]), 0, 6, 35, 0);
		iVar1++;
	}
	if (iVar1 == 0)
	{
		func_931(uParam0, &(Local_433[iVar1 /*14*/]), 0, 6, 32, 1);
	}
}

int func_952(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 0;
		
		case 8:
			return 1;
		
		case 9:
			return 2;
		
		case 10:
			return 3;
		
		case 11:
			return 4;
		
		default:
	}
	return -1;
}

void func_953(var uParam0)
{
	if (iLocal_1428 == 4)
	{
		iLocal_1428 = 5;
	}
}

void func_954(var uParam0)
{
	if (iLocal_1428 == 0)
	{
		iLocal_1428 = 1;
	}
}

char* func_955()
{
	if (!func_358(iLocal_1438) && !func_17(iLocal_1438, 0))
	{
		return "HIP_PROMPT2";
	}
	return "HIP_PROMPT";
}

int func_956()
{
	if (iLocal_1428 > 0)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_AT_COORD(iLocal_1437, 1561.149f, 386.0429f, -49.68533f, 1f, 0.65f, 1f, false, true, 0) && func_957(ENTITY::GET_ENTITY_HEADING(iLocal_1437), 180f, 60f))
	{
		return 1;
	}
	return 0;
}

int func_957(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

int func_958()
{
	return func_227(PLAYER::PLAYER_ID());
}

int func_959()
{
	if (MISC::ABSF((GRAPHICS::_GET_ASPECT_RATIO(false) - 1.333333f)) < 0.1f)
	{
		return 0;
	}
	return 1;
}

int func_960()
{
	return 0;
}

Vector3 func_961()
{
	return func_962();
}

Vector3 func_962()
{
	return 1561.054f, 385.9017f, -50.6854f;
}

int func_963()
{
	return 0;
}

int func_964()
{
	return iLocal_1521;
}

void func_965(var uParam0)
{
	if (func_968(uParam0) || func_967())
	{
		if (!uParam0->f_1091 && !func_967())
		{
			func_966(uParam0, 5);
			uParam0->f_1091 = 1;
		}
		else if (uParam0->f_726 == 5 || func_967())
		{
			func_457(2);
			uParam0->f_1091 = 0;
		}
	}
}

void func_966(var uParam0, int iParam1)
{
	if (uParam0->f_726 != iParam1)
	{
		uParam0->f_726.f_1 = uParam0->f_726;
		MISC::SET_BIT(&(uParam0->f_726.f_4), uParam0->f_726.f_1);
		MISC::CLEAR_BIT(&(uParam0->f_726.f_3), uParam0->f_726.f_1);
		uParam0->f_726 = iParam1;
		if (uParam0->f_726 == 7)
		{
			uParam0->f_726 = 5;
		}
	}
}

int func_967()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	if (func_117() && func_68() == 1)
	{
		return 1;
	}
	if (Global_1973525.f_1095)
	{
		return 1;
	}
	return 0;
}

int func_968(var uParam0)
{
	if (BitTest(uParam0->f_1085, 7))
	{
		return 1;
	}
	if (BitTest(uParam0->f_1085, 8))
	{
		return 1;
	}
	if (func_969())
	{
		return 1;
	}
	if (Local_1439.f_31 != 0)
	{
		Call_Loc(Local_1439.f_31);
		if (StackVal)
		{
			return 1;
		}
	}
	return 0;
}

bool func_969()
{
	return Global_2714635.f_696;
}

void func_970()
{
	iLocal_1437 = PLAYER::PLAYER_PED_ID();
	iLocal_1438 = PLAYER::PLAYER_ID();
}

void func_971(var uParam0)
{
	func_982(uParam0);
	func_980();
	func_973();
	func_112();
	func_972();
	if (PLAYER::PLAYER_ID() != -1 && Global_1974627[PLAYER::PLAYER_ID() /*25*/].f_20)
	{
		Global_1974627[PLAYER::PLAYER_ID() /*25*/].f_20 = 0;
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_972()
{
	if (Global_1974625)
	{
		Global_1974625 = 0;
	}
	if (iLocal_1423)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("HS4F_INT");
	}
}

void func_973()
{
	func_979(&Global_1973525);
	func_978(&(Global_1973525.f_726));
	func_977(&(Global_1973525.f_732));
	func_976(&(Global_1973525.f_741));
	func_975(&(Global_1973525.f_806));
	func_974(&(Global_1973525.f_820));
	Global_1973525.f_1082 = -1;
	Global_1973525.f_1084 = func_15();
	Global_1973525.f_1085 = 0;
	Global_1973525.f_1094 = 0;
	Global_1973525.f_1083 = -1;
	Global_1973525.f_1095 = 0;
}

void func_974(var uParam0)
{
	struct<3> Var0;
	
	*uParam0 = { Var0 };
}

void func_975(var uParam0)
{
	struct<14> Var0;
	
	*uParam0 = { Var0 };
}

void func_976(var uParam0)
{
	struct<65> Var0;
	
	Var0.f_63 = 500;
	Var0.f_64 = 2;
	*uParam0 = { Var0 };
}

void func_977(var uParam0)
{
	struct<9> Var0;
	
	*uParam0 = { Var0 };
}

void func_978(var uParam0)
{
	struct<6> Var0;
	
	*uParam0 = { Var0 };
}

void func_979(var uParam0)
{
	struct<726> Var0;
	
	Var0.f_1 = 12;
	Var0.f_699 = 1065353216;
	Var0.f_701 = 1;
	Var0.f_702 = 1;
	*uParam0 = { Var0 };
}

void func_980()
{
	if (Local_1439.f_7 != 0)
	{
		Call_Loc(Local_1439.f_7);
		func_981(StackVal);
	}
}

void func_981(char* sParam0)
{
	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED(sParam0))
	{
		HUD::RELEASE_NAMED_RENDERTARGET(sParam0);
	}
}

void func_982(var uParam0)
{
	if (uParam0->f_1080)
	{
		if (uParam0->f_1080.f_1 != -1)
		{
			AUDIO::STOP_SOUND(uParam0->f_1080.f_1);
			AUDIO::RELEASE_SOUND_ID(uParam0->f_1080.f_1);
			uParam0->f_1080.f_1 = -1;
			uParam0->f_1080 = 0;
		}
	}
}

int func_983(var uParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (BitTest(uParam0->f_1085, 8))
	{
		MISC::CLEAR_BIT(&(uParam0->f_1085), 8);
	}
	if (BitTest(uParam0->f_1085, 9))
	{
		MISC::CLEAR_BIT(&(uParam0->f_1085), 9);
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_984();
	return 1;
}

void func_984()
{
	if (!Global_1974625)
	{
		Global_1974625 = 1;
	}
}

