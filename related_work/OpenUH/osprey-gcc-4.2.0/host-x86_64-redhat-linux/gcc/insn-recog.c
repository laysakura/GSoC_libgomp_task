/* Generated automatically by the program `genrecog' from the target
   machine description file.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"
#include "insn-config.h"
#include "recog.h"
#include "real.h"
#include "output.h"
#include "flags.h"
#include "hard-reg-set.h"
#include "resource.h"
#include "toplev.h"
#include "reload.h"
#include "tm-constrs.h"



/* `recog' contains a decision tree that recognizes whether the rtx
   X0 is a valid instruction.

   recog returns -1 if the rtx is not valid.  If the rtx is valid, recog
   returns a nonnegative number which is the insn code number for the
   pattern that matched.  This is the same as the order in the machine
   description of the entry that matched.  This number can be used as an
   index into `insn_data' and other tables.

   The third argument to recog is an optional pointer to an int.  If
   present, recog will accept a pattern if it matches except for missing
   CLOBBER expressions at the end.  In that case, the value pointed to by
   the optional pointer will be set to the number of CLOBBERs that need
   to be added (it should be initialized to zero by the caller).  If it
   is set nonzero, the caller should allocate a PARALLEL of the
   appropriate size, copy the initial entries, and call add_clobbers
   (found in insn-emit.c) to fill in the CLOBBERs.


   The function split_insns returns 0 if the rtl could not
   be split or the split rtl as an INSN list if it can be.

   The function peephole2_insns returns 0 if the rtl could not
   be matched. If there was a match, the new rtl is returned in an INSN list,
   and LAST_INSN will point to the last recognized insn in the old sequence.
*/


extern rtx gen_peephole2_1204 (rtx, rtx *);
extern rtx gen_peephole2_1205 (rtx, rtx *);
extern rtx gen_split_1206 (rtx, rtx *);
extern rtx gen_split_1207 (rtx, rtx *);
extern rtx gen_split_1208 (rtx, rtx *);
extern rtx gen_peephole2_1209 (rtx, rtx *);
extern rtx gen_peephole2_1210 (rtx, rtx *);
extern rtx gen_split_1211 (rtx, rtx *);
extern rtx gen_split_1213 (rtx, rtx *);
extern rtx gen_split_1215 (rtx, rtx *);
extern rtx gen_split_1216 (rtx, rtx *);
extern rtx gen_split_1217 (rtx, rtx *);
extern rtx gen_split_1219 (rtx, rtx *);
extern rtx gen_split_1220 (rtx, rtx *);
extern rtx gen_split_1221 (rtx, rtx *);
extern rtx gen_split_1222 (rtx, rtx *);
extern rtx gen_split_1224 (rtx, rtx *);
extern rtx gen_split_1225 (rtx, rtx *);
extern rtx gen_split_1226 (rtx, rtx *);
extern rtx gen_split_1227 (rtx, rtx *);
extern rtx gen_split_1228 (rtx, rtx *);
extern rtx gen_split_1230 (rtx, rtx *);
extern rtx gen_split_1232 (rtx, rtx *);
extern rtx gen_split_1234 (rtx, rtx *);
extern rtx gen_split_1235 (rtx, rtx *);
extern rtx gen_split_1236 (rtx, rtx *);
extern rtx gen_split_1238 (rtx, rtx *);
extern rtx gen_split_1239 (rtx, rtx *);
extern rtx gen_split_1240 (rtx, rtx *);
extern rtx gen_split_1242 (rtx, rtx *);
extern rtx gen_split_1243 (rtx, rtx *);
extern rtx gen_split_1244 (rtx, rtx *);
extern rtx gen_split_1246 (rtx, rtx *);
extern rtx gen_split_1247 (rtx, rtx *);
extern rtx gen_split_1248 (rtx, rtx *);
extern rtx gen_split_1249 (rtx, rtx *);
extern rtx gen_split_1250 (rtx, rtx *);
extern rtx gen_split_1251 (rtx, rtx *);
extern rtx gen_split_1252 (rtx, rtx *);
extern rtx gen_split_1253 (rtx, rtx *);
extern rtx gen_split_1254 (rtx, rtx *);
extern rtx gen_split_1260 (rtx, rtx *);
extern rtx gen_split_1262 (rtx, rtx *);
extern rtx gen_split_1263 (rtx, rtx *);
extern rtx gen_split_1265 (rtx, rtx *);
extern rtx gen_split_1266 (rtx, rtx *);
extern rtx gen_peephole2_1276 (rtx, rtx *);
extern rtx gen_peephole2_1277 (rtx, rtx *);
extern rtx gen_peephole2_1278 (rtx, rtx *);
extern rtx gen_peephole2_1279 (rtx, rtx *);
extern rtx gen_split_1280 (rtx, rtx *);
extern rtx gen_split_1281 (rtx, rtx *);
extern rtx gen_split_1282 (rtx, rtx *);
extern rtx gen_split_1283 (rtx, rtx *);
extern rtx gen_split_1284 (rtx, rtx *);
extern rtx gen_split_1285 (rtx, rtx *);
extern rtx gen_split_1286 (rtx, rtx *);
extern rtx gen_split_1287 (rtx, rtx *);
extern rtx gen_split_1288 (rtx, rtx *);
extern rtx gen_split_1289 (rtx, rtx *);
extern rtx gen_split_1290 (rtx, rtx *);
extern rtx gen_split_1291 (rtx, rtx *);
extern rtx gen_split_1292 (rtx, rtx *);
extern rtx gen_split_1293 (rtx, rtx *);
extern rtx gen_split_1294 (rtx, rtx *);
extern rtx gen_split_1295 (rtx, rtx *);
extern rtx gen_split_1296 (rtx, rtx *);
extern rtx gen_split_1297 (rtx, rtx *);
extern rtx gen_split_1304 (rtx, rtx *);
extern rtx gen_split_1309 (rtx, rtx *);
extern rtx gen_split_1311 (rtx, rtx *);
extern rtx gen_split_1313 (rtx, rtx *);
extern rtx gen_split_1314 (rtx, rtx *);
extern rtx gen_split_1315 (rtx, rtx *);
extern rtx gen_split_1316 (rtx, rtx *);
extern rtx gen_split_1317 (rtx, rtx *);
extern rtx gen_split_1318 (rtx, rtx *);
extern rtx gen_split_1319 (rtx, rtx *);
extern rtx gen_split_1320 (rtx, rtx *);
extern rtx gen_split_1321 (rtx, rtx *);
extern rtx gen_split_1328 (rtx, rtx *);
extern rtx gen_split_1330 (rtx, rtx *);
extern rtx gen_split_1358 (rtx, rtx *);
extern rtx gen_split_1360 (rtx, rtx *);
extern rtx gen_split_1361 (rtx, rtx *);
extern rtx gen_split_1362 (rtx, rtx *);
extern rtx gen_split_1367 (rtx, rtx *);
extern rtx gen_split_1368 (rtx, rtx *);
extern rtx gen_split_1369 (rtx, rtx *);
extern rtx gen_split_1372 (rtx, rtx *);
extern rtx gen_split_1373 (rtx, rtx *);
extern rtx gen_split_1374 (rtx, rtx *);
extern rtx gen_split_1377 (rtx, rtx *);
extern rtx gen_split_1378 (rtx, rtx *);
extern rtx gen_split_1383 (rtx, rtx *);
extern rtx gen_split_1384 (rtx, rtx *);
extern rtx gen_split_1390 (rtx, rtx *);
extern rtx gen_split_1391 (rtx, rtx *);
extern rtx gen_split_1393 (rtx, rtx *);
extern rtx gen_split_1395 (rtx, rtx *);
extern rtx gen_split_1402 (rtx, rtx *);
extern rtx gen_split_1403 (rtx, rtx *);
extern rtx gen_split_1407 (rtx, rtx *);
extern rtx gen_split_1408 (rtx, rtx *);
extern rtx gen_split_1411 (rtx, rtx *);
extern rtx gen_split_1412 (rtx, rtx *);
extern rtx gen_split_1413 (rtx, rtx *);
extern rtx gen_split_1414 (rtx, rtx *);
extern rtx gen_split_1415 (rtx, rtx *);
extern rtx gen_split_1416 (rtx, rtx *);
extern rtx gen_split_1418 (rtx, rtx *);
extern rtx gen_split_1420 (rtx, rtx *);
extern rtx gen_split_1421 (rtx, rtx *);
extern rtx gen_split_1423 (rtx, rtx *);
extern rtx gen_split_1425 (rtx, rtx *);
extern rtx gen_split_1427 (rtx, rtx *);
extern rtx gen_split_1428 (rtx, rtx *);
extern rtx gen_split_1431 (rtx, rtx *);
extern rtx gen_peephole2_1432 (rtx, rtx *);
extern rtx gen_split_1433 (rtx, rtx *);
extern rtx gen_split_1437 (rtx, rtx *);
extern rtx gen_split_1438 (rtx, rtx *);
extern rtx gen_split_1439 (rtx, rtx *);
extern rtx gen_split_1443 (rtx, rtx *);
extern rtx gen_split_1444 (rtx, rtx *);
extern rtx gen_peephole2_1446 (rtx, rtx *);
extern rtx gen_split_1447 (rtx, rtx *);
extern rtx gen_split_1453 (rtx, rtx *);
extern rtx gen_split_1454 (rtx, rtx *);
extern rtx gen_peephole2_1456 (rtx, rtx *);
extern rtx gen_split_1457 (rtx, rtx *);
extern rtx gen_split_1462 (rtx, rtx *);
extern rtx gen_split_1467 (rtx, rtx *);
extern rtx gen_peephole2_1474 (rtx, rtx *);
extern rtx gen_peephole2_1475 (rtx, rtx *);
extern rtx gen_peephole2_1476 (rtx, rtx *);
extern rtx gen_split_1495 (rtx, rtx *);
extern rtx gen_split_1496 (rtx, rtx *);
extern rtx gen_split_1497 (rtx, rtx *);
extern rtx gen_split_1498 (rtx, rtx *);
extern rtx gen_split_1517 (rtx, rtx *);
extern rtx gen_split_1518 (rtx, rtx *);
extern rtx gen_split_1519 (rtx, rtx *);
extern rtx gen_split_1520 (rtx, rtx *);
extern rtx gen_split_1521 (rtx, rtx *);
extern rtx gen_split_1522 (rtx, rtx *);
extern rtx gen_split_1523 (rtx, rtx *);
extern rtx gen_split_1524 (rtx, rtx *);
extern rtx gen_peephole2_1527 (rtx, rtx *);
extern rtx gen_peephole2_1528 (rtx, rtx *);
extern rtx gen_split_1541 (rtx, rtx *);
extern rtx gen_split_1542 (rtx, rtx *);
extern rtx gen_split_1544 (rtx, rtx *);
extern rtx gen_split_1545 (rtx, rtx *);
extern rtx gen_split_1547 (rtx, rtx *);
extern rtx gen_split_1554 (rtx, rtx *);
extern rtx gen_split_1556 (rtx, rtx *);
extern rtx gen_split_1558 (rtx, rtx *);
extern rtx gen_split_1559 (rtx, rtx *);
extern rtx gen_split_1560 (rtx, rtx *);
extern rtx gen_split_1561 (rtx, rtx *);
extern rtx gen_split_1562 (rtx, rtx *);
extern rtx gen_split_1571 (rtx, rtx *);
extern rtx gen_split_1572 (rtx, rtx *);
extern rtx gen_split_1573 (rtx, rtx *);
extern rtx gen_split_1574 (rtx, rtx *);
extern rtx gen_split_1575 (rtx, rtx *);
extern rtx gen_split_1576 (rtx, rtx *);
extern rtx gen_split_1577 (rtx, rtx *);
extern rtx gen_split_1578 (rtx, rtx *);
extern rtx gen_peephole2_1579 (rtx, rtx *);
extern rtx gen_peephole2_1581 (rtx, rtx *);
extern rtx gen_peephole2_1583 (rtx, rtx *);
extern rtx gen_split_1631 (rtx, rtx *);
extern rtx gen_split_1632 (rtx, rtx *);
extern rtx gen_split_1633 (rtx, rtx *);
extern rtx gen_split_1634 (rtx, rtx *);
extern rtx gen_split_1635 (rtx, rtx *);
extern rtx gen_split_1636 (rtx, rtx *);
extern rtx gen_split_1637 (rtx, rtx *);
extern rtx gen_split_1638 (rtx, rtx *);
extern rtx gen_split_1639 (rtx, rtx *);
extern rtx gen_split_1643 (rtx, rtx *);
extern rtx gen_split_1647 (rtx, rtx *);
extern rtx gen_split_1648 (rtx, rtx *);
extern rtx gen_split_1649 (rtx, rtx *);
extern rtx gen_split_1650 (rtx, rtx *);
extern rtx gen_split_1651 (rtx, rtx *);
extern rtx gen_split_1652 (rtx, rtx *);
extern rtx gen_split_1653 (rtx, rtx *);
extern rtx gen_split_1654 (rtx, rtx *);
extern rtx gen_split_1655 (rtx, rtx *);
extern rtx gen_split_1659 (rtx, rtx *);
extern rtx gen_split_1663 (rtx, rtx *);
extern rtx gen_split_1664 (rtx, rtx *);
extern rtx gen_split_1665 (rtx, rtx *);
extern rtx gen_split_1666 (rtx, rtx *);
extern rtx gen_split_1667 (rtx, rtx *);
extern rtx gen_split_1668 (rtx, rtx *);
extern rtx gen_split_1669 (rtx, rtx *);
extern rtx gen_split_1670 (rtx, rtx *);
extern rtx gen_split_1671 (rtx, rtx *);
extern rtx gen_split_1675 (rtx, rtx *);
extern rtx gen_split_1679 (rtx, rtx *);
extern rtx gen_peephole2_1700 (rtx, rtx *);
extern rtx gen_peephole2_1701 (rtx, rtx *);
extern rtx gen_split_1706 (rtx, rtx *);
extern rtx gen_split_1709 (rtx, rtx *);
extern rtx gen_peephole2_1711 (rtx, rtx *);
extern rtx gen_split_1721 (rtx, rtx *);
extern rtx gen_split_1722 (rtx, rtx *);
extern rtx gen_split_1723 (rtx, rtx *);
extern rtx gen_split_1724 (rtx, rtx *);
extern rtx gen_split_1725 (rtx, rtx *);
extern rtx gen_split_1726 (rtx, rtx *);
extern rtx gen_peephole2_1727 (rtx, rtx *);
extern rtx gen_peephole2_1728 (rtx, rtx *);
extern rtx gen_peephole2_1729 (rtx, rtx *);
extern rtx gen_peephole2_1730 (rtx, rtx *);
extern rtx gen_peephole2_1731 (rtx, rtx *);
extern rtx gen_peephole2_1732 (rtx, rtx *);
extern rtx gen_peephole2_1733 (rtx, rtx *);
extern rtx gen_peephole2_1734 (rtx, rtx *);
extern rtx gen_peephole2_1735 (rtx, rtx *);
extern rtx gen_peephole2_1736 (rtx, rtx *);
extern rtx gen_peephole2_1737 (rtx, rtx *);
extern rtx gen_peephole2_1738 (rtx, rtx *);
extern rtx gen_peephole2_1739 (rtx, rtx *);
extern rtx gen_peephole2_1740 (rtx, rtx *);
extern rtx gen_peephole2_1741 (rtx, rtx *);
extern rtx gen_peephole2_1742 (rtx, rtx *);
extern rtx gen_peephole2_1743 (rtx, rtx *);
extern rtx gen_peephole2_1744 (rtx, rtx *);
extern rtx gen_peephole2_1745 (rtx, rtx *);
extern rtx gen_peephole2_1746 (rtx, rtx *);
extern rtx gen_peephole2_1747 (rtx, rtx *);
extern rtx gen_peephole2_1748 (rtx, rtx *);
extern rtx gen_peephole2_1749 (rtx, rtx *);
extern rtx gen_peephole2_1750 (rtx, rtx *);
extern rtx gen_peephole2_1751 (rtx, rtx *);
extern rtx gen_peephole2_1752 (rtx, rtx *);
extern rtx gen_peephole2_1753 (rtx, rtx *);
extern rtx gen_peephole2_1754 (rtx, rtx *);
extern rtx gen_peephole2_1755 (rtx, rtx *);
extern rtx gen_peephole2_1756 (rtx, rtx *);
extern rtx gen_peephole2_1757 (rtx, rtx *);
extern rtx gen_peephole2_1758 (rtx, rtx *);
extern rtx gen_peephole2_1759 (rtx, rtx *);
extern rtx gen_peephole2_1760 (rtx, rtx *);
extern rtx gen_peephole2_1761 (rtx, rtx *);
extern rtx gen_peephole2_1762 (rtx, rtx *);
extern rtx gen_peephole2_1763 (rtx, rtx *);
extern rtx gen_peephole2_1764 (rtx, rtx *);
extern rtx gen_peephole2_1765 (rtx, rtx *);
extern rtx gen_peephole2_1766 (rtx, rtx *);
extern rtx gen_peephole2_1767 (rtx, rtx *);
extern rtx gen_peephole2_1768 (rtx, rtx *);
extern rtx gen_peephole2_1769 (rtx, rtx *);
extern rtx gen_peephole2_1770 (rtx, rtx *);
extern rtx gen_peephole2_1771 (rtx, rtx *);
extern rtx gen_peephole2_1772 (rtx, rtx *);
extern rtx gen_peephole2_1773 (rtx, rtx *);
extern rtx gen_peephole2_1774 (rtx, rtx *);
extern rtx gen_peephole2_1775 (rtx, rtx *);
extern rtx gen_peephole2_1776 (rtx, rtx *);
extern rtx gen_peephole2_1777 (rtx, rtx *);
extern rtx gen_peephole2_1778 (rtx, rtx *);
extern rtx gen_peephole2_1779 (rtx, rtx *);
extern rtx gen_peephole2_1780 (rtx, rtx *);
extern rtx gen_peephole2_1781 (rtx, rtx *);
extern rtx gen_peephole2_1782 (rtx, rtx *);
extern rtx gen_peephole2_1783 (rtx, rtx *);
extern rtx gen_peephole2_1784 (rtx, rtx *);
extern rtx gen_peephole2_1785 (rtx, rtx *);
extern rtx gen_peephole2_1786 (rtx, rtx *);
extern rtx gen_peephole2_1787 (rtx, rtx *);
extern rtx gen_peephole2_1788 (rtx, rtx *);
extern rtx gen_peephole2_1789 (rtx, rtx *);
extern rtx gen_split_1799 (rtx, rtx *);
extern rtx gen_split_1801 (rtx, rtx *);
extern rtx gen_split_1831 (rtx, rtx *);
extern rtx gen_split_1833 (rtx, rtx *);
extern rtx gen_split_1851 (rtx, rtx *);
extern rtx gen_split_1853 (rtx, rtx *);
extern rtx gen_split_1854 (rtx, rtx *);
extern rtx gen_split_1855 (rtx, rtx *);
extern rtx gen_split_1856 (rtx, rtx *);
extern rtx gen_split_1925 (rtx, rtx *);
extern rtx gen_split_1927 (rtx, rtx *);
extern rtx gen_split_1948 (rtx, rtx *);
extern rtx gen_split_1949 (rtx, rtx *);
extern rtx gen_split_1950 (rtx, rtx *);
extern rtx gen_split_1951 (rtx, rtx *);
extern rtx gen_split_1962 (rtx, rtx *);
extern rtx gen_split_1963 (rtx, rtx *);
extern rtx gen_split_1969 (rtx, rtx *);
extern rtx gen_split_1970 (rtx, rtx *);



static int
recog_1 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  switch (GET_CODE (x1))
    {
    case MEM:
      goto L15650;
    case REG:
      goto L15651;
    default:
     break;
   }
 L15538: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L139;
    }
 L15546: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L941;
    }
 L15547: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == MEM)
    goto L326;
  if (register_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L331;
    }
 L15577: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L964;
    }
 L15580: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L1056;
    }
  goto ret0;

 L15650: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L314;
    }
  goto L15546;

 L314: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (nonmemory_no_elim_operand (x1, HImode))
    {
      operands[1] = x1;
      goto L315;
    }
  x1 = XEXP (x0, 0);
  goto L15546;

 L315: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1289 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT))
    {
      return 44;  /* *pushhi2 */
    }
 L319: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1298 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT))
    {
      return 45;  /* *pushhi2_rex64 */
    }
  x1 = XEXP (x0, 0);
  goto L15546;

 L15651: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 0) == 18)
    goto L1181;
  goto L15538;

 L1181: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 25)
    goto L1182;
  x1 = XEXP (x0, 0);
  goto L15538;

 L1182: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (memory_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L1183;
    }
  x1 = XEXP (x0, 0);
  goto L15538;

 L1183: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4437 "../.././gcc/config/i386/i386.md"
(TARGET_80387))
    {
      return 165;  /* x86_fldcw_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15538;

 L139: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 21)
    goto L140;
  x1 = XEXP (x0, 0);
  goto L15546;

 L140: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case CCFPmode:
      goto L15652;
    case CCFPUmode:
      goto L15653;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L15546;

 L15652: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case COMPARE:
      goto L148;
    case REG:
      goto L15655;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L15546;

 L148: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SFmode:
      goto L15656;
    case DFmode:
      goto L15657;
    case XFmode:
      goto L15658;
    default:
      break;
    }
 L141: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L177;
    }
  x1 = XEXP (x0, 0);
  goto L15546;

 L15656: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L149;
    }
  goto L141;

 L149: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L150;
    }
  x3 = XEXP (x2, 0);
  goto L141;

 L150: ATTRIBUTE_UNUSED_LABEL
  if (
#line 880 "../.././gcc/config/i386/i386.md"
(TARGET_80387))
    {
      return 19;  /* *cmpfp_sf */
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  goto L141;

 L15657: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L156;
    }
  goto L141;

 L156: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L157;
    }
  x3 = XEXP (x2, 0);
  goto L141;

 L157: ATTRIBUTE_UNUSED_LABEL
  if (
#line 893 "../.././gcc/config/i386/i386.md"
(TARGET_80387))
    {
      return 20;  /* *cmpfp_df */
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  goto L141;

 L15658: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L163;
    }
  goto L141;

 L163: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, XFmode))
    {
      operands[2] = x3;
      goto L164;
    }
  x3 = XEXP (x2, 0);
  goto L141;

 L164: ATTRIBUTE_UNUSED_LABEL
  if (
#line 906 "../.././gcc/config/i386/i386.md"
(TARGET_80387))
    {
      return 21;  /* *cmpfp_xf */
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  goto L141;

 L177: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (float_operator (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L178;
    }
  if (const0_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L143;
    }
  x1 = XEXP (x0, 0);
  goto L15546;

 L178: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  switch (GET_MODE (x4))
    {
    case HImode:
      goto L15659;
    case SImode:
      goto L15660;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L15546;

 L15659: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L179;
    }
  x1 = XEXP (x0, 0);
  goto L15546;

 L179: ATTRIBUTE_UNUSED_LABEL
  if (
#line 941 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_HIMODE_FIOP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && (GET_MODE (operands [3]) == GET_MODE (operands[1]))))
    {
      return 23;  /* *cmpfp_hi */
    }
  x1 = XEXP (x0, 0);
  goto L15546;

 L15660: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L187;
    }
  x1 = XEXP (x0, 0);
  goto L15546;

 L187: ATTRIBUTE_UNUSED_LABEL
  if (
#line 941 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_SIMODE_FIOP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && (GET_MODE (operands [3]) == GET_MODE (operands[1]))))
    {
      return 24;  /* *cmpfp_si */
    }
  x1 = XEXP (x0, 0);
  goto L15546;

 L143: ATTRIBUTE_UNUSED_LABEL
  if (
#line 859 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])))
    {
      return 18;  /* *cmpfp_0 */
    }
  x1 = XEXP (x0, 0);
  goto L15546;

 L15655: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 18
      && 
#line 956 "../.././gcc/config/i386/i386.md"
(TARGET_80387))
    {
      return 25;  /* x86_fnstsw_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15546;

 L15653: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == COMPARE)
    goto L169;
  x1 = XEXP (x0, 0);
  goto L15546;

 L169: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L170;
    }
  x1 = XEXP (x0, 0);
  goto L15546;

 L170: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L171;
    }
  x1 = XEXP (x0, 0);
  goto L15546;

 L171: ATTRIBUTE_UNUSED_LABEL
  if (
#line 919 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])))
    {
      return 22;  /* *cmpfp_u */
    }
  x1 = XEXP (x0, 0);
  goto L15546;

 L941: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode
      && GET_CODE (x1) == FIX)
    goto L942;
  if (general_operand (x1, HImode))
    {
      operands[1] = x1;
      goto L323;
    }
  x1 = XEXP (x0, 0);
  goto L15547;

 L942: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L943;
    }
  x1 = XEXP (x0, 0);
  goto L15547;

 L943: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4205 "../.././gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress)))
    {
      return 146;  /* fix_trunchi_fisttp_i387_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15547;

 L323: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1306 "../.././gcc/config/i386/i386.md"
(GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    {
      return 46;  /* *movhi_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15547;

 L326: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (x86_64_movabs_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L327;
    }
  goto L15577;

 L327: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (nonmemory_operand (x1, HImode))
    {
      operands[1] = x1;
      goto L328;
    }
  x1 = XEXP (x0, 0);
  goto L15577;

 L328: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1360 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_check_movabs (insn, 0)))
    {
      return 47;  /* *movabshi_1_rex64 */
    }
  x1 = XEXP (x0, 0);
  goto L15577;

 L331: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode)
    goto L15661;
  x1 = XEXP (x0, 0);
  goto L15577;

 L15661: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case MEM:
      goto L332;
    case SIGN_EXTRACT:
      goto L417;
    case ZERO_EXTEND:
      goto L677;
    case SIGN_EXTEND:
      goto L795;
    case MULT:
      goto L2359;
    case UNSPEC:
      goto L15668;
    case IF_THEN_ELSE:
      goto L9004;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L15577;

 L332: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (x86_64_movabs_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L333;
    }
  x1 = XEXP (x0, 0);
  goto L15577;

 L333: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1374 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_check_movabs (insn, 1)))
    {
      return 48;  /* *movabshi_2_rex64 */
    }
  x1 = XEXP (x0, 0);
  goto L15577;

 L417: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (ext_register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L418;
    }
  x1 = XEXP (x0, 0);
  goto L15577;

 L418: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L419;
  x1 = XEXP (x0, 0);
  goto L15577;

 L419: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    {
      return 61;  /* *movhi_extv_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15577;

 L677: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L678;
    }
  x1 = XEXP (x0, 0);
  goto L15577;

 L678: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3028 "../.././gcc/config/i386/i386.md"
(TARGET_ZERO_EXTEND_WITH_AND && !optimize_size)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 104;  /* *zero_extendqihi2_and */
    }
 L690: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3037 "../.././gcc/config/i386/i386.md"
(!TARGET_ZERO_EXTEND_WITH_AND || optimize_size)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 105;  /* *zero_extendqihi2_movzbw_and */
    }
 L695: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3046 "../.././gcc/config/i386/i386.md"
((!TARGET_ZERO_EXTEND_WITH_AND || optimize_size) && reload_completed))
    {
      return 106;  /* *zero_extendqihi2_movzbl */
    }
  x1 = XEXP (x0, 0);
  goto L15577;

 L795: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      return 120;  /* extendqihi2 */
    }
  x1 = XEXP (x0, 0);
  goto L15577;

 L2359: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == HImode)
    goto L15670;
  x1 = XEXP (x0, 0);
  goto L15577;

 L15670: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L2390;
    case SIGN_EXTEND:
      goto L2408;
    case REG:
    case SUBREG:
    case MEM:
      goto L15669;
    default:
      x1 = XEXP (x0, 0);
      goto L15577;
   }
 L15669: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L2360;
    }
  x1 = XEXP (x0, 0);
  goto L15577;

 L2390: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L2391;
    }
  x1 = XEXP (x0, 0);
  goto L15577;

 L2391: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L2392;
  x1 = XEXP (x0, 0);
  goto L15577;

 L2392: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L2393;
    }
  x1 = XEXP (x0, 0);
  goto L15577;

 L2393: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7011 "../.././gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 260;  /* *umulqihi3_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15577;

 L2408: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L2409;
    }
  x1 = XEXP (x0, 0);
  goto L15577;

 L2409: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == SIGN_EXTEND)
    goto L2410;
  x1 = XEXP (x0, 0);
  goto L15577;

 L2410: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L2411;
    }
  x1 = XEXP (x0, 0);
  goto L15577;

 L2411: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7035 "../.././gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 261;  /* *mulqihi3_insn */
    }
  x1 = XEXP (x0, 0);
  goto L15577;

 L2360: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L2361;
    }
  x1 = XEXP (x0, 0);
  goto L15577;

 L2361: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6957 "../.././gcc/config/i386/i386.md"
(GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 258;  /* *mulhi3_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15577;

 L15668: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 66)
    goto L7983;
  x1 = XEXP (x0, 0);
  goto L15577;

 L7983: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L7984;
    }
  x1 = XEXP (x0, 0);
  goto L15577;

 L7984: ATTRIBUTE_UNUSED_LABEL
  if (
#line 17278 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress)))
    {
      return 670;  /* *fisthi2_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15577;

 L9004: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (ix86_comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L9005;
    }
  x1 = XEXP (x0, 0);
  goto L15577;

 L9005: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 17)
    goto L9006;
  x1 = XEXP (x0, 0);
  goto L15577;

 L9006: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L9007;
  x1 = XEXP (x0, 0);
  goto L15577;

 L9007: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L9008;
    }
  x1 = XEXP (x0, 0);
  goto L15577;

 L9008: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L9009;
    }
  x1 = XEXP (x0, 0);
  goto L15577;

 L9009: ATTRIBUTE_UNUSED_LABEL
  if (
#line 18980 "../.././gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM)))
    {
      return 737;  /* *movhicc_noc */
    }
  x1 = XEXP (x0, 0);
  goto L15577;

 L964: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode)
    goto L15672;
  x1 = XEXP (x0, 0);
  goto L15580;

 L15672: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case FIX:
      goto L965;
    case UNSPEC:
      goto L15675;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L15580;

 L965: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L966;
    }
  x1 = XEXP (x0, 0);
  goto L15580;

 L966: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4233 "../.././gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 149;  /* fix_trunchi_i387_fisttp */
    }
  x1 = XEXP (x0, 0);
  goto L15580;

 L15675: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1)
    goto L15677;
  x1 = XEXP (x0, 0);
  goto L15580;

 L15677: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 23LL:
      goto L1178;
    case 66LL:
      goto L7993;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L15580;

 L1178: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 18
      && 
#line 4428 "../.././gcc/config/i386/i386.md"
(TARGET_80387))
    {
      return 164;  /* x86_fnstcw_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15580;

 L7993: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L7994;
    }
  x1 = XEXP (x0, 0);
  goto L15580;

 L7994: ATTRIBUTE_UNUSED_LABEL
  if (
#line 17297 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
    {
      return 672;  /* fisthi2 */
    }
  x1 = XEXP (x0, 0);
  goto L15580;

 L1056: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode)
    goto L15679;
  goto ret0;

 L15679: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case FIX:
      goto L1057;
    case PLUS:
      goto L1357;
    case MINUS:
      goto L2089;
    case AND:
      goto L3168;
    case IOR:
      goto L3550;
    case XOR:
      goto L3933;
    case NEG:
      goto L4317;
    case NOT:
      goto L4643;
    case ASHIFT:
      goto L4897;
    case ASHIFTRT:
      goto L5393;
    case LSHIFTRT:
      goto L5889;
    case ROTATE:
      goto L6206;
    case ROTATERT:
      goto L6399;
    case UNSPEC:
      goto L15694;
    default:
     break;
   }
  goto ret0;

 L1057: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L1058;
    }
  goto ret0;

 L1058: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4286 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
   && !(reload_completed || reload_in_progress))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 155;  /* *fix_trunchi_i387_1 */
    }
  goto ret0;

 L1357: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == HImode)
    goto L15696;
  goto ret0;

 L15696: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L1358;
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1705;
    }
  goto ret0;

 L1358: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ix86_carry_flag_operator (x3, HImode))
    {
      operands[3] = x3;
      goto L1359;
    }
  goto ret0;

 L1359: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1360;
    }
  goto ret0;

 L1360: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L1361;
    }
  goto ret0;

 L1361: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4863 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 188;  /* addhi3_carry */
    }
  goto ret0;

 L1705: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L1706;
    }
  goto ret0;

 L1706: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5822 "../.././gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 216;  /* *addhi_1_lea */
    }
 L1720: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5865 "../.././gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 217;  /* *addhi_1 */
    }
  goto ret0;

 L2089: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L2090;
    }
  goto ret0;

 L2090: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == PLUS)
    goto L2091;
  if (general_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L2225;
    }
  goto ret0;

 L2091: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ix86_carry_flag_operator (x3, HImode))
    {
      operands[3] = x3;
      goto L2092;
    }
  goto ret0;

 L2092: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L2093;
    }
  goto ret0;

 L2093: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6616 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 239;  /* subhi3_carry */
    }
  goto ret0;

 L2225: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6745 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 248;  /* *subhi_1 */
    }
  goto ret0;

 L3168: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L3169;
    }
  goto ret0;

 L3169: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L3170;
    }
  goto ret0;

 L3170: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8243 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 303;  /* *andhi_1 */
    }
  goto ret0;

 L3550: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L3551;
    }
  goto ret0;

 L3551: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L3552;
    }
  goto ret0;

 L3552: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8669 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 325;  /* *iorhi_1 */
    }
  goto ret0;

 L3933: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L3934;
    }
  goto ret0;

 L3934: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L3935;
    }
  goto ret0;

 L3935: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9046 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 347;  /* *xorhi_1 */
    }
  goto ret0;

 L4317: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L4318;
    }
  goto ret0;

 L4318: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9497 "../.././gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 369;  /* *neghi2_1 */
    }
  goto ret0;

 L4643: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L4644;
    }
  goto ret0;

 L4644: ATTRIBUTE_UNUSED_LABEL
  if (
#line 10145 "../.././gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, HImode, operands)))
    {
      return 402;  /* *one_cmplhi2_1 */
    }
  goto ret0;

 L4897: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L4898;
    }
  goto ret0;

 L4898: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L4899;
    }
  goto ret0;

 L4899: ATTRIBUTE_UNUSED_LABEL
  if (
#line 10861 "../.././gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 419;  /* *ashlhi3_1_lea */
    }
 L4913: ATTRIBUTE_UNUSED_LABEL
  if (
#line 10899 "../.././gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 420;  /* *ashlhi3_1 */
    }
  goto ret0;

 L5393: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L5394;
    }
  goto ret0;

 L5394: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L5395;
    }
 L5408: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L5409;
    }
  goto ret0;

 L5395: ATTRIBUTE_UNUSED_LABEL
  if (
#line 11689 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 451;  /* *ashrhi3_1_one_bit */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L5408;

 L5409: ATTRIBUTE_UNUSED_LABEL
  if (
#line 11703 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 452;  /* *ashrhi3_1 */
    }
  goto ret0;

 L5889: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L5890;
    }
  goto ret0;

 L5890: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L5891;
    }
 L5904: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L5905;
    }
  goto ret0;

 L5891: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12275 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 484;  /* *lshrhi3_1_one_bit */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L5904;

 L5905: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12289 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 485;  /* *lshrhi3_1 */
    }
  goto ret0;

 L6206: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L6207;
    }
  goto ret0;

 L6207: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L6208;
    }
 L6221: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L6222;
    }
  goto ret0;

 L6208: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12639 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 505;  /* *rotlhi3_1_one_bit */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L6221;

 L6222: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12653 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 506;  /* *rotlhi3_1 */
    }
  goto ret0;

 L6399: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L6400;
    }
  goto ret0;

 L6400: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L6401;
    }
 L6414: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L6415;
    }
  goto ret0;

 L6401: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12866 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 518;  /* *rotrhi3_one_bit */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L6414;

 L6415: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12880 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 519;  /* *rotrhi3 */
    }
  goto ret0;

 L15694: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1)
    goto L15698;
  goto ret0;

 L15698: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 74LL:
      goto L8048;
    case 75LL:
      goto L8198;
    default:
      break;
    }
  goto ret0;

 L8048: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L8049;
    }
  goto ret0;

 L8049: ATTRIBUTE_UNUSED_LABEL
  if (
#line 17432 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 678;  /* *fisthi2_floor_1 */
    }
  goto ret0;

 L8198: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L8199;
    }
  goto ret0;

 L8199: ATTRIBUTE_UNUSED_LABEL
  if (
#line 17673 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 689;  /* *fisthi2_ceil_1 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_2 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  switch (GET_CODE (x1))
    {
    case MEM:
      goto L15700;
    case ZERO_EXTRACT:
      goto L470;
    case REG:
    case SUBREG:
      goto L15541;
    default:
      goto L15542;
   }
 L15541: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L279;
    }
 L15542: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L293;
    }
 L15543: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == MEM)
    goto L297;
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L302;
    }
 L15575: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L946;
    }
 L15578: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L977;
    }
 L15581: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L1068;
    }
 L15585: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L2526;
    }
 L15595: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 19)
    goto L8362;
 L15588: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L1583;
    }
 L15592: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L7344;
    }
 L15594: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L7997;
    }
  goto ret0;

 L15700: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L235;
    }
  goto L15542;

 L235: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_no_elim_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L236;
    }
 L239: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_no_elim_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L240;
    }
  x1 = XEXP (x0, 0);
  goto L15542;

 L236: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1096 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT))
    {
      return 33;  /* *pushsi2 */
    }
  x1 = XEXP (x0, 1);
  goto L239;

 L240: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1105 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT))
    {
      return 34;  /* *pushsi2_rex64 */
    }
  x1 = XEXP (x0, 0);
  goto L15542;

 L470: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (ext_register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L471;
    }
  goto ret0;

 L471: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L472;
  goto ret0;

 L472: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L487;
  goto ret0;

 L487: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L15701;
 L473: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L474;
    }
  goto ret0;

 L15701: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case LSHIFTRT:
      goto L488;
    case PLUS:
      goto L1911;
    case AND:
      goto L3274;
    case IOR:
      goto L3679;
    case XOR:
      goto L4017;
    default:
     break;
   }
  goto L473;

 L488: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L489;
    }
  goto L473;

 L489: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    {
      return 72;  /* *movqi_insv_2 */
    }
  goto L473;

 L1911: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTRACT)
    goto L1912;
  goto L473;

 L1912: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L1913;
    }
  goto L473;

 L1913: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L1914;
  goto L473;

 L1914: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L1970;
  goto L473;

 L1970: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTRACT)
    goto L1971;
  if (general_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1916;
    }
 L1941: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1942;
    }
  goto L473;

 L1971: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L1972;
    }
  goto L473;

 L1972: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L1973;
  goto L473;

 L1973: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)]
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 231;  /* *addqi_ext_2 */
    }
  goto L473;

 L1916: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6375 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 229;  /* addqi_ext_1 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L1941;

 L1942: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6411 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 230;  /* *addqi_ext_1_rex64 */
    }
  x1 = XEXP (x0, 1);
  goto L473;

 L3274: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTRACT)
    goto L3275;
  goto L473;

 L3275: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L3276;
    }
  goto L473;

 L3276: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L3277;
  goto L473;

 L3277: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L3327;
  goto L473;

 L3327: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L15706;
 L3278: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L3279;
    }
  goto L473;

 L15706: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L3328;
    case ZERO_EXTRACT:
      goto L3386;
    default:
     break;
   }
  goto L3278;

 L3328: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3329;
    }
 L3356: ATTRIBUTE_UNUSED_LABEL
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L3357;
    }
  goto L3278;

 L3329: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8422 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 312;  /* *andqi_ext_1 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L3356;

 L3357: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8440 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 313;  /* *andqi_ext_1_rex64 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3278;

 L3386: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L3387;
    }
  goto L3278;

 L3387: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L3388;
  goto L3278;

 L3388: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)]
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 314;  /* *andqi_ext_2 */
    }
  goto L3278;

 L3279: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 310;  /* andqi_ext_0 */
    }
  x1 = XEXP (x0, 1);
  goto L473;

 L3679: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTRACT)
    goto L3680;
  goto L473;

 L3680: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L3681;
    }
  goto L473;

 L3681: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L3682;
  goto L473;

 L3682: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L3710;
  goto L473;

 L3710: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L15708;
 L3683: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L3684;
    }
  goto L473;

 L15708: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L3711;
    case ZERO_EXTRACT:
      goto L3769;
    default:
     break;
   }
  goto L3683;

 L3711: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3712;
    }
 L3739: ATTRIBUTE_UNUSED_LABEL
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L3740;
    }
  goto L3683;

 L3712: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8800 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT
   && (!TARGET_PARTIAL_REG_STALL || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 334;  /* *iorqi_ext_1 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L3739;

 L3740: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8819 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (!TARGET_PARTIAL_REG_STALL || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 335;  /* *iorqi_ext_1_rex64 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3683;

 L3769: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L3770;
    }
  goto L3683;

 L3770: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L3771;
  goto L3683;

 L3771: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)]
      && 
#line 8838 "../.././gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 336;  /* *iorqi_ext_2 */
    }
  goto L3683;

 L3684: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8782 "../.././gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 333;  /* iorqi_ext_0 */
    }
  x1 = XEXP (x0, 1);
  goto L473;

 L4017: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTRACT)
    goto L4018;
  goto L473;

 L4018: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L4019;
    }
  goto L473;

 L4019: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L4020;
  goto L473;

 L4020: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L4048;
  goto L473;

 L4048: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L15710;
 L4021: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L4022;
    }
  goto L473;

 L15710: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L4049;
    case ZERO_EXTRACT:
      goto L4107;
    default:
     break;
   }
  goto L4021;

 L4049: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4050;
    }
 L4077: ATTRIBUTE_UNUSED_LABEL
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L4078;
    }
  goto L4021;

 L4050: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9138 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT
   && (!TARGET_PARTIAL_REG_STALL || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 353;  /* *xorqi_ext_1 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L4077;

 L4078: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9157 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (!TARGET_PARTIAL_REG_STALL || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 354;  /* *xorqi_ext_1_rex64 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L4021;

 L4107: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L4108;
    }
  goto L4021;

 L4108: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L4109;
  goto L4021;

 L4109: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)]
      && 
#line 9176 "../.././gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 355;  /* *xorqi_ext_2 */
    }
  goto L4021;

 L4022: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9120 "../.././gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 352;  /* xorqi_ext_0 */
    }
  x1 = XEXP (x0, 1);
  goto L473;

 L474: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1795 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT))
    {
      return 70;  /* movsi_insv_1 */
    }
  goto ret0;

 L279: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const0_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L280;
    }
 L289: ATTRIBUTE_UNUSED_LABEL
  if (immediate_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L290;
    }
  x1 = XEXP (x0, 0);
  goto L15542;

 L280: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1144 "../.././gcc/config/i386/i386.md"
(reload_completed && (!TARGET_USE_MOV0 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 38;  /* *movsi_xor */
    }
  x1 = XEXP (x0, 1);
  goto L289;

 L290: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1154 "../.././gcc/config/i386/i386.md"
(reload_completed
   && operands[1] == constm1_rtx
   && (TARGET_PENTIUM || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 39;  /* *movsi_or */
    }
  x1 = XEXP (x0, 0);
  goto L15542;

 L293: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L294;
    }
  x1 = XEXP (x0, 0);
  goto L15543;

 L294: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1170 "../.././gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))))
    {
      return 40;  /* *movsi_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15543;

 L297: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (x86_64_movabs_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L298;
    }
  goto L15575;

 L298: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (nonmemory_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L299;
    }
  x1 = XEXP (x0, 0);
  goto L15575;

 L299: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1243 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_check_movabs (insn, 0)))
    {
      return 41;  /* *movabssi_1_rex64 */
    }
  x1 = XEXP (x0, 0);
  goto L15575;

 L302: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L15712;
  x1 = XEXP (x0, 0);
  goto L15575;

 L15712: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case MEM:
      goto L303;
    case SIGN_EXTRACT:
      goto L411;
    case ZERO_EXTRACT:
      goto L451;
    case ZERO_EXTEND:
      goto L660;
    case SIGN_EXTEND:
      goto L785;
    case FIX:
      goto L932;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L15575;

 L303: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (x86_64_movabs_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L304;
    }
  x1 = XEXP (x0, 0);
  goto L15575;

 L304: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1257 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_check_movabs (insn, 1)))
    {
      return 42;  /* *movabssi_2_rex64 */
    }
  x1 = XEXP (x0, 0);
  goto L15575;

 L411: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (ext_register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L412;
    }
  x1 = XEXP (x0, 0);
  goto L15575;

 L412: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L413;
  x1 = XEXP (x0, 0);
  goto L15575;

 L413: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    {
      return 60;  /* *movsi_extv_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15575;

 L451: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (ext_register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L452;
    }
  x1 = XEXP (x0, 0);
  goto L15575;

 L452: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L453;
  x1 = XEXP (x0, 0);
  goto L15575;

 L453: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    {
      return 67;  /* *movsi_extzv_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15575;

 L660: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L15718;
    case QImode:
      goto L15720;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L15575;

 L15718: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L661;
    }
 L15719: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L666;
    }
  x1 = XEXP (x0, 0);
  goto L15575;

 L661: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2994 "../.././gcc/config/i386/i386.md"
(TARGET_ZERO_EXTEND_WITH_AND && !optimize_size)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 102;  /* zero_extendhisi2_and */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L15719;

 L666: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3011 "../.././gcc/config/i386/i386.md"
(!TARGET_ZERO_EXTEND_WITH_AND || optimize_size))
    {
      return 103;  /* *zero_extendhisi2_movzwl */
    }
  x1 = XEXP (x0, 0);
  goto L15575;

 L15720: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L707;
    }
  x1 = XEXP (x0, 0);
  goto L15575;

 L707: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3099 "../.././gcc/config/i386/i386.md"
(TARGET_ZERO_EXTEND_WITH_AND && !optimize_size)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 107;  /* *zero_extendqisi2_and */
    }
 L719: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3108 "../.././gcc/config/i386/i386.md"
(!TARGET_ZERO_EXTEND_WITH_AND || optimize_size)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 108;  /* *zero_extendqisi2_movzbw_and */
    }
 L724: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3116 "../.././gcc/config/i386/i386.md"
((!TARGET_ZERO_EXTEND_WITH_AND || optimize_size) && reload_completed))
    {
      return 109;  /* *zero_extendqisi2_movzbw */
    }
  x1 = XEXP (x0, 0);
  goto L15575;

 L785: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L15721;
    case QImode:
      goto L15722;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L15575;

 L15721: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      return 118;  /* extendhisi2 */
    }
  x1 = XEXP (x0, 0);
  goto L15575;

 L15722: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      return 121;  /* extendqisi2 */
    }
  x1 = XEXP (x0, 0);
  goto L15575;

 L932: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L15723;
    case DFmode:
      goto L15724;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L15575;

 L15723: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L933;
    }
  x1 = XEXP (x0, 0);
  goto L15575;

 L933: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4168 "../.././gcc/config/i386/i386.md"
(TARGET_SSE && (!TARGET_FISTTP || TARGET_SSE_MATH)))
    {
      return 144;  /* fix_truncsfsi_sse */
    }
  x1 = XEXP (x0, 0);
  goto L15575;

 L15724: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L938;
    }
  x1 = XEXP (x0, 0);
  goto L15575;

 L938: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4177 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && (!TARGET_FISTTP || TARGET_SSE_MATH)))
    {
      return 145;  /* fix_truncdfsi_sse */
    }
  x1 = XEXP (x0, 0);
  goto L15575;

 L946: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == FIX)
    goto L947;
  x1 = XEXP (x0, 0);
  goto L15578;

 L947: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L948;
    }
  x1 = XEXP (x0, 0);
  goto L15578;

 L948: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4205 "../.././gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress)))
    {
      return 147;  /* fix_truncsi_fisttp_i387_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15578;

 L977: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == FIX)
    goto L978;
  x1 = XEXP (x0, 0);
  goto L15581;

 L978: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L979;
    }
  x1 = XEXP (x0, 0);
  goto L15581;

 L979: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4233 "../.././gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 150;  /* fix_truncsi_i387_fisttp */
    }
  x1 = XEXP (x0, 0);
  goto L15581;

 L1068: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L15725;
  x1 = XEXP (x0, 0);
  goto L15585;

 L15725: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case FIX:
      goto L1069;
    case PLUS:
      goto L1375;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L15585;

 L1069: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L1070;
    }
  x1 = XEXP (x0, 0);
  goto L15585;

 L1070: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4286 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
   && !(reload_completed || reload_in_progress))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 156;  /* *fix_truncsi_i387_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15585;

 L1375: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L1376;
  x1 = XEXP (x0, 0);
  goto L15585;

 L1376: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ix86_carry_flag_operator (x3, SImode))
    {
      operands[3] = x3;
      goto L1377;
    }
  x1 = XEXP (x0, 0);
  goto L15585;

 L1377: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1378;
    }
  x1 = XEXP (x0, 0);
  goto L15585;

 L1378: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1379;
    }
  x1 = XEXP (x0, 0);
  goto L15585;

 L1379: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4875 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 189;  /* addsi3_carry */
    }
  x1 = XEXP (x0, 0);
  goto L15585;

 L2526: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L15727;
 L1424: ATTRIBUTE_UNUSED_LABEL
  if (no_seg_address_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L1425;
    }
 L1428: ATTRIBUTE_UNUSED_LABEL
  if (GET_MODE (x1) == SImode)
    goto L15734;
  x1 = XEXP (x0, 0);
  goto L15595;

 L15727: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case TRUNCATE:
      goto L2527;
    case UNSPEC:
      goto L15738;
    case FFS:
      goto L7075;
    case CTZ:
      goto L7135;
    default:
     break;
   }
  goto L1424;

 L2527: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L2528;
  goto L1424;

 L2528: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == MULT)
    goto L2529;
  goto L1424;

 L2529: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode)
    goto L15742;
  goto L1424;

 L15742: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case ZERO_EXTEND:
      goto L2530;
    case SIGN_EXTEND:
      goto L2607;
    default:
     break;
   }
  goto L1424;

 L2530: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L2531;
    }
  goto L1424;

 L2531: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == ZERO_EXTEND)
    goto L2532;
  goto L1424;

 L2532: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L2533;
    }
  goto L1424;

 L2533: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (32)]
      && 
#line 7212 "../.././gcc/config/i386/i386.md"
(GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 267;  /* *umulsi3_highpart_insn */
    }
  goto L1424;

 L2607: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L2608;
    }
  goto L1424;

 L2608: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L2609;
  goto L1424;

 L2609: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L2610;
    }
  goto L1424;

 L2610: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (32)]
      && 
#line 7304 "../.././gcc/config/i386/i386.md"
(GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 270;  /* *smulsi3_highpart_insn */
    }
  goto L1424;

 L15738: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 1:
      goto L15744;
    case 3:
      goto L15745;
    case 2:
      goto L15746;
    default:
      break;
    }
  goto L1424;

 L15744: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 12LL:
      goto L7008;
    case 16LL:
      goto L7305;
    default:
      break;
    }
  goto L1424;

 L7008: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_CODE (x2))
    {
    case CONST_INT:
      goto L15748;
    case LABEL_REF:
      goto L7021;
    default:
     break;
   }
  goto L1424;

 L15748: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x2, 0) == 0LL
      && 
#line 14345 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 566;  /* set_got */
    }
  goto L1424;

 L7021: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L7022;

 L7022: ATTRIBUTE_UNUSED_LABEL
  if (
#line 14355 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 567;  /* set_got_labelled */
    }
  x1 = XEXP (x0, 1);
  goto L1424;

 L7305: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 14790 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT))
    {
      return 589;  /* *load_tp_si */
    }
  goto L1424;

 L15745: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 17)
    goto L7197;
  goto L1424;

 L7197: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L7198;
    }
  goto L1424;

 L7198: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (tls_symbolic_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L7199;
    }
  goto L1424;

 L7199: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (call_insn_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L7200;
    }
  goto L1424;

 L7200: ATTRIBUTE_UNUSED_LABEL
  if (
#line 14608 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU_TLS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 582;  /* *tls_global_dynamic_32_gnu */
    }
 L7220: ATTRIBUTE_UNUSED_LABEL
  if (
#line 14622 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SUN_TLS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 583;  /* *tls_global_dynamic_32_sun */
    }
  x1 = XEXP (x0, 1);
  goto L1424;

 L15746: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 18)
    goto L7246;
  goto L1424;

 L7246: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L7247;
    }
  goto L1424;

 L7247: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (call_insn_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L7248;
    }
  goto L1424;

 L7248: ATTRIBUTE_UNUSED_LABEL
  if (
#line 14691 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU_TLS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 585;  /* *tls_local_dynamic_base_32_gnu */
    }
 L7266: ATTRIBUTE_UNUSED_LABEL
  if (
#line 14704 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SUN_TLS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 586;  /* *tls_local_dynamic_base_32_sun */
    }
  x1 = XEXP (x0, 1);
  goto L1424;

 L7075: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L7076;
    }
  goto L1424;

 L7076: ATTRIBUTE_UNUSED_LABEL
  if (
#line 14450 "../.././gcc/config/i386/i386.md"
(TARGET_CMOVE)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 573;  /* *ffs_cmove */
    }
  x1 = XEXP (x0, 1);
  goto L1424;

 L7135: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L7136;
    }
  goto L1424;

 L7136: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 578;  /* ctzsi2 */
    }
  x1 = XEXP (x0, 1);
  goto L1424;

 L1425: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4929 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT))
    {
      return 193;  /* *lea_1 */
    }
  x1 = XEXP (x0, 1);
  goto L1428;

 L15734: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case SUBREG:
      goto L15749;
    case MULT:
      goto L2329;
    case MINUS:
      goto L7161;
    case PLUS:
      goto L7295;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L15595;

 L15749: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 0)
    goto L1429;
  x1 = XEXP (x0, 0);
  goto L15595;

 L1429: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (no_seg_address_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1430;
    }
  x1 = XEXP (x0, 0);
  goto L15595;

 L1430: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4937 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT))
    {
      return 194;  /* *lea_1_rex64 */
    }
  x1 = XEXP (x0, 0);
  goto L15595;

 L2329: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2330;
    }
  x1 = XEXP (x0, 0);
  goto L15595;

 L2330: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2331;
    }
  x1 = XEXP (x0, 0);
  goto L15595;

 L2331: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6901 "../.././gcc/config/i386/i386.md"
(GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 256;  /* *mulsi3_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15595;

 L7161: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (31)])
    goto L7162;
  x1 = XEXP (x0, 0);
  goto L15595;

 L7162: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == CLZ)
    goto L7163;
  x1 = XEXP (x0, 0);
  goto L15595;

 L7163: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L7164;
    }
  x1 = XEXP (x0, 0);
  goto L15595;

 L7164: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 580;  /* *bsr */
    }
  x1 = XEXP (x0, 0);
  goto L15595;

 L7295: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L15750;
  x1 = XEXP (x0, 0);
  goto L15595;

 L15750: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == UNSPEC)
    goto L15752;
  x1 = XEXP (x0, 0);
  goto L15595;

 L15752: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x2, 0))
    {
    case 2:
      goto L15754;
    case 1:
      goto L15755;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L15595;

 L15754: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 18)
    goto L7296;
  x1 = XEXP (x0, 0);
  goto L15595;

 L7296: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L7297;
    }
  x1 = XEXP (x0, 0);
  goto L15595;

 L7297: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (call_insn_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L7298;
    }
  x1 = XEXP (x0, 0);
  goto L15595;

 L7298: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == CONST)
    goto L7299;
  x1 = XEXP (x0, 0);
  goto L15595;

 L7299: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == UNSPEC
      && XVECLEN (x3, 0) == 1
      && XINT (x3, 1) == 6)
    goto L7300;
  x1 = XEXP (x0, 0);
  goto L15595;

 L7300: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (tls_symbolic_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L7301;
    }
  x1 = XEXP (x0, 0);
  goto L15595;

 L7301: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 588;  /* *tls_local_dynamic_32_once */
    }
  x1 = XEXP (x0, 0);
  goto L15595;

 L15755: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 16)
    goto L7319;
  x1 = XEXP (x0, 0);
  goto L15595;

 L7319: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L7320;
  x1 = XEXP (x0, 0);
  goto L15595;

 L7320: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L7321;
    }
  x1 = XEXP (x0, 0);
  goto L15595;

 L7321: ATTRIBUTE_UNUSED_LABEL
  if (
#line 14803 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 590;  /* *add_tp_si */
    }
  x1 = XEXP (x0, 0);
  goto L15595;

 L8362: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 702;  /* cld */
    }
  x1 = XEXP (x0, 0);
  goto L15588;

 L1583: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L15756;
  x1 = XEXP (x0, 0);
  goto L15592;

 L15756: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L1584;
    case MINUS:
      goto L2107;
    case AND:
      goto L3111;
    case IOR:
      goto L3445;
    case XOR:
      goto L3828;
    case NEG:
      goto L4256;
    case NOT:
      goto L4609;
    case ASHIFT:
      goto L4822;
    case ASHIFTRT:
      goto L5213;
    case LSHIFTRT:
      goto L5739;
    case ROTATE:
      goto L6146;
    case ROTATERT:
      goto L6339;
    case FFS:
      goto L7089;
    case UNSPEC:
      goto L15771;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L15592;

 L1584: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1585;
    }
  x1 = XEXP (x0, 0);
  goto L15592;

 L1585: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1586;
    }
  x1 = XEXP (x0, 0);
  goto L15592;

 L1586: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5389 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 208;  /* *addsi_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15592;

 L2107: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2108;
    }
  x1 = XEXP (x0, 0);
  goto L15592;

 L2108: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L2109;
  if (general_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2145;
    }
  x1 = XEXP (x0, 0);
  goto L15592;

 L2109: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ix86_carry_flag_operator (x3, SImode))
    {
      operands[3] = x3;
      goto L2110;
    }
  x1 = XEXP (x0, 0);
  goto L15592;

 L2110: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2111;
    }
  x1 = XEXP (x0, 0);
  goto L15592;

 L2111: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6628 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 240;  /* subsi3_carry */
    }
  x1 = XEXP (x0, 0);
  goto L15592;

 L2145: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6660 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 242;  /* *subsi_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15592;

 L3111: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3112;
    }
  x1 = XEXP (x0, 0);
  goto L15592;

 L3112: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3113;
    }
  x1 = XEXP (x0, 0);
  goto L15592;

 L3113: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8121 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 299;  /* *andsi_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15592;

 L3445: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L15774;
  x1 = XEXP (x0, 0);
  goto L15592;

 L15774: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ASHIFT:
      goto L4804;
    case ASHIFTRT:
      goto L5195;
    case REG:
    case SUBREG:
    case MEM:
      goto L15773;
    default:
      x1 = XEXP (x0, 0);
      goto L15592;
   }
 L15773: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3446;
    }
  x1 = XEXP (x0, 0);
  goto L15592;

 L4804: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L4805;
  x1 = XEXP (x0, 0);
  goto L15592;

 L4805: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4806;
    }
  x1 = XEXP (x0, 0);
  goto L15592;

 L4806: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L4807;
  x1 = XEXP (x0, 0);
  goto L15592;

 L4807: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4808;
    }
  x1 = XEXP (x0, 0);
  goto L15592;

 L4808: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == QImode
      && GET_CODE (x3) == MINUS)
    goto L4809;
  x1 = XEXP (x0, 0);
  goto L15592;

 L4809: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (32)])
    goto L4810;
  x1 = XEXP (x0, 0);
  goto L15592;

 L4810: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 413;  /* x86_shld_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15592;

 L5195: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L5196;
  x1 = XEXP (x0, 0);
  goto L15592;

 L5196: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5197;
    }
  x1 = XEXP (x0, 0);
  goto L15592;

 L5197: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ASHIFT)
    goto L5198;
  x1 = XEXP (x0, 0);
  goto L15592;

 L5198: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5199;
    }
  x1 = XEXP (x0, 0);
  goto L15592;

 L5199: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == QImode
      && GET_CODE (x3) == MINUS)
    goto L5200;
  x1 = XEXP (x0, 0);
  goto L15592;

 L5200: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (32)])
    goto L5201;
  x1 = XEXP (x0, 0);
  goto L15592;

 L5201: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 438;  /* x86_shrd_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15592;

 L3446: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3447;
    }
  x1 = XEXP (x0, 0);
  goto L15592;

 L3447: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8576 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 318;  /* *iorsi_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15592;

 L3828: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3829;
    }
  x1 = XEXP (x0, 0);
  goto L15592;

 L3829: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3830;
    }
  x1 = XEXP (x0, 0);
  goto L15592;

 L3830: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8952 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 340;  /* *xorsi_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15592;

 L4256: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4257;
    }
  x1 = XEXP (x0, 0);
  goto L15592;

 L4257: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9437 "../.././gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 365;  /* *negsi2_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15592;

 L4609: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4610;
    }
  x1 = XEXP (x0, 0);
  goto L15592;

 L4610: ATTRIBUTE_UNUSED_LABEL
  if (
#line 10067 "../.././gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, SImode, operands)))
    {
      return 398;  /* *one_cmplsi2_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15592;

 L4822: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4823;
    }
  x1 = XEXP (x0, 0);
  goto L15592;

 L4823: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L4824;
    }
  x1 = XEXP (x0, 0);
  goto L15592;

 L4824: ATTRIBUTE_UNUSED_LABEL
  if (
#line 10587 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 414;  /* *ashlsi3_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15592;

 L5213: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5214;
    }
  x1 = XEXP (x0, 0);
  goto L15592;

 L5214: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT)
    goto L15776;
 L5274: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L5275;
    }
  x1 = XEXP (x0, 0);
  goto L15592;

 L15776: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L5215;
    }
 L15777: ATTRIBUTE_UNUSED_LABEL
  if (const1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L5245;
    }
  goto L5274;

 L5215: ATTRIBUTE_UNUSED_LABEL
  if (
#line 11491 "../.././gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 31 && (TARGET_USE_CLTD || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 439;  /* ashrsi3_31 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L15777;

 L5245: ATTRIBUTE_UNUSED_LABEL
  if (
#line 11532 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 441;  /* *ashrsi3_1_one_bit */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L5274;

 L5275: ATTRIBUTE_UNUSED_LABEL
  if (
#line 11557 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 443;  /* *ashrsi3_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15592;

 L5739: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5740;
    }
  x1 = XEXP (x0, 0);
  goto L15592;

 L5740: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L5741;
    }
 L5770: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L5771;
    }
  x1 = XEXP (x0, 0);
  goto L15592;

 L5741: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12117 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 474;  /* *lshrsi3_1_one_bit */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L5770;

 L5771: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12142 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 476;  /* *lshrsi3_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15592;

 L6146: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L6147;
    }
  x1 = XEXP (x0, 0);
  goto L15592;

 L6147: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L6148;
    }
 L6177: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L6178;
    }
  x1 = XEXP (x0, 0);
  goto L15592;

 L6148: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12580 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 501;  /* *rotlsi3_1_one_bit */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L6177;

 L6178: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12606 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 503;  /* *rotlsi3_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15592;

 L6339: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L6340;
    }
  x1 = XEXP (x0, 0);
  goto L15592;

 L6340: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L6341;
    }
 L6370: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L6371;
    }
  x1 = XEXP (x0, 0);
  goto L15592;

 L6341: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12804 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 514;  /* *rotrsi3_1_one_bit */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L6370;

 L6371: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12833 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 516;  /* *rotrsi3_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15592;

 L7089: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L7090;
    }
  x1 = XEXP (x0, 0);
  goto L15592;

 L7090: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 574;  /* *ffs_no_cmove */
    }
  x1 = XEXP (x0, 0);
  goto L15592;

 L15771: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1)
    goto L15778;
  x1 = XEXP (x0, 0);
  goto L15592;

 L15778: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 74LL:
      goto L8060;
    case 75LL:
      goto L8210;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L15592;

 L8060: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L8061;
    }
  x1 = XEXP (x0, 0);
  goto L15592;

 L8061: ATTRIBUTE_UNUSED_LABEL
  if (
#line 17432 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 679;  /* *fistsi2_floor_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15592;

 L8210: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L8211;
    }
  x1 = XEXP (x0, 0);
  goto L15592;

 L8211: ATTRIBUTE_UNUSED_LABEL
  if (
#line 17673 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 690;  /* *fistsi2_ceil_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15592;

 L7344: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L15780;
  x1 = XEXP (x0, 0);
  goto L15594;

 L15780: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L7345;
    case UNSPEC:
      goto L15784;
    case IF_THEN_ELSE:
      goto L8989;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L15594;

 L7345: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L15787;
  x1 = XEXP (x0, 0);
  goto L15594;

 L15787: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 4
      && XINT (x2, 1) == 19)
    goto L7385;
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L7346;
    }
  x1 = XEXP (x0, 0);
  goto L15594;

 L7385: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (tls_modbase_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L7386;
    }
  x1 = XEXP (x0, 0);
  goto L15594;

 L7386: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  operands[4] = x3;
  goto L7387;

 L7387: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L7388;
    }
  x1 = XEXP (x0, 0);
  goto L15594;

 L7388: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L7389;
  x1 = XEXP (x0, 0);
  goto L15594;

 L7389: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == CONST)
    goto L7390;
  x1 = XEXP (x0, 0);
  goto L15594;

 L7390: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == UNSPEC
      && XVECLEN (x3, 0) == 1
      && XINT (x3, 1) == 6)
    goto L7391;
  x1 = XEXP (x0, 0);
  goto L15594;

 L7391: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (tls_symbolic_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L7392;
    }
  x1 = XEXP (x0, 0);
  goto L15594;

 L7392: ATTRIBUTE_UNUSED_LABEL
  if (
#line 14895 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU2_TLS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 595;  /* *tls_dynamic_gnu2_combine_32 */
    }
  x1 = XEXP (x0, 0);
  goto L15594;

 L7346: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == CONST)
    goto L7347;
  x1 = XEXP (x0, 0);
  goto L15594;

 L7347: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == UNSPEC
      && XVECLEN (x3, 0) == 1
      && XINT (x3, 1) == 19)
    goto L7348;
  x1 = XEXP (x0, 0);
  goto L15594;

 L7348: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (tls_symbolic_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L7349;
    }
  x1 = XEXP (x0, 0);
  goto L15594;

 L7349: ATTRIBUTE_UNUSED_LABEL
  if (
#line 14861 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU2_TLS))
    {
      return 593;  /* *tls_dynamic_lea_32 */
    }
  x1 = XEXP (x0, 0);
  goto L15594;

 L15784: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 4:
      goto L15788;
    case 1:
      goto L15789;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L15594;

 L15788: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 19)
    goto L7363;
  x1 = XEXP (x0, 0);
  goto L15594;

 L7363: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (tls_symbolic_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L7364;
    }
  x1 = XEXP (x0, 0);
  goto L15594;

 L7364: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L7365;
    }
  x1 = XEXP (x0, 0);
  goto L15594;

 L7365: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L7366;
    }
  x1 = XEXP (x0, 0);
  goto L15594;

 L7366: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 3);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 7
      && 
#line 14877 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU2_TLS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 594;  /* *tls_dynamic_call_32 */
    }
  x1 = XEXP (x0, 0);
  goto L15594;

 L15789: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 66)
    goto L7988;
  x1 = XEXP (x0, 0);
  goto L15594;

 L7988: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L7989;
    }
  x1 = XEXP (x0, 0);
  goto L15594;

 L7989: ATTRIBUTE_UNUSED_LABEL
  if (
#line 17278 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress)))
    {
      return 671;  /* *fistsi2_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15594;

 L8989: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (ix86_carry_flag_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L8990;
    }
 L8995: ATTRIBUTE_UNUSED_LABEL
  if (ix86_comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L8996;
    }
  x1 = XEXP (x0, 0);
  goto L15594;

 L8990: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (-1)])
    goto L8991;
  x2 = XEXP (x1, 0);
  goto L8995;

 L8991: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 735;  /* x86_movsicc_0_m1 */
    }
  x2 = XEXP (x1, 0);
  goto L8995;

 L8996: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 17)
    goto L8997;
  x1 = XEXP (x0, 0);
  goto L15594;

 L8997: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L8998;
  x1 = XEXP (x0, 0);
  goto L15594;

 L8998: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L8999;
    }
  x1 = XEXP (x0, 0);
  goto L15594;

 L8999: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L9000;
    }
  x1 = XEXP (x0, 0);
  goto L15594;

 L9000: ATTRIBUTE_UNUSED_LABEL
  if (
#line 18958 "../.././gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM)))
    {
      return 736;  /* *movsicc_noc */
    }
  x1 = XEXP (x0, 0);
  goto L15594;

 L7997: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 66)
    goto L7998;
  goto ret0;

 L7998: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L7999;
    }
  goto ret0;

 L7999: ATTRIBUTE_UNUSED_LABEL
  if (
#line 17297 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
    {
      return 673;  /* fistsi2 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_3 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  if (push_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L367;
    }
 L15550: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L422;
    }
 L15552: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == MEM)
    goto L434;
  if (register_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L428;
    }
 L15554: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L456;
    }
 L15555: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L463;
    }
  goto ret0;

 L367: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (nonmemory_no_elim_operand (x1, QImode))
    {
      operands[1] = x1;
      goto L368;
    }
  x1 = XEXP (x0, 0);
  goto L15550;

 L368: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1452 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT))
    {
      return 53;  /* *pushqi2 */
    }
 L372: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1461 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT))
    {
      return 54;  /* *pushqi2_rex64 */
    }
  x1 = XEXP (x0, 0);
  goto L15550;

 L422: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode
      && GET_CODE (x1) == SIGN_EXTRACT)
    goto L423;
  if (general_operand (x1, QImode))
    {
      operands[1] = x1;
      goto L376;
    }
  x1 = XEXP (x0, 0);
  goto L15552;

 L423: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (ext_register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L424;
    }
  x1 = XEXP (x0, 0);
  goto L15552;

 L424: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L425;
  x1 = XEXP (x0, 0);
  goto L15552;

 L425: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (8)]
      && 
#line 1637 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT))
    {
      return 62;  /* *movqi_extv_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15552;

 L376: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1479 "../.././gcc/config/i386/i386.md"
(GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    {
      return 55;  /* *movqi_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15552;

 L434: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (x86_64_movabs_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L435;
    }
  goto L15554;

 L435: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (nonmemory_operand (x1, QImode))
    {
      operands[1] = x1;
      goto L436;
    }
  x1 = XEXP (x0, 0);
  goto L15554;

 L436: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1692 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_check_movabs (insn, 0)))
    {
      return 64;  /* *movabsqi_1_rex64 */
    }
  x1 = XEXP (x0, 0);
  goto L15554;

 L428: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode)
    goto L15790;
  x1 = XEXP (x0, 0);
  goto L15554;

 L15790: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case SIGN_EXTRACT:
      goto L429;
    case MEM:
      goto L440;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L15554;

 L429: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (ext_register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L430;
    }
  x1 = XEXP (x0, 0);
  goto L15554;

 L430: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L431;
  x1 = XEXP (x0, 0);
  goto L15554;

 L431: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (8)]
      && 
#line 1664 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT))
    {
      return 63;  /* *movqi_extv_1_rex64 */
    }
  x1 = XEXP (x0, 0);
  goto L15554;

 L440: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (x86_64_movabs_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L441;
    }
  x1 = XEXP (x0, 0);
  goto L15554;

 L441: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1706 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_check_movabs (insn, 1)))
    {
      return 65;  /* *movabsqi_2_rex64 */
    }
  x1 = XEXP (x0, 0);
  goto L15554;

 L456: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode)
    goto L15792;
  x1 = XEXP (x0, 0);
  goto L15555;

 L15792: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case SUBREG:
      goto L15806;
    case PLUS:
      goto L1339;
    case MINUS:
      goto L2071;
    case AND:
      goto L3195;
    case IOR:
      goto L3595;
    case XOR:
      goto L3978;
    case NEG:
      goto L4340;
    case NOT:
      goto L4659;
    case ASHIFT:
      goto L4956;
    case ASHIFTRT:
      goto L5483;
    case LSHIFTRT:
      goto L5979;
    case ROTATE:
      goto L6250;
    case ROTATERT:
      goto L6427;
    case NE:
    case EQ:
    case GE:
    case GT:
    case LE:
    case LT:
    case GEU:
    case GTU:
    case LEU:
    case LTU:
    case UNORDERED:
    case ORDERED:
    case UNEQ:
    case UNGE:
    case UNGT:
    case UNLE:
    case UNLT:
    case LTGT:
      goto L15805;
    default:
      x1 = XEXP (x0, 0);
      goto L15555;
   }
 L15805: ATTRIBUTE_UNUSED_LABEL
  if (ix86_comparison_operator (x1, QImode))
    {
      operands[1] = x1;
      goto L6532;
    }
  x1 = XEXP (x0, 0);
  goto L15555;

 L15806: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 0)
    goto L457;
  x1 = XEXP (x0, 0);
  goto L15555;

 L457: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTRACT)
    goto L458;
  x1 = XEXP (x0, 0);
  goto L15555;

 L458: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L459;
    }
  x1 = XEXP (x0, 0);
  goto L15555;

 L459: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L460;
  x1 = XEXP (x0, 0);
  goto L15555;

 L460: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)]
      && 
#line 1742 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT))
    {
      return 68;  /* *movqi_extzv_2 */
    }
  x1 = XEXP (x0, 0);
  goto L15555;

 L1339: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == QImode)
    goto L15807;
  x1 = XEXP (x0, 0);
  goto L15555;

 L15807: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L1340;
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1796;
    }
  x1 = XEXP (x0, 0);
  goto L15555;

 L1340: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ix86_carry_flag_operator (x3, QImode))
    {
      operands[3] = x3;
      goto L1341;
    }
  x1 = XEXP (x0, 0);
  goto L15555;

 L1341: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L1342;
    }
  x1 = XEXP (x0, 0);
  goto L15555;

 L1342: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1343;
    }
  x1 = XEXP (x0, 0);
  goto L15555;

 L1343: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4851 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 187;  /* addqi3_carry */
    }
  x1 = XEXP (x0, 0);
  goto L15555;

 L1796: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1797;
    }
  x1 = XEXP (x0, 0);
  goto L15555;

 L1797: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6074 "../.././gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 222;  /* *addqi_1_lea */
    }
 L1811: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6124 "../.././gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 223;  /* *addqi_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15555;

 L2071: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L2072;
    }
  x1 = XEXP (x0, 0);
  goto L15555;

 L2072: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == PLUS)
    goto L2073;
  if (general_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L2263;
    }
  x1 = XEXP (x0, 0);
  goto L15555;

 L2073: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ix86_carry_flag_operator (x3, QImode))
    {
      operands[3] = x3;
      goto L2074;
    }
  x1 = XEXP (x0, 0);
  goto L15555;

 L2074: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L2075;
    }
  x1 = XEXP (x0, 0);
  goto L15555;

 L2075: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6604 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 238;  /* subqi3_carry */
    }
  x1 = XEXP (x0, 0);
  goto L15555;

 L2263: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6789 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 251;  /* *subqi_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15555;

 L3195: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L3196;
    }
  x1 = XEXP (x0, 0);
  goto L15555;

 L3196: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L3197;
    }
  x1 = XEXP (x0, 0);
  goto L15555;

 L3197: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8289 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 305;  /* *andqi_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15555;

 L3595: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L3596;
    }
  x1 = XEXP (x0, 0);
  goto L15555;

 L3596: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L3597;
    }
  x1 = XEXP (x0, 0);
  goto L15555;

 L3597: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8713 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 328;  /* *iorqi_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15555;

 L3978: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L3979;
    }
  x1 = XEXP (x0, 0);
  goto L15555;

 L3979: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L3980;
    }
  x1 = XEXP (x0, 0);
  goto L15555;

 L3980: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9090 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 350;  /* *xorqi_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15555;

 L4340: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L4341;
    }
  x1 = XEXP (x0, 0);
  goto L15555;

 L4341: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9524 "../.././gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 371;  /* *negqi2_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15555;

 L4659: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L4660;
    }
  x1 = XEXP (x0, 0);
  goto L15555;

 L4660: ATTRIBUTE_UNUSED_LABEL
  if (
#line 10187 "../.././gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, QImode, operands)))
    {
      return 404;  /* *one_cmplqi2_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15555;

 L4956: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L4957;
    }
  x1 = XEXP (x0, 0);
  goto L15555;

 L4957: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L4958;
    }
  x1 = XEXP (x0, 0);
  goto L15555;

 L4958: ATTRIBUTE_UNUSED_LABEL
  if (
#line 11029 "../.././gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 423;  /* *ashlqi3_1_lea */
    }
 L4972: ATTRIBUTE_UNUSED_LABEL
  if (
#line 11085 "../.././gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 424;  /* *ashlqi3_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15555;

 L5483: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L5484;
    }
  x1 = XEXP (x0, 0);
  goto L15555;

 L5484: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L5485;
    }
 L5514: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L5515;
    }
  x1 = XEXP (x0, 0);
  goto L15555;

 L5485: ATTRIBUTE_UNUSED_LABEL
  if (
#line 11792 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, QImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 457;  /* *ashrqi3_1_one_bit */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L5514;

 L5515: ATTRIBUTE_UNUSED_LABEL
  if (
#line 11821 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 459;  /* *ashrqi3_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15555;

 L5979: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L5980;
    }
  x1 = XEXP (x0, 0);
  goto L15555;

 L5980: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L5981;
    }
 L6010: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L6011;
    }
  x1 = XEXP (x0, 0);
  goto L15555;

 L5981: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12378 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, QImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 490;  /* *lshrqi3_1_one_bit */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L6010;

 L6011: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12406 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 492;  /* *lshrqi3_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15555;

 L6250: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L6251;
    }
  x1 = XEXP (x0, 0);
  goto L15555;

 L6251: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L6252;
    }
 L6281: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L6282;
    }
  x1 = XEXP (x0, 0);
  goto L15555;

 L6252: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12687 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 508;  /* *rotlqi3_1_one_bit */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L6281;

 L6282: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12714 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 510;  /* *rotlqi3_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15555;

 L6427: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L6428;
    }
  x1 = XEXP (x0, 0);
  goto L15555;

 L6428: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L6429;
    }
 L6458: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L6459;
    }
  x1 = XEXP (x0, 0);
  goto L15555;

 L6429: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12900 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 520;  /* *rotrqi3_1_one_bit */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L6458;

 L6459: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12928 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 522;  /* *rotrqi3_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15555;

 L6532: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    goto L6533;
  x1 = XEXP (x0, 0);
  goto L15555;

 L6533: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 527;  /* *setcc_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15555;

 L463: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode)
    goto L15809;
  goto ret0;

 L15809: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case SUBREG:
      goto L15814;
    case MULT:
      goto L2373;
    case DIV:
      goto L2649;
    case UDIV:
      goto L2663;
    case IF_THEN_ELSE:
      goto L9013;
    default:
     break;
   }
  goto ret0;

 L15814: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 0)
    goto L464;
  goto ret0;

 L464: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTRACT)
    goto L465;
  goto ret0;

 L465: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L466;
    }
  goto ret0;

 L466: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L467;
  goto ret0;

 L467: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)]
      && 
#line 1769 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT))
    {
      return 69;  /* *movqi_extzv_2_rex64 */
    }
  goto ret0;

 L2373: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L2374;
    }
  goto ret0;

 L2374: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L2375;
    }
  goto ret0;

 L2375: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6985 "../.././gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 259;  /* *mulqi3_1 */
    }
  goto ret0;

 L2649: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L2650;
    }
  goto ret0;

 L2650: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L2651;
    }
  goto ret0;

 L2651: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7364 "../.././gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 272;  /* divqi3 */
    }
  goto ret0;

 L2663: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L2664;
    }
  goto ret0;

 L2664: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L2665;
    }
  goto ret0;

 L2665: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7374 "../.././gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 273;  /* udivqi3 */
    }
  goto ret0;

 L9013: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (ix86_comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L9014;
    }
  goto ret0;

 L9014: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (flags_reg_operand (x3, VOIDmode))
    {
      operands[4] = x3;
      goto L9015;
    }
  goto ret0;

 L9015: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L9016;
  goto ret0;

 L9016: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L9017;
    }
  goto ret0;

 L9017: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, QImode))
    {
      operands[3] = x2;
      goto L9018;
    }
  goto ret0;

 L9018: ATTRIBUTE_UNUSED_LABEL
  if (
#line 19003 "../.././gcc/config/i386/i386.md"
(TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL))
    {
      return 738;  /* *movqicc_noc */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_4 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L15843;
 L1439: ATTRIBUTE_UNUSED_LABEL
  if (no_seg_address_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L1440;
    }
 L2314: ATTRIBUTE_UNUSED_LABEL
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == MULT)
    goto L2315;
  goto ret0;

 L15843: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case ZERO_EXTEND:
      goto L1452;
    case TRUNCATE:
      goto L2502;
    case IOR:
      goto L3476;
    case XOR:
      goto L3859;
    case LSHIFTRT:
      goto L4272;
    default:
     break;
   }
  goto L1439;

 L1452: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L15848;
  goto L1439;

 L15848: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L1453;
    case MINUS:
      goto L2127;
    case MULT:
      goto L2345;
    case TRUNCATE:
      goto L2554;
    case AND:
      goto L3127;
    case IOR:
      goto L3461;
    case XOR:
      goto L3844;
    case NOT:
      goto L4615;
    default:
     break;
   }
  goto L1439;

 L1453: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L15856;
  goto L1439;

 L15856: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case PLUS:
      goto L1454;
    case MULT:
      goto L1471;
    case REG:
    case SUBREG:
    case MEM:
      goto L15858;
    default:
      goto L1439;
   }
 L15858: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1601;
    }
  goto L1439;

 L1454: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L15860;
  goto L1439;

 L15860: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x4) == MULT)
    goto L1491;
  if (index_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1455;
    }
  goto L1439;

 L1491: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (index_register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L1492;
    }
  goto L1439;

 L1492: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (const248_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L1493;
    }
  goto L1439;

 L1493: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L1494;
    }
  goto L1439;

 L1494: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (immediate_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L1495;
    }
  goto L1439;

 L1495: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5104 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT))
    {
      return 202;  /* *lea_general_3_zext */
    }
  x1 = XEXP (x0, 1);
  goto L1439;

 L1455: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1456;
    }
  goto L1439;

 L1456: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (immediate_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L1457;
    }
  goto L1439;

 L1457: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4999 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT))
    {
      return 198;  /* *lea_general_1_zext */
    }
  x1 = XEXP (x0, 1);
  goto L1439;

 L1471: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (index_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1472;
    }
  goto L1439;

 L1472: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (const248_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1473;
    }
  goto L1439;

 L1473: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L1474;
    }
  goto L1439;

 L1474: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5049 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT))
    {
      return 200;  /* *lea_general_2_zext */
    }
  x1 = XEXP (x0, 1);
  goto L1439;

 L1601: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1602;
    }
  goto L1439;

 L1602: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5473 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (PLUS, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 209;  /* addsi_1_zext */
    }
  x1 = XEXP (x0, 1);
  goto L1439;

 L2127: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2128;
    }
  goto L1439;

 L2128: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L2129;
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2161;
    }
  goto L1439;

 L2129: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ix86_carry_flag_operator (x4, SImode))
    {
      operands[3] = x4;
      goto L2130;
    }
  goto L1439;

 L2130: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2131;
    }
  goto L1439;

 L2131: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6641 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (MINUS, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 241;  /* subsi3_carry_zext */
    }
  x1 = XEXP (x0, 1);
  goto L1439;

 L2161: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6671 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (MINUS, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 243;  /* *subsi_1_zext */
    }
  x1 = XEXP (x0, 1);
  goto L1439;

 L2345: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2346;
    }
  goto L1439;

 L2346: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2347;
    }
  goto L1439;

 L2347: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6925 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 257;  /* *mulsi3_1_zext */
    }
  x1 = XEXP (x0, 1);
  goto L1439;

 L2554: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == LSHIFTRT)
    goto L2555;
  goto L1439;

 L2555: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == MULT)
    goto L2556;
  goto L1439;

 L2556: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == DImode)
    goto L15861;
  goto L1439;

 L15861: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x5))
    {
    case ZERO_EXTEND:
      goto L2557;
    case SIGN_EXTEND:
      goto L2634;
    default:
     break;
   }
  goto L1439;

 L2557: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (nonimmediate_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L2558;
    }
  goto L1439;

 L2558: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == ZERO_EXTEND)
    goto L2559;
  goto L1439;

 L2559: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (nonimmediate_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L2560;
    }
  goto L1439;

 L2560: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (32)]
      && 
#line 7233 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 268;  /* *umulsi3_highpart_zext */
    }
  goto L1439;

 L2634: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (nonimmediate_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L2635;
    }
  goto L1439;

 L2635: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L2636;
  goto L1439;

 L2636: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (nonimmediate_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L2637;
    }
  goto L1439;

 L2637: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (32)]
      && 
#line 7324 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 271;  /* *smulsi3_highpart_zext */
    }
  goto L1439;

 L3127: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3128;
    }
  goto L1439;

 L3128: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3129;
    }
  goto L1439;

 L3129: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8198 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (AND, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 300;  /* *andsi_1_zext */
    }
  x1 = XEXP (x0, 1);
  goto L1439;

 L3461: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3462;
    }
  goto L1439;

 L3462: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3463;
    }
  goto L1439;

 L3463: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8588 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (IOR, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 319;  /* *iorsi_1_zext */
    }
  x1 = XEXP (x0, 1);
  goto L1439;

 L3844: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3845;
    }
  goto L1439;

 L3845: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3846;
    }
  goto L1439;

 L3846: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8965 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (XOR, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 341;  /* *xorsi_1_zext */
    }
  x1 = XEXP (x0, 1);
  goto L1439;

 L4615: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4616;
    }
  goto L1439;

 L4616: ATTRIBUTE_UNUSED_LABEL
  if (
#line 10076 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_unary_operator_ok (NOT, SImode, operands)))
    {
      return 399;  /* *one_cmplsi2_1_zext */
    }
  x1 = XEXP (x0, 1);
  goto L1439;

 L2502: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == TImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L2503;
  goto L1439;

 L2503: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == TImode
      && GET_CODE (x3) == MULT)
    goto L2504;
  goto L1439;

 L2504: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == TImode)
    goto L15863;
  goto L1439;

 L15863: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case ZERO_EXTEND:
      goto L2505;
    case SIGN_EXTEND:
      goto L2582;
    default:
     break;
   }
  goto L1439;

 L2505: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, DImode))
    {
      operands[1] = x5;
      goto L2506;
    }
  goto L1439;

 L2506: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == TImode
      && GET_CODE (x4) == ZERO_EXTEND)
    goto L2507;
  goto L1439;

 L2507: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, DImode))
    {
      operands[2] = x5;
      goto L2508;
    }
  goto L1439;

 L2508: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (64)]
      && 
#line 7176 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 266;  /* *umuldi3_highpart_rex64 */
    }
  goto L1439;

 L2582: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, DImode))
    {
      operands[1] = x5;
      goto L2583;
    }
  goto L1439;

 L2583: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == TImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L2584;
  goto L1439;

 L2584: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, DImode))
    {
      operands[2] = x5;
      goto L2585;
    }
  goto L1439;

 L2585: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (64)]
      && 
#line 7269 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 269;  /* *smuldi3_highpart_rex64 */
    }
  goto L1439;

 L3476: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L3477;
  goto L1439;

 L3477: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3478;
    }
  goto L1439;

 L3478: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x86_64_zext_immediate_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3479;
    }
  goto L1439;

 L3479: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8598 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 320;  /* *iorsi_1_zext_imm */
    }
  x1 = XEXP (x0, 1);
  goto L1439;

 L3859: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L3860;
  goto L1439;

 L3860: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3861;
    }
  goto L1439;

 L3861: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x86_64_zext_immediate_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3862;
    }
  goto L1439;

 L3862: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8975 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (XOR, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 342;  /* *xorsi_1_zext_imm */
    }
  x1 = XEXP (x0, 1);
  goto L1439;

 L4272: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == NEG)
    goto L4273;
  goto L1439;

 L4273: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ASHIFT)
    goto L4274;
  goto L1439;

 L4274: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L4275;
    }
  goto L1439;

 L4275: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (32)])
    goto L4276;
  goto L1439;

 L4276: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (32)]
      && 
#line 9449 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_unary_operator_ok (NEG, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 366;  /* *negsi2_1_zext */
    }
  goto L1439;

 L1440: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4954 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT))
    {
      return 196;  /* *lea_2_rex64 */
    }
  x1 = XEXP (x0, 1);
  goto L2314;

 L2315: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L15866;
  goto ret0;

 L15866: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L2444;
    case SIGN_EXTEND:
      goto L2480;
    case REG:
    case SUBREG:
    case MEM:
      goto L15865;
    default:
      goto ret0;
   }
 L15865: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2316;
    }
  goto ret0;

 L2444: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2445;
    }
  goto ret0;

 L2445: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L2446;
  goto ret0;

 L2446: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2447;
    }
  goto ret0;

 L2447: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7088 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 263;  /* *umulsidi3_insn */
    }
  goto ret0;

 L2480: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2481;
    }
  goto ret0;

 L2481: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == SIGN_EXTEND)
    goto L2482;
  goto ret0;

 L2482: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2483;
    }
  goto ret0;

 L2483: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7140 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 265;  /* *mulsidi3_insn */
    }
  goto ret0;

 L2316: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x86_64_general_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2317;
    }
  goto ret0;

 L2317: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6869 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 255;  /* *muldi3_1_rex64 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_5 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case ASHIFT:
      goto L4783;
    case ZERO_EXTEND:
      goto L4837;
    case ASHIFTRT:
      goto L5174;
    case LSHIFTRT:
      goto L5725;
    case ROTATE:
      goto L6104;
    case ROTATERT:
      goto L6297;
    case UNSPEC:
      goto L15898;
    case FFS:
      goto L7113;
    case CTZ:
      goto L7147;
    case MINUS:
      goto L7177;
    case PLUS:
      goto L7338;
    case IF_THEN_ELSE:
      goto L8965;
    default:
     break;
   }
  goto ret0;

 L4783: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (reg_or_pm1_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L4784;
    }
  goto ret0;

 L4784: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L4785;
    }
  goto ret0;

 L4785: ATTRIBUTE_UNUSED_LABEL
  if (
#line 10485 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 412;  /* *ashldi3_1 */
    }
  goto ret0;

 L4837: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L15902;
  goto ret0;

 L15902: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ASHIFT:
      goto L4838;
    case ASHIFTRT:
      goto L5229;
    case LSHIFTRT:
      goto L5785;
    case ROTATE:
      goto L6162;
    case ROTATERT:
      goto L6355;
    default:
     break;
   }
  goto ret0;

 L4838: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4839;
    }
  goto ret0;

 L4839: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4840;
    }
  goto ret0;

 L4840: ATTRIBUTE_UNUSED_LABEL
  if (
#line 10673 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFT, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 415;  /* *ashlsi3_1_zext */
    }
  goto ret0;

 L5229: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5230;
    }
  goto ret0;

 L5230: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L15907;
 L5290: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5291;
    }
  goto ret0;

 L15907: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5231;
    }
 L15908: ATTRIBUTE_UNUSED_LABEL
  if (const1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5261;
    }
  goto L5290;

 L5231: ATTRIBUTE_UNUSED_LABEL
  if (
#line 11507 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_USE_CLTD || optimize_size)
   && INTVAL (operands[2]) == 31
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 440;  /* *ashrsi3_31_zext */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L15908;

 L5261: ATTRIBUTE_UNUSED_LABEL
  if (
#line 11546 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 442;  /* *ashrsi3_1_one_bit_zext */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L5290;

 L5291: ATTRIBUTE_UNUSED_LABEL
  if (
#line 11569 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 444;  /* *ashrsi3_1_zext */
    }
  goto ret0;

 L5785: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5786;
    }
  goto ret0;

 L5786: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5787;
    }
  goto ret0;

 L5787: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12155 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 477;  /* *lshrsi3_1_zext */
    }
  goto ret0;

 L6162: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6163;
    }
  goto ret0;

 L6163: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L6164;
    }
 L6193: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L6194;
    }
  goto ret0;

 L6164: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12595 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 502;  /* *rotlsi3_1_one_bit_zext */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L6193;

 L6194: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12619 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATE, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 504;  /* *rotlsi3_1_zext */
    }
  goto ret0;

 L6355: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6356;
    }
  goto ret0;

 L6356: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L6357;
    }
 L6386: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L6387;
    }
  goto ret0;

 L6357: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12819 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 515;  /* *rotrsi3_1_one_bit_zext */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L6386;

 L6387: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12846 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 517;  /* *rotrsi3_1_zext */
    }
  goto ret0;

 L5174: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L5175;
    }
  goto ret0;

 L5175: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L5176;
    }
  goto ret0;

 L5176: ATTRIBUTE_UNUSED_LABEL
  if (
#line 11414 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 437;  /* *ashrdi3_1 */
    }
  goto ret0;

 L5725: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L15910;
  goto ret0;

 L15910: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == ZERO_EXTEND)
    goto L5755;
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L5726;
    }
  goto ret0;

 L5755: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5756;
    }
  goto ret0;

 L5756: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L5757;
    }
  goto ret0;

 L5757: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12131 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 475;  /* *lshrsi3_1_one_bit_zext */
    }
  goto ret0;

 L5726: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L5727;
    }
  goto ret0;

 L5727: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12076 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 473;  /* *lshrdi3_1 */
    }
  goto ret0;

 L6104: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L6105;
    }
  goto ret0;

 L6105: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_1_to_31_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L6106;
    }
  goto ret0;

 L6106: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12523 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 498;  /* ix86_rotldi3 */
    }
  goto ret0;

 L6297: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L6298;
    }
  goto ret0;

 L6298: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_1_to_31_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L6299;
    }
  goto ret0;

 L6299: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12747 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 511;  /* ix86_rotrdi3 */
    }
  goto ret0;

 L15898: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 1:
      goto L15911;
    case 3:
      goto L15914;
    default:
      break;
    }
  goto ret0;

 L15911: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 12LL:
      goto L7026;
    case 16LL:
      goto L7325;
    case 19LL:
      goto L7396;
    default:
      break;
    }
  goto ret0;

 L7026: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 14363 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT))
    {
      return 568;  /* set_got_rex64 */
    }
  goto ret0;

 L7325: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 14814 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT))
    {
      return 591;  /* *load_tp_di */
    }
  goto ret0;

 L7396: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (tls_symbolic_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L7397;
    }
  goto ret0;

 L7397: ATTRIBUTE_UNUSED_LABEL
  if (
#line 14923 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_GNU2_TLS))
    {
      return 596;  /* *tls_dynamic_lea_64 */
    }
  goto ret0;

 L15914: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 19)
    goto L7410;
  goto ret0;

 L7410: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (tls_symbolic_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L7411;
    }
  goto ret0;

 L7411: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L7412;
    }
  goto ret0;

 L7412: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 7
      && 
#line 14937 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_GNU2_TLS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 597;  /* *tls_dynamic_call_64 */
    }
  goto ret0;

 L7113: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L7114;
    }
  goto ret0;

 L7114: ATTRIBUTE_UNUSED_LABEL
  if (
#line 14511 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_CMOVE)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 576;  /* *ffs_rex64 */
    }
  goto ret0;

 L7147: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L7148;
    }
  goto ret0;

 L7148: ATTRIBUTE_UNUSED_LABEL
  if (
#line 14548 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 579;  /* ctzdi2 */
    }
  goto ret0;

 L7177: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (63)])
    goto L7178;
  goto ret0;

 L7178: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == CLZ)
    goto L7179;
  goto ret0;

 L7179: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L7180;
    }
  goto ret0;

 L7180: ATTRIBUTE_UNUSED_LABEL
  if (
#line 14590 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 581;  /* *bsr_rex64 */
    }
  goto ret0;

 L7338: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L15915;
  goto ret0;

 L15915: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == UNSPEC)
    goto L15917;
  goto ret0;

 L15917: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x2, 0))
    {
    case 1:
      goto L15919;
    case 3:
      goto L15920;
    default:
      break;
    }
  goto ret0;

 L15919: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 16)
    goto L7339;
  goto ret0;

 L7339: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L7340;
  goto ret0;

 L7340: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L7341;
    }
  goto ret0;

 L7341: ATTRIBUTE_UNUSED_LABEL
  if (
#line 14827 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 592;  /* *add_tp_di */
    }
  goto ret0;

 L15920: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 19)
    goto L7430;
  goto ret0;

 L7430: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (tls_modbase_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L7431;
    }
  goto ret0;

 L7431: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  operands[3] = x3;
  goto L7432;

 L7432: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L7433;
  goto ret0;

 L7433: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == CONST)
    goto L7434;
  goto ret0;

 L7434: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == UNSPEC
      && XVECLEN (x3, 0) == 1
      && XINT (x3, 1) == 6)
    goto L7435;
  goto ret0;

 L7435: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (tls_symbolic_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L7436;
    }
  goto ret0;

 L7436: ATTRIBUTE_UNUSED_LABEL
  if (
#line 14954 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_GNU2_TLS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 598;  /* *tls_dynamic_gnu2_combine_64 */
    }
  goto ret0;

 L8965: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (ix86_carry_flag_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L8966;
    }
 L8971: ATTRIBUTE_UNUSED_LABEL
  if (ix86_comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L8972;
    }
  goto ret0;

 L8966: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (-1)])
    goto L8967;
  x2 = XEXP (x1, 0);
  goto L8971;

 L8967: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 18898 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 733;  /* x86_movdicc_0_m1_rex64 */
    }
  x2 = XEXP (x1, 0);
  goto L8971;

 L8972: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 17)
    goto L8973;
  goto ret0;

 L8973: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L8974;
  goto ret0;

 L8974: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L8975;
    }
  goto ret0;

 L8975: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L8976;
    }
  goto ret0;

 L8976: ATTRIBUTE_UNUSED_LABEL
  if (
#line 18915 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_CMOVE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM)))
    {
      return 734;  /* *movdicc_c_rex64 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_6 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  switch (GET_CODE (x1))
    {
    case ZERO_EXTRACT:
      goto L6487;
    case MEM:
      goto L15815;
    case REG:
    case SUBREG:
      goto L15553;
    default:
      goto L15559;
   }
 L15553: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L444;
    }
 L15559: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L734;
    }
 L15560: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == MEM)
    goto L558;
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L563;
    }
 L15576: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L951;
    }
 L15579: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L990;
    }
 L15582: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L1080;
    }
 L15586: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L1451;
    }
 L15587: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L1506;
    }
 L15590: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L4782;
    }
 L15591: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L6117;
    }
 L15593: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L7959;
    }
  goto ret0;

 L6487: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L6488;
    }
 L477: ATTRIBUTE_UNUSED_LABEL
  if (ext_register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L478;
    }
  goto ret0;

 L6488: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L6489;
  x2 = XEXP (x1, 0);
  goto L477;

 L6489: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (const_0_to_63_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L6524;
    }
  x2 = XEXP (x1, 0);
  goto L477;

 L6524: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == NOT)
    goto L6525;
  if (GET_CODE (x1) == CONST_INT)
    goto L15816;
  x1 = XEXP (x0, 0);
  x2 = XEXP (x1, 0);
  goto L477;

 L6525: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTRACT)
    goto L6526;
  x1 = XEXP (x0, 0);
  x2 = XEXP (x1, 0);
  goto L477;

 L6526: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L6527;
  x1 = XEXP (x0, 0);
  x2 = XEXP (x1, 0);
  goto L477;

 L6527: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L6528;
  x1 = XEXP (x0, 0);
  x2 = XEXP (x1, 0);
  goto L477;

 L6528: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (rtx_equal_p (x3, operands[1])
      && 
#line 13047 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_USE_BT || reload_completed))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 526;  /* *btcq */
    }
  x1 = XEXP (x0, 0);
  x2 = XEXP (x1, 0);
  goto L477;

 L15816: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x1, 0) == XWINT (x1, 0))
    switch ((int) XWINT (x1, 0))
      {
      case 1LL:
        goto L15818;
      case 0LL:
        goto L15819;
      default:
        break;
      }
  x1 = XEXP (x0, 0);
  x2 = XEXP (x1, 0);
  goto L477;

 L15818: ATTRIBUTE_UNUSED_LABEL
  if (
#line 13027 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_USE_BT || reload_completed))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 524;  /* *btsq */
    }
  x1 = XEXP (x0, 0);
  x2 = XEXP (x1, 0);
  goto L477;

 L15819: ATTRIBUTE_UNUSED_LABEL
  if (
#line 13037 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_USE_BT || reload_completed))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 525;  /* *btrq */
    }
  x1 = XEXP (x0, 0);
  x2 = XEXP (x1, 0);
  goto L477;

 L478: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L479;
  goto ret0;

 L479: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L480;
  goto ret0;

 L480: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (nonmemory_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L481;
    }
  goto ret0;

 L481: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1805 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT))
    {
      return 71;  /* movdi_insv_1_rex64 */
    }
  goto ret0;

 L15815: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L492;
    }
  goto L15559;

 L492: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_no_elim_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L493;
    }
  x1 = XEXP (x0, 0);
  goto L15559;

 L493: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1830 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT))
    {
      return 73;  /* *pushdi */
    }
 L497: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1836 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT))
    {
      return 74;  /* *pushdi2_rex64 */
    }
  x1 = XEXP (x0, 0);
  goto L15559;

 L444: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == ZERO_EXTRACT)
    goto L445;
  if (const0_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L537;
    }
 L546: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L547;
    }
  x1 = XEXP (x0, 0);
  goto L15559;

 L445: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (ext_register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L446;
    }
  x1 = XEXP (x0, 0);
  goto L15559;

 L446: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L447;
  x1 = XEXP (x0, 0);
  goto L15559;

 L447: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (8)]
      && 
#line 1722 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT))
    {
      return 66;  /* *movdi_extzv_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15559;

 L537: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1922 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && (!TARGET_USE_MOV0 || optimize_size)
   && reload_completed)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 78;  /* *movdi_xor_rex64 */
    }
  x1 = XEXP (x0, 1);
  goto L546;

 L547: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1933 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_PENTIUM || optimize_size)
   && reload_completed
   && operands[1] == constm1_rtx)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 79;  /* *movdi_or_rex64 */
    }
  x1 = XEXP (x0, 0);
  goto L15559;

 L734: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L15820;
 L550: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L551;
    }
  x1 = XEXP (x0, 0);
  goto L15560;

 L15820: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case ZERO_EXTEND:
      goto L735;
    case SIGN_EXTEND:
      goto L765;
    default:
     break;
   }
  goto L550;

 L735: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L736;
    }
  goto L550;

 L736: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3174 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 110;  /* zero_extendsidi2_32 */
    }
 L741: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3187 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT))
    {
      return 111;  /* zero_extendsidi2_rex64 */
    }
  x1 = XEXP (x0, 1);
  goto L550;

 L765: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L766;
    }
  goto L550;

 L766: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3259 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 114;  /* *extendsidi2_1 */
    }
  x1 = XEXP (x0, 1);
  goto L550;

 L551: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1949 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
    {
      return 80;  /* *movdi_2 */
    }
 L555: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1990 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
    {
      return 81;  /* *movdi_1_rex64 */
    }
  x1 = XEXP (x0, 0);
  goto L15560;

 L558: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (x86_64_movabs_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L559;
    }
  goto L15576;

 L559: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (nonmemory_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L560;
    }
  x1 = XEXP (x0, 0);
  goto L15576;

 L560: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2053 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_check_movabs (insn, 0)))
    {
      return 82;  /* *movabsdi_1_rex64 */
    }
  x1 = XEXP (x0, 0);
  goto L15576;

 L563: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L15822;
  x1 = XEXP (x0, 0);
  goto L15576;

 L15822: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case MEM:
      goto L564;
    case ZERO_EXTEND:
      goto L745;
    case SIGN_EXTEND:
      goto L770;
    case FIX:
      goto L922;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L15576;

 L564: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (x86_64_movabs_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L565;
    }
  x1 = XEXP (x0, 0);
  goto L15576;

 L565: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2067 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_check_movabs (insn, 1)))
    {
      return 83;  /* *movabsdi_2_rex64 */
    }
  x1 = XEXP (x0, 0);
  goto L15576;

 L745: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L15826;
    case QImode:
      goto L15827;
    case SImode:
      goto L15828;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L15576;

 L15826: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L746;
    }
  x1 = XEXP (x0, 0);
  goto L15576;

 L746: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3225 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT))
    {
      return 112;  /* zero_extendhidi2 */
    }
  x1 = XEXP (x0, 0);
  goto L15576;

 L15827: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L751;
    }
  x1 = XEXP (x0, 0);
  goto L15576;

 L751: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3233 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT))
    {
      return 113;  /* zero_extendqidi2 */
    }
  x1 = XEXP (x0, 0);
  goto L15576;

 L15828: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SIGN_EXTEND:
      goto L790;
    case PLUS:
      goto L1395;
    case SUBREG:
      goto L15831;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L15576;

 L790: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case HImode:
      goto L15832;
    case QImode:
      goto L15833;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L15576;

 L15832: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L791;
    }
  x1 = XEXP (x0, 0);
  goto L15576;

 L791: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3394 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT))
    {
      return 119;  /* *extendhisi2_zext */
    }
  x1 = XEXP (x0, 0);
  goto L15576;

 L15833: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L805;
    }
  x1 = XEXP (x0, 0);
  goto L15576;

 L805: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3455 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT))
    {
      return 122;  /* *extendqisi2_zext */
    }
  x1 = XEXP (x0, 0);
  goto L15576;

 L1395: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L1396;
  x1 = XEXP (x0, 0);
  goto L15576;

 L1396: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ix86_carry_flag_operator (x4, SImode))
    {
      operands[3] = x4;
      goto L1397;
    }
  x1 = XEXP (x0, 0);
  goto L15576;

 L1397: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1398;
    }
  x1 = XEXP (x0, 0);
  goto L15576;

 L1398: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1399;
    }
  x1 = XEXP (x0, 0);
  goto L15576;

 L1399: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4888 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (PLUS, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 190;  /* *addsi3_carry_zext */
    }
  x1 = XEXP (x0, 0);
  goto L15576;

 L15831: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 0)
    goto L1435;
  x1 = XEXP (x0, 0);
  goto L15576;

 L1435: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (no_seg_address_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1436;
    }
  x1 = XEXP (x0, 0);
  goto L15576;

 L1436: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4946 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT))
    {
      return 195;  /* *lea_1_zext */
    }
  x1 = XEXP (x0, 0);
  goto L15576;

 L770: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L15834;
    case HImode:
      goto L15835;
    case QImode:
      goto L15836;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L15576;

 L15834: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L771;
    }
  x1 = XEXP (x0, 0);
  goto L15576;

 L771: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3265 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT))
    {
      return 115;  /* extendsidi2_rex64 */
    }
  x1 = XEXP (x0, 0);
  goto L15576;

 L15835: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L776;
    }
  x1 = XEXP (x0, 0);
  goto L15576;

 L776: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3277 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT))
    {
      return 116;  /* extendhidi2 */
    }
  x1 = XEXP (x0, 0);
  goto L15576;

 L15836: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L781;
    }
  x1 = XEXP (x0, 0);
  goto L15576;

 L781: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3285 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT))
    {
      return 117;  /* extendqidi2 */
    }
  x1 = XEXP (x0, 0);
  goto L15576;

 L922: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L15837;
    case DFmode:
      goto L15838;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L15576;

 L15837: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L923;
    }
  x1 = XEXP (x0, 0);
  goto L15576;

 L923: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4150 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_SSE && (!TARGET_FISTTP || TARGET_SSE_MATH)))
    {
      return 142;  /* fix_truncsfdi_sse */
    }
  x1 = XEXP (x0, 0);
  goto L15576;

 L15838: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L928;
    }
  x1 = XEXP (x0, 0);
  goto L15576;

 L928: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4159 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_SSE2 && (!TARGET_FISTTP || TARGET_SSE_MATH)))
    {
      return 143;  /* fix_truncdfdi_sse */
    }
  x1 = XEXP (x0, 0);
  goto L15576;

 L951: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == FIX)
    goto L952;
  x1 = XEXP (x0, 0);
  goto L15579;

 L952: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L953;
    }
  x1 = XEXP (x0, 0);
  goto L15579;

 L953: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4205 "../.././gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress)))
    {
      return 148;  /* fix_truncdi_fisttp_i387_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15579;

 L990: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == FIX)
    goto L991;
  x1 = XEXP (x0, 0);
  goto L15582;

 L991: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L992;
    }
  x1 = XEXP (x0, 0);
  goto L15582;

 L992: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4233 "../.././gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 151;  /* fix_truncdi_i387_fisttp */
    }
  x1 = XEXP (x0, 0);
  goto L15582;

 L1080: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L15839;
  x1 = XEXP (x0, 0);
  goto L15586;

 L15839: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case FIX:
      goto L1081;
    case PLUS:
      goto L1294;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L15586;

 L1081: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L1082;
    }
  x1 = XEXP (x0, 0);
  goto L15586;

 L1082: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4286 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
   && !(reload_completed || reload_in_progress))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 157;  /* *fix_truncdi_i387_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15586;

 L1294: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L15842;
  x1 = XEXP (x0, 0);
  goto L15586;

 L15842: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L1311;
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1295;
    }
  x1 = XEXP (x0, 0);
  goto L15586;

 L1311: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ix86_carry_flag_operator (x3, DImode))
    {
      operands[3] = x3;
      goto L1312;
    }
  x1 = XEXP (x0, 0);
  goto L15586;

 L1312: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1313;
    }
  x1 = XEXP (x0, 0);
  goto L15586;

 L1313: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x86_64_general_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1314;
    }
  x1 = XEXP (x0, 0);
  goto L15586;

 L1314: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4827 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (PLUS, DImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 185;  /* adddi3_carry_rex64 */
    }
  x1 = XEXP (x0, 0);
  goto L15586;

 L1295: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1296;
    }
  x1 = XEXP (x0, 0);
  goto L15586;

 L1296: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4800 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_binary_operator_ok (PLUS, DImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 184;  /* *adddi3_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15586;

 L1451: ATTRIBUTE_UNUSED_LABEL
  tem = recog_4 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L15587;

 L1506: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L15868;
  x1 = XEXP (x0, 0);
  goto L15590;

 L15868: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L1507;
    case MINUS:
      goto L1999;
    case AND:
      goto L3084;
    case IOR:
      goto L3400;
    case XOR:
      goto L3783;
    case NEG:
      goto L4221;
    case NOT:
      goto L4593;
    case ASHIFT:
      goto L4738;
    case ASHIFTRT:
      goto L5070;
    case LSHIFTRT:
      goto L5635;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L15590;

 L1507: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1508;
    }
  x1 = XEXP (x0, 0);
  goto L15590;

 L1508: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x86_64_general_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1509;
    }
  x1 = XEXP (x0, 0);
  goto L15590;

 L1509: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5125 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (PLUS, DImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 203;  /* *adddi_1_rex64 */
    }
  x1 = XEXP (x0, 0);
  goto L15590;

 L1999: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2016;
    }
  x1 = XEXP (x0, 0);
  goto L15590;

 L2016: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == PLUS)
    goto L2017;
  if (general_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2001;
    }
 L2032: ATTRIBUTE_UNUSED_LABEL
  if (x86_64_general_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2033;
    }
  x1 = XEXP (x0, 0);
  goto L15590;

 L2017: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ix86_carry_flag_operator (x3, DImode))
    {
      operands[3] = x3;
      goto L2018;
    }
  x1 = XEXP (x0, 0);
  goto L15590;

 L2018: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x86_64_general_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2019;
    }
  x1 = XEXP (x0, 0);
  goto L15590;

 L2019: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6556 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (MINUS, DImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 234;  /* subdi3_carry_rex64 */
    }
  x1 = XEXP (x0, 0);
  goto L15590;

 L2001: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6530 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_binary_operator_ok (MINUS, DImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 233;  /* *subdi3_1 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2032;

 L2033: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6567 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (MINUS, DImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 235;  /* *subdi_1_rex64 */
    }
  x1 = XEXP (x0, 0);
  goto L15590;

 L3084: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3085;
    }
  x1 = XEXP (x0, 0);
  goto L15590;

 L3085: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x86_64_szext_general_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3086;
    }
  x1 = XEXP (x0, 0);
  goto L15590;

 L3086: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8056 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (AND, DImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 297;  /* *anddi_1_rex64 */
    }
  x1 = XEXP (x0, 0);
  goto L15590;

 L3400: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L15879;
  x1 = XEXP (x0, 0);
  goto L15590;

 L15879: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ASHIFT:
      goto L4720;
    case ASHIFTRT:
      goto L5052;
    case REG:
    case SUBREG:
    case MEM:
      goto L15878;
    default:
      x1 = XEXP (x0, 0);
      goto L15590;
   }
 L15878: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3401;
    }
  x1 = XEXP (x0, 0);
  goto L15590;

 L4720: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L4721;
  x1 = XEXP (x0, 0);
  goto L15590;

 L4721: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4722;
    }
  x1 = XEXP (x0, 0);
  goto L15590;

 L4722: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L4723;
  x1 = XEXP (x0, 0);
  goto L15590;

 L4723: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L4724;
    }
  x1 = XEXP (x0, 0);
  goto L15590;

 L4724: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == QImode
      && GET_CODE (x3) == MINUS)
    goto L4725;
  x1 = XEXP (x0, 0);
  goto L15590;

 L4725: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (64)])
    goto L4726;
  x1 = XEXP (x0, 0);
  goto L15590;

 L4726: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && 
#line 10306 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 408;  /* x86_64_shld */
    }
  x1 = XEXP (x0, 0);
  goto L15590;

 L5052: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L5053;
  x1 = XEXP (x0, 0);
  goto L15590;

 L5053: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5054;
    }
  x1 = XEXP (x0, 0);
  goto L15590;

 L5054: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ASHIFT)
    goto L5055;
  x1 = XEXP (x0, 0);
  goto L15590;

 L5055: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L5056;
    }
  x1 = XEXP (x0, 0);
  goto L15590;

 L5056: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == QImode
      && GET_CODE (x3) == MINUS)
    goto L5057;
  x1 = XEXP (x0, 0);
  goto L15590;

 L5057: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (64)])
    goto L5058;
  x1 = XEXP (x0, 0);
  goto L15590;

 L5058: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && 
#line 11281 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 429;  /* x86_64_shrd */
    }
  x1 = XEXP (x0, 0);
  goto L15590;

 L3401: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x86_64_general_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3402;
    }
  x1 = XEXP (x0, 0);
  goto L15590;

 L3402: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8529 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (IOR, DImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 315;  /* *iordi_1_rex64 */
    }
  x1 = XEXP (x0, 0);
  goto L15590;

 L3783: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3784;
    }
  x1 = XEXP (x0, 0);
  goto L15590;

 L3784: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x86_64_general_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3785;
    }
  x1 = XEXP (x0, 0);
  goto L15590;

 L3785: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8902 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (XOR, DImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 337;  /* *xordi_1_rex64 */
    }
  x1 = XEXP (x0, 0);
  goto L15590;

 L4221: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L4222;
    }
 L4233: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L4234;
    }
  x1 = XEXP (x0, 0);
  goto L15590;

 L4222: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9375 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT
   && ix86_unary_operator_ok (NEG, DImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 362;  /* *negdi2_1 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L4233;

 L4234: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9405 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_unary_operator_ok (NEG, DImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 363;  /* *negdi2_1_rex64 */
    }
  x1 = XEXP (x0, 0);
  goto L15590;

 L4593: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L4594;
    }
  x1 = XEXP (x0, 0);
  goto L15590;

 L4594: ATTRIBUTE_UNUSED_LABEL
  if (
#line 10025 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_unary_operator_ok (NOT, DImode, operands)))
    {
      return 396;  /* *one_cmpldi2_1_rex64 */
    }
  x1 = XEXP (x0, 0);
  goto L15590;

 L4738: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L4739;
    }
  x1 = XEXP (x0, 0);
  goto L15590;

 L4739: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L4740;
    }
  x1 = XEXP (x0, 0);
  goto L15590;

 L4740: ATTRIBUTE_UNUSED_LABEL
  if (
#line 10343 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFT, DImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 409;  /* *ashldi3_1_rex64 */
    }
  x1 = XEXP (x0, 0);
  goto L15590;

 L5070: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L5071;
    }
  x1 = XEXP (x0, 0);
  goto L15590;

 L5071: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT)
    goto L15881;
 L5099: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L5100;
    }
  x1 = XEXP (x0, 0);
  goto L15590;

 L15881: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L5072;
    }
 L15882: ATTRIBUTE_UNUSED_LABEL
  if (const1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L5086;
    }
  goto L5099;

 L5072: ATTRIBUTE_UNUSED_LABEL
  if (
#line 11302 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && INTVAL (operands[2]) == 63
   && (TARGET_USE_CLTD || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 430;  /* *ashrdi3_63_rex64 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L15882;

 L5086: ATTRIBUTE_UNUSED_LABEL
  if (
#line 11319 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 431;  /* *ashrdi3_1_one_bit_rex64 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L5099;

 L5100: ATTRIBUTE_UNUSED_LABEL
  if (
#line 11333 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, DImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 432;  /* *ashrdi3_1_rex64 */
    }
  x1 = XEXP (x0, 0);
  goto L15590;

 L5635: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L5636;
    }
  x1 = XEXP (x0, 0);
  goto L15590;

 L5636: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L5637;
    }
 L5650: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L5651;
    }
  x1 = XEXP (x0, 0);
  goto L15590;

 L5637: ATTRIBUTE_UNUSED_LABEL
  if (
#line 11981 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 467;  /* *lshrdi3_1_one_bit_rex64 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L5650;

 L5651: ATTRIBUTE_UNUSED_LABEL
  if (
#line 11995 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 468;  /* *lshrdi3_1_rex64 */
    }
  x1 = XEXP (x0, 0);
  goto L15590;

 L4782: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L15883;
  x1 = XEXP (x0, 0);
  goto L15591;

 L15883: ATTRIBUTE_UNUSED_LABEL
  tem = recog_5 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L15591;

 L6117: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L15921;
  x1 = XEXP (x0, 0);
  goto L15593;

 L15921: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case ROTATE:
      goto L6118;
    case ROTATERT:
      goto L6311;
    case UNSPEC:
      goto L15926;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L15593;

 L6118: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L6119;
    }
  x1 = XEXP (x0, 0);
  goto L15593;

 L6119: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L6120;
    }
 L6133: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L6134;
    }
  x1 = XEXP (x0, 0);
  goto L15593;

 L6120: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12546 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 499;  /* *rotlsi3_1_one_bit_rex64 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L6133;

 L6134: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12560 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATE, DImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 500;  /* *rotldi3_1_rex64 */
    }
  x1 = XEXP (x0, 0);
  goto L15593;

 L6311: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L6312;
    }
  x1 = XEXP (x0, 0);
  goto L15593;

 L6312: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const1_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L6313;
    }
 L6326: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L6327;
    }
  x1 = XEXP (x0, 0);
  goto L15593;

 L6313: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12770 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 512;  /* *rotrdi3_1_one_bit_rex64 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L6326;

 L6327: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12784 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, DImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 513;  /* *rotrdi3_1_rex64 */
    }
  x1 = XEXP (x0, 0);
  goto L15593;

 L15926: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1)
    goto L15929;
  x1 = XEXP (x0, 0);
  goto L15593;

 L15929: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 66LL:
      goto L7947;
    case 74LL:
      goto L8072;
    case 75LL:
      goto L8222;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L15593;

 L7947: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L7948;
    }
  x1 = XEXP (x0, 0);
  goto L15593;

 L7948: ATTRIBUTE_UNUSED_LABEL
  if (
#line 17208 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress)))
    {
      return 667;  /* *fistdi2_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15593;

 L8072: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L8073;
    }
  x1 = XEXP (x0, 0);
  goto L15593;

 L8073: ATTRIBUTE_UNUSED_LABEL
  if (
#line 17432 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 680;  /* *fistdi2_floor_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15593;

 L8222: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L8223;
    }
  x1 = XEXP (x0, 0);
  goto L15593;

 L8223: ATTRIBUTE_UNUSED_LABEL
  if (
#line 17673 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 691;  /* *fistdi2_ceil_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15593;

 L7959: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 66)
    goto L7960;
  goto ret0;

 L7960: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L7961;
    }
  goto ret0;

 L7961: ATTRIBUTE_UNUSED_LABEL
  if (
#line 17233 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 668;  /* fistdi2 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_7 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case FLOAT_TRUNCATE:
      goto L878;
    case FLOAT:
      goto L1187;
    case UNSPEC:
      goto L15958;
    case NEG:
      goto L4527;
    case ABS:
      goto L4542;
    case SQRT:
      goto L7652;
    case IF_THEN_ELSE:
      goto L9022;
    case SMIN:
      goto L9058;
    case SMAX:
      goto L9064;
    case NE:
    case EQ:
    case LE:
    case LT:
    case UNORDERED:
    case ORDERED:
    case UNGE:
    case UNGT:
      goto L15947;
    case PLUS:
    case MINUS:
    case MULT:
    case DIV:
      goto L15948;
    default:
      goto ret0;
   }
 L15947: ATTRIBUTE_UNUSED_LABEL
  if (sse_comparison_operator (x1, SFmode))
    {
      operands[1] = x1;
      goto L6543;
    }
 L15948: ATTRIBUTE_UNUSED_LABEL
  if (binary_fp_operator (x1, SFmode))
    {
      operands[3] = x1;
      goto L7440;
    }
  goto ret0;

 L878: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L879;
    }
  goto ret0;

 L879: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3901 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && flag_unsafe_math_optimizations))
    {
      return 135;  /* truncxfsf2_i387_noop */
    }
  goto ret0;

 L1187: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L15965;
    case SImode:
      goto L15966;
    case DImode:
      goto L15967;
    default:
      break;
    }
  goto ret0;

 L15965: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1188;
    }
  goto ret0;

 L1188: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4465 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387)))
    {
      return 166;  /* *floathisf2_i387 */
    }
  goto ret0;

 L15966: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1193;
    }
  goto ret0;

 L1193: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4483 "../.././gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387))
    {
      return 167;  /* *floatsisf2_mixed */
    }
 L1198: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4498 "../.././gcc/config/i386/i386.md"
(TARGET_SSE_MATH))
    {
      return 168;  /* *floatsisf2_sse */
    }
 L1203: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4508 "../.././gcc/config/i386/i386.md"
(TARGET_80387))
    {
      return 169;  /* *floatsisf2_i387 */
    }
  goto ret0;

 L15967: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1208;
    }
  goto ret0;

 L1208: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4526 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_MIX_SSE_I387))
    {
      return 170;  /* *floatdisf2_mixed */
    }
 L1213: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4541 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_SSE_MATH))
    {
      return 171;  /* *floatdisf2_sse */
    }
 L1218: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4551 "../.././gcc/config/i386/i386.md"
(TARGET_80387))
    {
      return 172;  /* *floatdisf2_i387 */
    }
  goto ret0;

 L15958: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 3:
      goto L15968;
    case 4:
      goto L15969;
    case 1:
      goto L15970;
    case 2:
      goto L15972;
    default:
      break;
    }
  goto ret0;

 L15968: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 50)
    goto L4407;
  goto ret0;

 L4407: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (vector_move_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L4408;
    }
  goto ret0;

 L4408: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L4409;
    }
  goto ret0;

 L4409: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[3] = x2;
      goto L4410;
    }
  goto ret0;

 L4410: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9601 "../.././gcc/config/i386/i386.md"
(TARGET_SSE_MATH))
    {
      return 376;  /* copysignsf3_const */
    }
  goto ret0;

 L15969: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 50)
    goto L4425;
  goto ret0;

 L4425: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L4426;
    }
  goto ret0;

 L4426: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L4427;
    }
  goto ret0;

 L4427: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[4] = x2;
      goto L4428;
    }
  goto ret0;

 L4428: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 3);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[5] = x2;
      goto L4429;
    }
  goto ret0;

 L4429: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9619 "../.././gcc/config/i386/i386.md"
(TARGET_SSE_MATH)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 377;  /* copysignsf3_var */
    }
  goto ret0;

 L15970: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 60LL:
      goto L7740;
    case 61LL:
      goto L7761;
    default:
      break;
    }
  goto ret0;

 L7740: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L7741;
    }
  goto ret0;

 L7741: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15779 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations))
    {
      return 644;  /* *sinsf2 */
    }
  goto ret0;

 L7761: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L7762;
    }
  goto ret0;

 L7762: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15820 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations))
    {
      return 648;  /* *cossf2 */
    }
  goto ret0;

 L15972: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 62LL:
      goto L7866;
    case 51LL:
      goto L9082;
    case 52LL:
      goto L9088;
    default:
      break;
    }
  goto ret0;

 L7866: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L7867;
    }
  goto ret0;

 L7867: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L7868;
    }
  goto ret0;

 L7868: ATTRIBUTE_UNUSED_LABEL
  if (
#line 16178 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 659;  /* atan2sf3_1 */
    }
  goto ret0;

 L9082: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L9083;
    }
  goto ret0;

 L9083: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L9084;
    }
  goto ret0;

 L9084: ATTRIBUTE_UNUSED_LABEL
  if (
#line 19173 "../.././gcc/config/i386/i386.md"
(TARGET_SSE_MATH))
    {
      return 747;  /* *ieee_sminsf3 */
    }
  goto ret0;

 L9088: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L9089;
    }
  goto ret0;

 L9089: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L9090;
    }
  goto ret0;

 L9090: ATTRIBUTE_UNUSED_LABEL
  if (
#line 19183 "../.././gcc/config/i386/i386.md"
(TARGET_SSE_MATH))
    {
      return 748;  /* *ieee_smaxsf3 */
    }
  goto ret0;

 L4527: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L4528;
    }
  goto ret0;

 L4528: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9915 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && (reload_completed || !TARGET_SSE_MATH)))
    {
      return 384;  /* *negsf2_1 */
    }
  goto ret0;

 L4542: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L4543;
    }
  goto ret0;

 L4543: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9939 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && (reload_completed || !TARGET_SSE_MATH)))
    {
      return 387;  /* *abssf2_1 */
    }
  goto ret0;

 L7652: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SFmode)
    goto L15975;
  goto ret0;

 L15975: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L7653;
    }
 L15976: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L7663;
    }
  goto ret0;

 L7653: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15492 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387 && TARGET_MIX_SSE_I387))
    {
      return 631;  /* *sqrtsf2_mixed */
    }
 L7658: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15503 "../.././gcc/config/i386/i386.md"
(TARGET_SSE_MATH))
    {
      return 632;  /* *sqrtsf2_sse */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L15976;

 L7663: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15512 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387))
    {
      return 633;  /* *sqrtsf2_i387 */
    }
  goto ret0;

 L9022: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (fcmov_comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L9023;
    }
  goto ret0;

 L9023: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 17)
    goto L9024;
  goto ret0;

 L9024: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L9025;
  goto ret0;

 L9025: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L9026;
    }
  goto ret0;

 L9026: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L9027;
    }
  goto ret0;

 L9027: ATTRIBUTE_UNUSED_LABEL
  if (
#line 19030 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM)))
    {
      return 739;  /* *movsfcc_1_387 */
    }
  goto ret0;

 L9058: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L9059;
    }
  goto ret0;

 L9059: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L9060;
    }
  goto ret0;

 L9060: ATTRIBUTE_UNUSED_LABEL
  if (
#line 19130 "../.././gcc/config/i386/i386.md"
(TARGET_SSE_MATH))
    {
      return 743;  /* sminsf3 */
    }
  goto ret0;

 L9064: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L9065;
    }
  goto ret0;

 L9065: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L9066;
    }
  goto ret0;

 L9066: ATTRIBUTE_UNUSED_LABEL
  if (
#line 19139 "../.././gcc/config/i386/i386.md"
(TARGET_SSE_MATH))
    {
      return 744;  /* smaxsf3 */
    }
  goto ret0;

 L6543: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L6544;
    }
  goto ret0;

 L6544: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L6545;
    }
  goto ret0;

 L6545: ATTRIBUTE_UNUSED_LABEL
  if (
#line 13365 "../.././gcc/config/i386/i386.md"
(TARGET_SSE))
    {
      return 529;  /* *sse_setccsf */
    }
  goto ret0;

 L7440: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SFmode)
    goto L15980;
  goto ret0;

 L15980: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT)
    goto L7477;
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L7441;
    }
 L15978: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L7465;
    }
 L15979: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L7471;
    }
  goto ret0;

 L7477: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case HImode:
      goto L15981;
    case SImode:
      goto L15982;
    default:
      break;
    }
  goto ret0;

 L15981: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L7478;
    }
  goto ret0;

 L7478: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L7479;
    }
  goto ret0;

 L7479: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15093 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_HIMODE_FIOP && !TARGET_SSE_MATH))
    {
      return 605;  /* *fop_sf_2hi_i387 */
    }
  goto ret0;

 L15982: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L7485;
    }
  goto ret0;

 L7485: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L7486;
    }
  goto ret0;

 L7486: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15093 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_SIMODE_FIOP && !TARGET_SSE_MATH))
    {
      return 606;  /* *fop_sf_2si_i387 */
    }
  goto ret0;

 L7441: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L7442;
    }
  x2 = XEXP (x1, 0);
  goto L15978;

 L7442: ATTRIBUTE_UNUSED_LABEL
  if (
#line 14981 "../.././gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387
   && COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 599;  /* *fop_sf_comm_mixed */
    }
 L7448: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15000 "../.././gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 600;  /* *fop_sf_comm_sse */
    }
 L7454: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15015 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 601;  /* *fop_sf_comm_i387 */
    }
 L7460: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15030 "../.././gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387
   && !COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 602;  /* *fop_sf_1_mixed */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L15978;

 L7465: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode)
    goto L15984;
  x2 = XEXP (x1, 0);
  goto L15979;

 L15984: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT)
    goto L7492;
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L7466;
    }
  x2 = XEXP (x1, 0);
  goto L15979;

 L7492: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case HImode:
      goto L15985;
    case SImode:
      goto L15986;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L15979;

 L15985: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L7493;
    }
  x2 = XEXP (x1, 0);
  goto L15979;

 L7493: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15110 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_HIMODE_FIOP && !TARGET_SSE_MATH))
    {
      return 607;  /* *fop_sf_3hi_i387 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L15979;

 L15986: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L7500;
    }
  x2 = XEXP (x1, 0);
  goto L15979;

 L7500: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15110 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_SIMODE_FIOP && !TARGET_SSE_MATH))
    {
      return 608;  /* *fop_sf_3si_i387 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L15979;

 L7466: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15056 "../.././gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && !COMMUTATIVE_ARITH_P (operands[3])))
    {
      return 603;  /* *fop_sf_1_sse */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L15979;

 L7471: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L7472;
    }
  goto ret0;

 L7472: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15074 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_SSE_MATH
   && !COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 604;  /* *fop_sf_1_i387 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_8 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case FLOAT_TRUNCATE:
      goto L904;
    case FLOAT:
      goto L1222;
    case UNSPEC:
      goto L16004;
    case NEG:
      goto L4532;
    case ABS:
      goto L4547;
    case SQRT:
      goto L7667;
    case IF_THEN_ELSE:
      goto L9031;
    case SMIN:
      goto L9070;
    case SMAX:
      goto L9076;
    case NE:
    case EQ:
    case LE:
    case LT:
    case UNORDERED:
    case ORDERED:
    case UNGE:
    case UNGT:
      goto L15993;
    case PLUS:
    case MINUS:
    case MULT:
    case DIV:
      goto L15994;
    default:
      goto ret0;
   }
 L15993: ATTRIBUTE_UNUSED_LABEL
  if (sse_comparison_operator (x1, DFmode))
    {
      operands[1] = x1;
      goto L6549;
    }
 L15994: ATTRIBUTE_UNUSED_LABEL
  if (binary_fp_operator (x1, DFmode))
    {
      operands[3] = x1;
      goto L7504;
    }
  goto ret0;

 L904: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L905;
    }
  goto ret0;

 L905: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3999 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && flag_unsafe_math_optimizations))
    {
      return 139;  /* truncxfdf2_i387_noop */
    }
  goto ret0;

 L1222: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L16011;
    case SImode:
      goto L16012;
    case DImode:
      goto L16013;
    default:
      break;
    }
  goto ret0;

 L16011: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1223;
    }
  goto ret0;

 L1223: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4576 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && (!(TARGET_SSE2 && TARGET_SSE_MATH) || TARGET_MIX_SSE_I387)))
    {
      return 173;  /* *floathidf2_i387 */
    }
  goto ret0;

 L16012: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1228;
    }
  goto ret0;

 L1228: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4594 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387))
    {
      return 174;  /* *floatsidf2_mixed */
    }
 L1233: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4609 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH))
    {
      return 175;  /* *floatsidf2_sse */
    }
 L1238: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4619 "../.././gcc/config/i386/i386.md"
(TARGET_80387))
    {
      return 176;  /* *floatsidf2_i387 */
    }
  goto ret0;

 L16013: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1243;
    }
  goto ret0;

 L1243: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4637 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_SSE2 && TARGET_MIX_SSE_I387))
    {
      return 177;  /* *floatdidf2_mixed */
    }
 L1248: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4652 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH))
    {
      return 178;  /* *floatdidf2_sse */
    }
 L1253: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4662 "../.././gcc/config/i386/i386.md"
(TARGET_80387))
    {
      return 179;  /* *floatdidf2_i387 */
    }
  goto ret0;

 L16004: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 3:
      goto L16014;
    case 4:
      goto L16015;
    case 1:
      goto L16016;
    case 2:
      goto L16018;
    default:
      break;
    }
  goto ret0;

 L16014: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 50)
    goto L4484;
  goto ret0;

 L4484: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (vector_move_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L4485;
    }
  goto ret0;

 L4485: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L4486;
    }
  goto ret0;

 L4486: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[3] = x2;
      goto L4487;
    }
  goto ret0;

 L4487: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9697 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH))
    {
      return 381;  /* copysigndf3_const */
    }
  goto ret0;

 L16015: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 50)
    goto L4502;
  goto ret0;

 L4502: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L4503;
    }
  goto ret0;

 L4503: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L4504;
    }
  goto ret0;

 L4504: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[4] = x2;
      goto L4505;
    }
  goto ret0;

 L4505: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 3);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[5] = x2;
      goto L4506;
    }
  goto ret0;

 L4506: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9715 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 382;  /* copysigndf3_var */
    }
  goto ret0;

 L16016: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 60LL:
      goto L7735;
    case 61LL:
      goto L7756;
    default:
      break;
    }
  goto ret0;

 L7735: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) == DFmode)
    goto L16022;
  goto ret0;

 L16022: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L7746;
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L7736;
    }
  goto ret0;

 L7746: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L7747;
    }
  goto ret0;

 L7747: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15791 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(TARGET_SSE2 && TARGET_SSE_MATH) || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations))
    {
      return 645;  /* *sinextendsfdf2 */
    }
  goto ret0;

 L7736: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15769 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(TARGET_SSE2 && TARGET_SSE_MATH) || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations))
    {
      return 643;  /* *sindf2 */
    }
  goto ret0;

 L7756: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) == DFmode)
    goto L16024;
  goto ret0;

 L16024: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L7767;
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L7757;
    }
  goto ret0;

 L7767: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L7768;
    }
  goto ret0;

 L7768: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15832 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(TARGET_SSE2 && TARGET_SSE_MATH) || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations))
    {
      return 649;  /* *cosextendsfdf2 */
    }
  goto ret0;

 L7757: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15810 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(TARGET_SSE2 && TARGET_SSE_MATH) || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations))
    {
      return 647;  /* *cosdf2 */
    }
  goto ret0;

 L16018: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 62LL:
      goto L7851;
    case 51LL:
      goto L9094;
    case 52LL:
      goto L9100;
    default:
      break;
    }
  goto ret0;

 L7851: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L7852;
    }
  goto ret0;

 L7852: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L7853;
    }
  goto ret0;

 L7853: ATTRIBUTE_UNUSED_LABEL
  if (
#line 16137 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(TARGET_SSE2 && TARGET_SSE_MATH) || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 658;  /* atan2df3_1 */
    }
  goto ret0;

 L9094: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L9095;
    }
  goto ret0;

 L9095: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L9096;
    }
  goto ret0;

 L9096: ATTRIBUTE_UNUSED_LABEL
  if (
#line 19193 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH))
    {
      return 749;  /* *ieee_smindf3 */
    }
  goto ret0;

 L9100: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L9101;
    }
  goto ret0;

 L9101: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L9102;
    }
  goto ret0;

 L9102: ATTRIBUTE_UNUSED_LABEL
  if (
#line 19203 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH))
    {
      return 750;  /* *ieee_smaxdf3 */
    }
  goto ret0;

 L4532: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L16026;
  goto ret0;

 L16026: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L4558;
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L4533;
    }
  goto ret0;

 L4558: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L4559;
    }
  goto ret0;

 L4559: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9964 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387)))
    {
      return 390;  /* *negextendsfdf2 */
    }
  goto ret0;

 L4533: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9923 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && (reload_completed || !(TARGET_SSE2 && TARGET_SSE_MATH))))
    {
      return 385;  /* *negdf2_1 */
    }
  goto ret0;

 L4547: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L16028;
  goto ret0;

 L16028: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L4576;
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L4548;
    }
  goto ret0;

 L4576: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L4577;
    }
  goto ret0;

 L4577: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9991 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387)))
    {
      return 393;  /* *absextendsfdf2 */
    }
  goto ret0;

 L4548: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9947 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && (reload_completed || !(TARGET_SSE2 && TARGET_SSE_MATH))))
    {
      return 388;  /* *absdf2_1 */
    }
  goto ret0;

 L7667: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L16031;
  goto ret0;

 L16031: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L7683;
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L7668;
    }
 L16030: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L7678;
    }
  goto ret0;

 L7683: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L7684;
    }
  goto ret0;

 L7684: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15560 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(TARGET_SSE2 && TARGET_SSE_MATH) || TARGET_MIX_SSE_I387)))
    {
      return 637;  /* *sqrtextendsfdf2_i387 */
    }
  goto ret0;

 L7668: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15530 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387 && TARGET_SSE2 && TARGET_MIX_SSE_I387))
    {
      return 634;  /* *sqrtdf2_mixed */
    }
 L7673: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15541 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH))
    {
      return 635;  /* *sqrtdf2_sse */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L16030;

 L7678: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15550 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387))
    {
      return 636;  /* *sqrtdf2_i387 */
    }
  goto ret0;

 L9031: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (fcmov_comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L9032;
    }
  goto ret0;

 L9032: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 17)
    goto L9033;
  goto ret0;

 L9033: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L9034;
  goto ret0;

 L9034: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L9035;
    }
  goto ret0;

 L9035: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L9036;
    }
  goto ret0;

 L9036: ATTRIBUTE_UNUSED_LABEL
  if (
#line 19054 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_80387 && TARGET_CMOVE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM)))
    {
      return 740;  /* *movdfcc_1 */
    }
 L9045: ATTRIBUTE_UNUSED_LABEL
  if (
#line 19070 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_80387 && TARGET_CMOVE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM)))
    {
      return 741;  /* *movdfcc_1_rex64 */
    }
  goto ret0;

 L9070: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L9071;
    }
  goto ret0;

 L9071: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L9072;
    }
  goto ret0;

 L9072: ATTRIBUTE_UNUSED_LABEL
  if (
#line 19148 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH))
    {
      return 745;  /* smindf3 */
    }
  goto ret0;

 L9076: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L9077;
    }
  goto ret0;

 L9077: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L9078;
    }
  goto ret0;

 L9078: ATTRIBUTE_UNUSED_LABEL
  if (
#line 19157 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH))
    {
      return 746;  /* smaxdf3 */
    }
  goto ret0;

 L6549: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L6550;
    }
  goto ret0;

 L6550: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L6551;
    }
  goto ret0;

 L6551: ATTRIBUTE_UNUSED_LABEL
  if (
#line 13375 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2))
    {
      return 530;  /* *sse_setccdf */
    }
  goto ret0;

 L7504: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L16035;
  goto ret0;

 L16035: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case FLOAT:
      goto L7541;
    case FLOAT_EXTEND:
      goto L7569;
    case REG:
    case SUBREG:
    case MEM:
      goto L16032;
    default:
      goto L16033;
   }
 L16032: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L7505;
    }
 L16033: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L7529;
    }
 L16034: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L7535;
    }
  goto ret0;

 L7541: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case HImode:
      goto L16037;
    case SImode:
      goto L16038;
    default:
      break;
    }
  goto ret0;

 L16037: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L7542;
    }
  goto ret0;

 L7542: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L7543;
    }
  goto ret0;

 L7543: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15239 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_HIMODE_FIOP
   && !(TARGET_SSE2 && TARGET_SSE_MATH)))
    {
      return 615;  /* *fop_df_2hi_i387 */
    }
  goto ret0;

 L16038: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L7549;
    }
  goto ret0;

 L7549: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L7550;
    }
  goto ret0;

 L7550: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15239 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_SIMODE_FIOP
   && !(TARGET_SSE2 && TARGET_SSE_MATH)))
    {
      return 616;  /* *fop_df_2si_i387 */
    }
  goto ret0;

 L7569: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode)
    goto L16039;
  goto ret0;

 L16039: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L7570;
    }
 L16040: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L7584;
    }
  goto ret0;

 L7570: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L7571;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L16040;

 L7571: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15275 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 619;  /* *fop_df_4_i387 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L16040;

 L7584: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode
      && GET_CODE (x2) == FLOAT_EXTEND)
    goto L7585;
  goto ret0;

 L7585: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L7586;
    }
  goto ret0;

 L7586: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15311 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH)))
    {
      return 621;  /* *fop_df_6_i387 */
    }
  goto ret0;

 L7505: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L7506;
    }
  x2 = XEXP (x1, 0);
  goto L16033;

 L7506: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15127 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387
   && COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 609;  /* *fop_df_comm_mixed */
    }
 L7512: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15146 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH
   && COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 610;  /* *fop_df_comm_sse */
    }
 L7518: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15161 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 611;  /* *fop_df_comm_i387 */
    }
 L7524: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15176 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH && TARGET_MIX_SSE_I387
   && !COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 612;  /* *fop_df_1_mixed */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L16033;

 L7529: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode)
    goto L16042;
  x2 = XEXP (x1, 0);
  goto L16034;

 L16042: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case FLOAT:
      goto L7556;
    case FLOAT_EXTEND:
      goto L7577;
    case REG:
    case SUBREG:
    case MEM:
      goto L16041;
    default:
      x2 = XEXP (x1, 0);
      goto L16034;
   }
 L16041: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L7530;
    }
  x2 = XEXP (x1, 0);
  goto L16034;

 L7556: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case HImode:
      goto L16044;
    case SImode:
      goto L16045;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L16034;

 L16044: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L7557;
    }
  x2 = XEXP (x1, 0);
  goto L16034;

 L7557: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15257 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_HIMODE_FIOP
   && !(TARGET_SSE2 && TARGET_SSE_MATH)))
    {
      return 617;  /* *fop_df_3hi_i387 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L16034;

 L16045: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L7564;
    }
  x2 = XEXP (x1, 0);
  goto L16034;

 L7564: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15257 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_SIMODE_FIOP
   && !(TARGET_SSE2 && TARGET_SSE_MATH)))
    {
      return 618;  /* *fop_df_3si_i387 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L16034;

 L7577: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L7578;
    }
  x2 = XEXP (x1, 0);
  goto L16034;

 L7578: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15293 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH)))
    {
      return 620;  /* *fop_df_5_i387 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L16034;

 L7530: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15202 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH
   && !COMMUTATIVE_ARITH_P (operands[3])))
    {
      return 613;  /* *fop_df_1_sse */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L16034;

 L7535: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L7536;
    }
  goto ret0;

 L7536: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15220 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH)
   && !COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 614;  /* *fop_df_1_i387 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_9 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case FLOAT:
      goto L1257;
    case NEG:
      goto L4537;
    case ABS:
      goto L4552;
    case SQRT:
      goto L7688;
    case UNSPEC:
      goto L16065;
    case IF_THEN_ELSE:
      goto L9049;
    case PLUS:
    case MINUS:
    case MULT:
    case DIV:
      goto L16051;
    default:
      goto ret0;
   }
 L16051: ATTRIBUTE_UNUSED_LABEL
  if (binary_fp_operator (x1, XFmode))
    {
      operands[3] = x1;
      goto L7590;
    }
  goto ret0;

 L1257: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L16076;
    case SImode:
      goto L16077;
    case DImode:
      goto L16078;
    default:
      break;
    }
  goto ret0;

 L16076: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1258;
    }
  goto ret0;

 L1258: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4674 "../.././gcc/config/i386/i386.md"
(TARGET_80387))
    {
      return 180;  /* floathixf2 */
    }
  goto ret0;

 L16077: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1263;
    }
  goto ret0;

 L1263: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4686 "../.././gcc/config/i386/i386.md"
(TARGET_80387))
    {
      return 181;  /* floatsixf2 */
    }
  goto ret0;

 L16078: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1268;
    }
  goto ret0;

 L1268: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4698 "../.././gcc/config/i386/i386.md"
(TARGET_80387))
    {
      return 182;  /* floatdixf2 */
    }
  goto ret0;

 L4537: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == XFmode)
    goto L16080;
  goto ret0;

 L16080: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L4564;
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L4538;
    }
  goto ret0;

 L4564: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case DFmode:
      goto L16081;
    case SFmode:
      goto L16082;
    default:
      break;
    }
  goto ret0;

 L16081: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L4565;
    }
  goto ret0;

 L4565: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9973 "../.././gcc/config/i386/i386.md"
(TARGET_80387))
    {
      return 391;  /* *negextenddfxf2 */
    }
  goto ret0;

 L16082: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L4571;
    }
  goto ret0;

 L4571: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9982 "../.././gcc/config/i386/i386.md"
(TARGET_80387))
    {
      return 392;  /* *negextendsfxf2 */
    }
  goto ret0;

 L4538: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9931 "../.././gcc/config/i386/i386.md"
(TARGET_80387))
    {
      return 386;  /* *negxf2_1 */
    }
  goto ret0;

 L4552: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == XFmode)
    goto L16084;
  goto ret0;

 L16084: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L4582;
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L4553;
    }
  goto ret0;

 L4582: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case DFmode:
      goto L16085;
    case SFmode:
      goto L16086;
    default:
      break;
    }
  goto ret0;

 L16085: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L4583;
    }
  goto ret0;

 L4583: ATTRIBUTE_UNUSED_LABEL
  if (
#line 10000 "../.././gcc/config/i386/i386.md"
(TARGET_80387))
    {
      return 394;  /* *absextenddfxf2 */
    }
  goto ret0;

 L16086: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L4589;
    }
  goto ret0;

 L4589: ATTRIBUTE_UNUSED_LABEL
  if (
#line 10009 "../.././gcc/config/i386/i386.md"
(TARGET_80387))
    {
      return 395;  /* *absextendsfxf2 */
    }
  goto ret0;

 L4553: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9955 "../.././gcc/config/i386/i386.md"
(TARGET_80387))
    {
      return 389;  /* *absxf2_1 */
    }
  goto ret0;

 L7688: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == XFmode)
    goto L16088;
  goto ret0;

 L16088: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L7694;
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L7689;
    }
  goto ret0;

 L7694: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SFmode:
      goto L16089;
    case DFmode:
      goto L16090;
    default:
      break;
    }
  goto ret0;

 L16089: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L7695;
    }
  goto ret0;

 L7695: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15580 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387))
    {
      return 639;  /* *sqrtextendsfxf2_i387 */
    }
  goto ret0;

 L16090: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L7701;
    }
  goto ret0;

 L7701: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15590 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387))
    {
      return 640;  /* *sqrtextenddfxf2_i387 */
    }
  goto ret0;

 L7689: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15570 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387))
    {
      return 638;  /* sqrtxf2 */
    }
  goto ret0;

 L16065: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 1:
      goto L16091;
    case 2:
      goto L16093;
    default:
      break;
    }
  goto ret0;

 L16091: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 60LL:
      goto L7751;
    case 61LL:
      goto L7772;
    case 67LL:
      goto L7926;
    case 65LL:
      goto L7942;
    case 70LL:
      goto L8026;
    case 71LL:
      goto L8176;
    case 72LL:
      goto L8326;
    case 73LL:
      goto L8348;
    default:
      break;
    }
  goto ret0;

 L7751: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L7752;
    }
  goto ret0;

 L7752: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15801 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
    {
      return 646;  /* *sinxf2 */
    }
  goto ret0;

 L7772: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L7773;
    }
  goto ret0;

 L7773: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15842 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
    {
      return 650;  /* *cosxf2 */
    }
  goto ret0;

 L7926: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L7927;
    }
  goto ret0;

 L7927: ATTRIBUTE_UNUSED_LABEL
  if (
#line 16710 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
    {
      return 664;  /* *f2xm1xf2 */
    }
  goto ret0;

 L7942: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L7943;
    }
  goto ret0;

 L7943: ATTRIBUTE_UNUSED_LABEL
  if (
#line 17154 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
    {
      return 666;  /* frndintxf2 */
    }
  goto ret0;

 L8026: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L8027;
    }
  goto ret0;

 L8027: ATTRIBUTE_UNUSED_LABEL
  if (
#line 17350 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 676;  /* frndintxf2_floor */
    }
  goto ret0;

 L8176: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L8177;
    }
  goto ret0;

 L8177: ATTRIBUTE_UNUSED_LABEL
  if (
#line 17591 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 687;  /* frndintxf2_ceil */
    }
  goto ret0;

 L8326: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L8327;
    }
  goto ret0;

 L8327: ATTRIBUTE_UNUSED_LABEL
  if (
#line 17832 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 698;  /* frndintxf2_trunc */
    }
  goto ret0;

 L8348: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L8349;
    }
  goto ret0;

 L8349: ATTRIBUTE_UNUSED_LABEL
  if (
#line 17915 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 700;  /* frndintxf2_mask_pm */
    }
  goto ret0;

 L16093: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 62LL:
      goto L7881;
    case 63LL:
      goto L7896;
    case 64LL:
      goto L7911;
    default:
      break;
    }
  goto ret0;

 L7881: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, XFmode))
    {
      operands[2] = x2;
      goto L7882;
    }
  goto ret0;

 L7882: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L7883;
    }
  goto ret0;

 L7883: ATTRIBUTE_UNUSED_LABEL
  if (
#line 16219 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 660;  /* atan2xf3_1 */
    }
  goto ret0;

 L7896: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, XFmode))
    {
      operands[2] = x2;
      goto L7897;
    }
  goto ret0;

 L7897: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L7898;
    }
  goto ret0;

 L7898: ATTRIBUTE_UNUSED_LABEL
  if (
#line 16395 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 661;  /* fyl2x_xf3 */
    }
  goto ret0;

 L7911: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, XFmode))
    {
      operands[2] = x2;
      goto L7912;
    }
  goto ret0;

 L7912: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L7913;
    }
  goto ret0;

 L7913: ATTRIBUTE_UNUSED_LABEL
  if (
#line 16581 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 662;  /* fyl2xp1_xf3 */
    }
  goto ret0;

 L9049: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (fcmov_comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L9050;
    }
  goto ret0;

 L9050: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 17)
    goto L9051;
  goto ret0;

 L9051: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L9052;
  goto ret0;

 L9052: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, XFmode))
    {
      operands[2] = x2;
      goto L9053;
    }
  goto ret0;

 L9053: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, XFmode))
    {
      operands[3] = x2;
      goto L9054;
    }
  goto ret0;

 L9054: ATTRIBUTE_UNUSED_LABEL
  if (
#line 19114 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE))
    {
      return 742;  /* *movxfcc_1 */
    }
  goto ret0;

 L7590: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == XFmode)
    goto L16103;
  goto ret0;

 L16103: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case FLOAT:
      goto L7603;
    case FLOAT_EXTEND:
      goto L7631;
    case REG:
    case SUBREG:
      goto L16102;
    default:
      goto ret0;
   }
 L16102: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L7591;
    }
  goto ret0;

 L7603: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case HImode:
      goto L16105;
    case SImode:
      goto L16106;
    default:
      break;
    }
  goto ret0;

 L16105: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L7604;
    }
  goto ret0;

 L7604: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, XFmode))
    {
      operands[2] = x2;
      goto L7605;
    }
  goto ret0;

 L7605: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15358 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_HIMODE_FIOP))
    {
      return 624;  /* *fop_xf_2hi_i387 */
    }
  goto ret0;

 L16106: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L7611;
    }
  goto ret0;

 L7611: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, XFmode))
    {
      operands[2] = x2;
      goto L7612;
    }
  goto ret0;

 L7612: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15358 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_SIMODE_FIOP))
    {
      return 625;  /* *fop_xf_2si_i387 */
    }
  goto ret0;

 L7631: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L7632;
    }
 L7645: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L7646;
    }
  goto ret0;

 L7632: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, XFmode))
    {
      operands[2] = x2;
      goto L7633;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L7645;

 L7633: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15392 "../.././gcc/config/i386/i386.md"
(TARGET_80387))
    {
      return 628;  /* *fop_xf_4_i387 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L7645;

 L7646: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == XFmode
      && GET_CODE (x2) == FLOAT_EXTEND)
    goto L7647;
  goto ret0;

 L7647: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L7648;
    }
  goto ret0;

 L7648: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15427 "../.././gcc/config/i386/i386.md"
(TARGET_80387))
    {
      return 630;  /* *fop_xf_6_i387 */
    }
  goto ret0;

 L7591: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == XFmode)
    goto L16108;
  goto ret0;

 L16108: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case FLOAT:
      goto L7618;
    case FLOAT_EXTEND:
      goto L7639;
    case REG:
    case SUBREG:
      goto L16107;
    default:
      goto ret0;
   }
 L16107: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, XFmode))
    {
      operands[2] = x2;
      goto L7592;
    }
  goto ret0;

 L7618: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case HImode:
      goto L16110;
    case SImode:
      goto L16111;
    default:
      break;
    }
  goto ret0;

 L16110: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L7619;
    }
  goto ret0;

 L7619: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15375 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_HIMODE_FIOP))
    {
      return 626;  /* *fop_xf_3hi_i387 */
    }
  goto ret0;

 L16111: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L7626;
    }
  goto ret0;

 L7626: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15375 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_SIMODE_FIOP))
    {
      return 627;  /* *fop_xf_3si_i387 */
    }
  goto ret0;

 L7639: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L7640;
    }
  goto ret0;

 L7640: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15409 "../.././gcc/config/i386/i386.md"
(TARGET_80387))
    {
      return 629;  /* *fop_xf_5_i387 */
    }
  goto ret0;

 L7592: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15327 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && COMMUTATIVE_ARITH_P (operands[3])))
    {
      return 622;  /* *fop_xf_comm_i387 */
    }
 L7598: ATTRIBUTE_UNUSED_LABEL
  if (
#line 15341 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && !COMMUTATIVE_ARITH_P (operands[3])))
    {
      return 623;  /* *fop_xf_1_i387 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_10 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DImode:
      goto L16113;
    case SImode:
      goto L16115;
    case HImode:
      goto L16117;
    case QImode:
      goto L16119;
    default:
      break;
    }
 L79: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L80;
    }
 L88: ATTRIBUTE_UNUSED_LABEL
  if (GET_MODE (x2) == QImode)
    goto L16158;
  goto ret0;

 L16113: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case MINUS:
      goto L10;
    case NEG:
      goto L1537;
    case PLUS:
      goto L1570;
    case AND:
      goto L2981;
    case ZERO_EXTRACT:
      goto L3069;
    case IOR:
      goto L3431;
    case XOR:
      goto L3814;
    case ASHIFT:
      goto L4769;
    case ASHIFTRT:
      goto L5129;
    case LSHIFTRT:
      goto L5680;
    case REG:
    case SUBREG:
    case MEM:
      goto L16112;
    default:
      goto L16122;
   }
 L16112: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L4;
    }
 L16122: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1553;
    }
  goto ret0;

 L10: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[0] = x3;
      goto L11;
    }
  goto ret0;

 L11: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x86_64_general_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L12;
    }
  goto ret0;

 L12: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 579 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)))
    {
      return 1;  /* *cmpdi_minus_1_rex64 */
    }
  goto ret0;

 L1537: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (x86_64_general_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1538;
    }
  goto ret0;

 L1538: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x86_64_general_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1539;
    }
  goto ret0;

 L1539: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5243 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCZmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 205;  /* *adddi_3_rex64 */
    }
  goto ret0;

 L1570: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1571;
    }
  goto ret0;

 L1571: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x86_64_general_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1572;
    }
  goto ret0;

 L1572: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 5341 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCGOCmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 207;  /* *adddi_5_rex64 */
    }
  goto ret0;

 L2981: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[0] = x3;
      goto L2982;
    }
  goto ret0;

 L2982: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x86_64_szext_general_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2983;
    }
  goto ret0;

 L2983: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 7723 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 286;  /* *testdi_1_rex64 */
    }
  goto ret0;

 L3069: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L3070;
    }
  goto ret0;

 L3070: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3071;
    }
  goto ret0;

 L3071: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (const_int_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L3072;
    }
  goto ret0;

 L3072: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 7926 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCNOmode)
   && INTVAL (operands[1]) > 0
   && INTVAL (operands[2]) >= 0
   /* Ensure that resulting mask is zero or sign extended operand.  */
   && (INTVAL (operands[1]) + INTVAL (operands[2]) <= 32
       || (INTVAL (operands[1]) + INTVAL (operands[2]) == 64
	   && INTVAL (operands[1]) > 32))
   && (GET_MODE (operands[0]) == SImode
       || GET_MODE (operands[0]) == DImode
       || GET_MODE (operands[0]) == HImode
       || GET_MODE (operands[0]) == QImode)))
    {
      return 296;  /* *testqi_ext_3_rex64 */
    }
  goto ret0;

 L3431: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3432;
    }
  goto ret0;

 L3432: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x86_64_general_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L3433;
    }
  goto ret0;

 L3433: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 8555 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, DImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 317;  /* *iordi_3_rex64 */
    }
  goto ret0;

 L3814: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3815;
    }
  goto ret0;

 L3815: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x86_64_general_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L3816;
    }
  goto ret0;

 L3816: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 8932 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, DImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 339;  /* *xordi_3_rex64 */
    }
  goto ret0;

 L4769: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L4770;
    }
  goto ret0;

 L4770: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (immediate_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4771;
    }
  goto ret0;

 L4771: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 10446 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, DImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || TARGET_DOUBLE_WITH_ADD))))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 411;  /* *ashldi3_cconly_rex64 */
    }
  goto ret0;

 L5129: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L5130;
    }
  goto ret0;

 L5130: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L16161;
  goto ret0;

 L16161: ATTRIBUTE_UNUSED_LABEL
  if (const1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5131;
    }
 L16162: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5162;
    }
  goto ret0;

 L5131: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 11368 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 434;  /* *ashrdi3_one_bit_cconly_rex64 */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L16162;

 L5162: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 11401 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 436;  /* *ashrdi3_cconly_rex64 */
    }
  goto ret0;

 L5680: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L5681;
    }
  goto ret0;

 L5681: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L16163;
  goto ret0;

 L16163: ATTRIBUTE_UNUSED_LABEL
  if (const1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5682;
    }
 L16164: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5713;
    }
  goto ret0;

 L5682: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 12030 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 470;  /* *lshrdi3_cconly_one_bit_rex64 */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L16164;

 L5713: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 12063 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 472;  /* *lshrdi3_cconly_rex64 */
    }
  goto ret0;

 L4: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const0_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L5;
    }
 L17: ATTRIBUTE_UNUSED_LABEL
  if (x86_64_general_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L18;
    }
  x2 = XEXP (x1, 0);
  goto L16122;

 L5: ATTRIBUTE_UNUSED_LABEL
  if (
#line 566 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)))
    {
      return 0;  /* cmpdi_ccno_1_rex64 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L17;

 L18: ATTRIBUTE_UNUSED_LABEL
  if (
#line 595 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCmode)))
    {
      return 2;  /* cmpdi_1_insn_rex64 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L16122;

 L1553: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x86_64_immediate_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1554;
    }
  goto ret0;

 L1554: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5300 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   &&  ix86_match_ccmode (insn, CCGCmode))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 206;  /* *adddi_4_rex64 */
    }
  goto ret0;

 L16115: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case MINUS:
      goto L29;
    case NEG:
      goto L1644;
    case PLUS:
      goto L1690;
    case AND:
      goto L2988;
    case ZERO_EXTRACT:
      goto L3061;
    case IOR:
      goto L3536;
    case XOR:
      goto L3919;
    case ASHIFT:
      goto L4869;
    case ASHIFTRT:
      goto L5320;
    case LSHIFTRT:
      goto L5816;
    case REG:
    case SUBREG:
    case MEM:
      goto L16114;
    default:
      goto L16125;
   }
 L16114: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L23;
    }
 L16125: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1673;
    }
  goto ret0;

 L29: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L30;
    }
  goto ret0;

 L30: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L31;
    }
  goto ret0;

 L31: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 618 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)))
    {
      return 4;  /* *cmpsi_minus_1 */
    }
  goto ret0;

 L1644: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1645;
    }
  goto ret0;

 L1645: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1646;
    }
  goto ret0;

 L1646: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5631 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCZmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 212;  /* *addsi_3 */
    }
  goto ret0;

 L1690: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1691;
    }
  goto ret0;

 L1691: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1692;
    }
  goto ret0;

 L1692: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 5766 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 215;  /* *addsi_5 */
    }
  goto ret0;

 L2988: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L16166;
  goto ret0;

 L16166: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == ZERO_EXTRACT)
    goto L3017;
  if (nonimmediate_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L2989;
    }
  goto ret0;

 L3017: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[0] = x4;
      goto L3018;
    }
  goto ret0;

 L3018: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L3019;
  goto ret0;

 L3019: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L3030;
  goto ret0;

 L3030: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode)
    goto L16167;
 L3020: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L3021;
    }
  goto ret0;

 L16167: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case ZERO_EXTEND:
      goto L3031;
    case ZERO_EXTRACT:
      goto L3053;
    default:
     break;
   }
  goto L3020;

 L3031: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (general_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L3032;
    }
 L3042: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L3043;
    }
  goto L3020;

 L3032: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 7861 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 292;  /* *testqi_ext_1 */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  goto L3042;

 L3043: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 7878 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)))
    {
      return 293;  /* *testqi_ext_1_rex64 */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L3020;

 L3053: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L3054;
    }
  goto L3020;

 L3054: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L3055;
  goto L3020;

 L3055: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L3056;
  goto L3020;

 L3056: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 7896 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)))
    {
      return 294;  /* *testqi_ext_2 */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L3020;

 L3021: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 7843 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)))
    {
      return 291;  /* *testqi_ext_0 */
    }
  goto ret0;

 L2989: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2990;
    }
  goto ret0;

 L2990: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 7742 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 287;  /* testsi_1 */
    }
  goto ret0;

 L3061: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L3062;
    }
  goto ret0;

 L3062: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3063;
    }
  goto ret0;

 L3063: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (const_int_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3064;
    }
  goto ret0;

 L3064: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 7909 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && INTVAL (operands[1]) > 0
   && INTVAL (operands[2]) >= 0
   && INTVAL (operands[1]) + INTVAL (operands[2]) <= 32
   && (GET_MODE (operands[0]) == SImode
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode)
       || GET_MODE (operands[0]) == HImode
       || GET_MODE (operands[0]) == QImode)))
    {
      return 295;  /* *testqi_ext_3 */
    }
  goto ret0;

 L3536: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3537;
    }
  goto ret0;

 L3537: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3538;
    }
  goto ret0;

 L3538: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 8650 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 324;  /* *iorsi_3 */
    }
  goto ret0;

 L3919: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3920;
    }
  goto ret0;

 L3920: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3921;
    }
  goto ret0;

 L3921: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 9027 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 346;  /* *xorsi_3 */
    }
  goto ret0;

 L4869: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4870;
    }
  goto ret0;

 L4870: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_1_to_31_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4871;
    }
  goto ret0;

 L4871: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 10773 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || TARGET_DOUBLE_WITH_ADD))))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 417;  /* *ashlsi3_cconly */
    }
  goto ret0;

 L5320: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5321;
    }
  goto ret0;

 L5321: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L16169;
  goto ret0;

 L16169: ATTRIBUTE_UNUSED_LABEL
  if (const1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5322;
    }
 L16170: ATTRIBUTE_UNUSED_LABEL
  if (const_1_to_31_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5367;
    }
  goto ret0;

 L5322: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 11604 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 446;  /* *ashrsi3_one_bit_cconly */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L16170;

 L5367: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 11652 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 449;  /* *ashrsi3_cconly */
    }
  goto ret0;

 L5816: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5817;
    }
  goto ret0;

 L5817: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L16171;
  goto ret0;

 L16171: ATTRIBUTE_UNUSED_LABEL
  if (const1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5818;
    }
 L16172: ATTRIBUTE_UNUSED_LABEL
  if (const_1_to_31_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5863;
    }
  goto ret0;

 L5818: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 12190 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 479;  /* *lshrsi3_one_bit_cconly */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L16172;

 L5863: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 12238 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 482;  /* *lshrsi3_cconly */
    }
  goto ret0;

 L23: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L24;
    }
 L36: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L37;
    }
  x2 = XEXP (x1, 0);
  goto L16125;

 L24: ATTRIBUTE_UNUSED_LABEL
  if (
#line 605 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)))
    {
      return 3;  /* *cmpsi_ccno_1 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L36;

 L37: ATTRIBUTE_UNUSED_LABEL
  if (
#line 634 "../.././gcc/config/i386/i386.md"
((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
    && ix86_match_ccmode (insn, CCmode)))
    {
      return 5;  /* *cmpsi_1_insn */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L16125;

 L1673: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1674;
    }
  goto ret0;

 L1674: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5727 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGCmode)
   && (INTVAL (operands[2]) & 0xffffffff) != 0x80000000)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 214;  /* *addsi_4 */
    }
  goto ret0;

 L16117: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case MINUS:
      goto L48;
    case NEG:
      goto L1748;
    case PLUS:
      goto L1781;
    case AND:
      goto L2995;
    case IOR:
      goto L3581;
    case XOR:
      goto L3964;
    case ASHIFT:
      goto L4942;
    case ASHIFTRT:
      goto L5438;
    case LSHIFTRT:
      goto L5934;
    case REG:
    case SUBREG:
    case MEM:
      goto L16116;
    default:
      goto L16128;
   }
 L16116: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L42;
    }
 L16128: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1764;
    }
  goto ret0;

 L48: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[0] = x3;
      goto L49;
    }
  goto ret0;

 L49: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L50;
    }
  goto ret0;

 L50: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 657 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)))
    {
      return 7;  /* *cmphi_minus_1 */
    }
  goto ret0;

 L1748: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (general_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L1749;
    }
  goto ret0;

 L1749: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1750;
    }
  goto ret0;

 L1750: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5946 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCZmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 219;  /* *addhi_3 */
    }
  goto ret0;

 L1781: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1782;
    }
  goto ret0;

 L1782: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L1783;
    }
  goto ret0;

 L1783: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 6026 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 221;  /* *addhi_5 */
    }
  goto ret0;

 L2995: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[0] = x3;
      goto L2996;
    }
  goto ret0;

 L2996: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L2997;
    }
  goto ret0;

 L2997: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 7764 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 288;  /* *testhi_1 */
    }
  goto ret0;

 L3581: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L3582;
    }
  goto ret0;

 L3582: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L3583;
    }
  goto ret0;

 L3583: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 8693 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 327;  /* *iorhi_3 */
    }
  goto ret0;

 L3964: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L3965;
    }
  goto ret0;

 L3965: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L3966;
    }
  goto ret0;

 L3966: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 9070 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 349;  /* *xorhi_3 */
    }
  goto ret0;

 L4942: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L4943;
    }
  goto ret0;

 L4943: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_1_to_31_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4944;
    }
  goto ret0;

 L4944: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 10980 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, HImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || TARGET_DOUBLE_WITH_ADD))))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 422;  /* *ashlhi3_cconly */
    }
  goto ret0;

 L5438: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L5439;
    }
  goto ret0;

 L5439: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L16173;
  goto ret0;

 L16173: ATTRIBUTE_UNUSED_LABEL
  if (const1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5440;
    }
 L16174: ATTRIBUTE_UNUSED_LABEL
  if (const_1_to_31_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5471;
    }
  goto ret0;

 L5440: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 11738 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 454;  /* *ashrhi3_one_bit_cconly */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L16174;

 L5471: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 11771 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 456;  /* *ashrhi3_cconly */
    }
  goto ret0;

 L5934: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L5935;
    }
  goto ret0;

 L5935: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L16175;
  goto ret0;

 L16175: ATTRIBUTE_UNUSED_LABEL
  if (const1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5936;
    }
 L16176: ATTRIBUTE_UNUSED_LABEL
  if (const_1_to_31_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5967;
    }
  goto ret0;

 L5936: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 12324 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 487;  /* *lshrhi3_one_bit_cconly */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L16176;

 L5967: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 12357 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 489;  /* *lshrhi3_cconly */
    }
  goto ret0;

 L42: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const0_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L43;
    }
 L55: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L56;
    }
  x2 = XEXP (x1, 0);
  goto L16128;

 L43: ATTRIBUTE_UNUSED_LABEL
  if (
#line 644 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)))
    {
      return 6;  /* *cmphi_ccno_1 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L55;

 L56: ATTRIBUTE_UNUSED_LABEL
  if (
#line 666 "../.././gcc/config/i386/i386.md"
((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && ix86_match_ccmode (insn, CCmode)))
    {
      return 8;  /* *cmphi_1 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L16128;

 L1764: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L1765;
    }
  goto ret0;

 L1765: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5986 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGCmode)
   && (INTVAL (operands[2]) & 0xffff) != 0x8000)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 220;  /* *addhi_4 */
    }
  goto ret0;

 L16119: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case MINUS:
      goto L73;
    case NEG:
      goto L1855;
    case PLUS:
      goto L1888;
    case AND:
      goto L3002;
    case IOR:
      goto L3656;
    case XOR:
      goto L4152;
    case ASHIFT:
      goto L5001;
    case ASHIFTRT:
      goto L5560;
    case LSHIFTRT:
      goto L6056;
    case REG:
    case SUBREG:
    case MEM:
      goto L16118;
    default:
      goto L16120;
   }
 L16118: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L61;
    }
 L16120: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == SUBREG
      && XINT (x2, 1) == 0)
    goto L98;
  goto L79;

 L73: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[0] = x3;
      goto L74;
    }
  goto L79;

 L74: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L75;
    }
  goto L79;

 L75: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 699 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)))
    {
      return 11;  /* *cmpqi_minus_1 */
    }
  x2 = XEXP (x1, 0);
  goto L79;

 L1855: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1856;
    }
  goto L79;

 L1856: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1857;
    }
  x2 = XEXP (x1, 0);
  goto L79;

 L1857: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6251 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCZmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 226;  /* *addqi_3 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L79;

 L1888: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L1889;
    }
  goto L79;

 L1889: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1890;
    }
  goto L79;

 L1890: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 6330 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 228;  /* *addqi_5 */
    }
  x2 = XEXP (x1, 0);
  goto L79;

 L3002: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[0] = x3;
      goto L3003;
    }
  goto L79;

 L3003: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L3004;
    }
  goto L79;

 L3004: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT)
    goto L16177;
  x2 = XEXP (x1, 0);
  goto L79;

 L16177: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x2, 0) == 0LL)
    goto L16179;
  x2 = XEXP (x1, 0);
  goto L79;

 L16179: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7787 "../.././gcc/config/i386/i386.md"
((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
    && ix86_match_ccmode (insn,
 			 GET_CODE (operands[1]) == CONST_INT
 			 && INTVAL (operands[1]) >= 0 ? CCNOmode : CCZmode)))
    {
      return 289;  /* *testqi_1_maybe_si */
    }
 L16180: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7812 "../.././gcc/config/i386/i386.md"
((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && ix86_match_ccmode (insn, CCNOmode)))
    {
      return 290;  /* *testqi_1 */
    }
  x2 = XEXP (x1, 0);
  goto L79;

 L3656: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L3657;
    }
  goto L79;

 L3657: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3658;
    }
  goto L79;

 L3658: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 8765 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 332;  /* *iorqi_3 */
    }
  x2 = XEXP (x1, 0);
  goto L79;

 L4152: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L4153;
    }
  goto L79;

 L4153: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4154;
    }
  goto L79;

 L4154: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 9217 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 358;  /* *xorqi_cc_2 */
    }
  x2 = XEXP (x1, 0);
  goto L79;

 L5001: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L5002;
    }
  goto L79;

 L5002: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_1_to_31_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5003;
    }
  goto L79;

 L5003: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 11184 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, QImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || TARGET_DOUBLE_WITH_ADD))))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 426;  /* *ashlqi3_cconly */
    }
  x2 = XEXP (x1, 0);
  goto L79;

 L5560: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L5561;
    }
  goto L79;

 L5561: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L16181;
  goto L79;

 L16181: ATTRIBUTE_UNUSED_LABEL
  if (const1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5562;
    }
 L16182: ATTRIBUTE_UNUSED_LABEL
  if (const_1_to_31_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5593;
    }
  goto L79;

 L5562: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 11869 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 462;  /* *ashrqi3_one_bit_cconly */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L16182;

 L5593: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 11902 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 464;  /* *ashrqi3_cconly */
    }
  x2 = XEXP (x1, 0);
  goto L79;

 L6056: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L6057;
    }
  goto L79;

 L6057: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L16183;
  goto L79;

 L16183: ATTRIBUTE_UNUSED_LABEL
  if (const1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L6058;
    }
 L16184: ATTRIBUTE_UNUSED_LABEL
  if (const_1_to_31_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L6089;
    }
  goto L79;

 L6058: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 12454 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 495;  /* *lshrqi2_one_bit_cconly */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L16184;

 L6089: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 12487 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 497;  /* *lshrqi2_cconly */
    }
  x2 = XEXP (x1, 0);
  goto L79;

 L61: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const0_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L62;
    }
 L67: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L68;
    }
  x2 = XEXP (x1, 0);
  goto L16120;

 L62: ATTRIBUTE_UNUSED_LABEL
  if (
#line 676 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)))
    {
      return 9;  /* *cmpqi_ccno_1 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L67;

 L68: ATTRIBUTE_UNUSED_LABEL
  if (
#line 688 "../.././gcc/config/i386/i386.md"
((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
    && ix86_match_ccmode (insn, CCmode)))
    {
      return 10;  /* *cmpqi_1 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L16120;

 L98: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L99;
  goto L79;

 L99: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[0] = x4;
      goto L100;
    }
  goto L79;

 L100: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L101;
  goto L79;

 L101: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L102;
  goto L79;

 L102: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const0_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L103;
    }
  x2 = XEXP (x1, 0);
  goto L79;

 L103: ATTRIBUTE_UNUSED_LABEL
  if (
#line 741 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)))
    {
      return 14;  /* *cmpqi_ext_2 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L79;

 L80: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == SUBREG
      && XINT (x2, 1) == 0)
    goto L81;
  x2 = XEXP (x1, 0);
  goto L88;

 L81: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L82;
  x2 = XEXP (x1, 0);
  goto L88;

 L82: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L83;
    }
  x2 = XEXP (x1, 0);
  goto L88;

 L83: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L84;
  x2 = XEXP (x1, 0);
  goto L88;

 L84: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)]
      && 
#line 713 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_match_ccmode (insn, CCmode)))
    {
      return 12;  /* *cmpqi_ext_1 */
    }
  x2 = XEXP (x1, 0);
  goto L88;

 L16158: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L89;
    }
 L16159: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == SUBREG
      && XINT (x2, 1) == 0)
    goto L108;
 L16160: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1871;
    }
  goto ret0;

 L89: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == SUBREG
      && XINT (x2, 1) == 0)
    goto L90;
  x2 = XEXP (x1, 0);
  goto L16159;

 L90: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L91;
  x2 = XEXP (x1, 0);
  goto L16159;

 L91: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L92;
    }
  x2 = XEXP (x1, 0);
  goto L16159;

 L92: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L93;
  x2 = XEXP (x1, 0);
  goto L16159;

 L93: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)]
      && 
#line 727 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCmode)))
    {
      return 13;  /* *cmpqi_ext_1_rex64 */
    }
  x2 = XEXP (x1, 0);
  goto L16159;

 L108: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L109;
  goto L16160;

 L109: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[0] = x4;
      goto L110;
    }
  goto L16160;

 L110: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L111;
  goto L16160;

 L111: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L112;
  goto L16160;

 L112: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L113;
    }
 L122: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L123;
    }
 L132: ATTRIBUTE_UNUSED_LABEL
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == SUBREG
      && XINT (x2, 1) == 0)
    goto L133;
  x2 = XEXP (x1, 0);
  goto L16160;

 L113: ATTRIBUTE_UNUSED_LABEL
  if (
#line 768 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_match_ccmode (insn, CCmode)))
    {
      return 15;  /* cmpqi_ext_3_insn */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L122;

 L123: ATTRIBUTE_UNUSED_LABEL
  if (
#line 782 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCmode)))
    {
      return 16;  /* cmpqi_ext_3_insn_rex64 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L132;

 L133: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L134;
  x2 = XEXP (x1, 0);
  goto L16160;

 L134: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L135;
    }
  x2 = XEXP (x1, 0);
  goto L16160;

 L135: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L136;
  x2 = XEXP (x1, 0);
  goto L16160;

 L136: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)]
      && 
#line 800 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)))
    {
      return 17;  /* *cmpqi_ext_4 */
    }
  x2 = XEXP (x1, 0);
  goto L16160;

 L1871: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1872;
    }
  goto ret0;

 L1872: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6290 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGCmode)
   && (INTVAL (operands[2]) & 0xff) != 0x80)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 227;  /* *addqi_4 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_11 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case UNSPEC:
      goto L16244;
    case PLUS:
      goto L10524;
    case SS_PLUS:
      goto L10548;
    case US_PLUS:
      goto L10560;
    case MINUS:
      goto L10572;
    case SS_MINUS:
      goto L10596;
    case US_MINUS:
      goto L10608;
    case UMAX:
      goto L10758;
    case UMIN:
      goto L10770;
    case EQ:
      goto L10782;
    case GT:
      goto L10800;
    case AND:
      goto L10818;
    case IOR:
      goto L10870;
    case XOR:
      goto L10894;
    case VEC_CONCAT:
      goto L10918;
    case VEC_SELECT:
      goto L10942;
    case TRUNCATE:
      goto L11176;
    default:
     break;
   }
  goto ret0;

 L16244: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 47)
    goto L9489;
  goto ret0;

 L9489: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (memory_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L9490;
    }
  goto ret0;

 L9490: ATTRIBUTE_UNUSED_LABEL
  if (
#line 265 "../.././gcc/config/i386/sse.md"
(TARGET_SSE3))
    {
      return 792;  /* sse3_lddqu */
    }
  goto ret0;

 L10524: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L10525;
    }
  goto ret0;

 L10525: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[2] = x2;
      goto L10526;
    }
  goto ret0;

 L10526: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2389 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V16QImode, operands)))
    {
      return 923;  /* *addv16qi3 */
    }
  goto ret0;

 L10548: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L10549;
    }
  goto ret0;

 L10549: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[2] = x2;
      goto L10550;
    }
  goto ret0;

 L10550: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2399 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V16QImode, operands)))
    {
      return 927;  /* sse2_ssaddv16qi3 */
    }
  goto ret0;

 L10560: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L10561;
    }
  goto ret0;

 L10561: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[2] = x2;
      goto L10562;
    }
  goto ret0;

 L10562: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2409 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V16QImode, operands)))
    {
      return 929;  /* sse2_usaddv16qi3 */
    }
  goto ret0;

 L10572: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L10573;
    }
  goto ret0;

 L10573: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[2] = x2;
      goto L10574;
    }
  goto ret0;

 L10574: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2426 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 931;  /* *subv16qi3 */
    }
  goto ret0;

 L10596: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L10597;
    }
  goto ret0;

 L10597: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[2] = x2;
      goto L10598;
    }
  goto ret0;

 L10598: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2436 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 935;  /* sse2_sssubv16qi3 */
    }
  goto ret0;

 L10608: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L10609;
    }
  goto ret0;

 L10609: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[2] = x2;
      goto L10610;
    }
  goto ret0;

 L10610: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2446 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 937;  /* sse2_ussubv16qi3 */
    }
  goto ret0;

 L10758: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L10759;
    }
  goto ret0;

 L10759: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[2] = x2;
      goto L10760;
    }
  goto ret0;

 L10760: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2814 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (UMAX, V16QImode, operands)))
    {
      return 954;  /* *umaxv16qi3 */
    }
  goto ret0;

 L10770: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L10771;
    }
  goto ret0;

 L10771: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[2] = x2;
      goto L10772;
    }
  goto ret0;

 L10772: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2899 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (UMIN, V16QImode, operands)))
    {
      return 956;  /* *uminv16qi3 */
    }
  goto ret0;

 L10782: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L10783;
    }
  goto ret0;

 L10783: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[2] = x2;
      goto L10784;
    }
  goto ret0;

 L10784: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2971 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (EQ, V16QImode, operands)))
    {
      return 958;  /* sse2_eqv16qi3 */
    }
  goto ret0;

 L10800: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L10801;
    }
  goto ret0;

 L10801: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[2] = x2;
      goto L10802;
    }
  goto ret0;

 L10802: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2981 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 961;  /* sse2_gtv16qi3 */
    }
  goto ret0;

 L10818: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V16QImode)
    goto L16246;
  goto ret0;

 L16246: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == NOT)
    goto L10843;
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L10819;
    }
  goto ret0;

 L10843: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V16QImode))
    {
      operands[1] = x3;
      goto L10844;
    }
  goto ret0;

 L10844: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[2] = x2;
      goto L10845;
    }
  goto ret0;

 L10845: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3061 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 968;  /* sse2_nandv16qi3 */
    }
  goto ret0;

 L10819: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[2] = x2;
      goto L10820;
    }
  goto ret0;

 L10820: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3051 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V16QImode, operands)))
    {
      return 964;  /* *andv16qi3 */
    }
  goto ret0;

 L10870: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L10871;
    }
  goto ret0;

 L10871: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[2] = x2;
      goto L10872;
    }
  goto ret0;

 L10872: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3078 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V16QImode, operands)))
    {
      return 972;  /* *iorv16qi3 */
    }
  goto ret0;

 L10894: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L10895;
    }
  goto ret0;

 L10895: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[2] = x2;
      goto L10896;
    }
  goto ret0;

 L10896: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3095 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V16QImode, operands)))
    {
      return 976;  /* *xorv16qi3 */
    }
  goto ret0;

 L10918: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V8QImode)
    goto L16247;
  goto ret0;

 L16247: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SS_TRUNCATE:
      goto L10919;
    case US_TRUNCATE:
      goto L10935;
    default:
     break;
   }
  goto ret0;

 L10919: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8HImode))
    {
      operands[1] = x3;
      goto L10920;
    }
  goto ret0;

 L10920: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V8QImode
      && GET_CODE (x2) == SS_TRUNCATE)
    goto L10921;
  goto ret0;

 L10921: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V8HImode))
    {
      operands[2] = x3;
      goto L10922;
    }
  goto ret0;

 L10922: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3113 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 980;  /* sse2_packsswb */
    }
  goto ret0;

 L10935: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8HImode))
    {
      operands[1] = x3;
      goto L10936;
    }
  goto ret0;

 L10936: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V8QImode
      && GET_CODE (x2) == US_TRUNCATE)
    goto L10937;
  goto ret0;

 L10937: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V8HImode))
    {
      operands[2] = x3;
      goto L10938;
    }
  goto ret0;

 L10938: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3137 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 982;  /* sse2_packuswb */
    }
  goto ret0;

 L10942: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V32QImode
      && GET_CODE (x2) == VEC_CONCAT)
    goto L10943;
  goto ret0;

 L10943: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V16QImode))
    {
      operands[1] = x3;
      goto L10944;
    }
  goto ret0;

 L10944: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V16QImode))
    {
      operands[2] = x3;
      goto L10945;
    }
  goto ret0;

 L10945: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 16)
    goto L10946;
  goto ret0;

 L10946: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT)
    goto L16249;
  goto ret0;

 L16249: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 8LL:
        goto L10947;
      case 0LL:
        goto L10970;
      default:
        break;
      }
  goto ret0;

 L10947: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (24)])
    goto L10948;
  goto ret0;

 L10948: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (9)])
    goto L10949;
  goto ret0;

 L10949: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (25)])
    goto L10950;
  goto ret0;

 L10950: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 4);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (10)])
    goto L10951;
  goto ret0;

 L10951: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 5);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (26)])
    goto L10952;
  goto ret0;

 L10952: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 6);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (11)])
    goto L10953;
  goto ret0;

 L10953: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 7);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (27)])
    goto L10954;
  goto ret0;

 L10954: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 8);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (12)])
    goto L10955;
  goto ret0;

 L10955: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 9);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (28)])
    goto L10956;
  goto ret0;

 L10956: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 10);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (13)])
    goto L10957;
  goto ret0;

 L10957: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 11);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (29)])
    goto L10958;
  goto ret0;

 L10958: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 12);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (14)])
    goto L10959;
  goto ret0;

 L10959: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 13);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (30)])
    goto L10960;
  goto ret0;

 L10960: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 14);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (15)])
    goto L10961;
  goto ret0;

 L10961: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 15);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (31)]
      && 
#line 3156 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 983;  /* sse2_punpckhbw */
    }
  goto ret0;

 L10970: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (16)])
    goto L10971;
  goto ret0;

 L10971: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L10972;
  goto ret0;

 L10972: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (17)])
    goto L10973;
  goto ret0;

 L10973: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 4);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (2)])
    goto L10974;
  goto ret0;

 L10974: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 5);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (18)])
    goto L10975;
  goto ret0;

 L10975: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 6);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (3)])
    goto L10976;
  goto ret0;

 L10976: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 7);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (19)])
    goto L10977;
  goto ret0;

 L10977: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 8);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    goto L10978;
  goto ret0;

 L10978: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 9);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (20)])
    goto L10979;
  goto ret0;

 L10979: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 10);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (5)])
    goto L10980;
  goto ret0;

 L10980: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 11);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (21)])
    goto L10981;
  goto ret0;

 L10981: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 12);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (6)])
    goto L10982;
  goto ret0;

 L10982: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 13);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (22)])
    goto L10983;
  goto ret0;

 L10983: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 14);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (7)])
    goto L10984;
  goto ret0;

 L10984: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 15);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (23)]
      && 
#line 3175 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 984;  /* sse2_punpcklbw */
    }
  goto ret0;

 L11176: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V16HImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L11177;
  goto ret0;

 L11177: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V16HImode
      && GET_CODE (x3) == PLUS)
    goto L11178;
  goto ret0;

 L11178: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == V16HImode
      && GET_CODE (x4) == PLUS)
    goto L11179;
  goto ret0;

 L11179: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == V16HImode
      && GET_CODE (x5) == ZERO_EXTEND)
    goto L11180;
  goto ret0;

 L11180: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (nonimmediate_operand (x6, V16QImode))
    {
      operands[1] = x6;
      goto L11181;
    }
  goto ret0;

 L11181: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == V16HImode
      && GET_CODE (x5) == ZERO_EXTEND)
    goto L11182;
  goto ret0;

 L11182: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (nonimmediate_operand (x6, V16QImode))
    {
      operands[2] = x6;
      goto L11183;
    }
  goto ret0;

 L11183: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == V16QImode
      && GET_CODE (x4) == CONST_VECTOR
      && XVECLEN (x4, 0) == 16)
    goto L11184;
  goto ret0;

 L11184: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L11185;
  goto ret0;

 L11185: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L11186;
  goto ret0;

 L11186: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 2);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L11187;
  goto ret0;

 L11187: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 3);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L11188;
  goto ret0;

 L11188: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 4);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L11189;
  goto ret0;

 L11189: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 5);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L11190;
  goto ret0;

 L11190: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 6);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L11191;
  goto ret0;

 L11191: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 7);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L11192;
  goto ret0;

 L11192: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 8);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L11193;
  goto ret0;

 L11193: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 9);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L11194;
  goto ret0;

 L11194: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 10);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L11195;
  goto ret0;

 L11195: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 11);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L11196;
  goto ret0;

 L11196: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 12);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L11197;
  goto ret0;

 L11197: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 13);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L11198;
  goto ret0;

 L11198: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 14);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L11199;
  goto ret0;

 L11199: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 15);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L11200;
  goto ret0;

 L11200: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 3748 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V16QImode, operands)))
    {
      return 1007;  /* sse2_uavgv16qi3 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_12 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L10530;
    case SS_PLUS:
      goto L10554;
    case US_PLUS:
      goto L10566;
    case MINUS:
      goto L10578;
    case SS_MINUS:
      goto L10602;
    case US_MINUS:
      goto L10614;
    case MULT:
      goto L10620;
    case TRUNCATE:
      goto L10626;
    case ASHIFTRT:
      goto L10698;
    case LSHIFTRT:
      goto L10710;
    case ASHIFT:
      goto L10728;
    case SMAX:
      goto L10764;
    case SMIN:
      goto L10776;
    case EQ:
      goto L10788;
    case GT:
      goto L10806;
    case AND:
      goto L10824;
    case IOR:
      goto L10876;
    case XOR:
      goto L10900;
    case VEC_CONCAT:
      goto L10926;
    case VEC_SELECT:
      goto L10988;
    case VEC_MERGE:
      goto L11058;
    default:
     break;
   }
  goto ret0;

 L10530: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L10531;
    }
  goto ret0;

 L10531: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[2] = x2;
      goto L10532;
    }
  goto ret0;

 L10532: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2389 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V8HImode, operands)))
    {
      return 924;  /* *addv8hi3 */
    }
  goto ret0;

 L10554: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L10555;
    }
  goto ret0;

 L10555: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[2] = x2;
      goto L10556;
    }
  goto ret0;

 L10556: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2399 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V8HImode, operands)))
    {
      return 928;  /* sse2_ssaddv8hi3 */
    }
  goto ret0;

 L10566: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L10567;
    }
  goto ret0;

 L10567: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[2] = x2;
      goto L10568;
    }
  goto ret0;

 L10568: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2409 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V8HImode, operands)))
    {
      return 930;  /* sse2_usaddv8hi3 */
    }
  goto ret0;

 L10578: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L10579;
    }
  goto ret0;

 L10579: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[2] = x2;
      goto L10580;
    }
  goto ret0;

 L10580: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2426 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 932;  /* *subv8hi3 */
    }
  goto ret0;

 L10602: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L10603;
    }
  goto ret0;

 L10603: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[2] = x2;
      goto L10604;
    }
  goto ret0;

 L10604: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2436 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 936;  /* sse2_sssubv8hi3 */
    }
  goto ret0;

 L10614: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L10615;
    }
  goto ret0;

 L10615: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[2] = x2;
      goto L10616;
    }
  goto ret0;

 L10616: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2446 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 938;  /* sse2_ussubv8hi3 */
    }
  goto ret0;

 L10620: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L10621;
    }
  goto ret0;

 L10621: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[2] = x2;
      goto L10622;
    }
  goto ret0;

 L10622: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2506 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V8HImode, operands)))
    {
      return 939;  /* *mulv8hi3 */
    }
  goto ret0;

 L10626: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V8SImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L10627;
  goto ret0;

 L10627: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V8SImode)
    goto L16272;
  goto ret0;

 L16272: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case MULT:
      goto L10628;
    case PLUS:
      goto L11206;
    default:
     break;
   }
  goto ret0;

 L10628: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == V8SImode)
    goto L16274;
  goto ret0;

 L16274: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case SIGN_EXTEND:
      goto L10629;
    case ZERO_EXTEND:
      goto L10639;
    default:
     break;
   }
  goto ret0;

 L10629: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, V8HImode))
    {
      operands[1] = x5;
      goto L10630;
    }
  goto ret0;

 L10630: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == V8SImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L10631;
  goto ret0;

 L10631: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, V8HImode))
    {
      operands[2] = x5;
      goto L10632;
    }
  goto ret0;

 L10632: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (16)]
      && 
#line 2521 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V8HImode, operands)))
    {
      return 940;  /* sse2_smulv8hi3_highpart */
    }
  goto ret0;

 L10639: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, V8HImode))
    {
      operands[1] = x5;
      goto L10640;
    }
  goto ret0;

 L10640: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == V8SImode
      && GET_CODE (x4) == ZERO_EXTEND)
    goto L10641;
  goto ret0;

 L10641: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, V8HImode))
    {
      operands[2] = x5;
      goto L10642;
    }
  goto ret0;

 L10642: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (16)]
      && 
#line 2536 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V8HImode, operands)))
    {
      return 941;  /* sse2_umulv8hi3_highpart */
    }
  goto ret0;

 L11206: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == V8SImode
      && GET_CODE (x4) == PLUS)
    goto L11207;
  goto ret0;

 L11207: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == V8SImode
      && GET_CODE (x5) == ZERO_EXTEND)
    goto L11208;
  goto ret0;

 L11208: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (nonimmediate_operand (x6, V8HImode))
    {
      operands[1] = x6;
      goto L11209;
    }
  goto ret0;

 L11209: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == V8SImode
      && GET_CODE (x5) == ZERO_EXTEND)
    goto L11210;
  goto ret0;

 L11210: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (nonimmediate_operand (x6, V8HImode))
    {
      operands[2] = x6;
      goto L11211;
    }
  goto ret0;

 L11211: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == V8HImode
      && GET_CODE (x4) == CONST_VECTOR
      && XVECLEN (x4, 0) == 8)
    goto L11212;
  goto ret0;

 L11212: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L11213;
  goto ret0;

 L11213: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L11214;
  goto ret0;

 L11214: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 2);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L11215;
  goto ret0;

 L11215: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 3);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L11216;
  goto ret0;

 L11216: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 4);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L11217;
  goto ret0;

 L11217: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 5);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L11218;
  goto ret0;

 L11218: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 6);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L11219;
  goto ret0;

 L11219: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 7);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L11220;
  goto ret0;

 L11220: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 3768 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V8HImode, operands)))
    {
      return 1008;  /* sse2_uavgv8hi3 */
    }
  goto ret0;

 L10698: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L10699;
    }
  goto ret0;

 L10699: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, TImode))
    {
      operands[2] = x2;
      goto L10700;
    }
  goto ret0;

 L10700: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2730 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 944;  /* ashrv8hi3 */
    }
  goto ret0;

 L10710: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L10711;
    }
  goto ret0;

 L10711: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, TImode))
    {
      operands[2] = x2;
      goto L10712;
    }
  goto ret0;

 L10712: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2740 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 946;  /* lshrv8hi3 */
    }
  goto ret0;

 L10728: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L10729;
    }
  goto ret0;

 L10729: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, TImode))
    {
      operands[2] = x2;
      goto L10730;
    }
  goto ret0;

 L10730: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2750 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 949;  /* ashlv8hi3 */
    }
  goto ret0;

 L10764: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L10765;
    }
  goto ret0;

 L10765: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[2] = x2;
      goto L10766;
    }
  goto ret0;

 L10766: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2830 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SMAX, V8HImode, operands)))
    {
      return 955;  /* *smaxv8hi3 */
    }
  goto ret0;

 L10776: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L10777;
    }
  goto ret0;

 L10777: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[2] = x2;
      goto L10778;
    }
  goto ret0;

 L10778: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2915 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SMIN, V8HImode, operands)))
    {
      return 957;  /* *sminv8hi3 */
    }
  goto ret0;

 L10788: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L10789;
    }
  goto ret0;

 L10789: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[2] = x2;
      goto L10790;
    }
  goto ret0;

 L10790: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2971 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (EQ, V8HImode, operands)))
    {
      return 959;  /* sse2_eqv8hi3 */
    }
  goto ret0;

 L10806: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L10807;
    }
  goto ret0;

 L10807: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[2] = x2;
      goto L10808;
    }
  goto ret0;

 L10808: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2981 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 962;  /* sse2_gtv8hi3 */
    }
  goto ret0;

 L10824: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V8HImode)
    goto L16277;
  goto ret0;

 L16277: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == NOT)
    goto L10850;
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L10825;
    }
  goto ret0;

 L10850: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8HImode))
    {
      operands[1] = x3;
      goto L10851;
    }
  goto ret0;

 L10851: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[2] = x2;
      goto L10852;
    }
  goto ret0;

 L10852: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3061 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 969;  /* sse2_nandv8hi3 */
    }
  goto ret0;

 L10825: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[2] = x2;
      goto L10826;
    }
  goto ret0;

 L10826: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3051 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V8HImode, operands)))
    {
      return 965;  /* *andv8hi3 */
    }
  goto ret0;

 L10876: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L10877;
    }
  goto ret0;

 L10877: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[2] = x2;
      goto L10878;
    }
  goto ret0;

 L10878: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3078 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V8HImode, operands)))
    {
      return 973;  /* *iorv8hi3 */
    }
  goto ret0;

 L10900: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L10901;
    }
  goto ret0;

 L10901: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[2] = x2;
      goto L10902;
    }
  goto ret0;

 L10902: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3095 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V8HImode, operands)))
    {
      return 977;  /* *xorv8hi3 */
    }
  goto ret0;

 L10926: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4HImode
      && GET_CODE (x2) == SS_TRUNCATE)
    goto L10927;
  goto ret0;

 L10927: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SImode))
    {
      operands[1] = x3;
      goto L10928;
    }
  goto ret0;

 L10928: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4HImode
      && GET_CODE (x2) == SS_TRUNCATE)
    goto L10929;
  goto ret0;

 L10929: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V4SImode))
    {
      operands[2] = x3;
      goto L10930;
    }
  goto ret0;

 L10930: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3125 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 981;  /* sse2_packssdw */
    }
  goto ret0;

 L10988: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case V16HImode:
      goto L16278;
    case V8HImode:
      goto L16279;
    default:
      break;
    }
  goto ret0;

 L16278: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_CONCAT)
    goto L10989;
  goto ret0;

 L10989: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8HImode))
    {
      operands[1] = x3;
      goto L10990;
    }
  goto ret0;

 L10990: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V8HImode))
    {
      operands[2] = x3;
      goto L10991;
    }
  goto ret0;

 L10991: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 8)
    goto L10992;
  goto ret0;

 L10992: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT)
    goto L16280;
  goto ret0;

 L16280: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 4LL:
        goto L10993;
      case 0LL:
        goto L11008;
      default:
        break;
      }
  goto ret0;

 L10993: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (12)])
    goto L10994;
  goto ret0;

 L10994: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (5)])
    goto L10995;
  goto ret0;

 L10995: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (13)])
    goto L10996;
  goto ret0;

 L10996: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 4);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (6)])
    goto L10997;
  goto ret0;

 L10997: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 5);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (14)])
    goto L10998;
  goto ret0;

 L10998: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 6);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (7)])
    goto L10999;
  goto ret0;

 L10999: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 7);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (15)]
      && 
#line 3190 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 985;  /* sse2_punpckhwd */
    }
  goto ret0;

 L11008: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L11009;
  goto ret0;

 L11009: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L11010;
  goto ret0;

 L11010: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (9)])
    goto L11011;
  goto ret0;

 L11011: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 4);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (2)])
    goto L11012;
  goto ret0;

 L11012: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 5);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (10)])
    goto L11013;
  goto ret0;

 L11013: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 6);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (3)])
    goto L11014;
  goto ret0;

 L11014: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 7);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (11)]
      && 
#line 3205 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 986;  /* sse2_punpcklwd */
    }
  goto ret0;

 L16279: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L11085;
    }
  goto ret0;

 L11085: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 8)
    goto L11086;
  goto ret0;

 L11086: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT)
    goto L16282;
  goto ret0;

 L16282: ATTRIBUTE_UNUSED_LABEL
  if (const_0_to_3_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L11087;
    }
 L16283: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x3, 0) == 0LL)
    goto L11100;
  goto ret0;

 L11087: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (const_0_to_3_operand (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L11088;
    }
  x3 = XVECEXP (x2, 0, 0);
  goto L16283;

 L11088: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (const_0_to_3_operand (x3, VOIDmode))
    {
      operands[4] = x3;
      goto L11089;
    }
  x3 = XVECEXP (x2, 0, 0);
  goto L16283;

 L11089: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (const_0_to_3_operand (x3, VOIDmode))
    {
      operands[5] = x3;
      goto L11090;
    }
  x3 = XVECEXP (x2, 0, 0);
  goto L16283;

 L11090: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 4);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    goto L11091;
  x3 = XVECEXP (x2, 0, 0);
  goto L16283;

 L11091: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 5);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (5)])
    goto L11092;
  x3 = XVECEXP (x2, 0, 0);
  goto L16283;

 L11092: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 6);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (6)])
    goto L11093;
  x3 = XVECEXP (x2, 0, 0);
  goto L16283;

 L11093: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 7);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (7)]
      && 
#line 3365 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 994;  /* sse2_pshuflw_1 */
    }
  x3 = XVECEXP (x2, 0, 0);
  goto L16283;

 L11100: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L11101;
  goto ret0;

 L11101: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (2)])
    goto L11102;
  goto ret0;

 L11102: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (3)])
    goto L11103;
  goto ret0;

 L11103: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 4);
  if (const_4_to_7_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L11104;
    }
  goto ret0;

 L11104: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 5);
  if (const_4_to_7_operand (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L11105;
    }
  goto ret0;

 L11105: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 6);
  if (const_4_to_7_operand (x3, VOIDmode))
    {
      operands[4] = x3;
      goto L11106;
    }
  goto ret0;

 L11106: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 7);
  if (const_4_to_7_operand (x3, VOIDmode))
    {
      operands[5] = x3;
      goto L11107;
    }
  goto ret0;

 L11107: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3406 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 995;  /* sse2_pshufhw_1 */
    }
  goto ret0;

 L11058: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V8HImode
      && GET_CODE (x2) == VEC_DUPLICATE)
    goto L11059;
  goto ret0;

 L11059: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L11060;
    }
  goto ret0;

 L11060: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V8HImode))
    {
      operands[1] = x2;
      goto L11061;
    }
  goto ret0;

 L11061: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (const_pow2_1_to_128_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L11062;
    }
  goto ret0;

 L11062: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3282 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 991;  /* *sse2_pinsrw */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_13 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case UNSPEC:
      goto L16300;
    case FIX:
      goto L9906;
    case VEC_CONCAT:
      goto L10371;
    case PLUS:
      goto L10536;
    case MINUS:
      goto L10584;
    case ASHIFTRT:
      goto L10704;
    case LSHIFTRT:
      goto L10716;
    case ASHIFT:
      goto L10734;
    case EQ:
      goto L10794;
    case GT:
      goto L10812;
    case AND:
      goto L10830;
    case IOR:
      goto L10882;
    case XOR:
      goto L10906;
    case VEC_SELECT:
      goto L11018;
    case VEC_MERGE:
      goto L11111;
    case VEC_DUPLICATE:
      goto L11142;
    default:
     break;
   }
  goto ret0;

 L16300: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 30)
    goto L9901;
  goto ret0;

 L9901: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L9902;
    }
  goto ret0;

 L9902: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1000 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 842;  /* sse2_cvtps2dq */
    }
  goto ret0;

 L9906: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L9907;
    }
  goto ret0;

 L9907: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1008 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 843;  /* sse2_cvttps2dq */
    }
  goto ret0;

 L10371: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SImode)
    goto L16301;
  goto ret0;

 L16301: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case UNSPEC:
      goto L16304;
    case FIX:
      goto L10379;
    case REG:
    case SUBREG:
      goto L16303;
    default:
      goto ret0;
   }
 L16303: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L11165;
    }
  goto ret0;

 L16304: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 30)
    goto L10372;
  goto ret0;

 L10372: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L10373;
    }
  goto ret0;

 L10373: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const0_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L10374;
    }
  goto ret0;

 L10374: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1946 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 902;  /* *sse2_cvtpd2dq */
    }
  goto ret0;

 L10379: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L10380;
    }
  goto ret0;

 L10380: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const0_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L10381;
    }
  goto ret0;

 L10381: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1964 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 903;  /* *sse2_cvttpd2dq */
    }
  goto ret0;

 L11165: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L11166;
    }
  goto ret0;

 L11166: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3575 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 1005;  /* *vec_concatv4si_1 */
    }
  goto ret0;

 L10536: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4SImode)
    goto L16306;
  goto ret0;

 L16306: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L10662;
  if (nonimmediate_operand (x2, V4SImode))
    {
      operands[1] = x2;
      goto L10537;
    }
  goto ret0;

 L10662: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V4SImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L10663;
  goto ret0;

 L10663: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == V4HImode
      && GET_CODE (x4) == VEC_SELECT)
    goto L10664;
  goto ret0;

 L10664: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, V8HImode))
    {
      operands[1] = x5;
      goto L10665;
    }
  goto ret0;

 L10665: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 4)
    goto L10666;
  goto ret0;

 L10666: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L10667;
  goto ret0;

 L10667: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 1);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (2)])
    goto L10668;
  goto ret0;

 L10668: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 2);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    goto L10669;
  goto ret0;

 L10669: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 3);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (6)])
    goto L10670;
  goto ret0;

 L10670: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == V4SImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L10671;
  goto ret0;

 L10671: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == V4HImode
      && GET_CODE (x4) == VEC_SELECT)
    goto L10672;
  goto ret0;

 L10672: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, V8HImode))
    {
      operands[2] = x5;
      goto L10673;
    }
  goto ret0;

 L10673: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 4)
    goto L10674;
  goto ret0;

 L10674: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L10675;
  goto ret0;

 L10675: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 1);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (2)])
    goto L10676;
  goto ret0;

 L10676: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 2);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    goto L10677;
  goto ret0;

 L10677: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 3);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (6)])
    goto L10678;
  goto ret0;

 L10678: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4SImode
      && GET_CODE (x2) == MULT)
    goto L10679;
  goto ret0;

 L10679: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V4SImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L10680;
  goto ret0;

 L10680: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == V4HImode
      && GET_CODE (x4) == VEC_SELECT)
    goto L10681;
  goto ret0;

 L10681: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[1]))
    goto L10682;
  goto ret0;

 L10682: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 4)
    goto L10683;
  goto ret0;

 L10683: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L10684;
  goto ret0;

 L10684: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 1);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (3)])
    goto L10685;
  goto ret0;

 L10685: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 2);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (5)])
    goto L10686;
  goto ret0;

 L10686: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 3);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (7)])
    goto L10687;
  goto ret0;

 L10687: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == V4SImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L10688;
  goto ret0;

 L10688: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == V4HImode
      && GET_CODE (x4) == VEC_SELECT)
    goto L10689;
  goto ret0;

 L10689: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[2]))
    goto L10690;
  goto ret0;

 L10690: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 4)
    goto L10691;
  goto ret0;

 L10691: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L10692;
  goto ret0;

 L10692: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 1);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (3)])
    goto L10693;
  goto ret0;

 L10693: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 2);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (5)])
    goto L10694;
  goto ret0;

 L10694: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 3);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (7)]
      && 
#line 2588 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 943;  /* sse2_pmaddwd */
    }
  goto ret0;

 L10537: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SImode))
    {
      operands[2] = x2;
      goto L10538;
    }
  goto ret0;

 L10538: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2389 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V4SImode, operands)))
    {
      return 925;  /* *addv4si3 */
    }
  goto ret0;

 L10584: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4SImode))
    {
      operands[1] = x2;
      goto L10585;
    }
  goto ret0;

 L10585: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SImode))
    {
      operands[2] = x2;
      goto L10586;
    }
  goto ret0;

 L10586: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2426 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 933;  /* *subv4si3 */
    }
  goto ret0;

 L10704: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4SImode))
    {
      operands[1] = x2;
      goto L10705;
    }
  goto ret0;

 L10705: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, TImode))
    {
      operands[2] = x2;
      goto L10706;
    }
  goto ret0;

 L10706: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2730 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 945;  /* ashrv4si3 */
    }
  goto ret0;

 L10716: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4SImode))
    {
      operands[1] = x2;
      goto L10717;
    }
  goto ret0;

 L10717: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, TImode))
    {
      operands[2] = x2;
      goto L10718;
    }
  goto ret0;

 L10718: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2740 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 947;  /* lshrv4si3 */
    }
  goto ret0;

 L10734: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4SImode))
    {
      operands[1] = x2;
      goto L10735;
    }
  goto ret0;

 L10735: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, TImode))
    {
      operands[2] = x2;
      goto L10736;
    }
  goto ret0;

 L10736: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2750 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 950;  /* ashlv4si3 */
    }
  goto ret0;

 L10794: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V4SImode))
    {
      operands[1] = x2;
      goto L10795;
    }
  goto ret0;

 L10795: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SImode))
    {
      operands[2] = x2;
      goto L10796;
    }
  goto ret0;

 L10796: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2971 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (EQ, V4SImode, operands)))
    {
      return 960;  /* sse2_eqv4si3 */
    }
  goto ret0;

 L10812: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4SImode))
    {
      operands[1] = x2;
      goto L10813;
    }
  goto ret0;

 L10813: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SImode))
    {
      operands[2] = x2;
      goto L10814;
    }
  goto ret0;

 L10814: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2981 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 963;  /* sse2_gtv4si3 */
    }
  goto ret0;

 L10830: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4SImode)
    goto L16308;
  goto ret0;

 L16308: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == NOT)
    goto L10857;
  if (nonimmediate_operand (x2, V4SImode))
    {
      operands[1] = x2;
      goto L10831;
    }
  goto ret0;

 L10857: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SImode))
    {
      operands[1] = x3;
      goto L10858;
    }
  goto ret0;

 L10858: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SImode))
    {
      operands[2] = x2;
      goto L10859;
    }
  goto ret0;

 L10859: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3061 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 970;  /* sse2_nandv4si3 */
    }
  goto ret0;

 L10831: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SImode))
    {
      operands[2] = x2;
      goto L10832;
    }
  goto ret0;

 L10832: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3051 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V4SImode, operands)))
    {
      return 966;  /* *andv4si3 */
    }
  goto ret0;

 L10882: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V4SImode))
    {
      operands[1] = x2;
      goto L10883;
    }
  goto ret0;

 L10883: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SImode))
    {
      operands[2] = x2;
      goto L10884;
    }
  goto ret0;

 L10884: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3078 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V4SImode, operands)))
    {
      return 974;  /* *iorv4si3 */
    }
  goto ret0;

 L10906: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V4SImode))
    {
      operands[1] = x2;
      goto L10907;
    }
  goto ret0;

 L10907: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SImode))
    {
      operands[2] = x2;
      goto L10908;
    }
  goto ret0;

 L10908: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3095 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V4SImode, operands)))
    {
      return 978;  /* *xorv4si3 */
    }
  goto ret0;

 L11018: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case V8SImode:
      goto L16309;
    case V4SImode:
      goto L16310;
    default:
      break;
    }
  goto ret0;

 L16309: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_CONCAT)
    goto L11019;
  goto ret0;

 L11019: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SImode))
    {
      operands[1] = x3;
      goto L11020;
    }
  goto ret0;

 L11020: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V4SImode))
    {
      operands[2] = x3;
      goto L11021;
    }
  goto ret0;

 L11021: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 4)
    goto L11022;
  goto ret0;

 L11022: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT)
    goto L16311;
  goto ret0;

 L16311: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 2LL:
        goto L11023;
      case 0LL:
        goto L11034;
      default:
        break;
      }
  goto ret0;

 L11023: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (6)])
    goto L11024;
  goto ret0;

 L11024: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (3)])
    goto L11025;
  goto ret0;

 L11025: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (7)]
      && 
#line 3218 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 987;  /* sse2_punpckhdq */
    }
  goto ret0;

 L11034: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    goto L11035;
  goto ret0;

 L11035: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L11036;
  goto ret0;

 L11036: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (5)]
      && 
#line 3231 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 988;  /* sse2_punpckldq */
    }
  goto ret0;

 L16310: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, V4SImode))
    {
      operands[1] = x2;
      goto L11075;
    }
  goto ret0;

 L11075: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 4)
    goto L11076;
  goto ret0;

 L11076: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (const_0_to_3_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L11077;
    }
  goto ret0;

 L11077: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (const_0_to_3_operand (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L11078;
    }
  goto ret0;

 L11078: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (const_0_to_3_operand (x3, VOIDmode))
    {
      operands[4] = x3;
      goto L11079;
    }
  goto ret0;

 L11079: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (const_0_to_3_operand (x3, VOIDmode))
    {
      operands[5] = x3;
      goto L11080;
    }
  goto ret0;

 L11080: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3324 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 993;  /* sse2_pshufd_1 */
    }
  goto ret0;

 L11111: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4SImode
      && GET_CODE (x2) == VEC_DUPLICATE)
    goto L11112;
  goto ret0;

 L11112: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L11113;
    }
  goto ret0;

 L11113: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, V4SImode))
    {
      operands[1] = x2;
      goto L11114;
    }
  goto ret0;

 L11114: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 3437 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 996;  /* sse2_loadld */
    }
  goto ret0;

 L11142: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L11143;
    }
  goto ret0;

 L11143: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3521 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 1001;  /* *vec_dupv4si */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_14 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L9494;
    case VEC_MERGE:
      goto L9500;
    case MINUS:
      goto L9508;
    case MULT:
      goto L9522;
    case DIV:
      goto L9536;
    case UNSPEC:
      goto L16359;
    case SQRT:
      goto L9574;
    case SMAX:
      goto L9586;
    case SMIN:
      goto L9606;
    case VEC_CONCAT:
      goto L9660;
    case AND:
      goto L9778;
    case IOR:
      goto L9791;
    case XOR:
      goto L9797;
    case FLOAT:
      goto L9896;
    case VEC_SELECT:
      goto L9933;
    case VEC_DUPLICATE:
      goto L10028;
    case NE:
    case EQ:
    case LE:
    case LT:
    case UNORDERED:
    case ORDERED:
    case UNGE:
    case UNGT:
      goto L16352;
    default:
      goto ret0;
   }
 L16352: ATTRIBUTE_UNUSED_LABEL
  if (sse_comparison_operator (x1, V4SFmode))
    {
      operands[3] = x1;
      goto L9742;
    }
  goto ret0;

 L9494: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L9495;
    }
  goto ret0;

 L9495: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L9496;
    }
  goto ret0;

 L9496: ATTRIBUTE_UNUSED_LABEL
  if (
#line 299 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V4SFmode, operands)))
    {
      return 793;  /* *addv4sf3 */
    }
  goto ret0;

 L9500: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4SFmode)
    goto L16363;
  goto ret0;

 L16363: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L9501;
    case MINUS:
      goto L9515;
    case MULT:
      goto L9529;
    case DIV:
      goto L9543;
    case UNSPEC:
      goto L16375;
    case SQRT:
      goto L9580;
    case SMAX:
      goto L9599;
    case SMIN:
      goto L9619;
    case VEC_DUPLICATE:
      goto L9829;
    case NE:
    case EQ:
    case LE:
    case LT:
    case UNORDERED:
    case ORDERED:
    case UNGE:
    case UNGT:
      goto L16372;
    case REG:
    case SUBREG:
      goto L16374;
    default:
      goto ret0;
   }
 L16372: ATTRIBUTE_UNUSED_LABEL
  if (sse_comparison_operator (x2, V4SFmode))
    {
      operands[3] = x2;
      goto L9749;
    }
 L16374: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L10023;
    }
  goto ret0;

 L9501: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L9502;
    }
  goto ret0;

 L9502: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[2] = x3;
      goto L9653;
    }
  goto ret0;

 L9653: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4SFmode
      && GET_CODE (x2) == MINUS)
    goto L9654;
 L9503: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x2, operands[1]))
    goto L9504;
  goto ret0;

 L9654: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L9655;
  goto L9503;

 L9655: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L9656;
  goto L9503;

 L9656: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (5)]
      && 
#line 603 "../.././gcc/config/i386/sse.md"
(TARGET_SSE3))
    {
      return 817;  /* sse3_addsubv4sf3 */
    }
  x2 = XEXP (x1, 1);
  goto L9503;

 L9504: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 311 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V4SFmode, operands)))
    {
      return 794;  /* sse_vmaddv4sf3 */
    }
  goto ret0;

 L9515: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L9516;
    }
  goto ret0;

 L9516: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[2] = x3;
      goto L9517;
    }
  goto ret0;

 L9517: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L9518;
  goto ret0;

 L9518: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 339 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 796;  /* sse_vmsubv4sf3 */
    }
  goto ret0;

 L9529: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L9530;
    }
  goto ret0;

 L9530: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[2] = x3;
      goto L9531;
    }
  goto ret0;

 L9531: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L9532;
  goto ret0;

 L9532: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 367 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V4SFmode, operands)))
    {
      return 798;  /* sse_vmmulv4sf3 */
    }
  goto ret0;

 L9543: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L9544;
    }
  goto ret0;

 L9544: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[2] = x3;
      goto L9545;
    }
  goto ret0;

 L9545: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L9546;
  goto ret0;

 L9546: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 395 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 800;  /* sse_vmdivv4sf3 */
    }
  goto ret0;

 L16375: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1)
    goto L16377;
  goto ret0;

 L16377: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 35LL:
      goto L9556;
    case 36LL:
      goto L9568;
    default:
      break;
    }
  goto ret0;

 L9556: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L9557;
    }
  goto ret0;

 L9557: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L9558;
    }
  goto ret0;

 L9558: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 416 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 802;  /* sse_vmrcpv4sf2 */
    }
  goto ret0;

 L9568: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L9569;
    }
  goto ret0;

 L9569: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L9570;
    }
  goto ret0;

 L9570: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 437 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 804;  /* sse_vmrsqrtv4sf2 */
    }
  goto ret0;

 L9580: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L9581;
    }
  goto ret0;

 L9581: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L9582;
    }
  goto ret0;

 L9582: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 456 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 806;  /* sse_vmsqrtv4sf2 */
    }
  goto ret0;

 L9599: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L9600;
    }
  goto ret0;

 L9600: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[2] = x3;
      goto L9601;
    }
  goto ret0;

 L9601: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L9602;
  goto ret0;

 L9602: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 502 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 809;  /* sse_vmsmaxv4sf3 */
    }
  goto ret0;

 L9619: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L9620;
    }
  goto ret0;

 L9620: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[2] = x3;
      goto L9621;
    }
  goto ret0;

 L9621: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L9622;
  goto ret0;

 L9622: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 544 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 812;  /* sse_vmsminv4sf3 */
    }
  goto ret0;

 L9829: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case V2SFmode:
      goto L16379;
    case SFmode:
      goto L16380;
    default:
      break;
    }
  goto ret0;

 L16379: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case FLOAT:
      goto L9830;
    case FLOAT_TRUNCATE:
      goto L10387;
    default:
     break;
   }
  goto ret0;

 L9830: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, V2SImode))
    {
      operands[2] = x4;
      goto L9831;
    }
  goto ret0;

 L9831: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L9832;
    }
  goto ret0;

 L9832: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (3)]
      && 
#line 884 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 832;  /* sse_cvtpi2ps */
    }
  goto ret0;

 L10387: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, V2DFmode))
    {
      operands[2] = x4;
      goto L10388;
    }
  goto ret0;

 L10388: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L10389;
    }
  goto ret0;

 L10389: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 1977 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 904;  /* sse2_cvtsd2ss */
    }
  goto ret0;

 L16380: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == FLOAT)
    goto L9854;
  goto ret0;

 L9854: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  switch (GET_MODE (x4))
    {
    case SImode:
      goto L16382;
    case DImode:
      goto L16383;
    default:
      break;
    }
  goto ret0;

 L16382: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L9855;
    }
  goto ret0;

 L9855: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L9856;
    }
  goto ret0;

 L9856: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 919 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 835;  /* sse_cvtsi2ss */
    }
  goto ret0;

 L16383: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L9863;
    }
  goto ret0;

 L9863: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L9864;
    }
  goto ret0;

 L9864: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 932 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && TARGET_64BIT))
    {
      return 836;  /* sse_cvtsi2ssq */
    }
  goto ret0;

 L9749: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L9750;
    }
  goto ret0;

 L9750: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V4SFmode))
    {
      operands[2] = x3;
      goto L9751;
    }
  goto ret0;

 L9751: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L9752;
  goto ret0;

 L9752: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 718 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 821;  /* sse_vmmaskcmpv4sf3 */
    }
  goto ret0;

 L10023: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L10024;
    }
  goto ret0;

 L10024: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 1215 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 855;  /* sse_movss */
    }
  goto ret0;

 L9508: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L9509;
    }
  goto ret0;

 L9509: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L9510;
    }
  goto ret0;

 L9510: ATTRIBUTE_UNUSED_LABEL
  if (
#line 327 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 795;  /* *subv4sf3 */
    }
  goto ret0;

 L9522: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L9523;
    }
  goto ret0;

 L9523: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L9524;
    }
  goto ret0;

 L9524: ATTRIBUTE_UNUSED_LABEL
  if (
#line 355 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V4SFmode, operands)))
    {
      return 797;  /* *mulv4sf3 */
    }
  goto ret0;

 L9536: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L9537;
    }
  goto ret0;

 L9537: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L9538;
    }
  goto ret0;

 L9538: ATTRIBUTE_UNUSED_LABEL
  if (
#line 383 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 799;  /* *divv4sf3 */
    }
  goto ret0;

 L16359: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 1:
      goto L16384;
    case 2:
      goto L16386;
    default:
      break;
    }
  goto ret0;

 L16384: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 35LL:
      goto L9550;
    case 36LL:
      goto L9562;
    default:
      break;
    }
  goto ret0;

 L9550: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L9551;
    }
  goto ret0;

 L9551: ATTRIBUTE_UNUSED_LABEL
  if (
#line 404 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 801;  /* sse_rcpv4sf2 */
    }
  goto ret0;

 L9562: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L9563;
    }
  goto ret0;

 L9563: ATTRIBUTE_UNUSED_LABEL
  if (
#line 425 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 803;  /* sse_rsqrtv4sf2 */
    }
  goto ret0;

 L16386: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 51LL:
      goto L9626;
    case 52LL:
      goto L9632;
    default:
      break;
    }
  goto ret0;

 L9626: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L9627;
    }
  goto ret0;

 L9627: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L9628;
    }
  goto ret0;

 L9628: ATTRIBUTE_UNUSED_LABEL
  if (
#line 560 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 813;  /* *ieee_sminv4sf3 */
    }
  goto ret0;

 L9632: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L9633;
    }
  goto ret0;

 L9633: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L9634;
    }
  goto ret0;

 L9634: ATTRIBUTE_UNUSED_LABEL
  if (
#line 570 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 814;  /* *ieee_smaxv4sf3 */
    }
  goto ret0;

 L9574: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L9575;
    }
  goto ret0;

 L9575: ATTRIBUTE_UNUSED_LABEL
  if (
#line 445 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 805;  /* sqrtv4sf2 */
    }
  goto ret0;

 L9586: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4SFmode)
    goto L16388;
  goto ret0;

 L16388: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L9587;
    }
 L16389: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L9593;
    }
  goto ret0;

 L9587: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L9588;
    }
  x2 = XEXP (x1, 0);
  goto L16389;

 L9588: ATTRIBUTE_UNUSED_LABEL
  if (
#line 480 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V4SFmode, operands)))
    {
      return 807;  /* *smaxv4sf3_finite */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L16389;

 L9593: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L9594;
    }
  goto ret0;

 L9594: ATTRIBUTE_UNUSED_LABEL
  if (
#line 490 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 808;  /* *smaxv4sf3 */
    }
  goto ret0;

 L9606: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4SFmode)
    goto L16390;
  goto ret0;

 L16390: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L9607;
    }
 L16391: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L9613;
    }
  goto ret0;

 L9607: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L9608;
    }
  x2 = XEXP (x1, 0);
  goto L16391;

 L9608: ATTRIBUTE_UNUSED_LABEL
  if (
#line 522 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V4SFmode, operands)))
    {
      return 810;  /* *sminv4sf3_finite */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L16391;

 L9613: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L9614;
    }
  goto ret0;

 L9614: ATTRIBUTE_UNUSED_LABEL
  if (
#line 532 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 811;  /* *sminv4sf3 */
    }
  goto ret0;

 L9660: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SFmode)
    goto L16392;
  goto ret0;

 L16392: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case VEC_CONCAT:
      goto L9661;
    case FLOAT_TRUNCATE:
      goto L10405;
    case REG:
    case SUBREG:
      goto L16393;
    default:
      goto ret0;
   }
 L16393: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L10040;
    }
  goto ret0;

 L9661: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode)
    goto L16395;
  goto ret0;

 L16395: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case PLUS:
      goto L9662;
    case MINUS:
      goto L9703;
    default:
     break;
   }
  goto ret0;

 L9662: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SFmode
      && GET_CODE (x4) == VEC_SELECT)
    goto L9663;
  goto ret0;

 L9663: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, V4SFmode))
    {
      operands[1] = x5;
      goto L9664;
    }
  goto ret0;

 L9664: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 1)
    goto L9665;
  goto ret0;

 L9665: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L9666;
  goto ret0;

 L9666: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == SFmode
      && GET_CODE (x4) == VEC_SELECT)
    goto L9667;
  goto ret0;

 L9667: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[1]))
    goto L9668;
  goto ret0;

 L9668: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 1)
    goto L9669;
  goto ret0;

 L9669: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L9670;
  goto ret0;

 L9670: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == PLUS)
    goto L9671;
  goto ret0;

 L9671: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SFmode
      && GET_CODE (x4) == VEC_SELECT)
    goto L9672;
  goto ret0;

 L9672: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[1]))
    goto L9673;
  goto ret0;

 L9673: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 1)
    goto L9674;
  goto ret0;

 L9674: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (2)])
    goto L9675;
  goto ret0;

 L9675: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == SFmode
      && GET_CODE (x4) == VEC_SELECT)
    goto L9676;
  goto ret0;

 L9676: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[1]))
    goto L9677;
  goto ret0;

 L9677: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 1)
    goto L9678;
  goto ret0;

 L9678: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (3)])
    goto L9679;
  goto ret0;

 L9679: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2SFmode
      && GET_CODE (x2) == VEC_CONCAT)
    goto L9680;
  goto ret0;

 L9680: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == PLUS)
    goto L9681;
  goto ret0;

 L9681: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SFmode
      && GET_CODE (x4) == VEC_SELECT)
    goto L9682;
  goto ret0;

 L9682: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, V4SFmode))
    {
      operands[2] = x5;
      goto L9683;
    }
  goto ret0;

 L9683: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 1)
    goto L9684;
  goto ret0;

 L9684: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L9685;
  goto ret0;

 L9685: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == SFmode
      && GET_CODE (x4) == VEC_SELECT)
    goto L9686;
  goto ret0;

 L9686: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[2]))
    goto L9687;
  goto ret0;

 L9687: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 1)
    goto L9688;
  goto ret0;

 L9688: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L9689;
  goto ret0;

 L9689: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == PLUS)
    goto L9690;
  goto ret0;

 L9690: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SFmode
      && GET_CODE (x4) == VEC_SELECT)
    goto L9691;
  goto ret0;

 L9691: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[2]))
    goto L9692;
  goto ret0;

 L9692: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 1)
    goto L9693;
  goto ret0;

 L9693: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (2)])
    goto L9694;
  goto ret0;

 L9694: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == SFmode
      && GET_CODE (x4) == VEC_SELECT)
    goto L9695;
  goto ret0;

 L9695: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[2]))
    goto L9696;
  goto ret0;

 L9696: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 1)
    goto L9697;
  goto ret0;

 L9697: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (3)]
      && 
#line 629 "../.././gcc/config/i386/sse.md"
(TARGET_SSE3))
    {
      return 818;  /* sse3_haddv4sf3 */
    }
  goto ret0;

 L9703: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SFmode
      && GET_CODE (x4) == VEC_SELECT)
    goto L9704;
  goto ret0;

 L9704: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, V4SFmode))
    {
      operands[1] = x5;
      goto L9705;
    }
  goto ret0;

 L9705: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 1)
    goto L9706;
  goto ret0;

 L9706: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L9707;
  goto ret0;

 L9707: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == SFmode
      && GET_CODE (x4) == VEC_SELECT)
    goto L9708;
  goto ret0;

 L9708: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[1]))
    goto L9709;
  goto ret0;

 L9709: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 1)
    goto L9710;
  goto ret0;

 L9710: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L9711;
  goto ret0;

 L9711: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == MINUS)
    goto L9712;
  goto ret0;

 L9712: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SFmode
      && GET_CODE (x4) == VEC_SELECT)
    goto L9713;
  goto ret0;

 L9713: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[1]))
    goto L9714;
  goto ret0;

 L9714: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 1)
    goto L9715;
  goto ret0;

 L9715: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (2)])
    goto L9716;
  goto ret0;

 L9716: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == SFmode
      && GET_CODE (x4) == VEC_SELECT)
    goto L9717;
  goto ret0;

 L9717: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[1]))
    goto L9718;
  goto ret0;

 L9718: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 1)
    goto L9719;
  goto ret0;

 L9719: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (3)])
    goto L9720;
  goto ret0;

 L9720: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2SFmode
      && GET_CODE (x2) == VEC_CONCAT)
    goto L9721;
  goto ret0;

 L9721: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == MINUS)
    goto L9722;
  goto ret0;

 L9722: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SFmode
      && GET_CODE (x4) == VEC_SELECT)
    goto L9723;
  goto ret0;

 L9723: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, V4SFmode))
    {
      operands[2] = x5;
      goto L9724;
    }
  goto ret0;

 L9724: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 1)
    goto L9725;
  goto ret0;

 L9725: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L9726;
  goto ret0;

 L9726: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == SFmode
      && GET_CODE (x4) == VEC_SELECT)
    goto L9727;
  goto ret0;

 L9727: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[2]))
    goto L9728;
  goto ret0;

 L9728: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 1)
    goto L9729;
  goto ret0;

 L9729: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L9730;
  goto ret0;

 L9730: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == MINUS)
    goto L9731;
  goto ret0;

 L9731: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SFmode
      && GET_CODE (x4) == VEC_SELECT)
    goto L9732;
  goto ret0;

 L9732: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[2]))
    goto L9733;
  goto ret0;

 L9733: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 1)
    goto L9734;
  goto ret0;

 L9734: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (2)])
    goto L9735;
  goto ret0;

 L9735: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == SFmode
      && GET_CODE (x4) == VEC_SELECT)
    goto L9736;
  goto ret0;

 L9736: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[2]))
    goto L9737;
  goto ret0;

 L9737: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 1)
    goto L9738;
  goto ret0;

 L9738: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (3)]
      && 
#line 655 "../.././gcc/config/i386/sse.md"
(TARGET_SSE3))
    {
      return 819;  /* sse3_hsubv4sf3 */
    }
  goto ret0;

 L10405: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L10406;
    }
  goto ret0;

 L10406: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const0_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L10407;
    }
  goto ret0;

 L10407: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2012 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 906;  /* *sse2_cvtpd2ps */
    }
  goto ret0;

 L10040: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L10041;
    }
  goto ret0;

 L10041: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1251 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 858;  /* *sse_concatv4sf */
    }
  goto ret0;

 L9778: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4SFmode)
    goto L16398;
  goto ret0;

 L16398: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == NOT)
    goto L9785;
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L9779;
    }
  goto ret0;

 L9785: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L9786;
    }
  goto ret0;

 L9786: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L9787;
    }
  goto ret0;

 L9787: ATTRIBUTE_UNUSED_LABEL
  if (
#line 793 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 825;  /* sse_nandv4sf3 */
    }
  goto ret0;

 L9779: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L9780;
    }
  goto ret0;

 L9780: ATTRIBUTE_UNUSED_LABEL
  if (
#line 784 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (AND, V4SFmode, operands)))
    {
      return 824;  /* *andv4sf3 */
    }
  goto ret0;

 L9791: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L9792;
    }
  goto ret0;

 L9792: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L9793;
    }
  goto ret0;

 L9793: ATTRIBUTE_UNUSED_LABEL
  if (
#line 809 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (IOR, V4SFmode, operands)))
    {
      return 826;  /* *iorv4sf3 */
    }
  goto ret0;

 L9797: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L9798;
    }
  goto ret0;

 L9798: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L9799;
    }
  goto ret0;

 L9799: ATTRIBUTE_UNUSED_LABEL
  if (
#line 825 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (XOR, V4SFmode, operands)))
    {
      return 827;  /* *xorv4sf3 */
    }
  goto ret0;

 L9896: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V4SImode))
    {
      operands[1] = x2;
      goto L9897;
    }
  goto ret0;

 L9897: ATTRIBUTE_UNUSED_LABEL
  if (
#line 991 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 841;  /* sse2_cvtdq2ps */
    }
  goto ret0;

 L9933: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V8SFmode
      && GET_CODE (x2) == VEC_CONCAT)
    goto L9934;
  goto ret0;

 L9934: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V4SFmode)
    goto L16399;
  goto ret0;

 L16399: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L9935;
    }
 L16400: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L9957;
    }
 L16401: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L9979;
    }
  goto ret0;

 L9935: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[2] = x3;
      goto L9936;
    }
  x3 = XEXP (x2, 0);
  goto L16400;

 L9936: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 4)
    goto L9937;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L16400;

 L9937: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT)
    goto L16402;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L16400;

 L16402: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 2LL:
        goto L9938;
      case 0LL:
        goto L9949;
      default:
        break;
      }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L16400;

 L9938: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (6)])
    goto L9939;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L16400;

 L9939: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (3)])
    goto L9940;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L16400;

 L9940: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (7)]
      && 
#line 1063 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 846;  /* sse_unpckhps */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L16400;

 L9949: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    goto L9950;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L16400;

 L9950: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L9951;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L16400;

 L9951: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (5)]
      && 
#line 1076 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 847;  /* sse_unpcklps */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L16400;

 L9957: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[1]))
    goto L9958;
  x3 = XEXP (x2, 0);
  goto L16401;

 L9958: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 4)
    goto L9959;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L16401;

 L9959: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT)
    goto L16404;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L16401;

 L16404: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 1LL:
        goto L9960;
      case 0LL:
        goto L9971;
      default:
        break;
      }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L16401;

 L9960: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L9961;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L16401;

 L9961: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (7)])
    goto L9962;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L16401;

 L9962: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (7)]
      && 
#line 1093 "../.././gcc/config/i386/sse.md"
(TARGET_SSE3))
    {
      return 848;  /* sse3_movshdup */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L16401;

 L9971: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L9972;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L16401;

 L9972: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (6)])
    goto L9973;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L16401;

 L9973: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (6)]
      && 
#line 1108 "../.././gcc/config/i386/sse.md"
(TARGET_SSE3))
    {
      return 849;  /* sse3_movsldup */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L16401;

 L9979: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[2] = x3;
      goto L9980;
    }
  goto ret0;

 L9980: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 4)
    goto L9981;
  goto ret0;

 L9981: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (const_0_to_3_operand (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L9982;
    }
  goto ret0;

 L9982: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (const_0_to_3_operand (x3, VOIDmode))
    {
      operands[4] = x3;
      goto L9983;
    }
  goto ret0;

 L9983: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (const_4_to_7_operand (x3, VOIDmode))
    {
      operands[5] = x3;
      goto L9984;
    }
  goto ret0;

 L9984: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (const_4_to_7_operand (x3, VOIDmode))
    {
      operands[6] = x3;
      goto L9985;
    }
  goto ret0;

 L9985: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1139 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 850;  /* sse_shufps_1 */
    }
  goto ret0;

 L10028: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L10029;
    }
  goto ret0;

 L10029: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1224 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 856;  /* *vec_dupv4sf */
    }
  goto ret0;

 L9742: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L9743;
    }
  goto ret0;

 L9743: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[2] = x2;
      goto L9744;
    }
  goto ret0;

 L9744: ATTRIBUTE_UNUSED_LABEL
  if (
#line 705 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 820;  /* sse_maskcmpv4sf3 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_15 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case UNSPEC:
      goto L16432;
    case PLUS:
      goto L10058;
    case VEC_MERGE:
      goto L10064;
    case MINUS:
      goto L10072;
    case MULT:
      goto L10086;
    case DIV:
      goto L10100;
    case SQRT:
      goto L10114;
    case SMAX:
      goto L10126;
    case SMIN:
      goto L10146;
    case VEC_CONCAT:
      goto L10176;
    case AND:
      goto L10254;
    case IOR:
      goto L10267;
    case XOR:
      goto L10273;
    case FLOAT:
      goto L10304;
    case FLOAT_EXTEND:
      goto L10411;
    case VEC_SELECT:
      goto L10446;
    case VEC_DUPLICATE:
      goto L10503;
    case NE:
    case EQ:
    case LE:
    case LT:
    case UNORDERED:
    case ORDERED:
    case UNGE:
    case UNGT:
      goto L16424;
    default:
      goto ret0;
   }
 L16424: ATTRIBUTE_UNUSED_LABEL
  if (sse_comparison_operator (x1, V2DFmode))
    {
      operands[3] = x1;
      goto L10218;
    }
  goto ret0;

 L16432: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 2)
    goto L16434;
  goto ret0;

 L16434: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 51LL:
      goto L9638;
    case 52LL:
      goto L9644;
    default:
      break;
    }
  goto ret0;

 L9638: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L9639;
    }
  goto ret0;

 L9639: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[2] = x2;
      goto L9640;
    }
  goto ret0;

 L9640: ATTRIBUTE_UNUSED_LABEL
  if (
#line 580 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 815;  /* *ieee_sminv2df3 */
    }
  goto ret0;

 L9644: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L9645;
    }
  goto ret0;

 L9645: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[2] = x2;
      goto L9646;
    }
  goto ret0;

 L9646: ATTRIBUTE_UNUSED_LABEL
  if (
#line 590 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 816;  /* *ieee_smaxv2df3 */
    }
  goto ret0;

 L10058: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L10059;
    }
  goto ret0;

 L10059: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[2] = x2;
      goto L10060;
    }
  goto ret0;

 L10060: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1367 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V2DFmode, operands)))
    {
      return 861;  /* *addv2df3 */
    }
  goto ret0;

 L10064: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2DFmode)
    goto L16436;
  goto ret0;

 L16436: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L10065;
    case MINUS:
      goto L10079;
    case MULT:
      goto L10093;
    case DIV:
      goto L10107;
    case SQRT:
      goto L10120;
    case SMAX:
      goto L10139;
    case SMIN:
      goto L10159;
    case VEC_DUPLICATE:
      goto L10320;
    case FLOAT_EXTEND:
      goto L10394;
    case NE:
    case EQ:
    case LE:
    case LT:
    case UNORDERED:
    case ORDERED:
    case UNGE:
    case UNGT:
      goto L16443;
    default:
      goto ret0;
   }
 L16443: ATTRIBUTE_UNUSED_LABEL
  if (sse_comparison_operator (x2, V2DFmode))
    {
      operands[3] = x2;
      goto L10225;
    }
  goto ret0;

 L10065: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L10066;
    }
  goto ret0;

 L10066: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[2] = x3;
      goto L10067;
    }
  goto ret0;

 L10067: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L10068;
 L10169: ATTRIBUTE_UNUSED_LABEL
  if (GET_MODE (x2) == V2DFmode
      && GET_CODE (x2) == MINUS)
    goto L10170;
  goto ret0;

 L10068: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 1379 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V4SFmode, operands)))
    {
      return 862;  /* sse2_vmaddv2df3 */
    }
  x2 = XEXP (x1, 1);
  goto L10169;

 L10170: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L10171;
  goto ret0;

 L10171: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L10172;
  goto ret0;

 L10172: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 1583 "../.././gcc/config/i386/sse.md"
(TARGET_SSE3))
    {
      return 877;  /* sse3_addsubv2df3 */
    }
  goto ret0;

 L10079: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L10080;
    }
  goto ret0;

 L10080: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[2] = x3;
      goto L10081;
    }
  goto ret0;

 L10081: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L10082;
  goto ret0;

 L10082: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 1407 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 864;  /* sse2_vmsubv2df3 */
    }
  goto ret0;

 L10093: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L10094;
    }
  goto ret0;

 L10094: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[2] = x3;
      goto L10095;
    }
  goto ret0;

 L10095: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L10096;
  goto ret0;

 L10096: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 1435 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V2DFmode, operands)))
    {
      return 866;  /* sse2_vmmulv2df3 */
    }
  goto ret0;

 L10107: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L10108;
    }
  goto ret0;

 L10108: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[2] = x3;
      goto L10109;
    }
  goto ret0;

 L10109: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L10110;
  goto ret0;

 L10110: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 1463 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 868;  /* sse2_vmdivv2df3 */
    }
  goto ret0;

 L10120: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L10121;
    }
  goto ret0;

 L10121: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2DFmode))
    {
      operands[2] = x2;
      goto L10122;
    }
  goto ret0;

 L10122: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 1482 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 870;  /* sse2_vmsqrtv2df2 */
    }
  goto ret0;

 L10139: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L10140;
    }
  goto ret0;

 L10140: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[2] = x3;
      goto L10141;
    }
  goto ret0;

 L10141: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L10142;
  goto ret0;

 L10142: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 1528 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 873;  /* sse2_vmsmaxv2df3 */
    }
  goto ret0;

 L10159: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L10160;
    }
  goto ret0;

 L10160: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[2] = x3;
      goto L10161;
    }
  goto ret0;

 L10161: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L10162;
  goto ret0;

 L10162: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 1570 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 876;  /* sse2_vmsminv2df3 */
    }
  goto ret0;

 L10320: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DFmode
      && GET_CODE (x3) == FLOAT)
    goto L10321;
  goto ret0;

 L10321: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  switch (GET_MODE (x4))
    {
    case SImode:
      goto L16446;
    case DImode:
      goto L16447;
    default:
      break;
    }
  goto ret0;

 L16446: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L10322;
    }
  goto ret0;

 L10322: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L10323;
    }
  goto ret0;

 L10323: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 1851 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 895;  /* sse2_cvtsi2sd */
    }
  goto ret0;

 L16447: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L10330;
    }
  goto ret0;

 L10330: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L10331;
    }
  goto ret0;

 L10331: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 1864 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_64BIT))
    {
      return 896;  /* sse2_cvtsi2sdq */
    }
  goto ret0;

 L10394: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V2SFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L10395;
  goto ret0;

 L10395: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, V4SFmode))
    {
      operands[2] = x4;
      goto L10396;
    }
  goto ret0;

 L10396: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 2)
    goto L10397;
  goto ret0;

 L10397: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L10398;
  goto ret0;

 L10398: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L10399;
  goto ret0;

 L10399: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L10400;
    }
  goto ret0;

 L10400: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 1992 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 905;  /* sse2_cvtss2sd */
    }
  goto ret0;

 L10225: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L10226;
    }
  goto ret0;

 L10226: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[2] = x3;
      goto L10227;
    }
  goto ret0;

 L10227: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    goto L10228;
  goto ret0;

 L10228: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 1657 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 881;  /* sse2_vmmaskcmpv2df3 */
    }
  goto ret0;

 L10072: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L10073;
    }
  goto ret0;

 L10073: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[2] = x2;
      goto L10074;
    }
  goto ret0;

 L10074: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1395 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 863;  /* *subv2df3 */
    }
  goto ret0;

 L10086: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L10087;
    }
  goto ret0;

 L10087: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[2] = x2;
      goto L10088;
    }
  goto ret0;

 L10088: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1423 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V2DFmode, operands)))
    {
      return 865;  /* *mulv2df3 */
    }
  goto ret0;

 L10100: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L10101;
    }
  goto ret0;

 L10101: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[2] = x2;
      goto L10102;
    }
  goto ret0;

 L10102: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1451 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 867;  /* *divv2df3 */
    }
  goto ret0;

 L10114: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L10115;
    }
  goto ret0;

 L10115: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1471 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 869;  /* sqrtv2df2 */
    }
  goto ret0;

 L10126: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2DFmode)
    goto L16448;
  goto ret0;

 L16448: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L10127;
    }
 L16449: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L10133;
    }
  goto ret0;

 L10127: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[2] = x2;
      goto L10128;
    }
  x2 = XEXP (x1, 0);
  goto L16449;

 L10128: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1506 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V2DFmode, operands)))
    {
      return 871;  /* *smaxv2df3_finite */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L16449;

 L10133: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[2] = x2;
      goto L10134;
    }
  goto ret0;

 L10134: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1516 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 872;  /* *smaxv2df3 */
    }
  goto ret0;

 L10146: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2DFmode)
    goto L16450;
  goto ret0;

 L16450: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L10147;
    }
 L16451: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L10153;
    }
  goto ret0;

 L10147: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[2] = x2;
      goto L10148;
    }
  x2 = XEXP (x1, 0);
  goto L16451;

 L10148: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1548 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V2DFmode, operands)))
    {
      return 874;  /* *sminv2df3_finite */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L16451;

 L10153: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[2] = x2;
      goto L10154;
    }
  goto ret0;

 L10154: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1558 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 875;  /* *sminv2df3 */
    }
  goto ret0;

 L10176: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L16452;
  goto ret0;

 L16452: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L10177;
    case MINUS:
      goto L10198;
    case REG:
    case SUBREG:
    case MEM:
      goto L16454;
    default:
      goto ret0;
   }
 L16454: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L10514;
    }
  goto ret0;

 L10177: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L10178;
  goto ret0;

 L10178: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V2DFmode))
    {
      operands[1] = x4;
      goto L10179;
    }
  goto ret0;

 L10179: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L10180;
  goto ret0;

 L10180: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L10181;
  goto ret0;

 L10181: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L10182;
  goto ret0;

 L10182: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L10183;
  goto ret0;

 L10183: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L10184;
  goto ret0;

 L10184: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L10185;
  goto ret0;

 L10185: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode
      && GET_CODE (x2) == PLUS)
    goto L10186;
  goto ret0;

 L10186: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L10187;
  goto ret0;

 L10187: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, V2DFmode))
    {
      operands[2] = x4;
      goto L10188;
    }
  goto ret0;

 L10188: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L10189;
  goto ret0;

 L10189: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L10190;
  goto ret0;

 L10190: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L10191;
  goto ret0;

 L10191: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[2]))
    goto L10192;
  goto ret0;

 L10192: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L10193;
  goto ret0;

 L10193: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 1601 "../.././gcc/config/i386/sse.md"
(TARGET_SSE3))
    {
      return 878;  /* sse3_haddv2df3 */
    }
  goto ret0;

 L10198: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L10199;
  goto ret0;

 L10199: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V2DFmode))
    {
      operands[1] = x4;
      goto L10200;
    }
  goto ret0;

 L10200: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L10201;
  goto ret0;

 L10201: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L10202;
  goto ret0;

 L10202: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L10203;
  goto ret0;

 L10203: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L10204;
  goto ret0;

 L10204: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L10205;
  goto ret0;

 L10205: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L10206;
  goto ret0;

 L10206: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode
      && GET_CODE (x2) == MINUS)
    goto L10207;
  goto ret0;

 L10207: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L10208;
  goto ret0;

 L10208: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, V2DFmode))
    {
      operands[2] = x4;
      goto L10209;
    }
  goto ret0;

 L10209: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L10210;
  goto ret0;

 L10210: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L10211;
  goto ret0;

 L10211: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L10212;
  goto ret0;

 L10212: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[2]))
    goto L10213;
  goto ret0;

 L10213: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L10214;
  goto ret0;

 L10214: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 1619 "../.././gcc/config/i386/sse.md"
(TARGET_SSE3))
    {
      return 879;  /* sse3_hsubv2df3 */
    }
  goto ret0;

 L10514: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1])
      && 
#line 2312 "../.././gcc/config/i386/sse.md"
(TARGET_SSE3))
    {
      return 921;  /* *vec_concatv2df_sse3 */
    }
 L10519: ATTRIBUTE_UNUSED_LABEL
  if (vector_move_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L10520;
    }
  goto ret0;

 L10520: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2322 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 922;  /* *vec_concatv2df */
    }
  goto ret0;

 L10254: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2DFmode)
    goto L16456;
  goto ret0;

 L16456: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == NOT)
    goto L10261;
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L10255;
    }
  goto ret0;

 L10261: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L10262;
    }
  goto ret0;

 L10262: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[2] = x2;
      goto L10263;
    }
  goto ret0;

 L10263: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1732 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 885;  /* sse2_nandv2df3 */
    }
  goto ret0;

 L10255: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[2] = x2;
      goto L10256;
    }
  goto ret0;

 L10256: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1723 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V2DFmode, operands)))
    {
      return 884;  /* *andv2df3 */
    }
  goto ret0;

 L10267: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L10268;
    }
  goto ret0;

 L10268: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[2] = x2;
      goto L10269;
    }
  goto ret0;

 L10269: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1748 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V2DFmode, operands)))
    {
      return 886;  /* *iorv2df3 */
    }
  goto ret0;

 L10273: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L10274;
    }
  goto ret0;

 L10274: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[2] = x2;
      goto L10275;
    }
  goto ret0;

 L10275: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1764 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V2DFmode, operands)))
    {
      return 887;  /* *xorv2df3 */
    }
  goto ret0;

 L10304: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SImode)
    goto L16458;
  goto ret0;

 L16458: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L10364;
  if (nonimmediate_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L10305;
    }
  goto ret0;

 L10364: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V4SImode))
    {
      operands[1] = x3;
      goto L10365;
    }
  goto ret0;

 L10365: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 2)
    goto L10366;
  goto ret0;

 L10366: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L10367;
  goto ret0;

 L10367: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 1926 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 901;  /* sse2_cvtdq2pd */
    }
  goto ret0;

 L10305: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1819 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 892;  /* sse2_cvtpi2pd */
    }
  goto ret0;

 L10411: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SFmode
      && GET_CODE (x2) == VEC_SELECT)
    goto L10412;
  goto ret0;

 L10412: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L10413;
    }
  goto ret0;

 L10413: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 2)
    goto L10414;
  goto ret0;

 L10414: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L10415;
  goto ret0;

 L10415: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 2023 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 907;  /* sse2_cvtps2pd */
    }
  goto ret0;

 L10446: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4DFmode
      && GET_CODE (x2) == VEC_CONCAT)
    goto L10447;
  goto ret0;

 L10447: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L10448;
    }
  goto ret0;

 L10448: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[2] = x3;
      goto L10449;
    }
  goto ret0;

 L10449: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 2)
    goto L10450;
  goto ret0;

 L10450: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (const_0_to_1_operand (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L10451;
    }
  goto ret0;

 L10451: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (const_2_to_3_operand (x3, VOIDmode))
    {
      operands[4] = x3;
      goto L10452;
    }
  goto ret0;

 L10452: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2120 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 911;  /* sse2_shufpd_1 */
    }
  goto ret0;

 L10503: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L16459;
  goto ret0;

 L16459: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L10504;
    }
 L16460: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L10509;
    }
  goto ret0;

 L10504: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2293 "../.././gcc/config/i386/sse.md"
(TARGET_SSE3))
    {
      return 919;  /* *vec_dupv2df_sse3 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L16460;

 L10509: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2302 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 920;  /* *vec_dupv2df */
    }
  goto ret0;

 L10218: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L10219;
    }
  goto ret0;

 L10219: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[2] = x2;
      goto L10220;
    }
  goto ret0;

 L10220: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1644 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 880;  /* sse2_maskcmpv2df3 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_16 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L11567;
    case SS_PLUS:
      goto L11592;
    case US_PLUS:
      goto L11604;
    case MINUS:
      goto L11616;
    case SS_MINUS:
      goto L11641;
    case US_MINUS:
      goto L11653;
    case UMAX:
      goto L11749;
    case UMIN:
      goto L11761;
    case EQ:
      goto L11823;
    case GT:
      goto L11841;
    case AND:
      goto L11859;
    case IOR:
      goto L11898;
    case XOR:
      goto L11916;
    case VEC_CONCAT:
      goto L11934;
    case VEC_SELECT:
      goto L11958;
    case TRUNCATE:
      goto L12090;
    default:
     break;
   }
  goto ret0;

 L11567: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L11568;
    }
  goto ret0;

 L11568: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L11569;
    }
  goto ret0;

 L11569: ATTRIBUTE_UNUSED_LABEL
  if (
#line 565 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (PLUS, V8QImode, operands)))
    {
      return 1066;  /* mmx_addv8qi3 */
    }
  goto ret0;

 L11592: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L11593;
    }
  goto ret0;

 L11593: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L11594;
    }
  goto ret0;

 L11594: ATTRIBUTE_UNUSED_LABEL
  if (
#line 586 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 1070;  /* mmx_ssaddv8qi3 */
    }
  goto ret0;

 L11604: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L11605;
    }
  goto ret0;

 L11605: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L11606;
    }
  goto ret0;

 L11606: ATTRIBUTE_UNUSED_LABEL
  if (
#line 596 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 1072;  /* mmx_usaddv8qi3 */
    }
  goto ret0;

 L11616: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L11617;
    }
  goto ret0;

 L11617: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L11618;
    }
  goto ret0;

 L11618: ATTRIBUTE_UNUSED_LABEL
  if (
#line 606 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 1074;  /* mmx_subv8qi3 */
    }
  goto ret0;

 L11641: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L11642;
    }
  goto ret0;

 L11642: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L11643;
    }
  goto ret0;

 L11643: ATTRIBUTE_UNUSED_LABEL
  if (
#line 627 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 1078;  /* mmx_sssubv8qi3 */
    }
  goto ret0;

 L11653: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L11654;
    }
  goto ret0;

 L11654: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L11655;
    }
  goto ret0;

 L11655: ATTRIBUTE_UNUSED_LABEL
  if (
#line 637 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 1080;  /* mmx_ussubv8qi3 */
    }
  goto ret0;

 L11749: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L11750;
    }
  goto ret0;

 L11750: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L11751;
    }
  goto ret0;

 L11751: ATTRIBUTE_UNUSED_LABEL
  if (
#line 742 "../.././gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (UMAX, V8QImode, operands)))
    {
      return 1088;  /* mmx_umaxv8qi3 */
    }
  goto ret0;

 L11761: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L11762;
    }
  goto ret0;

 L11762: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L11763;
    }
  goto ret0;

 L11763: ATTRIBUTE_UNUSED_LABEL
  if (
#line 762 "../.././gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (UMIN, V8QImode, operands)))
    {
      return 1090;  /* mmx_uminv8qi3 */
    }
  goto ret0;

 L11823: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L11824;
    }
  goto ret0;

 L11824: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L11825;
    }
  goto ret0;

 L11825: ATTRIBUTE_UNUSED_LABEL
  if (
#line 841 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (EQ, V8QImode, operands)))
    {
      return 1100;  /* mmx_eqv8qi3 */
    }
  goto ret0;

 L11841: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L11842;
    }
  goto ret0;

 L11842: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L11843;
    }
  goto ret0;

 L11843: ATTRIBUTE_UNUSED_LABEL
  if (
#line 851 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 1103;  /* mmx_gtv8qi3 */
    }
  goto ret0;

 L11859: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V8QImode)
    goto L16575;
  goto ret0;

 L16575: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == NOT)
    goto L11878;
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L11860;
    }
  goto ret0;

 L11878: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8QImode))
    {
      operands[1] = x3;
      goto L11879;
    }
  goto ret0;

 L11879: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L11880;
    }
  goto ret0;

 L11880: ATTRIBUTE_UNUSED_LABEL
  if (
#line 877 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 1109;  /* mmx_nandv8qi3 */
    }
  goto ret0;

 L11860: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L11861;
    }
  goto ret0;

 L11861: ATTRIBUTE_UNUSED_LABEL
  if (
#line 867 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (AND, V8QImode, operands)))
    {
      return 1106;  /* mmx_andv8qi3 */
    }
  goto ret0;

 L11898: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L11899;
    }
  goto ret0;

 L11899: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L11900;
    }
  goto ret0;

 L11900: ATTRIBUTE_UNUSED_LABEL
  if (
#line 887 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (IOR, V8QImode, operands)))
    {
      return 1112;  /* mmx_iorv8qi3 */
    }
  goto ret0;

 L11916: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L11917;
    }
  goto ret0;

 L11917: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L11918;
    }
  goto ret0;

 L11918: ATTRIBUTE_UNUSED_LABEL
  if (
#line 897 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (XOR, V8QImode, operands)))
    {
      return 1115;  /* mmx_xorv8qi3 */
    }
  goto ret0;

 L11934: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4QImode)
    goto L16576;
  goto ret0;

 L16576: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SS_TRUNCATE:
      goto L11935;
    case US_TRUNCATE:
      goto L11951;
    default:
     break;
   }
  goto ret0;

 L11935: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L11936;
    }
  goto ret0;

 L11936: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4QImode
      && GET_CODE (x2) == SS_TRUNCATE)
    goto L11937;
  goto ret0;

 L11937: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V4HImode))
    {
      operands[2] = x3;
      goto L11938;
    }
  goto ret0;

 L11938: ATTRIBUTE_UNUSED_LABEL
  if (
#line 916 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 1118;  /* mmx_packsswb */
    }
  goto ret0;

 L11951: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L11952;
    }
  goto ret0;

 L11952: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4QImode
      && GET_CODE (x2) == US_TRUNCATE)
    goto L11953;
  goto ret0;

 L11953: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V4HImode))
    {
      operands[2] = x3;
      goto L11954;
    }
  goto ret0;

 L11954: ATTRIBUTE_UNUSED_LABEL
  if (
#line 940 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 1120;  /* mmx_packuswb */
    }
  goto ret0;

 L11958: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V16QImode
      && GET_CODE (x2) == VEC_CONCAT)
    goto L11959;
  goto ret0;

 L11959: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8QImode))
    {
      operands[1] = x3;
      goto L11960;
    }
  goto ret0;

 L11960: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V8QImode))
    {
      operands[2] = x3;
      goto L11961;
    }
  goto ret0;

 L11961: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 8)
    goto L11962;
  goto ret0;

 L11962: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT)
    goto L16578;
  goto ret0;

 L16578: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 4LL:
        goto L11963;
      case 0LL:
        goto L11978;
      default:
        break;
      }
  goto ret0;

 L11963: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (12)])
    goto L11964;
  goto ret0;

 L11964: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (5)])
    goto L11965;
  goto ret0;

 L11965: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (13)])
    goto L11966;
  goto ret0;

 L11966: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 4);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (6)])
    goto L11967;
  goto ret0;

 L11967: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 5);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (14)])
    goto L11968;
  goto ret0;

 L11968: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 6);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (7)])
    goto L11969;
  goto ret0;

 L11969: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 7);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (15)]
      && 
#line 955 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 1121;  /* mmx_punpckhbw */
    }
  goto ret0;

 L11978: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L11979;
  goto ret0;

 L11979: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L11980;
  goto ret0;

 L11980: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (9)])
    goto L11981;
  goto ret0;

 L11981: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 4);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (2)])
    goto L11982;
  goto ret0;

 L11982: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 5);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (10)])
    goto L11983;
  goto ret0;

 L11983: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 6);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (3)])
    goto L11984;
  goto ret0;

 L11984: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 7);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (11)]
      && 
#line 970 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 1122;  /* mmx_punpcklbw */
    }
  goto ret0;

 L12090: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V8HImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L12091;
  goto ret0;

 L12091: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V8HImode
      && GET_CODE (x3) == PLUS)
    goto L12092;
  goto ret0;

 L12092: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == V8HImode
      && GET_CODE (x4) == PLUS)
    goto L12093;
  goto ret0;

 L12093: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == V8HImode
      && GET_CODE (x5) == ZERO_EXTEND)
    goto L12094;
  goto ret0;

 L12094: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (nonimmediate_operand (x6, V8QImode))
    {
      operands[1] = x6;
      goto L12095;
    }
  goto ret0;

 L12095: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == V8HImode
      && GET_CODE (x5) == ZERO_EXTEND)
    goto L12096;
  goto ret0;

 L12096: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (nonimmediate_operand (x6, V8QImode))
    {
      operands[2] = x6;
      goto L12097;
    }
  goto ret0;

 L12097: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == V8HImode
      && GET_CODE (x4) == CONST_VECTOR
      && XVECLEN (x4, 0) == 8)
    goto L12098;
  goto ret0;

 L12098: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L12099;
  goto ret0;

 L12099: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L12100;
  goto ret0;

 L12100: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 2);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L12101;
  goto ret0;

 L12101: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 3);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L12102;
  goto ret0;

 L12102: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 4);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L12103;
  goto ret0;

 L12103: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 5);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L12104;
  goto ret0;

 L12104: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 6);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L12105;
  goto ret0;

 L12105: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 7);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L12106;
  goto ret0;

 L12106: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 1305 "../.././gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW)
   && ix86_binary_operator_ok (PLUS, V8QImode, operands)))
    {
      return 1136;  /* mmx_uavgv8qi3 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_17 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L11573;
    case SS_PLUS:
      goto L11598;
    case US_PLUS:
      goto L11610;
    case MINUS:
      goto L11622;
    case SS_MINUS:
      goto L11647;
    case US_MINUS:
      goto L11659;
    case MULT:
      goto L11665;
    case TRUNCATE:
      goto L11671;
    case SMAX:
      goto L11755;
    case SMIN:
      goto L11767;
    case ASHIFTRT:
      goto L11773;
    case LSHIFTRT:
      goto L11785;
    case ASHIFT:
      goto L11804;
    case EQ:
      goto L11829;
    case GT:
      goto L11847;
    case AND:
      goto L11865;
    case IOR:
      goto L11904;
    case XOR:
      goto L11922;
    case VEC_CONCAT:
      goto L11942;
    case VEC_SELECT:
      goto L11988;
    case VEC_MERGE:
      goto L12028;
    case VEC_DUPLICATE:
      goto L12061;
    default:
     break;
   }
  goto ret0;

 L11573: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L11574;
    }
  goto ret0;

 L11574: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L11575;
    }
  goto ret0;

 L11575: ATTRIBUTE_UNUSED_LABEL
  if (
#line 565 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (PLUS, V4HImode, operands)))
    {
      return 1067;  /* mmx_addv4hi3 */
    }
  goto ret0;

 L11598: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L11599;
    }
  goto ret0;

 L11599: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L11600;
    }
  goto ret0;

 L11600: ATTRIBUTE_UNUSED_LABEL
  if (
#line 586 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 1071;  /* mmx_ssaddv4hi3 */
    }
  goto ret0;

 L11610: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L11611;
    }
  goto ret0;

 L11611: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L11612;
    }
  goto ret0;

 L11612: ATTRIBUTE_UNUSED_LABEL
  if (
#line 596 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 1073;  /* mmx_usaddv4hi3 */
    }
  goto ret0;

 L11622: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L11623;
    }
  goto ret0;

 L11623: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L11624;
    }
  goto ret0;

 L11624: ATTRIBUTE_UNUSED_LABEL
  if (
#line 606 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 1075;  /* mmx_subv4hi3 */
    }
  goto ret0;

 L11647: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L11648;
    }
  goto ret0;

 L11648: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L11649;
    }
  goto ret0;

 L11649: ATTRIBUTE_UNUSED_LABEL
  if (
#line 627 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 1079;  /* mmx_sssubv4hi3 */
    }
  goto ret0;

 L11659: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L11660;
    }
  goto ret0;

 L11660: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L11661;
    }
  goto ret0;

 L11661: ATTRIBUTE_UNUSED_LABEL
  if (
#line 637 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 1081;  /* mmx_ussubv4hi3 */
    }
  goto ret0;

 L11665: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L11666;
    }
  goto ret0;

 L11666: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L11667;
    }
  goto ret0;

 L11667: ATTRIBUTE_UNUSED_LABEL
  if (
#line 646 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (MULT, V4HImode, operands)))
    {
      return 1082;  /* mmx_mulv4hi3 */
    }
  goto ret0;

 L11671: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4SImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L11672;
  goto ret0;

 L11672: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V4SImode)
    goto L16602;
  goto ret0;

 L16602: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case MULT:
      goto L11673;
    case PLUS:
      goto L11722;
    default:
     break;
   }
  goto ret0;

 L11673: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == V4SImode)
    goto L16604;
  goto ret0;

 L16604: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case SIGN_EXTEND:
      goto L11674;
    case ZERO_EXTEND:
      goto L11684;
    default:
     break;
   }
  goto ret0;

 L11674: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, V4HImode))
    {
      operands[1] = x5;
      goto L11675;
    }
  goto ret0;

 L11675: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == V4SImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L11676;
  goto ret0;

 L11676: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, V4HImode))
    {
      operands[2] = x5;
      goto L11677;
    }
  goto ret0;

 L11677: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (16)]
      && 
#line 660 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (MULT, V4HImode, operands)))
    {
      return 1083;  /* mmx_smulv4hi3_highpart */
    }
  goto ret0;

 L11684: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, V4HImode))
    {
      operands[1] = x5;
      goto L11685;
    }
  goto ret0;

 L11685: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == V4SImode
      && GET_CODE (x4) == ZERO_EXTEND)
    goto L11686;
  goto ret0;

 L11686: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, V4HImode))
    {
      operands[2] = x5;
      goto L11687;
    }
  goto ret0;

 L11687: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (16)]
      && 
#line 674 "../.././gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (MULT, V4HImode, operands)))
    {
      return 1084;  /* mmx_umulv4hi3_highpart */
    }
  goto ret0;

 L11722: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == V4SImode)
    goto L16606;
  goto ret0;

 L16606: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case MULT:
      goto L11723;
    case PLUS:
      goto L12113;
    default:
     break;
   }
  goto ret0;

 L11723: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == V4SImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L11724;
  goto ret0;

 L11724: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (nonimmediate_operand (x6, V4HImode))
    {
      operands[1] = x6;
      goto L11725;
    }
  goto ret0;

 L11725: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == V4SImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L11726;
  goto ret0;

 L11726: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (nonimmediate_operand (x6, V4HImode))
    {
      operands[2] = x6;
      goto L11727;
    }
  goto ret0;

 L11727: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == V4SImode
      && GET_CODE (x4) == CONST_VECTOR
      && XVECLEN (x4, 0) == 4)
    goto L11728;
  goto ret0;

 L11728: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 32768LL)
    goto L11729;
  goto ret0;

 L11729: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 32768LL)
    goto L11730;
  goto ret0;

 L11730: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 2);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 32768LL)
    goto L11731;
  goto ret0;

 L11731: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 3);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 32768LL)
    goto L11732;
  goto ret0;

 L11732: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (16)]
      && 
#line 717 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (MULT, V4HImode, operands)))
    {
      return 1086;  /* mmx_pmulhrwv4hi3 */
    }
  goto ret0;

 L12113: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == V4SImode
      && GET_CODE (x5) == ZERO_EXTEND)
    goto L12114;
  goto ret0;

 L12114: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (nonimmediate_operand (x6, V4HImode))
    {
      operands[1] = x6;
      goto L12115;
    }
  goto ret0;

 L12115: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == V4SImode
      && GET_CODE (x5) == ZERO_EXTEND)
    goto L12116;
  goto ret0;

 L12116: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (nonimmediate_operand (x6, V4HImode))
    {
      operands[2] = x6;
      goto L12117;
    }
  goto ret0;

 L12117: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == V4SImode
      && GET_CODE (x4) == CONST_VECTOR
      && XVECLEN (x4, 0) == 4)
    goto L12118;
  goto ret0;

 L12118: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L12119;
  goto ret0;

 L12119: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L12120;
  goto ret0;

 L12120: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 2);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L12121;
  goto ret0;

 L12121: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 3);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L12122;
  goto ret0;

 L12122: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 1331 "../.././gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (PLUS, V4HImode, operands)))
    {
      return 1137;  /* mmx_uavgv4hi3 */
    }
  goto ret0;

 L11755: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L11756;
    }
  goto ret0;

 L11756: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L11757;
    }
  goto ret0;

 L11757: ATTRIBUTE_UNUSED_LABEL
  if (
#line 752 "../.././gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (SMAX, V4HImode, operands)))
    {
      return 1089;  /* mmx_smaxv4hi3 */
    }
  goto ret0;

 L11767: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L11768;
    }
  goto ret0;

 L11768: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L11769;
    }
  goto ret0;

 L11769: ATTRIBUTE_UNUSED_LABEL
  if (
#line 772 "../.././gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (SMIN, V4HImode, operands)))
    {
      return 1091;  /* mmx_sminv4hi3 */
    }
  goto ret0;

 L11773: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L11774;
    }
  goto ret0;

 L11774: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L11775;
    }
  goto ret0;

 L11775: ATTRIBUTE_UNUSED_LABEL
  if (
#line 783 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 1092;  /* mmx_ashrv4hi3 */
    }
  goto ret0;

 L11785: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L11786;
    }
  goto ret0;

 L11786: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L11787;
    }
  goto ret0;

 L11787: ATTRIBUTE_UNUSED_LABEL
  if (
#line 793 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 1094;  /* mmx_lshrv4hi3 */
    }
  goto ret0;

 L11804: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L11805;
    }
  goto ret0;

 L11805: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L11806;
    }
  goto ret0;

 L11806: ATTRIBUTE_UNUSED_LABEL
  if (
#line 814 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 1097;  /* mmx_ashlv4hi3 */
    }
  goto ret0;

 L11829: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L11830;
    }
  goto ret0;

 L11830: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L11831;
    }
  goto ret0;

 L11831: ATTRIBUTE_UNUSED_LABEL
  if (
#line 841 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (EQ, V4HImode, operands)))
    {
      return 1101;  /* mmx_eqv4hi3 */
    }
  goto ret0;

 L11847: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L11848;
    }
  goto ret0;

 L11848: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L11849;
    }
  goto ret0;

 L11849: ATTRIBUTE_UNUSED_LABEL
  if (
#line 851 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 1104;  /* mmx_gtv4hi3 */
    }
  goto ret0;

 L11865: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4HImode)
    goto L16609;
  goto ret0;

 L16609: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == NOT)
    goto L11885;
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L11866;
    }
  goto ret0;

 L11885: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L11886;
    }
  goto ret0;

 L11886: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L11887;
    }
  goto ret0;

 L11887: ATTRIBUTE_UNUSED_LABEL
  if (
#line 877 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 1110;  /* mmx_nandv4hi3 */
    }
  goto ret0;

 L11866: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L11867;
    }
  goto ret0;

 L11867: ATTRIBUTE_UNUSED_LABEL
  if (
#line 867 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (AND, V4HImode, operands)))
    {
      return 1107;  /* mmx_andv4hi3 */
    }
  goto ret0;

 L11904: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L11905;
    }
  goto ret0;

 L11905: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L11906;
    }
  goto ret0;

 L11906: ATTRIBUTE_UNUSED_LABEL
  if (
#line 887 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (IOR, V4HImode, operands)))
    {
      return 1113;  /* mmx_iorv4hi3 */
    }
  goto ret0;

 L11922: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L11923;
    }
  goto ret0;

 L11923: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L11924;
    }
  goto ret0;

 L11924: ATTRIBUTE_UNUSED_LABEL
  if (
#line 897 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (XOR, V4HImode, operands)))
    {
      return 1116;  /* mmx_xorv4hi3 */
    }
  goto ret0;

 L11942: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2HImode
      && GET_CODE (x2) == SS_TRUNCATE)
    goto L11943;
  goto ret0;

 L11943: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[1] = x3;
      goto L11944;
    }
  goto ret0;

 L11944: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2HImode
      && GET_CODE (x2) == SS_TRUNCATE)
    goto L11945;
  goto ret0;

 L11945: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V2SImode))
    {
      operands[2] = x3;
      goto L11946;
    }
  goto ret0;

 L11946: ATTRIBUTE_UNUSED_LABEL
  if (
#line 928 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 1119;  /* mmx_packssdw */
    }
  goto ret0;

 L11988: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case V8HImode:
      goto L16610;
    case V4HImode:
      goto L16611;
    default:
      break;
    }
  goto ret0;

 L16610: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_CONCAT)
    goto L11989;
  goto ret0;

 L11989: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L11990;
    }
  goto ret0;

 L11990: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V4HImode))
    {
      operands[2] = x3;
      goto L11991;
    }
  goto ret0;

 L11991: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 4)
    goto L11992;
  goto ret0;

 L11992: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT)
    goto L16612;
  goto ret0;

 L16612: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 2LL:
        goto L11993;
      case 0LL:
        goto L12004;
      default:
        break;
      }
  goto ret0;

 L11993: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (6)])
    goto L11994;
  goto ret0;

 L11994: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (3)])
    goto L11995;
  goto ret0;

 L11995: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (7)]
      && 
#line 983 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 1123;  /* mmx_punpckhwd */
    }
  goto ret0;

 L12004: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    goto L12005;
  goto ret0;

 L12005: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L12006;
  goto ret0;

 L12006: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (5)]
      && 
#line 996 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 1124;  /* mmx_punpcklwd */
    }
  goto ret0;

 L16611: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L12045;
    }
  goto ret0;

 L12045: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 4)
    goto L12046;
  goto ret0;

 L12046: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (const_0_to_3_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L12047;
    }
  goto ret0;

 L12047: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (const_0_to_3_operand (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L12048;
    }
  goto ret0;

 L12048: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (const_0_to_3_operand (x3, VOIDmode))
    {
      operands[4] = x3;
      goto L12049;
    }
  goto ret0;

 L12049: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (const_0_to_3_operand (x3, VOIDmode))
    {
      operands[5] = x3;
      goto L12050;
    }
  goto ret0;

 L12050: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1089 "../.././gcc/config/i386/mmx.md"
(TARGET_SSE || TARGET_3DNOW_A))
    {
      return 1129;  /* mmx_pshufw_1 */
    }
  goto ret0;

 L12028: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4HImode
      && GET_CODE (x2) == VEC_DUPLICATE)
    goto L12029;
  goto ret0;

 L12029: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L12030;
    }
  goto ret0;

 L12030: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L12031;
    }
  goto ret0;

 L12031: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (const_pow2_1_to_8_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L12032;
    }
  goto ret0;

 L12032: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1047 "../.././gcc/config/i386/mmx.md"
(TARGET_SSE || TARGET_3DNOW_A))
    {
      return 1127;  /* *mmx_pinsrw */
    }
  goto ret0;

 L12061: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == TRUNCATE)
    goto L12062;
  goto ret0;

 L12062: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L12063;
    }
  goto ret0;

 L12063: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1118 "../.././gcc/config/i386/mmx.md"
(TARGET_SSE || TARGET_3DNOW_A))
    {
      return 1131;  /* *vec_dupv4hi */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_18 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case GT:
      goto L11495;
    case GE:
      goto L11501;
    case EQ:
      goto L11507;
    case FIX:
      goto L11513;
    case SIGN_EXTEND:
      goto L11518;
    case PLUS:
      goto L11579;
    case MINUS:
      goto L11628;
    case ASHIFTRT:
      goto L11779;
    case LSHIFTRT:
      goto L11791;
    case ASHIFT:
      goto L11810;
    case AND:
      goto L11871;
    case IOR:
      goto L11910;
    case XOR:
      goto L11928;
    case VEC_SELECT:
      goto L12010;
    case VEC_DUPLICATE:
      goto L12067;
    case VEC_CONCAT:
      goto L12072;
    default:
     break;
   }
  goto ret0;

 L11495: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case V2SFmode:
      goto L16630;
    case V2SImode:
      goto L16631;
    default:
      break;
    }
  goto ret0;

 L16630: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L11496;
    }
  goto ret0;

 L11496: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L11497;
    }
  goto ret0;

 L11497: ATTRIBUTE_UNUSED_LABEL
  if (
#line 375 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW))
    {
      return 1054;  /* mmx_gtv2sf3 */
    }
  goto ret0;

 L16631: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L11854;
    }
  goto ret0;

 L11854: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L11855;
    }
  goto ret0;

 L11855: ATTRIBUTE_UNUSED_LABEL
  if (
#line 851 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 1105;  /* mmx_gtv2si3 */
    }
  goto ret0;

 L11501: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L11502;
    }
  goto ret0;

 L11502: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L11503;
    }
  goto ret0;

 L11503: ATTRIBUTE_UNUSED_LABEL
  if (
#line 384 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW))
    {
      return 1055;  /* mmx_gev2sf3 */
    }
  goto ret0;

 L11507: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case V2SFmode:
      goto L16632;
    case V2SImode:
      goto L16633;
    default:
      break;
    }
  goto ret0;

 L16632: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L11508;
    }
  goto ret0;

 L11508: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L11509;
    }
  goto ret0;

 L11509: ATTRIBUTE_UNUSED_LABEL
  if (
#line 393 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (EQ, V2SFmode, operands)))
    {
      return 1056;  /* mmx_eqv2sf3 */
    }
  goto ret0;

 L16633: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L11836;
    }
  goto ret0;

 L11836: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L11837;
    }
  goto ret0;

 L11837: ATTRIBUTE_UNUSED_LABEL
  if (
#line 841 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (EQ, V2SImode, operands)))
    {
      return 1102;  /* mmx_eqv2si3 */
    }
  goto ret0;

 L11513: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L11514;
    }
  goto ret0;

 L11514: ATTRIBUTE_UNUSED_LABEL
  if (
#line 407 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW))
    {
      return 1057;  /* mmx_pf2id */
    }
  goto ret0;

 L11518: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2HImode
      && GET_CODE (x2) == SS_TRUNCATE)
    goto L11519;
  goto ret0;

 L11519: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V2SImode
      && GET_CODE (x3) == FIX)
    goto L11520;
  goto ret0;

 L11520: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, V2SFmode))
    {
      operands[1] = x4;
      goto L11521;
    }
  goto ret0;

 L11521: ATTRIBUTE_UNUSED_LABEL
  if (
#line 418 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW_A))
    {
      return 1058;  /* mmx_pf2iw */
    }
  goto ret0;

 L11579: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SImode)
    goto L16635;
  goto ret0;

 L16635: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L11692;
  if (nonimmediate_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L11580;
    }
  goto ret0;

 L11692: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V2SImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L11693;
  goto ret0;

 L11693: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == V2HImode
      && GET_CODE (x4) == VEC_SELECT)
    goto L11694;
  goto ret0;

 L11694: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, V4HImode))
    {
      operands[1] = x5;
      goto L11695;
    }
  goto ret0;

 L11695: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 2)
    goto L11696;
  goto ret0;

 L11696: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L11697;
  goto ret0;

 L11697: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 1);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (2)])
    goto L11698;
  goto ret0;

 L11698: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == V2SImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L11699;
  goto ret0;

 L11699: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == V2HImode
      && GET_CODE (x4) == VEC_SELECT)
    goto L11700;
  goto ret0;

 L11700: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, V4HImode))
    {
      operands[2] = x5;
      goto L11701;
    }
  goto ret0;

 L11701: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 2)
    goto L11702;
  goto ret0;

 L11702: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L11703;
  goto ret0;

 L11703: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 1);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (2)])
    goto L11704;
  goto ret0;

 L11704: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2SImode
      && GET_CODE (x2) == MULT)
    goto L11705;
  goto ret0;

 L11705: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V2SImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L11706;
  goto ret0;

 L11706: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == V2HImode
      && GET_CODE (x4) == VEC_SELECT)
    goto L11707;
  goto ret0;

 L11707: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[1]))
    goto L11708;
  goto ret0;

 L11708: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 2)
    goto L11709;
  goto ret0;

 L11709: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L11710;
  goto ret0;

 L11710: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 1);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (3)])
    goto L11711;
  goto ret0;

 L11711: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == V2SImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L11712;
  goto ret0;

 L11712: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == V2HImode
      && GET_CODE (x4) == VEC_SELECT)
    goto L11713;
  goto ret0;

 L11713: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[2]))
    goto L11714;
  goto ret0;

 L11714: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == PARALLEL
      && XVECLEN (x5, 0) == 2)
    goto L11715;
  goto ret0;

 L11715: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 0);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L11716;
  goto ret0;

 L11716: ATTRIBUTE_UNUSED_LABEL
  x6 = XVECEXP (x5, 0, 1);
  if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + (3)]
      && 
#line 699 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (MULT, V4HImode, operands)))
    {
      return 1085;  /* mmx_pmaddwd */
    }
  goto ret0;

 L11580: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L11581;
    }
  goto ret0;

 L11581: ATTRIBUTE_UNUSED_LABEL
  if (
#line 565 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (PLUS, V2SImode, operands)))
    {
      return 1068;  /* mmx_addv2si3 */
    }
  goto ret0;

 L11628: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L11629;
    }
  goto ret0;

 L11629: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L11630;
    }
  goto ret0;

 L11630: ATTRIBUTE_UNUSED_LABEL
  if (
#line 606 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 1076;  /* mmx_subv2si3 */
    }
  goto ret0;

 L11779: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L11780;
    }
  goto ret0;

 L11780: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L11781;
    }
  goto ret0;

 L11781: ATTRIBUTE_UNUSED_LABEL
  if (
#line 783 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 1093;  /* mmx_ashrv2si3 */
    }
  goto ret0;

 L11791: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L11792;
    }
  goto ret0;

 L11792: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L11793;
    }
  goto ret0;

 L11793: ATTRIBUTE_UNUSED_LABEL
  if (
#line 793 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 1095;  /* mmx_lshrv2si3 */
    }
  goto ret0;

 L11810: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L11811;
    }
  goto ret0;

 L11811: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L11812;
    }
  goto ret0;

 L11812: ATTRIBUTE_UNUSED_LABEL
  if (
#line 814 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 1098;  /* mmx_ashlv2si3 */
    }
  goto ret0;

 L11871: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SImode)
    goto L16637;
  goto ret0;

 L16637: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == NOT)
    goto L11892;
  if (nonimmediate_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L11872;
    }
  goto ret0;

 L11892: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[1] = x3;
      goto L11893;
    }
  goto ret0;

 L11893: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L11894;
    }
  goto ret0;

 L11894: ATTRIBUTE_UNUSED_LABEL
  if (
#line 877 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 1111;  /* mmx_nandv2si3 */
    }
  goto ret0;

 L11872: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L11873;
    }
  goto ret0;

 L11873: ATTRIBUTE_UNUSED_LABEL
  if (
#line 867 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (AND, V2SImode, operands)))
    {
      return 1108;  /* mmx_andv2si3 */
    }
  goto ret0;

 L11910: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L11911;
    }
  goto ret0;

 L11911: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L11912;
    }
  goto ret0;

 L11912: ATTRIBUTE_UNUSED_LABEL
  if (
#line 887 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (IOR, V2SImode, operands)))
    {
      return 1114;  /* mmx_iorv2si3 */
    }
  goto ret0;

 L11928: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L11929;
    }
  goto ret0;

 L11929: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L11930;
    }
  goto ret0;

 L11930: ATTRIBUTE_UNUSED_LABEL
  if (
#line 897 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (XOR, V2SImode, operands)))
    {
      return 1117;  /* mmx_xorv2si3 */
    }
  goto ret0;

 L12010: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case V4SImode:
      goto L16638;
    case V2SImode:
      goto L16639;
    default:
      break;
    }
  goto ret0;

 L16638: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_CONCAT)
    goto L12011;
  goto ret0;

 L12011: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[1] = x3;
      goto L12012;
    }
  goto ret0;

 L12012: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V2SImode))
    {
      operands[2] = x3;
      goto L12013;
    }
  goto ret0;

 L12013: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 2)
    goto L12014;
  goto ret0;

 L12014: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT)
    goto L16640;
  goto ret0;

 L16640: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 1LL:
        goto L12015;
      case 0LL:
        goto L12024;
      default:
        break;
      }
  goto ret0;

 L12015: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (3)]
      && 
#line 1009 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 1125;  /* mmx_punpckhdq */
    }
  goto ret0;

 L12024: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (2)]
      && 
#line 1022 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 1126;  /* mmx_punpckldq */
    }
  goto ret0;

 L16639: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L12055;
    }
  goto ret0;

 L12055: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 2)
    goto L12056;
  goto ret0;

 L12056: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L12057;
  goto ret0;

 L12057: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 1108 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW_A))
    {
      return 1130;  /* mmx_pswapdv2si2 */
    }
  goto ret0;

 L12067: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L12068;
    }
  goto ret0;

 L12068: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1127 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 1132;  /* *vec_dupv2si */
    }
  goto ret0;

 L12072: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L12073;
    }
  goto ret0;

 L12073: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (vector_move_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L12074;
    }
  goto ret0;

 L12074: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1137 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && !TARGET_SSE))
    {
      return 1133;  /* *mmx_concatv2si */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_19 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L11385;
    case MINUS:
      goto L11391;
    case MULT:
      goto L11397;
    case SMAX:
      goto L11403;
    case SMIN:
      goto L11409;
    case UNSPEC:
      goto L16657;
    case VEC_CONCAT:
      goto L11443;
    case VEC_MERGE:
      goto L11485;
    case FLOAT:
      goto L11525;
    case VEC_SELECT:
      goto L11537;
    case VEC_DUPLICATE:
      goto L11544;
    default:
     break;
   }
  goto ret0;

 L11385: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L11386;
    }
  goto ret0;

 L11386: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L11387;
    }
  goto ret0;

 L11387: ATTRIBUTE_UNUSED_LABEL
  if (
#line 218 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (PLUS, V2SFmode, operands)))
    {
      return 1041;  /* mmx_addv2sf3 */
    }
  goto ret0;

 L11391: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L11392;
    }
  goto ret0;

 L11392: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L11393;
    }
  goto ret0;

 L11393: ATTRIBUTE_UNUSED_LABEL
  if (
#line 227 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
    {
      return 1042;  /* mmx_subv2sf3 */
    }
  goto ret0;

 L11397: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L11398;
    }
  goto ret0;

 L11398: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L11399;
    }
  goto ret0;

 L11399: ATTRIBUTE_UNUSED_LABEL
  if (
#line 245 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (MULT, V2SFmode, operands)))
    {
      return 1043;  /* mmx_mulv2sf3 */
    }
  goto ret0;

 L11403: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L11404;
    }
  goto ret0;

 L11404: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L11405;
    }
  goto ret0;

 L11405: ATTRIBUTE_UNUSED_LABEL
  if (
#line 254 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (SMAX, V2SFmode, operands)))
    {
      return 1044;  /* mmx_smaxv2sf3 */
    }
  goto ret0;

 L11409: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L11410;
    }
  goto ret0;

 L11410: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L11411;
    }
  goto ret0;

 L11411: ATTRIBUTE_UNUSED_LABEL
  if (
#line 263 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (SMIN, V2SFmode, operands)))
    {
      return 1045;  /* mmx_sminv2sf3 */
    }
  goto ret0;

 L16657: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 1:
      goto L16662;
    case 2:
      goto L16663;
    default:
      break;
    }
  goto ret0;

 L16662: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 39LL:
      goto L11415;
    case 42LL:
      goto L11432;
    default:
      break;
    }
  goto ret0;

 L11415: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L11416;
    }
  goto ret0;

 L11416: ATTRIBUTE_UNUSED_LABEL
  if (
#line 272 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW))
    {
      return 1046;  /* mmx_rcpv2sf2 */
    }
  goto ret0;

 L11432: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L11433;
    }
  goto ret0;

 L11433: ATTRIBUTE_UNUSED_LABEL
  if (
#line 301 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW))
    {
      return 1049;  /* mmx_rsqrtv2sf2 */
    }
  goto ret0;

 L16663: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 40LL:
      goto L11420;
    case 41LL:
      goto L11426;
    case 43LL:
      goto L11437;
    default:
      break;
    }
  goto ret0;

 L11420: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L11421;
    }
  goto ret0;

 L11421: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L11422;
    }
  goto ret0;

 L11422: ATTRIBUTE_UNUSED_LABEL
  if (
#line 282 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW))
    {
      return 1047;  /* mmx_rcpit1v2sf3 */
    }
  goto ret0;

 L11426: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L11427;
    }
  goto ret0;

 L11427: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L11428;
    }
  goto ret0;

 L11428: ATTRIBUTE_UNUSED_LABEL
  if (
#line 292 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW))
    {
      return 1048;  /* mmx_rcpit2v2sf3 */
    }
  goto ret0;

 L11437: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L11438;
    }
  goto ret0;

 L11438: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L11439;
    }
  goto ret0;

 L11439: ATTRIBUTE_UNUSED_LABEL
  if (
#line 311 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW))
    {
      return 1050;  /* mmx_rsqit1v2sf3 */
    }
  goto ret0;

 L11443: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SFmode)
    goto L16667;
  goto ret0;

 L16667: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L11444;
    case MINUS:
      goto L11465;
    case REG:
    case SUBREG:
    case MEM:
      goto L16669;
    default:
      goto ret0;
   }
 L16669: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L11550;
    }
  goto ret0;

 L11444: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L11445;
  goto ret0;

 L11445: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V2SFmode))
    {
      operands[1] = x4;
      goto L11446;
    }
  goto ret0;

 L11446: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L11447;
  goto ret0;

 L11447: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L11448;
  goto ret0;

 L11448: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L11449;
  goto ret0;

 L11449: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L11450;
  goto ret0;

 L11450: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L11451;
  goto ret0;

 L11451: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L11452;
  goto ret0;

 L11452: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode
      && GET_CODE (x2) == PLUS)
    goto L11453;
  goto ret0;

 L11453: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L11454;
  goto ret0;

 L11454: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, V2SFmode))
    {
      operands[2] = x4;
      goto L11455;
    }
  goto ret0;

 L11455: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L11456;
  goto ret0;

 L11456: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L11457;
  goto ret0;

 L11457: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L11458;
  goto ret0;

 L11458: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[2]))
    goto L11459;
  goto ret0;

 L11459: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L11460;
  goto ret0;

 L11460: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 329 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW))
    {
      return 1051;  /* mmx_haddv2sf3 */
    }
  goto ret0;

 L11465: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L11466;
  goto ret0;

 L11466: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V2SFmode))
    {
      operands[1] = x4;
      goto L11467;
    }
  goto ret0;

 L11467: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L11468;
  goto ret0;

 L11468: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L11469;
  goto ret0;

 L11469: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L11470;
  goto ret0;

 L11470: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L11471;
  goto ret0;

 L11471: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L11472;
  goto ret0;

 L11472: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L11473;
  goto ret0;

 L11473: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode
      && GET_CODE (x2) == MINUS)
    goto L11474;
  goto ret0;

 L11474: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L11475;
  goto ret0;

 L11475: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, V2SFmode))
    {
      operands[2] = x4;
      goto L11476;
    }
  goto ret0;

 L11476: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L11477;
  goto ret0;

 L11477: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L11478;
  goto ret0;

 L11478: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == VEC_SELECT)
    goto L11479;
  goto ret0;

 L11479: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[2]))
    goto L11480;
  goto ret0;

 L11480: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L11481;
  goto ret0;

 L11481: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 347 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW_A))
    {
      return 1052;  /* mmx_hsubv2sf3 */
    }
  goto ret0;

 L11550: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (vector_move_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L11551;
    }
  goto ret0;

 L11551: ATTRIBUTE_UNUSED_LABEL
  if (
#line 471 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && !TARGET_SSE))
    {
      return 1063;  /* *mmx_concatv2sf */
    }
  goto ret0;

 L11485: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SFmode
      && GET_CODE (x2) == PLUS)
    goto L11486;
  goto ret0;

 L11486: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L11487;
    }
  goto ret0;

 L11487: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L11488;
    }
  goto ret0;

 L11488: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2SFmode
      && GET_CODE (x2) == MINUS)
    goto L11489;
  goto ret0;

 L11489: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L11490;
  goto ret0;

 L11490: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L11491;
  goto ret0;

 L11491: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 360 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW_A))
    {
      return 1053;  /* mmx_addsubv2sf3 */
    }
  goto ret0;

 L11525: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SImode)
    goto L16670;
  goto ret0;

 L16670: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == SIGN_EXTEND)
    goto L11526;
  if (nonimmediate_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L11533;
    }
  goto ret0;

 L11526: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V2HImode
      && GET_CODE (x3) == TRUNCATE)
    goto L11527;
  goto ret0;

 L11527: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, V2SImode))
    {
      operands[1] = x4;
      goto L11528;
    }
  goto ret0;

 L11528: ATTRIBUTE_UNUSED_LABEL
  if (
#line 429 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW_A))
    {
      return 1059;  /* mmx_pi2fw */
    }
  goto ret0;

 L11533: ATTRIBUTE_UNUSED_LABEL
  if (
#line 437 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW))
    {
      return 1060;  /* mmx_floatv2si2 */
    }
  goto ret0;

 L11537: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L11538;
    }
  goto ret0;

 L11538: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 2)
    goto L11539;
  goto ret0;

 L11539: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L11540;
  goto ret0;

 L11540: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 452 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW_A))
    {
      return 1061;  /* mmx_pswapdv2sf2 */
    }
  goto ret0;

 L11544: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L11545;
    }
  goto ret0;

 L11545: ATTRIBUTE_UNUSED_LABEL
  if (
#line 461 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 1062;  /* *vec_dupv2sf */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_20 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    case HImode:
      goto L15545;
    case CCmode:
      goto L15539;
    case SImode:
      goto L15540;
    case QImode:
      goto L15549;
    case DImode:
      goto L15557;
    case TImode:
      goto L15562;
    case SFmode:
      goto L15563;
    case DFmode:
      goto L15565;
    case XFmode:
      goto L15567;
    case TFmode:
      goto L15569;
    default:
      break;
    }
 L1: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 17)
    goto L2;
 L198: ATTRIBUTE_UNUSED_LABEL
  switch (GET_MODE (x1))
    {
    case CCFPmode:
      goto L15596;
    case CCFPUmode:
      goto L15597;
    default:
      break;
    }
 L349: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case STRICT_LOW_PART:
      goto L350;
    case PC:
      goto L6905;
    case REG:
    case SUBREG:
      goto L1442;
    default:
      goto L9205;
   }
 L1442: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L1443;
    }
 L9205: ATTRIBUTE_UNUSED_LABEL
  operands[0] = x1;
  goto L9206;
 L9378: ATTRIBUTE_UNUSED_LABEL
  switch (GET_MODE (x1))
    {
    case CCZmode:
      goto L15598;
    case V16QImode:
      goto L15629;
    case V8HImode:
      goto L15600;
    case V4SImode:
      goto L15601;
    case V2DImode:
      goto L15602;
    case V4SFmode:
      goto L15603;
    case V2DFmode:
      goto L15604;
    case SImode:
      goto L15608;
    case CCFPmode:
      goto L15612;
    case CCFPUmode:
      goto L15613;
    case SFmode:
      goto L15614;
    case V2SImode:
      goto L15615;
    case DImode:
      goto L15617;
    case V2SFmode:
      goto L15619;
    case DFmode:
      goto L15622;
    case TImode:
      goto L15626;
    default:
      break;
    }
 L11266: ATTRIBUTE_UNUSED_LABEL
  operands[0] = x1;
  goto L11267;
 L11295: ATTRIBUTE_UNUSED_LABEL
  switch (GET_MODE (x1))
    {
    case DFmode:
      goto L15630;
    case SFmode:
      goto L15631;
    case V2DImode:
      goto L15632;
    case V8QImode:
      goto L15646;
    case V4HImode:
      goto L15634;
    case V2SImode:
      goto L15635;
    case V2SFmode:
      goto L15636;
    case DImode:
      goto L15637;
    case SImode:
      goto L15644;
    case QImode:
      goto L15647;
    case HImode:
      goto L15648;
    default:
      break;
    }
  goto ret0;

 L15545: ATTRIBUTE_UNUSED_LABEL
  tem = recog_1 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L1;

 L15539: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 17)
    goto L194;
  goto L1;

 L194: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCmode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 22)
    goto L195;
  x1 = XEXP (x0, 0);
  goto L1;

 L195: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L196;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L196: ATTRIBUTE_UNUSED_LABEL
  if (
#line 968 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT))
    {
      return 26;  /* x86_sahf_1 */
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L15540: ATTRIBUTE_UNUSED_LABEL
  tem = recog_2 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L1;

 L15549: ATTRIBUTE_UNUSED_LABEL
  tem = recog_3 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L1;

 L15557: ATTRIBUTE_UNUSED_LABEL
  tem = recog_6 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L1;

 L15562: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, TImode))
    {
      operands[0] = x1;
      goto L1279;
    }
 L15589: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, TImode))
    {
      operands[0] = x1;
      goto L2424;
    }
  goto L1;

 L1279: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == TImode)
    goto L15932;
 L575: ATTRIBUTE_UNUSED_LABEL
  if (vector_move_operand (x1, TImode))
    {
      operands[1] = x1;
      goto L576;
    }
 L579: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x1, TImode))
    {
      operands[1] = x1;
      goto L580;
    }
  x1 = XEXP (x0, 0);
  goto L15589;

 L15932: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L1280;
    case MINUS:
      goto L1985;
    case NEG:
      goto L4209;
    default:
     break;
   }
  goto L575;

 L1280: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, TImode))
    {
      operands[1] = x2;
      goto L1281;
    }
  goto L575;

 L1281: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, TImode))
    {
      operands[2] = x2;
      goto L1282;
    }
  goto L575;

 L1282: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4761 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (PLUS, TImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 183;  /* *addti3_1 */
    }
  x1 = XEXP (x0, 1);
  goto L575;

 L1985: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, TImode))
    {
      operands[1] = x2;
      goto L1986;
    }
  goto L575;

 L1986: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, TImode))
    {
      operands[2] = x2;
      goto L1987;
    }
  goto L575;

 L1987: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6495 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (MINUS, TImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 232;  /* *subti3_1 */
    }
  x1 = XEXP (x0, 1);
  goto L575;

 L4209: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, TImode))
    {
      operands[1] = x2;
      goto L4210;
    }
  goto L575;

 L4210: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9338 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_unary_operator_ok (NEG, TImode, operands))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 361;  /* *negti2_1 */
    }
  x1 = XEXP (x0, 1);
  goto L575;

 L576: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2141 "../.././gcc/config/i386/i386.md"
(TARGET_SSE && !TARGET_64BIT
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 85;  /* *movti_internal */
    }
  x1 = XEXP (x0, 1);
  goto L579;

 L580: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2175 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 86;  /* *movti_rex64 */
    }
  x1 = XEXP (x0, 0);
  goto L15589;

 L2424: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == TImode)
    goto L15935;
  x1 = XEXP (x0, 0);
  goto L1;

 L15935: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case MULT:
      goto L2425;
    case ASHIFT:
      goto L4685;
    case ASHIFTRT:
      goto L5017;
    case LSHIFTRT:
      goto L5607;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L1;

 L2425: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == TImode)
    goto L15939;
  x1 = XEXP (x0, 0);
  goto L1;

 L15939: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L2426;
    case SIGN_EXTEND:
      goto L2462;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L1;

 L2426: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2427;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L2427: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == TImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L2428;
  x1 = XEXP (x0, 0);
  goto L1;

 L2428: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2429;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L2429: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7061 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 262;  /* *umulditi3_insn */
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L2462: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2463;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L2463: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == TImode
      && GET_CODE (x2) == SIGN_EXTEND)
    goto L2464;
  x1 = XEXP (x0, 0);
  goto L1;

 L2464: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2465;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L2465: ATTRIBUTE_UNUSED_LABEL
  if (
#line 7114 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 264;  /* *mulditi3_insn */
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L4685: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, TImode))
    {
      operands[1] = x2;
      goto L4686;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L4686: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L4687;
    }
  if (immediate_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L4701;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L4687: ATTRIBUTE_UNUSED_LABEL
  if (
#line 10267 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 406;  /* ashlti3_1 */
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L4701: ATTRIBUTE_UNUSED_LABEL
  if (
#line 10276 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 407;  /* *ashlti3_2 */
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L5017: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, TImode))
    {
      operands[1] = x2;
      goto L5018;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L5018: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L5019;
    }
  if (immediate_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L5033;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L5019: ATTRIBUTE_UNUSED_LABEL
  if (
#line 11242 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 427;  /* ashrti3_1 */
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L5033: ATTRIBUTE_UNUSED_LABEL
  if (
#line 11251 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 428;  /* *ashrti3_2 */
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L5607: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, TImode))
    {
      operands[1] = x2;
      goto L5608;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L5608: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L5609;
    }
  if (immediate_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L5623;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L5609: ATTRIBUTE_UNUSED_LABEL
  if (
#line 11937 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 465;  /* lshrti3_1 */
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L5623: ATTRIBUTE_UNUSED_LABEL
  if (
#line 11946 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 466;  /* *lshrti3_2 */
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L15563: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L583;
    }
 L15564: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L833;
    }
 L15570: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L864;
    }
 L15571: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L877;
    }
 L15572: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L890;
    }
  goto L1;

 L583: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_no_elim_operand (x1, SFmode))
    {
      operands[1] = x1;
      goto L584;
    }
 L587: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_no_elim_operand (x1, SFmode))
    {
      operands[1] = x1;
      goto L588;
    }
  x1 = XEXP (x0, 0);
  goto L15564;

 L584: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2233 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT))
    {
      return 87;  /* *pushsf */
    }
  x1 = XEXP (x0, 1);
  goto L587;

 L588: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2246 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT))
    {
      return 88;  /* *pushsf_rex64 */
    }
  x1 = XEXP (x0, 0);
  goto L15564;

 L833: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SFmode
      && GET_CODE (x1) == FLOAT_TRUNCATE)
    goto L834;
  if (general_operand (x1, SFmode))
    {
      operands[1] = x1;
      goto L592;
    }
  x1 = XEXP (x0, 0);
  goto L15570;

 L834: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L835;
    }
  x1 = XEXP (x0, 0);
  goto L15570;

 L835: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3742 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387 && flag_unsafe_math_optimizations))
    {
      return 128;  /* *truncdfsf_fast_mixed */
    }
 L840: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3768 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH))
    {
      return 129;  /* *truncdfsf_fast_sse */
    }
 L845: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3777 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && flag_unsafe_math_optimizations))
    {
      return 130;  /* *truncdfsf_fast_i387 */
    }
  x1 = XEXP (x0, 0);
  goto L15570;

 L592: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2287 "../.././gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (reload_in_progress || reload_completed
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], SFmode))))
    {
      return 89;  /* *movsf_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15570;

 L864: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SFmode
      && GET_CODE (x1) == FLOAT_TRUNCATE)
    goto L865;
  x1 = XEXP (x0, 0);
  goto L15571;

 L865: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L866;
    }
  x1 = XEXP (x0, 0);
  goto L15571;

 L866: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3836 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && !(TARGET_SSE2 && TARGET_SSE_MATH)
   && !TARGET_MIX_SSE_I387))
    {
      return 133;  /* *truncdfsf2_i387_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15571;

 L877: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SFmode)
    goto L15941;
  x1 = XEXP (x0, 0);
  goto L15572;

 L15941: ATTRIBUTE_UNUSED_LABEL
  tem = recog_7 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L15572;

 L890: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SFmode
      && GET_CODE (x1) == FLOAT_TRUNCATE)
    goto L891;
  x1 = XEXP (x0, 0);
  goto L1;

 L891: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L892;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L892: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3929 "../.././gcc/config/i386/i386.md"
(TARGET_80387))
    {
      return 137;  /* *truncxfsf2_i387_1 */
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L15565: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L602;
    }
 L15566: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L808;
    }
 L15573: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L903;
    }
 L15574: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L916;
    }
  goto L1;

 L602: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_no_elim_operand (x1, DFmode))
    {
      operands[1] = x1;
      goto L603;
    }
  x1 = XEXP (x0, 0);
  goto L15566;

 L603: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2400 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && !TARGET_INTEGER_DFMODE_MOVES))
    {
      return 91;  /* *pushdf_nointeger */
    }
 L607: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2412 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT || TARGET_INTEGER_DFMODE_MOVES))
    {
      return 92;  /* *pushdf_integer */
    }
  x1 = XEXP (x0, 0);
  goto L15566;

 L808: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DFmode
      && GET_CODE (x1) == FLOAT_EXTEND)
    goto L809;
  if (general_operand (x1, DFmode))
    {
      operands[1] = x1;
      goto L611;
    }
  x1 = XEXP (x0, 0);
  goto L15573;

 L809: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L810;
    }
  x1 = XEXP (x0, 0);
  goto L15573;

 L810: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3550 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 123;  /* *extendsfdf2_mixed */
    }
 L815: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3577 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 124;  /* *extendsfdf2_sse */
    }
 L820: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3586 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 125;  /* *extendsfdf2_i387 */
    }
  x1 = XEXP (x0, 0);
  goto L15573;

 L611: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2454 "../.././gcc/config/i386/i386.md"
((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && ((optimize_size || !TARGET_INTEGER_DFMODE_MOVES) && !TARGET_64BIT)
   && (reload_in_progress || reload_completed
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], DFmode))))
    {
      return 93;  /* *movdf_nointeger */
    }
 L615: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2574 "../.././gcc/config/i386/i386.md"
((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && ((!optimize_size && TARGET_INTEGER_DFMODE_MOVES) || TARGET_64BIT)
   && (reload_in_progress || reload_completed
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], DFmode))))
    {
      return 94;  /* *movdf_integer */
    }
  x1 = XEXP (x0, 0);
  goto L15573;

 L903: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DFmode)
    goto L15987;
  x1 = XEXP (x0, 0);
  goto L15574;

 L15987: ATTRIBUTE_UNUSED_LABEL
  tem = recog_8 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L15574;

 L916: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DFmode
      && GET_CODE (x1) == FLOAT_TRUNCATE)
    goto L917;
  x1 = XEXP (x0, 0);
  goto L1;

 L917: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L918;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L918: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4027 "../.././gcc/config/i386/i386.md"
(TARGET_80387))
    {
      return 141;  /* *truncxfdf2_i387_1 */
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L15567: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x1, XFmode))
    {
      operands[0] = x1;
      goto L625;
    }
 L15568: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, XFmode))
    {
      operands[0] = x1;
      goto L823;
    }
 L15584: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, XFmode))
    {
      operands[0] = x1;
      goto L1256;
    }
  goto L1;

 L625: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_no_elim_operand (x1, XFmode))
    {
      operands[1] = x1;
      goto L626;
    }
  x1 = XEXP (x0, 0);
  goto L15568;

 L626: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2735 "../.././gcc/config/i386/i386.md"
(optimize_size))
    {
      return 96;  /* *pushxf_nointeger */
    }
 L630: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2747 "../.././gcc/config/i386/i386.md"
(!optimize_size))
    {
      return 97;  /* *pushxf_integer */
    }
  x1 = XEXP (x0, 0);
  goto L15568;

 L823: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == XFmode
      && GET_CODE (x1) == FLOAT_EXTEND)
    goto L824;
  if (general_operand (x1, XFmode))
    {
      operands[1] = x1;
      goto L634;
    }
  x1 = XEXP (x0, 0);
  goto L15584;

 L824: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L16046;
    case DFmode:
      goto L16047;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L15584;

 L16046: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L825;
    }
  x1 = XEXP (x0, 0);
  goto L15584;

 L825: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3632 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 126;  /* *extendsfxf2_i387 */
    }
  x1 = XEXP (x0, 0);
  goto L15584;

 L16047: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L830;
    }
  x1 = XEXP (x0, 0);
  goto L15584;

 L830: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3680 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 127;  /* *extenddfxf2_i387 */
    }
  x1 = XEXP (x0, 0);
  goto L15584;

 L634: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2786 "../.././gcc/config/i386/i386.md"
(optimize_size
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && (reload_in_progress || reload_completed
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], XFmode))))
    {
      return 98;  /* *movxf_nointeger */
    }
 L638: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2820 "../.././gcc/config/i386/i386.md"
(!optimize_size
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && (reload_in_progress || reload_completed
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], XFmode))))
    {
      return 99;  /* *movxf_integer */
    }
  x1 = XEXP (x0, 0);
  goto L15584;

 L1256: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == XFmode)
    goto L16048;
  x1 = XEXP (x0, 0);
  goto L1;

 L16048: ATTRIBUTE_UNUSED_LABEL
  tem = recog_9 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L1;

 L15569: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, TFmode))
    {
      operands[0] = x1;
      goto L648;
    }
  goto L1;

 L648: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, TFmode))
    {
      operands[1] = x1;
      goto L649;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L649: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2926 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 101;  /* *movtf_internal */
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L2: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == COMPARE)
    goto L3;
  x1 = XEXP (x0, 0);
  goto L198;

 L3: ATTRIBUTE_UNUSED_LABEL
  tem = recog_10 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L198;

 L15596: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 17)
    goto L199;
  goto L349;

 L199: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCFPmode
      && GET_CODE (x1) == COMPARE)
    goto L200;
  x1 = XEXP (x0, 0);
  goto L349;

 L200: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L201;
    }
  x1 = XEXP (x0, 0);
  goto L349;

 L201: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L202;
    }
 L213: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L214;
    }
  x1 = XEXP (x0, 0);
  goto L349;

 L202: ATTRIBUTE_UNUSED_LABEL
  if (
#line 980 "../.././gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387
   && SSE_FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])))
    {
      return 27;  /* *cmpfp_i_mixed */
    }
 L208: ATTRIBUTE_UNUSED_LABEL
  if (
#line 995 "../.././gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && SSE_FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])))
    {
      return 28;  /* *cmpfp_i_sse */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L213;

 L214: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1010 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE
   && (!TARGET_SSE_MATH || !SSE_FLOAT_MODE_P (GET_MODE (operands[0])))
   && FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])))
    {
      return 29;  /* *cmpfp_i_i387 */
    }
  x1 = XEXP (x0, 0);
  goto L349;

 L15597: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 17)
    goto L217;
  goto L349;

 L217: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCFPUmode
      && GET_CODE (x1) == COMPARE)
    goto L218;
  x1 = XEXP (x0, 0);
  goto L349;

 L218: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L219;
    }
  x1 = XEXP (x0, 0);
  goto L349;

 L219: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L220;
    }
 L231: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L232;
    }
  x1 = XEXP (x0, 0);
  goto L349;

 L220: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1029 "../.././gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387
   && SSE_FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])))
    {
      return 30;  /* *cmpfp_iu_mixed */
    }
 L226: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1044 "../.././gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && SSE_FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])))
    {
      return 31;  /* *cmpfp_iu_sse */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L231;

 L232: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1059 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE
   && (!TARGET_SSE_MATH || !SSE_FLOAT_MODE_P (GET_MODE (operands[0])))
   && FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])))
    {
      return 32;  /* *cmpfp_iu_387 */
    }
  x1 = XEXP (x0, 0);
  goto L349;

 L350: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L16185;
    case QImode:
      goto L16187;
    default:
      break;
    }
  goto L9205;

 L16185: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L351;
    }
 L16186: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L363;
    }
  goto L9205;

 L351: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, HImode))
    {
      operands[1] = x1;
      goto L352;
    }
  x1 = XEXP (x0, 0);
  x2 = XEXP (x1, 0);
  goto L16186;

 L352: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1422 "../.././gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 51;  /* *movstricthi_1 */
    }
  x1 = XEXP (x0, 0);
  x2 = XEXP (x1, 0);
  goto L16186;

 L363: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const0_operand (x1, HImode))
    {
      operands[1] = x1;
      goto L364;
    }
  x1 = XEXP (x0, 0);
  goto L9205;

 L364: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1432 "../.././gcc/config/i386/i386.md"
(reload_completed
   && ((!TARGET_USE_MOV0 && !TARGET_PARTIAL_REG_STALL) || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 52;  /* *movstricthi_xor */
    }
  x1 = XEXP (x0, 0);
  goto L9205;

 L16187: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L1824;
    }
 L16188: ATTRIBUTE_UNUSED_LABEL
  if (q_regs_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L406;
    }
  goto L9205;

 L1824: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode)
    goto L16189;
 L394: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x1, QImode))
    {
      operands[1] = x1;
      goto L395;
    }
  x1 = XEXP (x0, 0);
  x2 = XEXP (x1, 0);
  goto L16188;

 L16189: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L1825;
    case MINUS:
      goto L2277;
    case AND:
      goto L3211;
    case IOR:
      goto L3611;
    case XOR:
      goto L3994;
    case ASHIFTRT:
      goto L5499;
    case LSHIFTRT:
      goto L5995;
    case ROTATE:
      goto L6236;
    case ROTATERT:
      goto L6443;
    case NE:
    case EQ:
    case GE:
    case GT:
    case LE:
    case LT:
    case GEU:
    case GTU:
    case LEU:
    case LTU:
    case UNORDERED:
    case ORDERED:
    case UNEQ:
    case UNGE:
    case UNGT:
    case UNLE:
    case UNLT:
    case LTGT:
      goto L16198;
    default:
      goto L394;
   }
 L16198: ATTRIBUTE_UNUSED_LABEL
  if (ix86_comparison_operator (x1, QImode))
    {
      operands[1] = x1;
      goto L6538;
    }
  goto L394;

 L1825: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L1826;
  goto L394;

 L1826: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1827;
    }
  goto L394;

 L1827: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6170 "../.././gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 224;  /* *addqi_1_slp */
    }
  x1 = XEXP (x0, 1);
  goto L394;

 L2277: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L2278;
  goto L394;

 L2278: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L2279;
    }
  goto L394;

 L2279: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6799 "../.././gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 252;  /* *subqi_1_slp */
    }
  x1 = XEXP (x0, 1);
  goto L394;

 L3211: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L3212;
  goto L394;

 L3212: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L3213;
    }
  goto L394;

 L3213: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8302 "../.././gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 306;  /* *andqi_1_slp */
    }
  x1 = XEXP (x0, 1);
  goto L394;

 L3611: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L3612;
  goto L394;

 L3612: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L3613;
    }
  goto L394;

 L3613: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8726 "../.././gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 329;  /* *iorqi_1_slp */
    }
  x1 = XEXP (x0, 1);
  goto L394;

 L3994: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L3995;
  goto L394;

 L3995: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L3996;
    }
  goto L394;

 L3996: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9103 "../.././gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 351;  /* *xorqi_1_slp */
    }
  x1 = XEXP (x0, 1);
  goto L394;

 L5499: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L5500;
  goto L394;

 L5500: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const1_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L5501;
    }
 L5530: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L5531;
    }
  goto L394;

 L5501: ATTRIBUTE_UNUSED_LABEL
  if (
#line 11806 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, QImode, operands)
   && (! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 458;  /* *ashrqi3_1_one_bit_slp */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L5530;

 L5531: ATTRIBUTE_UNUSED_LABEL
  if (
#line 11833 "../.././gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 460;  /* *ashrqi3_1_slp */
    }
  x1 = XEXP (x0, 1);
  goto L394;

 L5995: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L5996;
  goto L394;

 L5996: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const1_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L5997;
    }
 L6026: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L6027;
    }
  goto L394;

 L5997: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12392 "../.././gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 491;  /* *lshrqi3_1_one_bit_slp */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L6026;

 L6027: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12418 "../.././gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 493;  /* *lshrqi3_1_slp */
    }
  x1 = XEXP (x0, 1);
  goto L394;

 L6236: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L6237;
  goto L394;

 L6237: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const1_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L6238;
    }
 L6267: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L6268;
    }
  goto L394;

 L6238: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12673 "../.././gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 507;  /* *rotlqi3_1_one_bit_slp */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L6267;

 L6268: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12701 "../.././gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 509;  /* *rotlqi3_1_slp */
    }
  x1 = XEXP (x0, 1);
  goto L394;

 L6443: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L6444;
  goto L394;

 L6444: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const1_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L6445;
    }
 L6474: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L6475;
    }
  goto L394;

 L6445: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12914 "../.././gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (TARGET_SHIFT1 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 521;  /* *rotrqi3_1_one_bit_slp */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L6474;

 L6475: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12940 "../.././gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 523;  /* *rotrqi3_1_slp */
    }
  x1 = XEXP (x0, 1);
  goto L394;

 L6538: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    goto L6539;
  goto L394;

 L6539: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 528;  /* *setcc_2 */
    }
  goto L394;

 L395: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1596 "../.././gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 58;  /* *movstrictqi_1 */
    }
  x1 = XEXP (x0, 0);
  x2 = XEXP (x1, 0);
  goto L16188;

 L406: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const0_operand (x1, QImode))
    {
      operands[1] = x1;
      goto L407;
    }
  x1 = XEXP (x0, 0);
  goto L9205;

 L407: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1606 "../.././gcc/config/i386/i386.md"
(reload_completed && (!TARGET_USE_MOV0 || optimize_size))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 59;  /* *movstrictqi_xor */
    }
  x1 = XEXP (x0, 0);
  goto L9205;

 L6905: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  switch (GET_MODE (x1))
    {
    case SImode:
      goto L16199;
    case DImode:
      goto L16200;
    default:
      break;
    }
 L6554: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case IF_THEN_ELSE:
      goto L6555;
    case LABEL_REF:
      goto L6902;
    case UNSPEC:
      goto L16201;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L9205;

 L16199: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L6906;
    }
  goto L6554;

 L6906: ATTRIBUTE_UNUSED_LABEL
  if (
#line 13925 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT))
    {
      return 547;  /* *indirect_jump */
    }
  x1 = XEXP (x0, 1);
  goto L6554;

 L16200: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L6910;
    }
  goto L6554;

 L6910: ATTRIBUTE_UNUSED_LABEL
  if (
#line 13932 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT))
    {
      return 548;  /* *indirect_jump_rtx64 */
    }
  x1 = XEXP (x0, 1);
  goto L6554;

 L6555: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (ix86_comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L6556;
    }
 L6587: ATTRIBUTE_UNUSED_LABEL
  if (comparison_operator (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L6865;
    }
  x1 = XEXP (x0, 0);
  goto L9205;

 L6556: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 17)
    goto L6557;
  goto L6587;

 L6557: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L6558;
  goto L6587;

 L6558: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L6559;
    case PC:
      goto L6568;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L6587;

 L6559: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L6560;

 L6560: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    {
      return 531;  /* *jcc_1 */
    }
  x2 = XEXP (x1, 0);
  goto L6587;

 L6568: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L6569;
  x2 = XEXP (x1, 0);
  goto L6587;

 L6569: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  return 532;  /* *jcc_2 */

 L6865: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (float_operator (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L6866;
    }
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L6589;
    }
  x1 = XEXP (x0, 0);
  goto L9205;

 L6866: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  switch (GET_MODE (x4))
    {
    case HImode:
      goto L16202;
    case SImode:
      goto L16203;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L9205;

 L16202: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L6867;
    }
  x1 = XEXP (x0, 0);
  goto L9205;

 L6867: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L6868;
    }
  x1 = XEXP (x0, 0);
  goto L9205;

 L6868: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L6869;
  x1 = XEXP (x0, 0);
  goto L9205;

 L6869: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[4] = x3;
  goto L6870;

 L6870: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 13814 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_HIMODE_FIOP
   && FLOAT_MODE_P (GET_MODE (operands[3]))
   && GET_MODE (operands[1]) == GET_MODE (operands[3])
   && !ix86_use_fcomi_compare (swap_condition (GET_CODE (operands[0])))
   && ix86_fp_compare_mode (swap_condition (GET_CODE (operands[0]))) == CCFPmode
   && ix86_fp_jump_nontrivial_p (swap_condition (GET_CODE (operands[0]))))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 544;  /* *fp_jcc_8hi_387 */
    }
  x1 = XEXP (x0, 0);
  goto L9205;

 L16203: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L6895;
    }
  x1 = XEXP (x0, 0);
  goto L9205;

 L6895: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L6896;
    }
  x1 = XEXP (x0, 0);
  goto L9205;

 L6896: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L6897;
  x1 = XEXP (x0, 0);
  goto L9205;

 L6897: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[4] = x3;
  goto L6898;

 L6898: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 13814 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_SIMODE_FIOP
   && FLOAT_MODE_P (GET_MODE (operands[3]))
   && GET_MODE (operands[1]) == GET_MODE (operands[3])
   && !ix86_use_fcomi_compare (swap_condition (GET_CODE (operands[0])))
   && ix86_fp_compare_mode (swap_condition (GET_CODE (operands[0]))) == CCFPmode
   && ix86_fp_jump_nontrivial_p (swap_condition (GET_CODE (operands[0]))))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 545;  /* *fp_jcc_8si_387 */
    }
  x1 = XEXP (x0, 0);
  goto L9205;

 L6589: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L6590;
    }
 L6635: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L6636;
    }
 L6733: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L6734;
    }
 L6786: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L6787;
    }
  if (const0_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L6840;
    }
  x1 = XEXP (x0, 0);
  goto L9205;

 L6590: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L6591;
    case PC:
      goto L6660;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L6635;

 L6591: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  goto L6592;

 L6592: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    goto L16204;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L6635;

 L16204: ATTRIBUTE_UNUSED_LABEL
  if (
#line 13628 "../.././gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387
   && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 533;  /* *fp_jcc_1_mixed */
    }
 L16205: ATTRIBUTE_UNUSED_LABEL
  if (
#line 13643 "../.././gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 534;  /* *fp_jcc_1_sse */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L6635;

 L6660: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L6661;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L6635;

 L6661: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  goto L6662;

 L6662: ATTRIBUTE_UNUSED_LABEL
  if (
#line 13673 "../.././gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387
   && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 536;  /* *fp_jcc_2_mixed */
    }
 L6686: ATTRIBUTE_UNUSED_LABEL
  if (
#line 13688 "../.././gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 537;  /* *fp_jcc_2_sse */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L6635;

 L6636: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L6637;
    case PC:
      goto L6708;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L6733;

 L6637: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  goto L6638;

 L6638: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 13658 "../.././gcc/config/i386/i386.md"
(TARGET_CMOVE && TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 535;  /* *fp_jcc_1_387 */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L6733;

 L6708: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L6709;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L6733;

 L6709: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  goto L6710;

 L6710: ATTRIBUTE_UNUSED_LABEL
  if (
#line 13703 "../.././gcc/config/i386/i386.md"
(TARGET_CMOVE && TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 538;  /* *fp_jcc_2_387 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L6733;

 L6734: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L6735;
    case PC:
      goto L6761;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L6786;

 L6735: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  goto L6736;

 L6736: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 13719 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && (GET_MODE (operands[1]) == SFmode || GET_MODE (operands[1]) == DFmode)
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && !ix86_use_fcomi_compare (GET_CODE (operands[0]))
   && SELECT_CC_MODE (GET_CODE (operands[0]),
		      operands[1], operands[2]) == CCFPmode
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 539;  /* *fp_jcc_3_387 */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L6786;

 L6761: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L6762;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L6786;

 L6762: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  goto L6763;

 L6763: ATTRIBUTE_UNUSED_LABEL
  if (
#line 13738 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && (GET_MODE (operands[1]) == SFmode || GET_MODE (operands[1]) == DFmode)
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && !ix86_use_fcomi_compare (GET_CODE (operands[0]))
   && SELECT_CC_MODE (GET_CODE (operands[0]),
		      operands[1], operands[2]) == CCFPmode
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 540;  /* *fp_jcc_4_387 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L6786;

 L6787: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L6788;
    case PC:
      goto L6814;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L9205;

 L6788: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  goto L6789;

 L6789: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 13757 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 541;  /* *fp_jcc_5_387 */
    }
  x1 = XEXP (x0, 0);
  goto L9205;

 L6814: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L6815;
  x1 = XEXP (x0, 0);
  goto L9205;

 L6815: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  goto L6816;

 L6816: ATTRIBUTE_UNUSED_LABEL
  if (
#line 13773 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 542;  /* *fp_jcc_6_387 */
    }
  x1 = XEXP (x0, 0);
  goto L9205;

 L6840: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L6841;
  x1 = XEXP (x0, 0);
  goto L9205;

 L6841: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  goto L6842;

 L6842: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && 
#line 13789 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && !ix86_use_fcomi_compare (GET_CODE (operands[0]))
   && SELECT_CC_MODE (GET_CODE (operands[0]),
		      operands[1], operands[2]) == CCFPmode
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 543;  /* *fp_jcc_7_387 */
    }
  x1 = XEXP (x0, 0);
  goto L9205;

 L6902: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  return 546;  /* jump */

 L16201: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 27)
    goto L7030;
  x1 = XEXP (x0, 0);
  goto L9205;

 L7030: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L16206;
    case DImode:
      goto L16207;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L9205;

 L16206: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L7031;
    }
  x1 = XEXP (x0, 0);
  goto L9205;

 L7031: ATTRIBUTE_UNUSED_LABEL
  if (
#line 14404 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT))
    {
      return 569;  /* eh_return_si */
    }
  x1 = XEXP (x0, 0);
  goto L9205;

 L16207: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L7036;
    }
  x1 = XEXP (x0, 0);
  goto L9205;

 L7036: ATTRIBUTE_UNUSED_LABEL
  if (
#line 14414 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT))
    {
      return 570;  /* eh_return_di */
    }
  x1 = XEXP (x0, 0);
  goto L9205;

 L1443: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == PLUS)
    goto L1444;
  x1 = XEXP (x0, 0);
  goto L9205;

 L1444: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L1479;
    case MULT:
      goto L1462;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L9205;

 L1479: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == MULT)
    goto L1480;
  if (index_register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L1446;
    }
  x1 = XEXP (x0, 0);
  goto L9205;

 L1480: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (index_register_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L1481;
    }
  x1 = XEXP (x0, 0);
  goto L9205;

 L1481: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (const248_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L1482;
    }
  x1 = XEXP (x0, 0);
  goto L9205;

 L1482: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L1483;
    }
  x1 = XEXP (x0, 0);
  goto L9205;

 L1483: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, VOIDmode))
    {
      operands[4] = x2;
      goto L1484;
    }
  x1 = XEXP (x0, 0);
  goto L9205;

 L1484: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5069 "../.././gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[3])))
    {
      return 201;  /* *lea_general_3 */
    }
  x1 = XEXP (x0, 0);
  goto L9205;

 L1446: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L1447;
    }
  x1 = XEXP (x0, 0);
  goto L9205;

 L1447: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L1448;
    }
  x1 = XEXP (x0, 0);
  goto L9205;

 L1448: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4967 "../.././gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[2])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode)))
    {
      return 197;  /* *lea_general_1 */
    }
  x1 = XEXP (x0, 0);
  goto L9205;

 L1462: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (index_register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L1463;
    }
  x1 = XEXP (x0, 0);
  goto L9205;

 L1463: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const248_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L1464;
    }
  x1 = XEXP (x0, 0);
  goto L9205;

 L1464: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L1465;
    }
  x1 = XEXP (x0, 0);
  goto L9205;

 L1465: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5019 "../.././gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode)))
    {
      return 199;  /* *lea_general_2 */
    }
  x1 = XEXP (x0, 0);
  goto L9205;

 L9206: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == CALL)
    goto L9207;
  x1 = XEXP (x0, 0);
  goto L9378;

 L9207: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == MEM)
    goto L9208;
  x1 = XEXP (x0, 0);
  goto L9378;

 L9208: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L16208;
    case DImode:
      goto L16209;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L9378;

 L16208: ATTRIBUTE_UNUSED_LABEL
  if (constant_call_address_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L9209;
    }
 L16210: ATTRIBUTE_UNUSED_LABEL
  if (call_insn_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L9223;
    }
 L16211: ATTRIBUTE_UNUSED_LABEL
  if (sibcall_insn_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L9230;
    }
  x1 = XEXP (x0, 0);
  goto L9378;

 L9209: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[2] = x2;
  goto L9210;

 L9210: ATTRIBUTE_UNUSED_LABEL
  if (
#line 20582 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT))
    {
      return 758;  /* *call_value_0 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L16210;

 L9223: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[2] = x2;
  goto L9224;

 L9224: ATTRIBUTE_UNUSED_LABEL
  if (
#line 20608 "../.././gcc/config/i386/i386.md"
(!SIBLING_CALL_P (insn) && !TARGET_64BIT))
    {
      return 760;  /* *call_value_1 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L16211;

 L9230: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[2] = x2;
  goto L9231;

 L9231: ATTRIBUTE_UNUSED_LABEL
  if (
#line 20620 "../.././gcc/config/i386/i386.md"
(SIBLING_CALL_P (insn) && !TARGET_64BIT))
    {
      return 761;  /* *sibcall_value_1 */
    }
  x1 = XEXP (x0, 0);
  goto L9378;

 L16209: ATTRIBUTE_UNUSED_LABEL
  if (constant_call_address_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L9216;
    }
 L16212: ATTRIBUTE_UNUSED_LABEL
  if (call_insn_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L9237;
    }
 L16214: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == REG
      && XINT (x3, 0) == 40)
    goto L9251;
  if (constant_call_address_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L9244;
    }
  x1 = XEXP (x0, 0);
  goto L9378;

 L9216: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L9217;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L16212;

 L9217: ATTRIBUTE_UNUSED_LABEL
  if (
#line 20595 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT))
    {
      return 759;  /* *call_value_0_rex64 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L16212;

 L9237: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[2] = x2;
  goto L9238;

 L9238: ATTRIBUTE_UNUSED_LABEL
  if (
#line 20632 "../.././gcc/config/i386/i386.md"
(!SIBLING_CALL_P (insn) && TARGET_64BIT))
    {
      return 762;  /* *call_value_1_rex64 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L16214;

 L9251: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L9252;

 L9252: ATTRIBUTE_UNUSED_LABEL
  if (
#line 20652 "../.././gcc/config/i386/i386.md"
(SIBLING_CALL_P (insn) && TARGET_64BIT))
    {
      return 764;  /* *sibcall_value_1_rex64_v */
    }
  x1 = XEXP (x0, 0);
  goto L9378;

 L9244: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[2] = x2;
  goto L9245;

 L9245: ATTRIBUTE_UNUSED_LABEL
  if (
#line 20644 "../.././gcc/config/i386/i386.md"
(SIBLING_CALL_P (insn) && TARGET_64BIT))
    {
      return 763;  /* *sibcall_value_1_rex64 */
    }
  x1 = XEXP (x0, 0);
  goto L9378;

 L15598: ATTRIBUTE_UNUSED_LABEL
  if (flags_reg_operand (x1, CCZmode))
    {
      operands[0] = x1;
      goto L9379;
    }
  goto L11266;

 L9379: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCZmode)
    goto L16215;
  x1 = XEXP (x0, 0);
  goto L11266;

 L16215: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L16217;
  x1 = XEXP (x0, 0);
  goto L11266;

 L16217: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 2)
    goto L16219;
  x1 = XEXP (x0, 0);
  goto L11266;

 L16219: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 101LL:
      goto L9380;
    case 103LL:
      goto L9409;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L9380: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L16221;
    case DImode:
      goto L16222;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L16221: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L9381;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L9381: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (memory_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L9382;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L9382: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 775;  /* stack_protect_test_si */
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L16222: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L9396;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L9396: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (memory_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L9397;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L9397: ATTRIBUTE_UNUSED_LABEL
  if (
#line 20925 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 776;  /* stack_protect_test_di */
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L9409: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L16223;
    case DImode:
      goto L16224;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L16223: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L9410;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L9410: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (const_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L9411;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L9411: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 777;  /* stack_tls_protect_test_si */
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L16224: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L9425;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L9425: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (const_int_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L9426;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L9426: ATTRIBUTE_UNUSED_LABEL
  if (
#line 20945 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 778;  /* stack_tls_protect_test_di */
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L15629: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == MEM)
    goto L11244;
 L15599: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V16QImode))
    {
      operands[0] = x1;
      goto L9463;
    }
 L15609: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V16QImode))
    {
      operands[0] = x1;
      goto L9488;
    }
  goto L11266;

 L11244: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L16225;
    case DImode:
      goto L16226;
    default:
      break;
    }
  goto L15599;

 L16225: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L11245;
    }
  goto L15599;

 L11245: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V16QImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 3
      && XINT (x1, 1) == 31)
    goto L11246;
  x1 = XEXP (x0, 0);
  goto L15599;

 L11246: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L11247;
    }
  x1 = XEXP (x0, 0);
  goto L15599;

 L11247: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V16QImode))
    {
      operands[2] = x2;
      goto L11248;
    }
  x1 = XEXP (x0, 0);
  goto L15599;

 L11248: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == V16QImode
      && GET_CODE (x2) == MEM)
    goto L11249;
  x1 = XEXP (x0, 0);
  goto L15599;

 L11249: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0])
      && 
#line 3827 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_64BIT))
    {
      return 1013;  /* *sse2_maskmovdqu */
    }
  x1 = XEXP (x0, 0);
  goto L15599;

 L16226: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L11253;
    }
  goto L15599;

 L11253: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V16QImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 3
      && XINT (x1, 1) == 31)
    goto L11254;
  x1 = XEXP (x0, 0);
  goto L15599;

 L11254: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L11255;
    }
  x1 = XEXP (x0, 0);
  goto L15599;

 L11255: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V16QImode))
    {
      operands[2] = x2;
      goto L11256;
    }
  x1 = XEXP (x0, 0);
  goto L15599;

 L11256: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == V16QImode
      && GET_CODE (x2) == MEM)
    goto L11257;
  x1 = XEXP (x0, 0);
  goto L15599;

 L11257: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0])
      && 
#line 3839 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_64BIT))
    {
      return 1014;  /* *sse2_maskmovdqu_rex64 */
    }
  x1 = XEXP (x0, 0);
  goto L15599;

 L9463: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V16QImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 34)
    goto L9464;
  if (nonimmediate_or_sse_const_operand (x1, V16QImode))
    {
      operands[1] = x1;
      goto L9430;
    }
  x1 = XEXP (x0, 0);
  goto L15609;

 L9464: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L9465;
    }
  x1 = XEXP (x0, 0);
  goto L15609;

 L9465: ATTRIBUTE_UNUSED_LABEL
  if (
#line 220 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
    {
      return 787;  /* sse2_movdqu */
    }
  x1 = XEXP (x0, 0);
  goto L15609;

 L9430: ATTRIBUTE_UNUSED_LABEL
  if (
#line 63 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
    {
      return 779;  /* *movv16qi_internal */
    }
  x1 = XEXP (x0, 0);
  goto L15609;

 L9488: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V16QImode)
    goto L16227;
  x1 = XEXP (x0, 0);
  goto L11266;

 L16227: ATTRIBUTE_UNUSED_LABEL
  tem = recog_11 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L11266;

 L15600: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V8HImode))
    {
      operands[0] = x1;
      goto L9433;
    }
 L15624: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V8HImode))
    {
      operands[0] = x1;
      goto L10529;
    }
  goto L11266;

 L9433: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (nonimmediate_or_sse_const_operand (x1, V8HImode))
    {
      operands[1] = x1;
      goto L9434;
    }
  x1 = XEXP (x0, 0);
  goto L15624;

 L9434: ATTRIBUTE_UNUSED_LABEL
  if (
#line 63 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
    {
      return 780;  /* *movv8hi_internal */
    }
  x1 = XEXP (x0, 0);
  goto L15624;

 L10529: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V8HImode)
    goto L16251;
  x1 = XEXP (x0, 0);
  goto L11266;

 L16251: ATTRIBUTE_UNUSED_LABEL
  tem = recog_12 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L11266;

 L15601: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V4SImode))
    {
      operands[0] = x1;
      goto L9437;
    }
 L15618: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V4SImode))
    {
      operands[0] = x1;
      goto L9900;
    }
  goto L11266;

 L9437: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (nonimmediate_or_sse_const_operand (x1, V4SImode))
    {
      operands[1] = x1;
      goto L9438;
    }
  x1 = XEXP (x0, 0);
  goto L15618;

 L9438: ATTRIBUTE_UNUSED_LABEL
  if (
#line 63 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
    {
      return 781;  /* *movv4si_internal */
    }
  x1 = XEXP (x0, 0);
  goto L15618;

 L9900: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V4SImode)
    goto L16284;
  x1 = XEXP (x0, 0);
  goto L11266;

 L16284: ATTRIBUTE_UNUSED_LABEL
  tem = recog_13 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L11266;

 L15602: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V2DImode))
    {
      operands[0] = x1;
      goto L9441;
    }
 L15607: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, V2DImode))
    {
      operands[0] = x1;
      goto L9478;
    }
 L15625: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2DImode))
    {
      operands[0] = x1;
      goto L10541;
    }
  goto L11266;

 L9441: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (nonimmediate_or_sse_const_operand (x1, V2DImode))
    {
      operands[1] = x1;
      goto L9442;
    }
  x1 = XEXP (x0, 0);
  goto L15607;

 L9442: ATTRIBUTE_UNUSED_LABEL
  if (
#line 63 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
    {
      return 782;  /* *movv2di_internal */
    }
  x1 = XEXP (x0, 0);
  goto L15607;

 L9478: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2DImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 33)
    goto L9479;
  x1 = XEXP (x0, 0);
  goto L15625;

 L9479: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2DImode))
    {
      operands[1] = x2;
      goto L9480;
    }
  x1 = XEXP (x0, 0);
  goto L15625;

 L9480: ATTRIBUTE_UNUSED_LABEL
  if (
#line 247 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 790;  /* sse2_movntv2di */
    }
  x1 = XEXP (x0, 0);
  goto L15625;

 L10541: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2DImode)
    goto L16313;
  x1 = XEXP (x0, 0);
  goto L11266;

 L16313: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L10542;
    case MINUS:
      goto L10590;
    case MULT:
      goto L10646;
    case LSHIFTRT:
      goto L10722;
    case ASHIFT:
      goto L10740;
    case AND:
      goto L10836;
    case IOR:
      goto L10888;
    case XOR:
      goto L10912;
    case VEC_SELECT:
      goto L11040;
    case VEC_DUPLICATE:
      goto L11147;
    case VEC_CONCAT:
      goto L11170;
    case UNSPEC:
      goto L16325;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L11266;

 L10542: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2DImode))
    {
      operands[1] = x2;
      goto L10543;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L10543: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DImode))
    {
      operands[2] = x2;
      goto L10544;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L10544: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2389 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V2DImode, operands)))
    {
      return 926;  /* *addv2di3 */
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L10590: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2DImode))
    {
      operands[1] = x2;
      goto L10591;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L10591: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DImode))
    {
      operands[2] = x2;
      goto L10592;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L10592: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2426 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 934;  /* *subv2di3 */
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L10646: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L10647;
  x1 = XEXP (x0, 0);
  goto L11266;

 L10647: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V2SImode
      && GET_CODE (x3) == VEC_SELECT)
    goto L10648;
  x1 = XEXP (x0, 0);
  goto L11266;

 L10648: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, V4SImode))
    {
      operands[1] = x4;
      goto L10649;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L10649: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 2)
    goto L10650;
  x1 = XEXP (x0, 0);
  goto L11266;

 L10650: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L10651;
  x1 = XEXP (x0, 0);
  goto L11266;

 L10651: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (2)])
    goto L10652;
  x1 = XEXP (x0, 0);
  goto L11266;

 L10652: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L10653;
  x1 = XEXP (x0, 0);
  goto L11266;

 L10653: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V2SImode
      && GET_CODE (x3) == VEC_SELECT)
    goto L10654;
  x1 = XEXP (x0, 0);
  goto L11266;

 L10654: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, V4SImode))
    {
      operands[2] = x4;
      goto L10655;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L10655: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 2)
    goto L10656;
  x1 = XEXP (x0, 0);
  goto L11266;

 L10656: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L10657;
  x1 = XEXP (x0, 0);
  goto L11266;

 L10657: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (2)]
      && 
#line 2552 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V8HImode, operands)))
    {
      return 942;  /* sse2_umulv2siv2di3 */
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L10722: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2DImode))
    {
      operands[1] = x2;
      goto L10723;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L10723: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, TImode))
    {
      operands[2] = x2;
      goto L10724;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L10724: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2740 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 948;  /* lshrv2di3 */
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L10740: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2DImode))
    {
      operands[1] = x2;
      goto L10741;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L10741: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, TImode))
    {
      operands[2] = x2;
      goto L10742;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L10742: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2750 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 951;  /* ashlv2di3 */
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L10836: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2DImode)
    goto L16327;
  x1 = XEXP (x0, 0);
  goto L11266;

 L16327: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == NOT)
    goto L10864;
  if (nonimmediate_operand (x2, V2DImode))
    {
      operands[1] = x2;
      goto L10837;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L10864: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2DImode))
    {
      operands[1] = x3;
      goto L10865;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L10865: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DImode))
    {
      operands[2] = x2;
      goto L10866;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L10866: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3061 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 971;  /* sse2_nandv2di3 */
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L10837: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DImode))
    {
      operands[2] = x2;
      goto L10838;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L10838: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3051 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V2DImode, operands)))
    {
      return 967;  /* *andv2di3 */
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L10888: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2DImode))
    {
      operands[1] = x2;
      goto L10889;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L10889: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DImode))
    {
      operands[2] = x2;
      goto L10890;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L10890: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3078 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V2DImode, operands)))
    {
      return 975;  /* *iorv2di3 */
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L10912: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2DImode))
    {
      operands[1] = x2;
      goto L10913;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L10913: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DImode))
    {
      operands[2] = x2;
      goto L10914;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L10914: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3095 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V2DImode, operands)))
    {
      return 979;  /* *xorv2di3 */
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L11040: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4DImode
      && GET_CODE (x2) == VEC_CONCAT)
    goto L11041;
  x1 = XEXP (x0, 0);
  goto L11266;

 L11041: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2DImode))
    {
      operands[1] = x3;
      goto L11042;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L11042: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V2DImode))
    {
      operands[2] = x3;
      goto L11043;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L11043: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 2)
    goto L11044;
  x1 = XEXP (x0, 0);
  goto L11266;

 L11044: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT)
    goto L16328;
  x1 = XEXP (x0, 0);
  goto L11266;

 L16328: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 1LL:
        goto L11045;
      case 0LL:
        goto L11054;
      default:
        break;
      }
  x1 = XEXP (x0, 0);
  goto L11266;

 L11045: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (3)]
      && 
#line 3244 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 989;  /* sse2_punpckhqdq */
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L11054: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (2)]
      && 
#line 3257 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 990;  /* sse2_punpcklqdq */
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L11147: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L11148;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L11148: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3532 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 1002;  /* *vec_dupv2di */
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L11170: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L11171;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L11171: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (vector_move_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L11172;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L11172: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3588 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 1006;  /* *vec_concatv2di */
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L16325: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 2
      && XINT (x1, 1) == 46)
    goto L11224;
  x1 = XEXP (x0, 0);
  goto L11266;

 L11224: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L11225;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L11225: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (nonimmediate_operand (x2, V16QImode))
    {
      operands[2] = x2;
      goto L11226;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L11226: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3780 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 1009;  /* sse2_psadbw */
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L15603: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V4SFmode))
    {
      operands[0] = x1;
      goto L9453;
    }
 L15605: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, V4SFmode))
    {
      operands[0] = x1;
      goto L9468;
    }
 L15610: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V4SFmode))
    {
      operands[0] = x1;
      goto L9493;
    }
  goto L11266;

 L9453: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V4SFmode)
    goto L16330;
 L9445: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_or_sse_const_operand (x1, V4SFmode))
    {
      operands[1] = x1;
      goto L9446;
    }
  x1 = XEXP (x0, 0);
  goto L15605;

 L16330: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case UNSPEC:
      goto L16334;
    case VEC_SELECT:
      goto L9911;
    case VEC_CONCAT:
      goto L9996;
    case VEC_MERGE:
      goto L10045;
    default:
     break;
   }
  goto L9445;

 L16334: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 34)
    goto L9454;
  goto L9445;

 L9454: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L9455;
    }
  goto L9445;

 L9455: ATTRIBUTE_UNUSED_LABEL
  if (
#line 202 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
    {
      return 785;  /* sse_movups */
    }
  x1 = XEXP (x0, 1);
  goto L9445;

 L9911: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V8SFmode
      && GET_CODE (x2) == VEC_CONCAT)
    goto L9912;
  goto L9445;

 L9912: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L9913;
    }
  goto L9445;

 L9913: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[2] = x3;
      goto L9914;
    }
  goto L9445;

 L9914: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 4)
    goto L9915;
  goto L9445;

 L9915: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT)
    goto L16335;
  goto L9445;

 L16335: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 6LL:
        goto L9916;
      case 0LL:
        goto L9927;
      default:
        break;
      }
  goto L9445;

 L9916: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (7)])
    goto L9917;
  goto L9445;

 L9917: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (2)])
    goto L9918;
  goto L9445;

 L9918: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (3)]
      && 
#line 1029 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
    {
      return 844;  /* sse_movhlps */
    }
  goto L9445;

 L9927: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L9928;
  goto L9445;

 L9928: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (4)])
    goto L9929;
  goto L9445;

 L9929: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (5)]
      && 
#line 1047 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (UNKNOWN, V4SFmode, operands)))
    {
      return 845;  /* sse_movlhps */
    }
  goto L9445;

 L9996: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SFmode)
    goto L16337;
  goto L9445;

 L16337: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L9997;
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L10014;
    }
  goto L9445;

 L9997: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L9998;
    }
  goto L9445;

 L9998: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 2)
    goto L9999;
  goto L9445;

 L9999: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L10000;
  goto L9445;

 L10000: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L10001;
  goto L9445;

 L10001: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L10002;
    }
  goto L9445;

 L10002: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1173 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 852;  /* sse_loadhps */
    }
  x1 = XEXP (x0, 1);
  goto L9445;

 L10014: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2SFmode
      && GET_CODE (x2) == VEC_SELECT)
    goto L10015;
  goto L9445;

 L10015: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L10016;
    }
  goto L9445;

 L10016: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 2)
    goto L10017;
  goto L9445;

 L10017: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (2)])
    goto L10018;
  goto L9445;

 L10018: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (3)]
      && 
#line 1201 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 854;  /* sse_loadlps */
    }
  goto L9445;

 L10045: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4SFmode
      && GET_CODE (x2) == VEC_DUPLICATE)
    goto L10046;
  goto L9445;

 L10046: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (general_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L10047;
    }
  goto L9445;

 L10047: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (vector_move_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L10048;
    }
  goto L9445;

 L10048: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 1274 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 859;  /* *vec_setv4sf_0 */
    }
  goto L9445;

 L9446: ATTRIBUTE_UNUSED_LABEL
  if (
#line 102 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 783;  /* *movv4sf_internal */
    }
  x1 = XEXP (x0, 0);
  goto L15605;

 L9468: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V4SFmode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 33)
    goto L9469;
  x1 = XEXP (x0, 0);
  goto L15610;

 L9469: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L9470;
    }
  x1 = XEXP (x0, 0);
  goto L15610;

 L9470: ATTRIBUTE_UNUSED_LABEL
  if (
#line 229 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 788;  /* sse_movntv4sf */
    }
  x1 = XEXP (x0, 0);
  goto L15610;

 L9493: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V4SFmode)
    goto L16339;
  x1 = XEXP (x0, 0);
  goto L11266;

 L16339: ATTRIBUTE_UNUSED_LABEL
  tem = recog_14 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L11266;

 L15604: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V2DFmode))
    {
      operands[0] = x1;
      goto L9458;
    }
 L15606: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, V2DFmode))
    {
      operands[0] = x1;
      goto L9473;
    }
 L15611: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2DFmode))
    {
      operands[0] = x1;
      goto L9637;
    }
  goto L11266;

 L9458: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2DFmode)
    goto L16406;
 L9449: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_or_sse_const_operand (x1, V2DFmode))
    {
      operands[1] = x1;
      goto L9450;
    }
  x1 = XEXP (x0, 0);
  goto L15606;

 L16406: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case UNSPEC:
      goto L16410;
    case VEC_SELECT:
      goto L10419;
    case VEC_CONCAT:
      goto L10468;
    case VEC_MERGE:
      goto L10497;
    default:
     break;
   }
  goto L9449;

 L16410: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 34)
    goto L9459;
  goto L9449;

 L9459: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L9460;
    }
  goto L9449;

 L9460: ATTRIBUTE_UNUSED_LABEL
  if (
#line 211 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
    {
      return 786;  /* sse2_movupd */
    }
  x1 = XEXP (x0, 1);
  goto L9449;

 L10419: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4DFmode
      && GET_CODE (x2) == VEC_CONCAT)
    goto L10420;
  goto L9449;

 L10420: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L10421;
    }
  goto L9449;

 L10421: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[2] = x3;
      goto L10422;
    }
 L10430: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x3, operands[1]))
    goto L10431;
 L10439: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[2] = x3;
      goto L10440;
    }
  goto L9449;

 L10422: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 2)
    goto L10423;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L10430;

 L10423: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L10424;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L10430;

 L10424: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (3)]
      && 
#line 2042 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
    {
      return 908;  /* sse2_unpckhpd */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L10430;

 L10431: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 2)
    goto L10432;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L10439;

 L10432: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L10433;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L10439;

 L10433: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (2)]
      && 
#line 2058 "../.././gcc/config/i386/sse.md"
(TARGET_SSE3 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
    {
      return 909;  /* *sse3_movddup */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L10439;

 L10440: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 2)
    goto L10441;
  goto L9449;

 L10441: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L10442;
  goto L9449;

 L10442: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (2)]
      && 
#line 2090 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
    {
      return 910;  /* sse2_unpcklpd */
    }
  goto L9449;

 L10468: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L16411;
  goto L9449;

 L16411: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L10469;
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L10478;
    }
  goto L9449;

 L10469: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L10470;
    }
  goto L9449;

 L10470: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L10471;
  goto L9449;

 L10471: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L10472;
  goto L9449;

 L10472: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L10473;
    }
  goto L9449;

 L10473: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2193 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
    {
      return 914;  /* sse2_loadhpd */
    }
  x1 = XEXP (x0, 1);
  goto L9449;

 L10478: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode
      && GET_CODE (x2) == VEC_SELECT)
    goto L10479;
  goto L9449;

 L10479: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (vector_move_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L10480;
    }
  goto L9449;

 L10480: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L10481;
  goto L9449;

 L10481: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 2220 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
    {
      return 915;  /* sse2_loadlpd */
    }
  goto L9449;

 L10497: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[2] = x2;
      goto L10498;
    }
  goto L9449;

 L10498: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L10499;
    }
  goto L9449;

 L10499: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 2278 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 918;  /* sse2_movsd */
    }
  goto L9449;

 L9450: ATTRIBUTE_UNUSED_LABEL
  if (
#line 144 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
    {
      return 784;  /* *movv2df_internal */
    }
  x1 = XEXP (x0, 0);
  goto L15606;

 L9473: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2DFmode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 33)
    goto L9474;
  x1 = XEXP (x0, 0);
  goto L15611;

 L9474: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L9475;
    }
  x1 = XEXP (x0, 0);
  goto L15611;

 L9475: ATTRIBUTE_UNUSED_LABEL
  if (
#line 238 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 789;  /* sse2_movntv2df */
    }
  x1 = XEXP (x0, 0);
  goto L15611;

 L9637: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2DFmode)
    goto L16413;
  x1 = XEXP (x0, 0);
  goto L11266;

 L16413: ATTRIBUTE_UNUSED_LABEL
  tem = recog_15 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L11266;

 L15608: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L9483;
    }
 L15616: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L9867;
    }
 L15627: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L11117;
    }
  goto L11266;

 L9483: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L16461;
  x1 = XEXP (x0, 0);
  goto L15616;

 L16461: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case UNSPEC:
      goto L16463;
    case UNSPEC_VOLATILE:
      goto L16464;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L15616;

 L16463: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 33)
    goto L9484;
  x1 = XEXP (x0, 0);
  goto L15616;

 L9484: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L9485;
    }
  x1 = XEXP (x0, 0);
  goto L15616;

 L9485: ATTRIBUTE_UNUSED_LABEL
  if (
#line 256 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 791;  /* sse2_movntsi */
    }
  x1 = XEXP (x0, 0);
  goto L15616;

 L16464: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 4)
    goto L11264;
  x1 = XEXP (x0, 0);
  goto L15616;

 L11264: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 3856 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 1016;  /* sse_stmxcsr */
    }
  x1 = XEXP (x0, 0);
  goto L15616;

 L9867: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L16465;
  x1 = XEXP (x0, 0);
  goto L15627;

 L16465: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case UNSPEC:
      goto L16469;
    case FIX:
      goto L9882;
    case ZERO_EXTEND:
      goto L11066;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L15627;

 L16469: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1)
    goto L16471;
  x1 = XEXP (x0, 0);
  goto L15627;

 L16471: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 30LL:
      goto L9868;
    case 32LL:
      goto L11230;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L15627;

 L9868: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L16473;
    case DFmode:
      goto L16474;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L15627;

 L16473: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L9869;
  x1 = XEXP (x0, 0);
  goto L15627;

 L9869: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L9870;
    }
  x1 = XEXP (x0, 0);
  goto L15627;

 L9870: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L9871;
  x1 = XEXP (x0, 0);
  goto L15627;

 L9871: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 945 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 837;  /* sse_cvtss2si */
    }
  x1 = XEXP (x0, 0);
  goto L15627;

 L16474: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L10336;
  x1 = XEXP (x0, 0);
  goto L15627;

 L10336: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L10337;
    }
  x1 = XEXP (x0, 0);
  goto L15627;

 L10337: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L10338;
  x1 = XEXP (x0, 0);
  goto L15627;

 L10338: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 1877 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 897;  /* sse2_cvtsd2si */
    }
  x1 = XEXP (x0, 0);
  goto L15627;

 L11230: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case V4SFmode:
      goto L16475;
    case V2DFmode:
      goto L16476;
    case V16QImode:
      goto L16477;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L15627;

 L16475: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L11231;
    }
  x1 = XEXP (x0, 0);
  goto L15627;

 L11231: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3789 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 1010;  /* sse_movmskps */
    }
  x1 = XEXP (x0, 0);
  goto L15627;

 L16476: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L11236;
    }
  x1 = XEXP (x0, 0);
  goto L15627;

 L11236: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3798 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 1011;  /* sse2_movmskpd */
    }
  x1 = XEXP (x0, 0);
  goto L15627;

 L16477: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V16QImode))
    {
      operands[1] = x2;
      goto L11241;
    }
  x1 = XEXP (x0, 0);
  goto L15627;

 L11241: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3807 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 1012;  /* sse2_pmovmskb */
    }
  x1 = XEXP (x0, 0);
  goto L15627;

 L9882: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L16478;
    case DFmode:
      goto L16479;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L15627;

 L16478: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L9883;
  x1 = XEXP (x0, 0);
  goto L15627;

 L9883: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L9884;
    }
  x1 = XEXP (x0, 0);
  goto L15627;

 L9884: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L9885;
  x1 = XEXP (x0, 0);
  goto L15627;

 L9885: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 970 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 839;  /* sse_cvttss2si */
    }
  x1 = XEXP (x0, 0);
  goto L15627;

 L16479: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L10350;
  x1 = XEXP (x0, 0);
  goto L15627;

 L10350: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L10351;
    }
  x1 = XEXP (x0, 0);
  goto L15627;

 L10351: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L10352;
  x1 = XEXP (x0, 0);
  goto L15627;

 L10352: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 1902 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 899;  /* sse2_cvttsd2si */
    }
  x1 = XEXP (x0, 0);
  goto L15627;

 L11066: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == VEC_SELECT)
    goto L11067;
  x1 = XEXP (x0, 0);
  goto L15627;

 L11067: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8HImode))
    {
      operands[1] = x3;
      goto L11068;
    }
  x1 = XEXP (x0, 0);
  goto L15627;

 L11068: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L11069;
  x1 = XEXP (x0, 0);
  goto L15627;

 L11069: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (const_0_to_7_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L11070;
    }
  x1 = XEXP (x0, 0);
  goto L15627;

 L11070: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3296 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 992;  /* sse2_pextrw */
    }
  x1 = XEXP (x0, 0);
  goto L15627;

 L11117: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == VEC_SELECT)
    goto L11118;
  x1 = XEXP (x0, 0);
  goto L11266;

 L11118: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4SImode))
    {
      operands[1] = x2;
      goto L11119;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L11119: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 1)
    goto L11120;
  x1 = XEXP (x0, 0);
  goto L11266;

 L11120: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 3452 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 997;  /* sse2_stored */
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L15612: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 17)
    goto L9755;
  goto L11266;

 L9755: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCFPmode
      && GET_CODE (x1) == COMPARE)
    goto L9756;
  x1 = XEXP (x0, 0);
  goto L11266;

 L9756: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L16480;
    case DFmode:
      goto L16481;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L16480: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L9757;
  x1 = XEXP (x0, 0);
  goto L11266;

 L9757: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SFmode))
    {
      operands[0] = x3;
      goto L9758;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L9758: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L9759;
  x1 = XEXP (x0, 0);
  goto L11266;

 L9759: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L9760;
  x1 = XEXP (x0, 0);
  goto L11266;

 L9760: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode
      && GET_CODE (x2) == VEC_SELECT)
    goto L9761;
  x1 = XEXP (x0, 0);
  goto L11266;

 L9761: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L9762;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L9762: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L9763;
  x1 = XEXP (x0, 0);
  goto L11266;

 L9763: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 732 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 822;  /* sse_comi */
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L16481: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L10233;
  x1 = XEXP (x0, 0);
  goto L11266;

 L10233: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2DFmode))
    {
      operands[0] = x3;
      goto L10234;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L10234: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L10235;
  x1 = XEXP (x0, 0);
  goto L11266;

 L10235: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L10236;
  x1 = XEXP (x0, 0);
  goto L11266;

 L10236: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode
      && GET_CODE (x2) == VEC_SELECT)
    goto L10237;
  x1 = XEXP (x0, 0);
  goto L11266;

 L10237: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L10238;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L10238: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L10239;
  x1 = XEXP (x0, 0);
  goto L11266;

 L10239: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 1671 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 882;  /* sse2_comi */
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L15613: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 17)
    goto L9766;
  goto L11266;

 L9766: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCFPUmode
      && GET_CODE (x1) == COMPARE)
    goto L9767;
  x1 = XEXP (x0, 0);
  goto L11266;

 L9767: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L16482;
    case DFmode:
      goto L16483;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L16482: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L9768;
  x1 = XEXP (x0, 0);
  goto L11266;

 L9768: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SFmode))
    {
      operands[0] = x3;
      goto L9769;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L9769: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L9770;
  x1 = XEXP (x0, 0);
  goto L11266;

 L9770: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L9771;
  x1 = XEXP (x0, 0);
  goto L11266;

 L9771: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode
      && GET_CODE (x2) == VEC_SELECT)
    goto L9772;
  x1 = XEXP (x0, 0);
  goto L11266;

 L9772: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L9773;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L9773: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L9774;
  x1 = XEXP (x0, 0);
  goto L11266;

 L9774: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 746 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 823;  /* sse_ucomi */
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L16483: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L10244;
  x1 = XEXP (x0, 0);
  goto L11266;

 L10244: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2DFmode))
    {
      operands[0] = x3;
      goto L10245;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L10245: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L10246;
  x1 = XEXP (x0, 0);
  goto L11266;

 L10246: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L10247;
  x1 = XEXP (x0, 0);
  goto L11266;

 L10247: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode
      && GET_CODE (x2) == VEC_SELECT)
    goto L10248;
  x1 = XEXP (x0, 0);
  goto L11266;

 L10248: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L10249;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L10249: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L10250;
  x1 = XEXP (x0, 0);
  goto L11266;

 L10250: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 1685 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 883;  /* sse2_ucomi */
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L15614: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L9802;
    }
 L15621: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L10051;
    }
  goto L11266;

 L9802: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SFmode)
    goto L16484;
  x1 = XEXP (x0, 0);
  goto L15621;

 L16484: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case AND:
      goto L9803;
    case IOR:
      goto L9816;
    case XOR:
      goto L9822;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L15621;

 L9803: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SFmode)
    goto L16488;
  x1 = XEXP (x0, 0);
  goto L15621;

 L16488: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == NOT)
    goto L9810;
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L9804;
    }
  x1 = XEXP (x0, 0);
  goto L15621;

 L9810: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L9811;
    }
  x1 = XEXP (x0, 0);
  goto L15621;

 L9811: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L9812;
    }
  x1 = XEXP (x0, 0);
  goto L15621;

 L9812: ATTRIBUTE_UNUSED_LABEL
  if (
#line 848 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 829;  /* *nandsf3 */
    }
  x1 = XEXP (x0, 0);
  goto L15621;

 L9804: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L9805;
    }
  x1 = XEXP (x0, 0);
  goto L15621;

 L9805: ATTRIBUTE_UNUSED_LABEL
  if (
#line 839 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 828;  /* *andsf3 */
    }
  x1 = XEXP (x0, 0);
  goto L15621;

 L9816: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L9817;
    }
  x1 = XEXP (x0, 0);
  goto L15621;

 L9817: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L9818;
    }
  x1 = XEXP (x0, 0);
  goto L15621;

 L9818: ATTRIBUTE_UNUSED_LABEL
  if (
#line 857 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 830;  /* *iorsf3 */
    }
  x1 = XEXP (x0, 0);
  goto L15621;

 L9822: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L9823;
    }
  x1 = XEXP (x0, 0);
  goto L15621;

 L9823: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L9824;
    }
  x1 = XEXP (x0, 0);
  goto L15621;

 L9824: ATTRIBUTE_UNUSED_LABEL
  if (
#line 866 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 831;  /* *xorsf3 */
    }
  x1 = XEXP (x0, 0);
  goto L15621;

 L10051: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SFmode
      && GET_CODE (x1) == VEC_SELECT)
    goto L10052;
  x1 = XEXP (x0, 0);
  goto L11266;

 L10052: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L10053;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L10053: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 1)
    goto L10054;
  x1 = XEXP (x0, 0);
  goto L11266;

 L10054: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 1313 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
    {
      return 860;  /* *vec_extractv4sf_0 */
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L15615: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2SImode))
    {
      operands[0] = x1;
      goto L9835;
    }
  goto L11266;

 L9835: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2SImode)
    goto L16489;
  x1 = XEXP (x0, 0);
  goto L11266;

 L16489: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case VEC_SELECT:
      goto L9836;
    case UNSPEC:
      goto L16493;
    case FIX:
      goto L10314;
    case VEC_CONCAT:
      goto L11152;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L11266;

 L9836: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4SImode)
    goto L16494;
  x1 = XEXP (x0, 0);
  goto L11266;

 L16494: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case UNSPEC:
      goto L16496;
    case FIX:
      goto L9845;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L11266;

 L16496: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 30)
    goto L9837;
  x1 = XEXP (x0, 0);
  goto L11266;

 L9837: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L9838;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L9838: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 2)
    goto L9839;
  x1 = XEXP (x0, 0);
  goto L11266;

 L9839: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L9840;
  x1 = XEXP (x0, 0);
  goto L11266;

 L9840: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 895 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 833;  /* sse_cvtps2pi */
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L9845: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L9846;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L9846: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 2)
    goto L9847;
  x1 = XEXP (x0, 0);
  goto L11266;

 L9847: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L9848;
  x1 = XEXP (x0, 0);
  goto L11266;

 L9848: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 906 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 834;  /* sse_cvttps2pi */
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L16493: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 30)
    goto L10309;
  x1 = XEXP (x0, 0);
  goto L11266;

 L10309: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L10310;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L10310: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1829 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 893;  /* sse2_cvtpd2pi */
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L10314: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L10315;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L10315: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1838 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 894;  /* sse2_cvttpd2pi */
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L11152: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L11153;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L11153: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L11154;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L11154: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3547 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 1003;  /* *sse2_concatv2si */
    }
 L11160: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3561 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 1004;  /* *sse1_concatv2si */
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L15617: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L9874;
    }
 L15628: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L11123;
    }
  goto L11266;

 L9874: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L16497;
  x1 = XEXP (x0, 0);
  goto L15628;

 L16497: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case UNSPEC:
      goto L16499;
    case FIX:
      goto L9889;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L15628;

 L16499: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 30)
    goto L9875;
  x1 = XEXP (x0, 0);
  goto L15628;

 L9875: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L16500;
    case DFmode:
      goto L16501;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L15628;

 L16500: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L9876;
  x1 = XEXP (x0, 0);
  goto L15628;

 L9876: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L9877;
    }
  x1 = XEXP (x0, 0);
  goto L15628;

 L9877: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L9878;
  x1 = XEXP (x0, 0);
  goto L15628;

 L9878: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 958 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && TARGET_64BIT))
    {
      return 838;  /* sse_cvtss2siq */
    }
  x1 = XEXP (x0, 0);
  goto L15628;

 L16501: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L10343;
  x1 = XEXP (x0, 0);
  goto L15628;

 L10343: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L10344;
    }
  x1 = XEXP (x0, 0);
  goto L15628;

 L10344: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L10345;
  x1 = XEXP (x0, 0);
  goto L15628;

 L10345: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 1890 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_64BIT))
    {
      return 898;  /* sse2_cvtsd2siq */
    }
  x1 = XEXP (x0, 0);
  goto L15628;

 L9889: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L16502;
    case DFmode:
      goto L16503;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L15628;

 L16502: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L9890;
  x1 = XEXP (x0, 0);
  goto L15628;

 L9890: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L9891;
    }
  x1 = XEXP (x0, 0);
  goto L15628;

 L9891: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L9892;
  x1 = XEXP (x0, 0);
  goto L15628;

 L9892: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 982 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && TARGET_64BIT))
    {
      return 840;  /* sse_cvttss2siq */
    }
  x1 = XEXP (x0, 0);
  goto L15628;

 L16503: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L10357;
  x1 = XEXP (x0, 0);
  goto L15628;

 L10357: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L10358;
    }
  x1 = XEXP (x0, 0);
  goto L15628;

 L10358: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L10359;
  x1 = XEXP (x0, 0);
  goto L15628;

 L10359: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 1914 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_64BIT))
    {
      return 900;  /* sse2_cvttsd2siq */
    }
  x1 = XEXP (x0, 0);
  goto L15628;

 L11123: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == VEC_SELECT)
    goto L11124;
  x1 = XEXP (x0, 0);
  goto L11266;

 L11124: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2DImode)
    goto L16504;
  x1 = XEXP (x0, 0);
  goto L11266;

 L16504: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2DImode))
    {
      operands[1] = x2;
      goto L11125;
    }
 L16505: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, V2DImode))
    {
      operands[1] = x2;
      goto L11131;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L11125: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 1)
    goto L11126;
  x2 = XEXP (x1, 0);
  goto L16505;

 L11126: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 3475 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 998;  /* *sse2_storeq */
    }
  x2 = XEXP (x1, 0);
  goto L16505;

 L11131: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 1)
    goto L11132;
  x1 = XEXP (x0, 0);
  goto L11266;

 L11132: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT)
    goto L16506;
  x1 = XEXP (x0, 0);
  goto L11266;

 L16506: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x3, 0) == 1LL)
    goto L16508;
  x1 = XEXP (x0, 0);
  goto L11266;

 L16508: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3494 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
    {
      return 999;  /* *vec_extractv2di_1_sse2 */
    }
 L16509: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3508 "../.././gcc/config/i386/sse.md"
(!TARGET_SSE2 && TARGET_SSE
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
    {
      return 1000;  /* *vec_extractv2di_1_sse */
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L15619: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V2SFmode))
    {
      operands[0] = x1;
      goto L9988;
    }
 L15620: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2SFmode))
    {
      operands[0] = x1;
      goto L10032;
    }
  goto L11266;

 L9988: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2SFmode
      && GET_CODE (x1) == VEC_SELECT)
    goto L9989;
  x1 = XEXP (x0, 0);
  goto L15620;

 L9989: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V4SFmode))
    {
      operands[1] = x2;
      goto L9990;
    }
  x1 = XEXP (x0, 0);
  goto L15620;

 L9990: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 2)
    goto L9991;
  x1 = XEXP (x0, 0);
  goto L15620;

 L9991: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT)
    goto L16510;
  x1 = XEXP (x0, 0);
  goto L15620;

 L16510: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 2LL:
        goto L9992;
      case 0LL:
        goto L10009;
      default:
        break;
      }
  x1 = XEXP (x0, 0);
  goto L15620;

 L9992: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (3)]
      && 
#line 1158 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 851;  /* sse_storehps */
    }
  x1 = XEXP (x0, 0);
  goto L15620;

 L10009: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && 
#line 1186 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 853;  /* sse_storelps */
    }
  x1 = XEXP (x0, 0);
  goto L15620;

 L10032: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2SFmode
      && GET_CODE (x1) == VEC_CONCAT)
    goto L10033;
  x1 = XEXP (x0, 0);
  goto L11266;

 L10033: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L10034;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L10034: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L10035;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L10035: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1237 "../.././gcc/config/i386/sse.md"
(TARGET_SSE))
    {
      return 857;  /* *sse_concatv2sf */
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L15622: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L10278;
    }
 L15623: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L10455;
    }
  goto L11266;

 L10278: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DFmode)
    goto L16512;
  x1 = XEXP (x0, 0);
  goto L15623;

 L16512: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case AND:
      goto L10279;
    case IOR:
      goto L10292;
    case XOR:
      goto L10298;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L15623;

 L10279: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L16516;
  x1 = XEXP (x0, 0);
  goto L15623;

 L16516: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == NOT)
    goto L10286;
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L10280;
    }
  x1 = XEXP (x0, 0);
  goto L15623;

 L10286: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L10287;
    }
  x1 = XEXP (x0, 0);
  goto L15623;

 L10287: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L10288;
    }
  x1 = XEXP (x0, 0);
  goto L15623;

 L10288: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1787 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 889;  /* *nanddf3 */
    }
  x1 = XEXP (x0, 0);
  goto L15623;

 L10280: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L10281;
    }
  x1 = XEXP (x0, 0);
  goto L15623;

 L10281: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1778 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 888;  /* *anddf3 */
    }
  x1 = XEXP (x0, 0);
  goto L15623;

 L10292: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L10293;
    }
  x1 = XEXP (x0, 0);
  goto L15623;

 L10293: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L10294;
    }
  x1 = XEXP (x0, 0);
  goto L15623;

 L10294: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1796 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 890;  /* *iordf3 */
    }
  x1 = XEXP (x0, 0);
  goto L15623;

 L10298: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L10299;
    }
  x1 = XEXP (x0, 0);
  goto L15623;

 L10299: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L10300;
    }
  x1 = XEXP (x0, 0);
  goto L15623;

 L10300: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1805 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 891;  /* *xordf3 */
    }
  x1 = XEXP (x0, 0);
  goto L15623;

 L10455: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DFmode
      && GET_CODE (x1) == VEC_SELECT)
    goto L10456;
  x1 = XEXP (x0, 0);
  goto L11266;

 L10456: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2DFmode))
    {
      operands[1] = x2;
      goto L10457;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L10457: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 1)
    goto L10458;
  x1 = XEXP (x0, 0);
  goto L11266;

 L10458: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT)
    goto L16517;
  x1 = XEXP (x0, 0);
  goto L11266;

 L16517: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 1LL:
        goto L16521;
      case 0LL:
        goto L16522;
      default:
        break;
      }
  x1 = XEXP (x0, 0);
  goto L11266;

 L16521: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2137 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
    {
      return 912;  /* sse2_storehpd */
    }
 L16523: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2249 "../.././gcc/config/i386/sse.md"
(!TARGET_SSE2 && TARGET_SSE
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
    {
      return 916;  /* *vec_extractv2df_1_sse */
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L16522: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2161 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
    {
      return 913;  /* sse2_storelpd */
    }
 L16524: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2263 "../.././gcc/config/i386/sse.md"
(!TARGET_SSE2 && TARGET_SSE
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
    {
      return 917;  /* *vec_extractv2df_0_sse */
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L15626: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, TImode))
    {
      operands[0] = x1;
      goto L10745;
    }
  goto L11266;

 L10745: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == TImode)
    goto L16525;
  x1 = XEXP (x0, 0);
  goto L11266;

 L16525: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case ASHIFT:
      goto L10746;
    case LSHIFTRT:
      goto L10752;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L11266;

 L10746: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, TImode))
    {
      operands[1] = x2;
      goto L10747;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L10747: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_0_to_255_mul_8_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L10748;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L10748: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2759 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 952;  /* sse2_ashlti3 */
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L10752: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, TImode))
    {
      operands[1] = x2;
      goto L10753;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L10753: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_0_to_255_mul_8_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L10754;
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L10754: ATTRIBUTE_UNUSED_LABEL
  if (
#line 2783 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 953;  /* sse2_lshrti3 */
    }
  x1 = XEXP (x0, 0);
  goto L11266;

 L11267: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == BLKmode)
    goto L16527;
  x1 = XEXP (x0, 0);
  goto L11295;

 L16527: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L16530;
  x1 = XEXP (x0, 0);
  goto L11295;

 L16530: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1)
    goto L16533;
  x1 = XEXP (x0, 0);
  goto L11295;

 L16533: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 37LL:
      goto L11268;
    case 44LL:
      goto L11275;
    case 45LL:
      goto L11279;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L11295;

 L11268: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (rtx_equal_p (x2, operands[0])
      && 
#line 3873 "../.././gcc/config/i386/sse.md"
(TARGET_SSE || TARGET_3DNOW_A))
    {
      return 1017;  /* *sse_sfence */
    }
  x1 = XEXP (x0, 0);
  goto L11295;

 L11275: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (rtx_equal_p (x2, operands[0])
      && 
#line 3898 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 1019;  /* *sse2_mfence */
    }
  x1 = XEXP (x0, 0);
  goto L11295;

 L11279: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (rtx_equal_p (x2, operands[0])
      && 
#line 3915 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2))
    {
      return 1020;  /* *sse2_lfence */
    }
  x1 = XEXP (x0, 0);
  goto L11295;

 L15630: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L11296;
    }
  goto ret0;

 L11296: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DFmode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 33)
    goto L11297;
  goto ret0;

 L11297: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) == DFmode)
    goto L16536;
  goto ret0;

 L16536: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L11298;
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L11305;
    }
  goto ret0;

 L11298: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2DFmode))
    {
      operands[1] = x3;
      goto L11299;
    }
  goto ret0;

 L11299: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L11300;
  goto ret0;

 L11300: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 3959 "../.././gcc/config/i386/sse.md"
(TARGET_SSE4A))
    {
      return 1024;  /* sse4a_vmmovntv2df */
    }
  goto ret0;

 L11305: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3968 "../.././gcc/config/i386/sse.md"
(TARGET_SSE4A))
    {
      return 1025;  /* sse4a_movntdf */
    }
  goto ret0;

 L15631: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L11308;
    }
 L15640: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L11554;
    }
  goto ret0;

 L11308: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SFmode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 33)
    goto L11309;
  x1 = XEXP (x0, 0);
  goto L15640;

 L11309: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) == SFmode)
    goto L16538;
  x1 = XEXP (x0, 0);
  goto L15640;

 L16538: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L11310;
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L11317;
    }
  x1 = XEXP (x0, 0);
  goto L15640;

 L11310: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4SFmode))
    {
      operands[1] = x3;
      goto L11311;
    }
  x1 = XEXP (x0, 0);
  goto L15640;

 L11311: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L11312;
  x1 = XEXP (x0, 0);
  goto L15640;

 L11312: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 3979 "../.././gcc/config/i386/sse.md"
(TARGET_SSE4A))
    {
      return 1026;  /* sse4a_vmmovntv4sf */
    }
  x1 = XEXP (x0, 0);
  goto L15640;

 L11317: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3988 "../.././gcc/config/i386/sse.md"
(TARGET_SSE4A))
    {
      return 1027;  /* sse4a_movntsf */
    }
  x1 = XEXP (x0, 0);
  goto L15640;

 L11554: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SFmode
      && GET_CODE (x1) == VEC_SELECT)
    goto L11555;
  goto ret0;

 L11555: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L11556;
    }
  goto ret0;

 L11556: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 1)
    goto L11557;
  goto ret0;

 L11557: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT)
    goto L16540;
  goto ret0;

 L16540: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 0LL:
        goto L16542;
      case 1LL:
        goto L16543;
      default:
        break;
      }
  goto ret0;

 L16542: ATTRIBUTE_UNUSED_LABEL
  if (
#line 494 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
    {
      return 1064;  /* *vec_extractv2sf_0 */
    }
  goto ret0;

 L16543: ATTRIBUTE_UNUSED_LABEL
  if (
#line 513 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
    {
      return 1065;  /* *vec_extractv2sf_1 */
    }
  goto ret0;

 L15632: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2DImode))
    {
      operands[0] = x1;
      goto L11320;
    }
  goto ret0;

 L11320: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2DImode)
    goto L16544;
  goto ret0;

 L16544: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L16548;
  goto ret0;

 L16548: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 3:
      goto L16552;
    case 2:
      goto L16553;
    case 4:
      goto L16554;
    default:
      break;
    }
  goto ret0;

 L16552: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 110)
    goto L11321;
  goto ret0;

 L11321: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2DImode))
    {
      operands[1] = x2;
      goto L11322;
    }
  goto ret0;

 L11322: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L11323;
    }
  goto ret0;

 L11323: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L11324;
    }
  goto ret0;

 L11324: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3999 "../.././gcc/config/i386/sse.md"
(TARGET_SSE4A))
    {
      return 1028;  /* sse4a_extrqi */
    }
  goto ret0;

 L16553: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 111LL:
      goto L11328;
    case 113LL:
      goto L11342;
    default:
      break;
    }
  goto ret0;

 L11328: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2DImode))
    {
      operands[1] = x2;
      goto L11329;
    }
  goto ret0;

 L11329: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V16QImode))
    {
      operands[2] = x2;
      goto L11330;
    }
  goto ret0;

 L11330: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4009 "../.././gcc/config/i386/sse.md"
(TARGET_SSE4A))
    {
      return 1029;  /* sse4a_extrq */
    }
  goto ret0;

 L11342: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2DImode))
    {
      operands[1] = x2;
      goto L11343;
    }
  goto ret0;

 L11343: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2DImode))
    {
      operands[2] = x2;
      goto L11344;
    }
  goto ret0;

 L11344: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4031 "../.././gcc/config/i386/sse.md"
(TARGET_SSE4A))
    {
      return 1031;  /* sse4a_insertq */
    }
  goto ret0;

 L16554: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 112)
    goto L11334;
  goto ret0;

 L11334: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2DImode))
    {
      operands[1] = x2;
      goto L11335;
    }
  goto ret0;

 L11335: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2DImode))
    {
      operands[2] = x2;
      goto L11336;
    }
  goto ret0;

 L11336: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L11337;
    }
  goto ret0;

 L11337: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 3);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[4] = x2;
      goto L11338;
    }
  goto ret0;

 L11338: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4021 "../.././gcc/config/i386/sse.md"
(TARGET_SSE4A))
    {
      return 1030;  /* sse4a_insertqi */
    }
  goto ret0;

 L15646: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == MEM)
    goto L12136;
 L15633: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V8QImode))
    {
      operands[0] = x1;
      goto L11347;
    }
 L15641: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V8QImode))
    {
      operands[0] = x1;
      goto L11566;
    }
  goto ret0;

 L12136: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L16556;
    case DImode:
      goto L16557;
    default:
      break;
    }
  goto L15633;

 L16556: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L12137;
    }
  goto L15633;

 L12137: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V8QImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 3
      && XINT (x1, 1) == 31)
    goto L12138;
  x1 = XEXP (x0, 0);
  goto L15633;

 L12138: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L12139;
    }
  x1 = XEXP (x0, 0);
  goto L15633;

 L12139: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L12140;
    }
  x1 = XEXP (x0, 0);
  goto L15633;

 L12140: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == V8QImode
      && GET_CODE (x2) == MEM)
    goto L12141;
  x1 = XEXP (x0, 0);
  goto L15633;

 L12141: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0])
      && 
#line 1371 "../.././gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A) && !TARGET_64BIT))
    {
      return 1140;  /* *mmx_maskmovq */
    }
  x1 = XEXP (x0, 0);
  goto L15633;

 L16557: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L12145;
    }
  goto L15633;

 L12145: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V8QImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 3
      && XINT (x1, 1) == 31)
    goto L12146;
  x1 = XEXP (x0, 0);
  goto L15633;

 L12146: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L12147;
    }
  x1 = XEXP (x0, 0);
  goto L15633;

 L12147: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L12148;
    }
  x1 = XEXP (x0, 0);
  goto L15633;

 L12148: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == V8QImode
      && GET_CODE (x2) == MEM)
    goto L12149;
  x1 = XEXP (x0, 0);
  goto L15633;

 L12149: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0])
      && 
#line 1383 "../.././gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A) && TARGET_64BIT))
    {
      return 1141;  /* *mmx_maskmovq_rex */
    }
  x1 = XEXP (x0, 0);
  goto L15633;

 L11347: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (vector_move_operand (x1, V8QImode))
    {
      operands[1] = x1;
      goto L11348;
    }
  x1 = XEXP (x0, 0);
  goto L15641;

 L11348: ATTRIBUTE_UNUSED_LABEL
  if (
#line 70 "../.././gcc/config/i386/mmx.md"
(TARGET_64BIT && TARGET_MMX
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 1032;  /* *movv8qi_internal_rex64 */
    }
 L11360: ATTRIBUTE_UNUSED_LABEL
  if (
#line 94 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 1035;  /* *movv8qi_internal */
    }
  x1 = XEXP (x0, 0);
  goto L15641;

 L11566: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V8QImode)
    goto L16558;
  goto ret0;

 L16558: ATTRIBUTE_UNUSED_LABEL
  return recog_16 (x0, insn, pnum_clobbers);

 L15634: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V4HImode))
    {
      operands[0] = x1;
      goto L11351;
    }
 L15642: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V4HImode))
    {
      operands[0] = x1;
      goto L11572;
    }
  goto ret0;

 L11351: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (vector_move_operand (x1, V4HImode))
    {
      operands[1] = x1;
      goto L11352;
    }
  x1 = XEXP (x0, 0);
  goto L15642;

 L11352: ATTRIBUTE_UNUSED_LABEL
  if (
#line 70 "../.././gcc/config/i386/mmx.md"
(TARGET_64BIT && TARGET_MMX
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 1033;  /* *movv4hi_internal_rex64 */
    }
 L11364: ATTRIBUTE_UNUSED_LABEL
  if (
#line 94 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 1036;  /* *movv4hi_internal */
    }
  x1 = XEXP (x0, 0);
  goto L15642;

 L11572: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V4HImode)
    goto L16580;
  goto ret0;

 L16580: ATTRIBUTE_UNUSED_LABEL
  return recog_17 (x0, insn, pnum_clobbers);

 L15635: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V2SImode))
    {
      operands[0] = x1;
      goto L11355;
    }
 L15639: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2SImode))
    {
      operands[0] = x1;
      goto L11494;
    }
  goto ret0;

 L11355: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (vector_move_operand (x1, V2SImode))
    {
      operands[1] = x1;
      goto L11356;
    }
  x1 = XEXP (x0, 0);
  goto L15639;

 L11356: ATTRIBUTE_UNUSED_LABEL
  if (
#line 70 "../.././gcc/config/i386/mmx.md"
(TARGET_64BIT && TARGET_MMX
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 1034;  /* *movv2si_internal_rex64 */
    }
 L11368: ATTRIBUTE_UNUSED_LABEL
  if (
#line 94 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 1037;  /* *movv2si_internal */
    }
  x1 = XEXP (x0, 0);
  goto L15639;

 L11494: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2SImode)
    goto L16614;
  goto ret0;

 L16614: ATTRIBUTE_UNUSED_LABEL
  return recog_18 (x0, insn, pnum_clobbers);

 L15636: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V2SFmode))
    {
      operands[0] = x1;
      goto L11371;
    }
 L15638: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2SFmode))
    {
      operands[0] = x1;
      goto L11384;
    }
  goto ret0;

 L11371: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (vector_move_operand (x1, V2SFmode))
    {
      operands[1] = x1;
      goto L11372;
    }
  x1 = XEXP (x0, 0);
  goto L15638;

 L11372: ATTRIBUTE_UNUSED_LABEL
  if (
#line 129 "../.././gcc/config/i386/mmx.md"
(TARGET_64BIT && TARGET_MMX
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 1038;  /* *movv2sf_internal_rex64 */
    }
 L11376: ATTRIBUTE_UNUSED_LABEL
  if (
#line 154 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 1039;  /* *movv2sf_internal */
    }
  x1 = XEXP (x0, 0);
  goto L15638;

 L11384: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2SFmode)
    goto L16642;
  goto ret0;

 L16642: ATTRIBUTE_UNUSED_LABEL
  return recog_19 (x0, insn, pnum_clobbers);

 L15637: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L11379;
    }
 L15643: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L11584;
    }
  goto ret0;

 L11379: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L16672;
  x1 = XEXP (x0, 0);
  goto L15643;

 L16672: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case UNSPEC:
      goto L16674;
    case UNSPEC_VOLATILE:
      goto L16675;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L15643;

 L16674: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 33)
    goto L11380;
  x1 = XEXP (x0, 0);
  goto L15643;

 L11380: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L11381;
    }
  x1 = XEXP (x0, 0);
  goto L15643;

 L11381: ATTRIBUTE_UNUSED_LABEL
  if (
#line 203 "../.././gcc/config/i386/mmx.md"
(TARGET_SSE || TARGET_3DNOW_A))
    {
      return 1040;  /* sse_movntdi */
    }
  x1 = XEXP (x0, 0);
  goto L15643;

 L16675: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 13)
    goto L12708;
  x1 = XEXP (x0, 0);
  goto L15643;

 L12708: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) == DImode)
    goto L16676;
  x1 = XEXP (x0, 0);
  goto L15643;

 L16676: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L12709;
    case MINUS:
      goto L12773;
    case IOR:
      goto L12837;
    case AND:
      goto L12901;
    case XOR:
      goto L12965;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L15643;

 L12709: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L12710;
  x1 = XEXP (x0, 0);
  goto L15643;

 L12710: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L12711;
    }
  x1 = XEXP (x0, 0);
  goto L15643;

 L12711: ATTRIBUTE_UNUSED_LABEL
  if (
#line 22 "../.././gcc/config/i386/sync.md"
(TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 1169;  /* sync_adddi */
    }
  x1 = XEXP (x0, 0);
  goto L15643;

 L12773: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L12774;
  x1 = XEXP (x0, 0);
  goto L15643;

 L12774: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L12775;
    }
  x1 = XEXP (x0, 0);
  goto L15643;

 L12775: ATTRIBUTE_UNUSED_LABEL
  if (
#line 22 "../.././gcc/config/i386/sync.md"
(TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 1173;  /* sync_subdi */
    }
  x1 = XEXP (x0, 0);
  goto L15643;

 L12837: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L12838;
  x1 = XEXP (x0, 0);
  goto L15643;

 L12838: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L12839;
    }
  x1 = XEXP (x0, 0);
  goto L15643;

 L12839: ATTRIBUTE_UNUSED_LABEL
  if (
#line 22 "../.././gcc/config/i386/sync.md"
(TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 1177;  /* sync_iordi */
    }
  x1 = XEXP (x0, 0);
  goto L15643;

 L12901: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L12902;
  x1 = XEXP (x0, 0);
  goto L15643;

 L12902: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L12903;
    }
  x1 = XEXP (x0, 0);
  goto L15643;

 L12903: ATTRIBUTE_UNUSED_LABEL
  if (
#line 22 "../.././gcc/config/i386/sync.md"
(TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 1181;  /* sync_anddi */
    }
  x1 = XEXP (x0, 0);
  goto L15643;

 L12965: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L12966;
  x1 = XEXP (x0, 0);
  goto L15643;

 L12966: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L12967;
    }
  x1 = XEXP (x0, 0);
  goto L15643;

 L12967: ATTRIBUTE_UNUSED_LABEL
  if (
#line 22 "../.././gcc/config/i386/sync.md"
(TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 1185;  /* sync_xordi */
    }
  x1 = XEXP (x0, 0);
  goto L15643;

 L11584: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L16681;
  goto ret0;

 L16681: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case UNSPEC:
      goto L16684;
    case MULT:
      goto L11736;
    default:
     break;
   }
  goto ret0;

 L16684: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 1:
      goto L16686;
    case 2:
      goto L16687;
    default:
      break;
    }
  goto ret0;

 L16686: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 38)
    goto L11585;
  goto ret0;

 L11585: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) == DImode)
    goto L16688;
  goto ret0;

 L16688: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L11586;
    case MINUS:
      goto L11635;
    case LSHIFTRT:
      goto L11798;
    case ASHIFT:
      goto L11817;
    default:
     break;
   }
  goto ret0;

 L11586: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L11587;
    }
  goto ret0;

 L11587: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L11588;
    }
  goto ret0;

 L11588: ATTRIBUTE_UNUSED_LABEL
  if (
#line 576 "../.././gcc/config/i386/mmx.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, DImode, operands)))
    {
      return 1069;  /* mmx_adddi3 */
    }
  goto ret0;

 L11635: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L11636;
    }
  goto ret0;

 L11636: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L11637;
    }
  goto ret0;

 L11637: ATTRIBUTE_UNUSED_LABEL
  if (
#line 617 "../.././gcc/config/i386/mmx.md"
(TARGET_SSE2))
    {
      return 1077;  /* mmx_subdi3 */
    }
  goto ret0;

 L11798: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L11799;
    }
  goto ret0;

 L11799: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L11800;
    }
  goto ret0;

 L11800: ATTRIBUTE_UNUSED_LABEL
  if (
#line 804 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 1096;  /* mmx_lshrdi3 */
    }
  goto ret0;

 L11817: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L11818;
    }
  goto ret0;

 L11818: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L11819;
    }
  goto ret0;

 L11819: ATTRIBUTE_UNUSED_LABEL
  if (
#line 825 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX))
    {
      return 1099;  /* mmx_ashldi3 */
    }
  goto ret0;

 L16687: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 46)
    goto L12126;
  goto ret0;

 L12126: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L12127;
    }
  goto ret0;

 L12127: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L12128;
    }
  goto ret0;

 L12128: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1342 "../.././gcc/config/i386/mmx.md"
(TARGET_SSE || TARGET_3DNOW_A))
    {
      return 1138;  /* mmx_psadbw */
    }
  goto ret0;

 L11736: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L11737;
  goto ret0;

 L11737: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == VEC_SELECT)
    goto L11738;
  goto ret0;

 L11738: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, V2SImode))
    {
      operands[1] = x4;
      goto L11739;
    }
  goto ret0;

 L11739: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L11740;
  goto ret0;

 L11740: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L11741;
  goto ret0;

 L11741: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L11742;
  goto ret0;

 L11742: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == VEC_SELECT)
    goto L11743;
  goto ret0;

 L11743: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, V2SImode))
    {
      operands[2] = x4;
      goto L11744;
    }
  goto ret0;

 L11744: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L11745;
  goto ret0;

 L11745: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 733 "../.././gcc/config/i386/mmx.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V2SImode, operands)))
    {
      return 1087;  /* sse2_umulsidi3 */
    }
  goto ret0;

 L15644: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L12035;
    }
 L15645: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L12077;
    }
 L15649: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L12691;
    }
  goto ret0;

 L12035: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L16692;
  x1 = XEXP (x0, 0);
  goto L15645;

 L16692: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case ZERO_EXTEND:
      goto L12036;
    case UNSPEC:
      goto L16694;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L15645;

 L12036: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == VEC_SELECT)
    goto L12037;
  x1 = XEXP (x0, 0);
  goto L15645;

 L12037: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L12038;
    }
  x1 = XEXP (x0, 0);
  goto L15645;

 L12038: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L12039;
  x1 = XEXP (x0, 0);
  goto L15645;

 L12039: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (const_0_to_3_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L12040;
    }
  x1 = XEXP (x0, 0);
  goto L15645;

 L12040: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1061 "../.././gcc/config/i386/mmx.md"
(TARGET_SSE || TARGET_3DNOW_A))
    {
      return 1128;  /* mmx_pextrw */
    }
  x1 = XEXP (x0, 0);
  goto L15645;

 L16694: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 32)
    goto L12132;
  x1 = XEXP (x0, 0);
  goto L15645;

 L12132: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L12133;
    }
  x1 = XEXP (x0, 0);
  goto L15645;

 L12133: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1351 "../.././gcc/config/i386/mmx.md"
(TARGET_SSE || TARGET_3DNOW_A))
    {
      return 1139;  /* mmx_pmovmskb */
    }
  x1 = XEXP (x0, 0);
  goto L15645;

 L12077: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == VEC_SELECT)
    goto L12078;
  x1 = XEXP (x0, 0);
  goto L15649;

 L12078: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L12079;
    }
  x1 = XEXP (x0, 0);
  goto L15649;

 L12079: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 1)
    goto L12080;
  x1 = XEXP (x0, 0);
  goto L15649;

 L12080: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT)
    goto L16695;
  x1 = XEXP (x0, 0);
  goto L15649;

 L16695: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 0LL:
        goto L16697;
      case 1LL:
        goto L16698;
      default:
        break;
      }
  x1 = XEXP (x0, 0);
  goto L15649;

 L16697: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1160 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
    {
      return 1134;  /* *vec_extractv2si_0 */
    }
  x1 = XEXP (x0, 0);
  goto L15649;

 L16698: ATTRIBUTE_UNUSED_LABEL
  if (
#line 1179 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
    {
      return 1135;  /* *vec_extractv2si_1 */
    }
  x1 = XEXP (x0, 0);
  goto L15649;

 L12691: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == UNSPEC_VOLATILE
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 13)
    goto L12692;
  goto ret0;

 L12692: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) == SImode)
    goto L16699;
  goto ret0;

 L16699: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L12693;
    case MINUS:
      goto L12757;
    case IOR:
      goto L12821;
    case AND:
      goto L12885;
    case XOR:
      goto L12949;
    default:
     break;
   }
  goto ret0;

 L12693: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L12694;
  goto ret0;

 L12694: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L12695;
    }
  goto ret0;

 L12695: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 1168;  /* sync_addsi */
    }
  goto ret0;

 L12757: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L12758;
  goto ret0;

 L12758: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L12759;
    }
  goto ret0;

 L12759: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 1172;  /* sync_subsi */
    }
  goto ret0;

 L12821: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L12822;
  goto ret0;

 L12822: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L12823;
    }
  goto ret0;

 L12823: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 1176;  /* sync_iorsi */
    }
  goto ret0;

 L12885: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L12886;
  goto ret0;

 L12886: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L12887;
    }
  goto ret0;

 L12887: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 1180;  /* sync_andsi */
    }
  goto ret0;

 L12949: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L12950;
  goto ret0;

 L12950: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L12951;
    }
  goto ret0;

 L12951: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 1184;  /* sync_xorsi */
    }
  goto ret0;

 L15647: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L12659;
    }
  goto ret0;

 L12659: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode
      && GET_CODE (x1) == UNSPEC_VOLATILE
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 13)
    goto L12660;
  goto ret0;

 L12660: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) == QImode)
    goto L16704;
  goto ret0;

 L16704: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L12661;
    case MINUS:
      goto L12725;
    case IOR:
      goto L12789;
    case AND:
      goto L12853;
    case XOR:
      goto L12917;
    default:
     break;
   }
  goto ret0;

 L12661: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L12662;
  goto ret0;

 L12662: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L12663;
    }
  goto ret0;

 L12663: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 1166;  /* sync_addqi */
    }
  goto ret0;

 L12725: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L12726;
  goto ret0;

 L12726: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L12727;
    }
  goto ret0;

 L12727: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 1170;  /* sync_subqi */
    }
  goto ret0;

 L12789: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L12790;
  goto ret0;

 L12790: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L12791;
    }
  goto ret0;

 L12791: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 1174;  /* sync_iorqi */
    }
  goto ret0;

 L12853: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L12854;
  goto ret0;

 L12854: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L12855;
    }
  goto ret0;

 L12855: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 1178;  /* sync_andqi */
    }
  goto ret0;

 L12917: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L12918;
  goto ret0;

 L12918: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L12919;
    }
  goto ret0;

 L12919: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 1182;  /* sync_xorqi */
    }
  goto ret0;

 L15648: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L12675;
    }
  goto ret0;

 L12675: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode
      && GET_CODE (x1) == UNSPEC_VOLATILE
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 13)
    goto L12676;
  goto ret0;

 L12676: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) == HImode)
    goto L16709;
  goto ret0;

 L16709: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L12677;
    case MINUS:
      goto L12741;
    case IOR:
      goto L12805;
    case AND:
      goto L12869;
    case XOR:
      goto L12933;
    default:
     break;
   }
  goto ret0;

 L12677: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L12678;
  goto ret0;

 L12678: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L12679;
    }
  goto ret0;

 L12679: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 1167;  /* sync_addhi */
    }
  goto ret0;

 L12741: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L12742;
  goto ret0;

 L12742: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L12743;
    }
  goto ret0;

 L12743: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 1171;  /* sync_subhi */
    }
  goto ret0;

 L12805: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L12806;
  goto ret0;

 L12806: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L12807;
    }
  goto ret0;

 L12807: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 1175;  /* sync_iorhi */
    }
  goto ret0;

 L12869: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L12870;
  goto ret0;

 L12870: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L12871;
    }
  goto ret0;

 L12871: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 1179;  /* sync_andhi */
    }
  goto ret0;

 L12933: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L12934;
  goto ret0;

 L12934: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L12935;
    }
  goto ret0;

 L12935: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 1183;  /* sync_xorhi */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_21 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case MEM:
      goto L265;
    case FIX:
      goto L1025;
    case PLUS:
      goto L1366;
    case MINUS:
      goto L2098;
    case AND:
      goto L3104;
    case IOR:
      goto L3438;
    case XOR:
      goto L3821;
    case NEG:
      goto L4250;
    case ASHIFT:
      goto L4815;
    case ASHIFTRT:
      goto L5206;
    case LSHIFTRT:
      goto L5732;
    case ROTATE:
      goto L6139;
    case ROTATERT:
      goto L6332;
    case UNSPEC:
      goto L16780;
    default:
     break;
   }
  goto ret0;

 L265: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L266;
  goto ret0;

 L266: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L267;
  goto ret0;

 L267: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 7)
    goto L268;
  goto ret0;

 L268: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L269;
  goto ret0;

 L269: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L270;
  goto ret0;

 L270: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (4)]
      && 
#line 1135 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT))
    {
      return 37;  /* popsi1 */
    }
  goto ret0;

 L1025: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L1026;
    }
  goto ret0;

 L1026: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1027;
  goto ret0;

 L1027: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L16782;
    case CCmode:
      goto L16783;
    default:
      break;
    }
  goto ret0;

 L16782: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1028;
    }
  goto ret0;

 L1028: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4247 "../.././gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	&& (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 153;  /* fix_truncsi_i387_fisttp_with_temp */
    }
  goto ret0;

 L16783: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 4286 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
   && !(reload_completed || reload_in_progress)))
    {
      return 156;  /* *fix_truncsi_i387_1 */
    }
  goto ret0;

 L1366: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L16784;
  goto ret0;

 L16784: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == PLUS)
    goto L1367;
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1578;
    }
  goto ret0;

 L1367: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ix86_carry_flag_operator (x4, SImode))
    {
      operands[3] = x4;
      goto L1368;
    }
  goto ret0;

 L1368: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1369;
    }
  goto ret0;

 L1369: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1370;
    }
  goto ret0;

 L1370: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1371;
  goto ret0;

 L1371: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 4875 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands)))
    {
      return 189;  /* addsi3_carry */
    }
  goto ret0;

 L1578: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1579;
    }
  goto ret0;

 L1579: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1580;
  goto ret0;

 L1580: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 5389 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands)))
    {
      return 208;  /* *addsi_1 */
    }
  goto ret0;

 L2098: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2099;
    }
  goto ret0;

 L2099: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L2100;
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2138;
    }
  goto ret0;

 L2100: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ix86_carry_flag_operator (x4, SImode))
    {
      operands[3] = x4;
      goto L2101;
    }
  goto ret0;

 L2101: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2102;
    }
  goto ret0;

 L2102: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2103;
  goto ret0;

 L2103: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 6628 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands)))
    {
      return 240;  /* subsi3_carry */
    }
  goto ret0;

 L2138: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2139;
  goto ret0;

 L2139: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 6660 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands)))
    {
      return 242;  /* *subsi_1 */
    }
  goto ret0;

 L3104: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3105;
    }
  goto ret0;

 L3105: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3106;
    }
  goto ret0;

 L3106: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3107;
  goto ret0;

 L3107: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 8121 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, SImode, operands)))
    {
      return 299;  /* *andsi_1 */
    }
  goto ret0;

 L3438: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L16787;
  goto ret0;

 L16787: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case ASHIFT:
      goto L4791;
    case ASHIFTRT:
      goto L5182;
    case REG:
    case SUBREG:
    case MEM:
      goto L16786;
    default:
      goto ret0;
   }
 L16786: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3439;
    }
  goto ret0;

 L4791: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L4792;
  goto ret0;

 L4792: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonmemory_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L4793;
    }
  goto ret0;

 L4793: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == LSHIFTRT)
    goto L4794;
  goto ret0;

 L4794: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L4795;
    }
  goto ret0;

 L4795: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == QImode
      && GET_CODE (x4) == MINUS)
    goto L4796;
  goto ret0;

 L4796: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (32)])
    goto L4797;
  goto ret0;

 L4797: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (rtx_equal_p (x5, operands[2]))
    goto L4798;
  goto ret0;

 L4798: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4799;
  goto ret0;

 L4799: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 413;  /* x86_shld_1 */
    }
  goto ret0;

 L5182: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L5183;
  goto ret0;

 L5183: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonmemory_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L5184;
    }
  goto ret0;

 L5184: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ASHIFT)
    goto L5185;
  goto ret0;

 L5185: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L5186;
    }
  goto ret0;

 L5186: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == QImode
      && GET_CODE (x4) == MINUS)
    goto L5187;
  goto ret0;

 L5187: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (32)])
    goto L5188;
  goto ret0;

 L5188: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (rtx_equal_p (x5, operands[2]))
    goto L5189;
  goto ret0;

 L5189: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5190;
  goto ret0;

 L5190: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 438;  /* x86_shrd_1 */
    }
  goto ret0;

 L3439: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3440;
    }
  goto ret0;

 L3440: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3441;
  goto ret0;

 L3441: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 8576 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, SImode, operands)))
    {
      return 318;  /* *iorsi_1 */
    }
  goto ret0;

 L3821: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3822;
    }
  goto ret0;

 L3822: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3823;
    }
  goto ret0;

 L3823: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3824;
  goto ret0;

 L3824: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 8952 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, SImode, operands)))
    {
      return 340;  /* *xorsi_1 */
    }
  goto ret0;

 L4250: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4251;
    }
  goto ret0;

 L4251: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4252;
  goto ret0;

 L4252: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 9437 "../.././gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, SImode, operands)))
    {
      return 365;  /* *negsi2_1 */
    }
  goto ret0;

 L4815: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4816;
    }
  goto ret0;

 L4816: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4817;
    }
  goto ret0;

 L4817: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4818;
  goto ret0;

 L4818: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 10587 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands)))
    {
      return 414;  /* *ashlsi3_1 */
    }
  goto ret0;

 L5206: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5207;
    }
  goto ret0;

 L5207: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L16789;
 L5267: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5268;
    }
  goto ret0;

 L16789: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5208;
    }
 L16790: ATTRIBUTE_UNUSED_LABEL
  if (const1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5238;
    }
  goto L5267;

 L5208: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5209;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L16790;

 L5209: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 11491 "../.././gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 31 && (TARGET_USE_CLTD || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)))
    {
      return 439;  /* ashrsi3_31 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L16790;

 L5238: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5239;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L5267;

 L5239: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 11532 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size)))
    {
      return 441;  /* *ashrsi3_1_one_bit */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L5267;

 L5268: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5269;
  goto ret0;

 L5269: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 11557 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)))
    {
      return 443;  /* *ashrsi3_1 */
    }
  goto ret0;

 L5732: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5733;
    }
  goto ret0;

 L5733: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5734;
    }
 L5763: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5764;
    }
  goto ret0;

 L5734: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5735;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L5763;

 L5735: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 12117 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size)))
    {
      return 474;  /* *lshrsi3_1_one_bit */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L5763;

 L5764: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5765;
  goto ret0;

 L5765: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 12142 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, HImode, operands)))
    {
      return 476;  /* *lshrsi3_1 */
    }
  goto ret0;

 L6139: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6140;
    }
  goto ret0;

 L6140: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L6141;
    }
 L6170: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L6171;
    }
  goto ret0;

 L6141: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L6142;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L6170;

 L6142: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 12580 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size)))
    {
      return 501;  /* *rotlsi3_1_one_bit */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L6170;

 L6171: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L6172;
  goto ret0;

 L6172: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 12606 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands)))
    {
      return 503;  /* *rotlsi3_1 */
    }
  goto ret0;

 L6332: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6333;
    }
  goto ret0;

 L6333: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L6334;
    }
 L6363: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L6364;
    }
  goto ret0;

 L6334: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L6335;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L6363;

 L6335: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 12804 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size)))
    {
      return 514;  /* *rotrsi3_1_one_bit */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L6363;

 L6364: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L6365;
  goto ret0;

 L6365: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 12833 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands)))
    {
      return 516;  /* *rotrsi3_1 */
    }
  goto ret0;

 L16780: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1)
    goto L16791;
  goto ret0;

 L16791: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 74LL:
      goto L8054;
    case 75LL:
      goto L8204;
    default:
      break;
    }
  goto ret0;

 L8054: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L8055;
    }
  goto ret0;

 L8055: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8056;
  goto ret0;

 L8056: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 17432 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress)))
    {
      return 679;  /* *fistsi2_floor_1 */
    }
  goto ret0;

 L8204: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L8205;
    }
  goto ret0;

 L8205: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8206;
  goto ret0;

 L8206: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 17673 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress)))
    {
      return 690;  /* *fistsi2_ceil_1 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_22 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L16794;
 L274: ATTRIBUTE_UNUSED_LABEL
  if (const0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L275;
    }
 L284: ATTRIBUTE_UNUSED_LABEL
  if (immediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L285;
    }
  goto ret0;

 L16794: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L654;
    case MULT:
      goto L2322;
    case DIV:
      goto L2760;
    case UDIV:
      goto L2913;
    case UNSPEC:
      goto L16805;
    case CTZ:
      goto L7129;
    case MINUS:
      goto L7153;
    case PLUS:
      goto L7310;
    case IF_THEN_ELSE:
      goto L8981;
    case REG:
    case SUBREG:
      goto L16793;
    default:
      goto L274;
   }
 L16793: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L309;
    }
  goto L274;

 L654: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case HImode:
      goto L16808;
    case QImode:
      goto L16809;
    default:
      break;
    }
  goto L274;

 L16808: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L655;
    }
  goto L274;

 L655: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L656;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L274;

 L656: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 2994 "../.././gcc/config/i386/i386.md"
(TARGET_ZERO_EXTEND_WITH_AND && !optimize_size))
    {
      return 102;  /* zero_extendhisi2_and */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L274;

 L16809: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L701;
    }
  goto L274;

 L701: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L702;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L274;

 L702: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode)
    goto L16810;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L274;

 L16810: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L16812;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L274;

 L16812: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 17)
    goto L16814;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L274;

 L16814: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3099 "../.././gcc/config/i386/i386.md"
(TARGET_ZERO_EXTEND_WITH_AND && !optimize_size))
    {
      return 107;  /* *zero_extendqisi2_and */
    }
 L16815: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3108 "../.././gcc/config/i386/i386.md"
(!TARGET_ZERO_EXTEND_WITH_AND || optimize_size))
    {
      return 108;  /* *zero_extendqisi2_movzbw_and */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L274;

 L2322: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2323;
    }
  goto L274;

 L2323: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2324;
    }
  goto L274;

 L2324: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2325;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L274;

 L2325: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 6901 "../.././gcc/config/i386/i386.md"
(GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    {
      return 256;  /* *mulsi3_1 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L274;

 L2760: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2761;
    }
  goto L274;

 L2761: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L2762;
    }
  goto L274;

 L2762: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2763;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L274;

 L2763: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2764;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L274;

 L2764: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MOD)
    goto L2765;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L274;

 L2765: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L2766;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L274;

 L2766: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 7507 "../.././gcc/config/i386/i386.md"
(!optimize_size && !TARGET_USE_CLTD)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 277;  /* *divmodsi4_nocltd */
    }
 L2790: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x3, operands[3])
      && 
#line 7518 "../.././gcc/config/i386/i386.md"
(optimize_size || TARGET_USE_CLTD)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 278;  /* *divmodsi4_cltd */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L274;

 L2913: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2914;
    }
  goto L274;

 L2914: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2915;
    }
  goto L274;

 L2915: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2916;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L274;

 L2916: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2917;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L274;

 L2917: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UMOD)
    goto L2918;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L274;

 L2918: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2919;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L274;

 L2919: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 283;  /* udivmodsi4 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L274;

 L16805: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x2, 0))
    {
    case 1:
      goto L16816;
    case 4:
      goto L16817;
    default:
      break;
    }
  goto L274;

 L16816: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 12LL:
      goto L7002;
    case 66LL:
      goto L8012;
    default:
      break;
    }
  goto L274;

 L7002: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  switch (GET_CODE (x3))
    {
    case CONST_INT:
      goto L16819;
    case LABEL_REF:
      goto L7014;
    default:
     break;
   }
  goto L274;

 L16819: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x3, 0) == 0LL)
    goto L7003;
  goto L274;

 L7003: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L7004;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L274;

 L7004: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 14345 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT))
    {
      return 566;  /* set_got */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L274;

 L7014: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  goto L7015;

 L7015: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L7016;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L274;

 L7016: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 14355 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT))
    {
      return 567;  /* set_got_labelled */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L274;

 L8012: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L8013;
    }
  goto L274;

 L8013: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8014;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L274;

 L8014: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L8015;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L274;

 L8015: ATTRIBUTE_UNUSED_LABEL
  if (
#line 17308 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
    {
      return 675;  /* fistsi2_with_temp */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L274;

 L16817: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 19)
    goto L7354;
  goto L274;

 L7354: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (tls_symbolic_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L7355;
    }
  goto L274;

 L7355: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L7356;
    }
  goto L274;

 L7356: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L7357;
    }
  goto L274;

 L7357: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L7358;
  goto L274;

 L7358: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L7359;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L274;

 L7359: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 14877 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU2_TLS))
    {
      return 594;  /* *tls_dynamic_call_32 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L274;

 L7129: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L7130;
    }
  goto L274;

 L7130: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L7131;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L274;

 L7131: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 578;  /* ctzsi2 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L274;

 L7153: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (31)])
    goto L7154;
  goto L274;

 L7154: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == CLZ)
    goto L7155;
  goto L274;

 L7155: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L7156;
    }
  goto L274;

 L7156: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L7157;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L274;

 L7157: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 580;  /* *bsr */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L274;

 L7310: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L16820;
  goto L274;

 L16820: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == UNSPEC)
    goto L16822;
  goto L274;

 L16822: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x3, 0))
    {
    case 1:
      goto L16824;
    case 4:
      goto L16825;
    default:
      break;
    }
  goto L274;

 L16824: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x3, 1) == 16)
    goto L7311;
  goto L274;

 L7311: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L7312;
  goto L274;

 L7312: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L7313;
    }
  goto L274;

 L7313: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L7314;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L274;

 L7314: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 14803 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT))
    {
      return 590;  /* *add_tp_si */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L274;

 L16825: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x3, 1) == 19)
    goto L7372;
  goto L274;

 L7372: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (tls_modbase_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L7373;
    }
  goto L274;

 L7373: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  operands[4] = x4;
  goto L7374;

 L7374: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L7375;
    }
  goto L274;

 L7375: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L7376;
  goto L274;

 L7376: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == CONST)
    goto L7377;
  goto L274;

 L7377: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == UNSPEC
      && XVECLEN (x4, 0) == 1
      && XINT (x4, 1) == 6)
    goto L7378;
  goto L274;

 L7378: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (tls_symbolic_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L7379;
    }
  goto L274;

 L7379: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L7380;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L274;

 L7380: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 14895 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU2_TLS))
    {
      return 595;  /* *tls_dynamic_gnu2_combine_32 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L274;

 L8981: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ix86_carry_flag_operator (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L8982;
    }
  goto L274;

 L8982: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (-1)])
    goto L8983;
  goto L274;

 L8983: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L8984;
  goto L274;

 L8984: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8985;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L274;

 L8985: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 735;  /* x86_movsicc_0_m1 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L274;

 L309: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L310;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L274;

 L310: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L311;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L274;

 L311: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[0]))
    {
      return 43;  /* *swapsi */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L274;

 L275: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L276;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L284;

 L276: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 1144 "../.././gcc/config/i386/i386.md"
(reload_completed && (!TARGET_USE_MOV0 || optimize_size)))
    {
      return 38;  /* *movsi_xor */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L284;

 L285: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L286;
  goto ret0;

 L286: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 1154 "../.././gcc/config/i386/i386.md"
(reload_completed
   && operands[1] == constm1_rtx
   && (TARGET_PENTIUM || optimize_size)))
    {
      return 39;  /* *movsi_or */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_23 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case MEM:
      goto L16754;
    case ZERO_EXTRACT:
      goto L1894;
    default:
     break;
   }
 L16717: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L264;
    }
 L16718: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L308;
    }
 L16730: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L970;
    }
  goto ret0;

 L16754: ATTRIBUTE_UNUSED_LABEL
  if (push_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L244;
    }
  goto L16717;

 L244: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_no_elim_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L245;
    }
  x2 = XEXP (x1, 0);
  goto L16717;

 L245: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L246;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L16717;

 L246: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == BLKmode
      && GET_CODE (x2) == MEM)
    goto L247;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L16717;

 L247: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == SCRATCH
      && 
#line 1114 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT))
    {
      return 35;  /* *pushsi2_prologue */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L16717;

 L1894: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L1895;
    }
  goto ret0;

 L1895: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L1896;
  goto ret0;

 L1896: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L1897;
  goto ret0;

 L1897: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L16755;
  goto ret0;

 L16755: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L1898;
    case AND:
      goto L3261;
    case IOR:
      goto L3666;
    case XOR:
      goto L4004;
    default:
     break;
   }
  goto ret0;

 L1898: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L1899;
  goto ret0;

 L1899: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L1900;
    }
  goto ret0;

 L1900: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L1901;
  goto ret0;

 L1901: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L1954;
  goto ret0;

 L1954: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L1955;
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1903;
    }
 L1928: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1929;
    }
  goto ret0;

 L1955: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L1956;
    }
  goto ret0;

 L1956: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L1957;
  goto ret0;

 L1957: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L1958;
  goto ret0;

 L1958: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1959;
  goto ret0;

 L1959: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 231;  /* *addqi_ext_2 */
    }
  goto ret0;

 L1903: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1904;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L1928;

 L1904: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 6375 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT))
    {
      return 229;  /* addqi_ext_1 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L1928;

 L1929: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1930;
  goto ret0;

 L1930: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 6411 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT))
    {
      return 230;  /* *addqi_ext_1_rex64 */
    }
  goto ret0;

 L3261: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L3262;
  goto ret0;

 L3262: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L3263;
    }
  goto ret0;

 L3263: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L3264;
  goto ret0;

 L3264: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L3313;
  goto ret0;

 L3313: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode)
    goto L16759;
 L3265: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L3266;
    }
  goto ret0;

 L16759: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case ZERO_EXTEND:
      goto L3314;
    case ZERO_EXTRACT:
      goto L3370;
    default:
     break;
   }
  goto L3265;

 L3314: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (general_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L3315;
    }
 L3342: ATTRIBUTE_UNUSED_LABEL
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L3343;
    }
  goto L3265;

 L3315: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3316;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  goto L3342;

 L3316: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 8422 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT))
    {
      return 312;  /* *andqi_ext_1 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  goto L3342;

 L3343: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3344;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3265;

 L3344: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 8440 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT))
    {
      return 313;  /* *andqi_ext_1_rex64 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3265;

 L3370: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L3371;
    }
  goto L3265;

 L3371: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L3372;
  goto L3265;

 L3372: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L3373;
  goto L3265;

 L3373: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3374;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3265;

 L3374: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 314;  /* *andqi_ext_2 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3265;

 L3266: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3267;
  goto ret0;

 L3267: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17)
    {
      return 310;  /* andqi_ext_0 */
    }
  goto ret0;

 L3666: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L3667;
  goto ret0;

 L3667: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L3668;
    }
  goto ret0;

 L3668: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L3669;
  goto ret0;

 L3669: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L3696;
  goto ret0;

 L3696: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode)
    goto L16761;
 L3670: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L3671;
    }
  goto ret0;

 L16761: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case ZERO_EXTEND:
      goto L3697;
    case ZERO_EXTRACT:
      goto L3753;
    default:
     break;
   }
  goto L3670;

 L3697: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (general_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L3698;
    }
 L3725: ATTRIBUTE_UNUSED_LABEL
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L3726;
    }
  goto L3670;

 L3698: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3699;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  goto L3725;

 L3699: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 8800 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)))
    {
      return 334;  /* *iorqi_ext_1 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  goto L3725;

 L3726: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3727;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3670;

 L3727: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 8819 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)))
    {
      return 335;  /* *iorqi_ext_1_rex64 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3670;

 L3753: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L3754;
    }
  goto L3670;

 L3754: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L3755;
  goto L3670;

 L3755: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L3756;
  goto L3670;

 L3756: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3757;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3670;

 L3757: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 8838 "../.././gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_size)))
    {
      return 336;  /* *iorqi_ext_2 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3670;

 L3671: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3672;
  goto ret0;

 L3672: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 8782 "../.././gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_size)))
    {
      return 333;  /* iorqi_ext_0 */
    }
  goto ret0;

 L4004: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L4005;
  goto ret0;

 L4005: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L4006;
    }
  goto ret0;

 L4006: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L4007;
  goto ret0;

 L4007: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L4034;
  goto ret0;

 L4034: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode)
    goto L16763;
 L4008: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L4009;
    }
  goto ret0;

 L16763: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case ZERO_EXTEND:
      goto L4035;
    case ZERO_EXTRACT:
      goto L4091;
    default:
     break;
   }
  goto L4008;

 L4035: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (general_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L4036;
    }
 L4063: ATTRIBUTE_UNUSED_LABEL
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L4064;
    }
  goto L4008;

 L4036: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4037;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  goto L4063;

 L4037: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 9138 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)))
    {
      return 353;  /* *xorqi_ext_1 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  goto L4063;

 L4064: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4065;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L4008;

 L4065: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 9157 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)))
    {
      return 354;  /* *xorqi_ext_1_rex64 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L4008;

 L4091: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ext_register_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L4092;
    }
  goto L4008;

 L4092: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L4093;
  goto L4008;

 L4093: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L4094;
  goto L4008;

 L4094: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4095;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L4008;

 L4095: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 9176 "../.././gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_size)))
    {
      return 355;  /* *xorqi_ext_2 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L4008;

 L4009: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4010;
  goto ret0;

 L4010: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 9120 "../.././gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_size)))
    {
      return 352;  /* xorqi_ext_0 */
    }
  goto ret0;

 L264: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L16765;
  x2 = XEXP (x1, 0);
  goto L16718;

 L16765: ATTRIBUTE_UNUSED_LABEL
  tem = recog_21 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x2 = XEXP (x1, 0);
  goto L16718;

 L308: ATTRIBUTE_UNUSED_LABEL
  tem = recog_22 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x2 = XEXP (x1, 0);
  goto L16730;

 L970: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == FIX)
    goto L971;
  goto ret0;

 L971: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L972;
    }
  goto ret0;

 L972: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L973;
  goto ret0;

 L973: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, XFmode))
    {
      operands[2] = x2;
      goto L974;
    }
  goto ret0;

 L974: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4233 "../.././gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH)))
    {
      return 150;  /* fix_truncsi_i387_fisttp */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_24 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case FIX:
      goto L1007;
    case PLUS:
      goto L1348;
    case MINUS:
      goto L2080;
    case AND:
      goto L3161;
    case IOR:
      goto L3543;
    case XOR:
      goto L3926;
    case NEG:
      goto L4311;
    case ASHIFT:
      goto L4890;
    case ASHIFTRT:
      goto L5386;
    case LSHIFTRT:
      goto L5882;
    case ROTATE:
      goto L6199;
    case ROTATERT:
      goto L6392;
    case UNSPEC:
      goto L16855;
    default:
     break;
   }
  goto ret0;

 L1007: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L1008;
    }
  goto ret0;

 L1008: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1009;
  goto ret0;

 L1009: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L16857;
    case CCmode:
      goto L16858;
    default:
      break;
    }
  goto ret0;

 L16857: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L1010;
    }
  goto ret0;

 L1010: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4247 "../.././gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	&& (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 152;  /* fix_trunchi_i387_fisttp_with_temp */
    }
  goto ret0;

 L16858: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 4286 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
   && !(reload_completed || reload_in_progress)))
    {
      return 155;  /* *fix_trunchi_i387_1 */
    }
  goto ret0;

 L1348: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode)
    goto L16859;
  goto ret0;

 L16859: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == PLUS)
    goto L1349;
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1698;
    }
  goto ret0;

 L1349: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ix86_carry_flag_operator (x4, HImode))
    {
      operands[3] = x4;
      goto L1350;
    }
  goto ret0;

 L1350: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L1351;
    }
  goto ret0;

 L1351: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L1352;
    }
  goto ret0;

 L1352: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1353;
  goto ret0;

 L1353: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 4863 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, HImode, operands)))
    {
      return 188;  /* addhi3_carry */
    }
  goto ret0;

 L1698: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L1699;
    }
  goto ret0;

 L1699: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1700;
  goto ret0;

 L1700: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode)
    goto L16861;
  goto ret0;

 L16861: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L16863;
  goto ret0;

 L16863: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 17)
    goto L16865;
  goto ret0;

 L16865: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5822 "../.././gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, HImode, operands)))
    {
      return 216;  /* *addhi_1_lea */
    }
 L16866: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5865 "../.././gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, HImode, operands)))
    {
      return 217;  /* *addhi_1 */
    }
  goto ret0;

 L2080: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L2081;
    }
  goto ret0;

 L2081: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == PLUS)
    goto L2082;
  if (general_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L2218;
    }
  goto ret0;

 L2082: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ix86_carry_flag_operator (x4, HImode))
    {
      operands[3] = x4;
      goto L2083;
    }
  goto ret0;

 L2083: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L2084;
    }
  goto ret0;

 L2084: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2085;
  goto ret0;

 L2085: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 6616 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, HImode, operands)))
    {
      return 239;  /* subhi3_carry */
    }
  goto ret0;

 L2218: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2219;
  goto ret0;

 L2219: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 6745 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, HImode, operands)))
    {
      return 248;  /* *subhi_1 */
    }
  goto ret0;

 L3161: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L3162;
    }
  goto ret0;

 L3162: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L3163;
    }
  goto ret0;

 L3163: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3164;
  goto ret0;

 L3164: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 8243 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, HImode, operands)))
    {
      return 303;  /* *andhi_1 */
    }
  goto ret0;

 L3543: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L3544;
    }
  goto ret0;

 L3544: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L3545;
    }
  goto ret0;

 L3545: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3546;
  goto ret0;

 L3546: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 8669 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, HImode, operands)))
    {
      return 325;  /* *iorhi_1 */
    }
  goto ret0;

 L3926: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L3927;
    }
  goto ret0;

 L3927: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L3928;
    }
  goto ret0;

 L3928: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3929;
  goto ret0;

 L3929: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 9046 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, HImode, operands)))
    {
      return 347;  /* *xorhi_1 */
    }
  goto ret0;

 L4311: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L4312;
    }
  goto ret0;

 L4312: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4313;
  goto ret0;

 L4313: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 9497 "../.././gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, HImode, operands)))
    {
      return 369;  /* *neghi2_1 */
    }
  goto ret0;

 L4890: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L4891;
    }
  goto ret0;

 L4891: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4892;
    }
  goto ret0;

 L4892: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4893;
  goto ret0;

 L4893: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode)
    goto L16867;
  goto ret0;

 L16867: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L16869;
  goto ret0;

 L16869: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 17)
    goto L16871;
  goto ret0;

 L16871: ATTRIBUTE_UNUSED_LABEL
  if (
#line 10861 "../.././gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, HImode, operands)))
    {
      return 419;  /* *ashlhi3_1_lea */
    }
 L16872: ATTRIBUTE_UNUSED_LABEL
  if (
#line 10899 "../.././gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, HImode, operands)))
    {
      return 420;  /* *ashlhi3_1 */
    }
  goto ret0;

 L5386: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L5387;
    }
  goto ret0;

 L5387: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5388;
    }
 L5401: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5402;
    }
  goto ret0;

 L5388: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5389;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L5401;

 L5389: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 11689 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size)))
    {
      return 451;  /* *ashrhi3_1_one_bit */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L5401;

 L5402: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5403;
  goto ret0;

 L5403: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 11703 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, HImode, operands)))
    {
      return 452;  /* *ashrhi3_1 */
    }
  goto ret0;

 L5882: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L5883;
    }
  goto ret0;

 L5883: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5884;
    }
 L5897: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5898;
    }
  goto ret0;

 L5884: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5885;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L5897;

 L5885: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 12275 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size)))
    {
      return 484;  /* *lshrhi3_1_one_bit */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L5897;

 L5898: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5899;
  goto ret0;

 L5899: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 12289 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, HImode, operands)))
    {
      return 485;  /* *lshrhi3_1 */
    }
  goto ret0;

 L6199: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L6200;
    }
  goto ret0;

 L6200: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L6201;
    }
 L6214: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L6215;
    }
  goto ret0;

 L6201: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L6202;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L6214;

 L6202: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 12639 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size)))
    {
      return 505;  /* *rotlhi3_1_one_bit */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L6214;

 L6215: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L6216;
  goto ret0;

 L6216: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 12653 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands)))
    {
      return 506;  /* *rotlhi3_1 */
    }
  goto ret0;

 L6392: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L6393;
    }
  goto ret0;

 L6393: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L6394;
    }
 L6407: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L6408;
    }
  goto ret0;

 L6394: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L6395;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L6407;

 L6395: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 12866 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size)))
    {
      return 518;  /* *rotrhi3_one_bit */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L6407;

 L6408: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L6409;
  goto ret0;

 L6409: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 12880 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands)))
    {
      return 519;  /* *rotrhi3 */
    }
  goto ret0;

 L16855: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1)
    goto L16873;
  goto ret0;

 L16873: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 74LL:
      goto L8042;
    case 75LL:
      goto L8192;
    default:
      break;
    }
  goto ret0;

 L8042: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L8043;
    }
  goto ret0;

 L8043: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8044;
  goto ret0;

 L8044: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 17432 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress)))
    {
      return 678;  /* *fisthi2_floor_1 */
    }
  goto ret0;

 L8192: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L8193;
    }
  goto ret0;

 L8193: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8194;
  goto ret0;

 L8194: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 17673 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress)))
    {
      return 689;  /* *fisthi2_ceil_1 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_25 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  if (register_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L380;
    }
 L16735: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L1329;
    }
  goto ret0;

 L380: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode)
    goto L16876;
  x2 = XEXP (x1, 0);
  goto L16735;

 L16876: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case MULT:
      goto L2366;
    case DIV:
      goto L2642;
    case UDIV:
      goto L2656;
    case REG:
    case SUBREG:
      goto L16875;
    default:
      x2 = XEXP (x1, 0);
      goto L16735;
   }
 L16875: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L381;
    }
  x2 = XEXP (x1, 0);
  goto L16735;

 L2366: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L2367;
    }
  x2 = XEXP (x1, 0);
  goto L16735;

 L2367: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L2368;
    }
  x2 = XEXP (x1, 0);
  goto L16735;

 L2368: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2369;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L16735;

 L2369: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 6985 "../.././gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 259;  /* *mulqi3_1 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L16735;

 L2642: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L2643;
    }
  x2 = XEXP (x1, 0);
  goto L16735;

 L2643: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L2644;
    }
  x2 = XEXP (x1, 0);
  goto L16735;

 L2644: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2645;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L16735;

 L2645: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 7364 "../.././gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH))
    {
      return 272;  /* divqi3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L16735;

 L2656: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L2657;
    }
  x2 = XEXP (x1, 0);
  goto L16735;

 L2657: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L2658;
    }
  x2 = XEXP (x1, 0);
  goto L16735;

 L2658: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2659;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L16735;

 L2659: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 7374 "../.././gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH))
    {
      return 273;  /* udivqi3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L16735;

 L381: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L382;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L16735;

 L382: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L383;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L16735;

 L383: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[0])
      && 
#line 1564 "../.././gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_size))
    {
      return 56;  /* *swapqi_1 */
    }
 L390: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x2, operands[0])
      && 
#line 1576 "../.././gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL))
    {
      return 57;  /* *swapqi_2 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L16735;

 L1329: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode)
    goto L16879;
  goto ret0;

 L16879: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L1330;
    case MINUS:
      goto L2062;
    case AND:
      goto L3188;
    case IOR:
      goto L3588;
    case XOR:
      goto L3971;
    case NEG:
      goto L4334;
    case ASHIFT:
      goto L4949;
    case ASHIFTRT:
      goto L5476;
    case LSHIFTRT:
      goto L5972;
    case ROTATE:
      goto L6243;
    case ROTATERT:
      goto L6420;
    default:
     break;
   }
  goto ret0;

 L1330: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == QImode)
    goto L16890;
  goto ret0;

 L16890: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == PLUS)
    goto L1331;
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L1789;
    }
  goto ret0;

 L1331: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ix86_carry_flag_operator (x4, QImode))
    {
      operands[3] = x4;
      goto L1332;
    }
  goto ret0;

 L1332: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L1333;
    }
  goto ret0;

 L1333: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1334;
    }
  goto ret0;

 L1334: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1335;
  goto ret0;

 L1335: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 4851 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, QImode, operands)))
    {
      return 187;  /* addqi3_carry */
    }
  goto ret0;

 L1789: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1790;
    }
  goto ret0;

 L1790: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1791;
  goto ret0;

 L1791: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode)
    goto L16892;
  goto ret0;

 L16892: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L16894;
  goto ret0;

 L16894: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 17)
    goto L16896;
  goto ret0;

 L16896: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6074 "../.././gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, QImode, operands)))
    {
      return 222;  /* *addqi_1_lea */
    }
 L16897: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6124 "../.././gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, QImode, operands)))
    {
      return 223;  /* *addqi_1 */
    }
  goto ret0;

 L2062: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L2063;
    }
  goto ret0;

 L2063: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == QImode
      && GET_CODE (x3) == PLUS)
    goto L2064;
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L2256;
    }
  goto ret0;

 L2064: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ix86_carry_flag_operator (x4, QImode))
    {
      operands[3] = x4;
      goto L2065;
    }
  goto ret0;

 L2065: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L2066;
    }
  goto ret0;

 L2066: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2067;
  goto ret0;

 L2067: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 6604 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, QImode, operands)))
    {
      return 238;  /* subqi3_carry */
    }
  goto ret0;

 L2256: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2257;
  goto ret0;

 L2257: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 6789 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, QImode, operands)))
    {
      return 251;  /* *subqi_1 */
    }
  goto ret0;

 L3188: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L3189;
    }
  goto ret0;

 L3189: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3190;
    }
  goto ret0;

 L3190: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3191;
  goto ret0;

 L3191: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 8289 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, QImode, operands)))
    {
      return 305;  /* *andqi_1 */
    }
  goto ret0;

 L3588: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L3589;
    }
  goto ret0;

 L3589: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3590;
    }
  goto ret0;

 L3590: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3591;
  goto ret0;

 L3591: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 8713 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, QImode, operands)))
    {
      return 328;  /* *iorqi_1 */
    }
  goto ret0;

 L3971: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L3972;
    }
  goto ret0;

 L3972: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L3973;
    }
  goto ret0;

 L3973: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3974;
  goto ret0;

 L3974: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 9090 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, QImode, operands)))
    {
      return 350;  /* *xorqi_1 */
    }
  goto ret0;

 L4334: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L4335;
    }
  goto ret0;

 L4335: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4336;
  goto ret0;

 L4336: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 9524 "../.././gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, QImode, operands)))
    {
      return 371;  /* *negqi2_1 */
    }
  goto ret0;

 L4949: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L4950;
    }
  goto ret0;

 L4950: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4951;
    }
  goto ret0;

 L4951: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4952;
  goto ret0;

 L4952: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode)
    goto L16898;
  goto ret0;

 L16898: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L16900;
  goto ret0;

 L16900: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 17)
    goto L16902;
  goto ret0;

 L16902: ATTRIBUTE_UNUSED_LABEL
  if (
#line 11029 "../.././gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, QImode, operands)))
    {
      return 423;  /* *ashlqi3_1_lea */
    }
 L16903: ATTRIBUTE_UNUSED_LABEL
  if (
#line 11085 "../.././gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, QImode, operands)))
    {
      return 424;  /* *ashlqi3_1 */
    }
  goto ret0;

 L5476: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L5477;
    }
  goto ret0;

 L5477: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5478;
    }
 L5507: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5508;
    }
  goto ret0;

 L5478: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5479;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L5507;

 L5479: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 11792 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, QImode, operands)
   && (TARGET_SHIFT1 || optimize_size)))
    {
      return 457;  /* *ashrqi3_1_one_bit */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L5507;

 L5508: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5509;
  goto ret0;

 L5509: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 11821 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, QImode, operands)))
    {
      return 459;  /* *ashrqi3_1 */
    }
  goto ret0;

 L5972: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L5973;
    }
  goto ret0;

 L5973: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5974;
    }
 L6003: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L6004;
    }
  goto ret0;

 L5974: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5975;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L6003;

 L5975: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 12378 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, QImode, operands)
   && (TARGET_SHIFT1 || optimize_size)))
    {
      return 490;  /* *lshrqi3_1_one_bit */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L6003;

 L6004: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L6005;
  goto ret0;

 L6005: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 12406 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, QImode, operands)))
    {
      return 492;  /* *lshrqi3_1 */
    }
  goto ret0;

 L6243: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L6244;
    }
  goto ret0;

 L6244: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L6245;
    }
 L6274: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L6275;
    }
  goto ret0;

 L6245: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L6246;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L6274;

 L6246: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 12687 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands)
   && (TARGET_SHIFT1 || optimize_size)))
    {
      return 508;  /* *rotlqi3_1_one_bit */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L6274;

 L6275: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L6276;
  goto ret0;

 L6276: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 12714 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands)))
    {
      return 510;  /* *rotlqi3_1 */
    }
  goto ret0;

 L6420: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L6421;
    }
  goto ret0;

 L6421: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L6422;
    }
 L6451: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L6452;
    }
  goto ret0;

 L6422: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L6423;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L6451;

 L6423: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 12900 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands)
   && (TARGET_SHIFT1 || optimize_size)))
    {
      return 520;  /* *rotrqi3_1_one_bit */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L6451;

 L6452: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L6453;
  goto ret0;

 L6453: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 12928 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands)))
    {
      return 522;  /* *rotrqi3_1 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_26 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case MEM:
      goto L522;
    case ZERO_EXTEND:
      goto L729;
    case FIX:
      goto L1043;
    case PLUS:
      goto L1287;
    case MINUS:
      goto L1992;
    case AND:
      goto L3077;
    case IOR:
      goto L3393;
    case XOR:
      goto L3776;
    case NEG:
      goto L4215;
    case ASHIFT:
      goto L4731;
    case ASHIFTRT:
      goto L5063;
    case LSHIFTRT:
      goto L5628;
    case ROTATE:
      goto L6111;
    case ROTATERT:
      goto L6304;
    case UNSPEC:
      goto L16924;
    default:
     break;
   }
  goto ret0;

 L522: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L523;
  goto ret0;

 L523: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L524;
  goto ret0;

 L524: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 7)
    goto L525;
  goto ret0;

 L525: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == PLUS)
    goto L526;
  goto ret0;

 L526: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L527;
  goto ret0;

 L527: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)]
      && 
#line 1913 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT))
    {
      return 77;  /* popdi1 */
    }
  goto ret0;

 L729: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L730;
    }
  goto ret0;

 L730: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L731;
  goto ret0;

 L731: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 3174 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT))
    {
      return 110;  /* zero_extendsidi2_32 */
    }
  goto ret0;

 L1043: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L1044;
    }
  goto ret0;

 L1044: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1045;
  goto ret0;

 L1045: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DImode:
      goto L16927;
    case CCmode:
      goto L16928;
    default:
      break;
    }
  goto ret0;

 L16927: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1046;
    }
  goto ret0;

 L1046: ATTRIBUTE_UNUSED_LABEL
  if (
#line 4247 "../.././gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	&& (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 154;  /* fix_truncdi_i387_fisttp_with_temp */
    }
  goto ret0;

 L16928: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 4286 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
   && !(reload_completed || reload_in_progress)))
    {
      return 157;  /* *fix_truncdi_i387_1 */
    }
  goto ret0;

 L1287: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L16930;
  goto ret0;

 L16930: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == PLUS)
    goto L1302;
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1288;
    }
  goto ret0;

 L1302: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ix86_carry_flag_operator (x4, DImode))
    {
      operands[3] = x4;
      goto L1303;
    }
  goto ret0;

 L1303: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L1304;
    }
  goto ret0;

 L1304: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x86_64_general_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1305;
    }
  goto ret0;

 L1305: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1306;
  goto ret0;

 L1306: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 4827 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (PLUS, DImode, operands)))
    {
      return 185;  /* adddi3_carry_rex64 */
    }
  goto ret0;

 L1288: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1289;
    }
 L1501: ATTRIBUTE_UNUSED_LABEL
  if (x86_64_general_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1502;
    }
  goto ret0;

 L1289: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1290;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L1501;

 L1290: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 4800 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_binary_operator_ok (PLUS, DImode, operands)))
    {
      return 184;  /* *adddi3_1 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L1501;

 L1502: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1503;
  goto ret0;

 L1503: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 5125 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (PLUS, DImode, operands)))
    {
      return 203;  /* *adddi_1_rex64 */
    }
  goto ret0;

 L1992: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2007;
    }
  goto ret0;

 L2007: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == PLUS)
    goto L2008;
  if (general_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1994;
    }
 L2025: ATTRIBUTE_UNUSED_LABEL
  if (x86_64_general_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2026;
    }
  goto ret0;

 L2008: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (ix86_carry_flag_operator (x4, DImode))
    {
      operands[3] = x4;
      goto L2009;
    }
  goto ret0;

 L2009: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x86_64_general_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L2010;
    }
  goto ret0;

 L2010: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2011;
  goto ret0;

 L2011: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 6556 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (MINUS, DImode, operands)))
    {
      return 234;  /* subdi3_carry_rex64 */
    }
  goto ret0;

 L1994: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1995;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2025;

 L1995: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 6530 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_binary_operator_ok (MINUS, DImode, operands)))
    {
      return 233;  /* *subdi3_1 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2025;

 L2026: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2027;
  goto ret0;

 L2027: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 6567 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (MINUS, DImode, operands)))
    {
      return 235;  /* *subdi_1_rex64 */
    }
  goto ret0;

 L3077: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3078;
    }
  goto ret0;

 L3078: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x86_64_szext_general_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L3079;
    }
  goto ret0;

 L3079: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3080;
  goto ret0;

 L3080: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 8056 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (AND, DImode, operands)))
    {
      return 297;  /* *anddi_1_rex64 */
    }
  goto ret0;

 L3393: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L16932;
  goto ret0;

 L16932: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case ASHIFT:
      goto L4707;
    case ASHIFTRT:
      goto L5039;
    case REG:
    case SUBREG:
    case MEM:
      goto L16931;
    default:
      goto ret0;
   }
 L16931: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3394;
    }
  goto ret0;

 L4707: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L4708;
  goto ret0;

 L4708: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonmemory_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L4709;
    }
  goto ret0;

 L4709: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == LSHIFTRT)
    goto L4710;
  goto ret0;

 L4710: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L4711;
    }
  goto ret0;

 L4711: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == QImode
      && GET_CODE (x4) == MINUS)
    goto L4712;
  goto ret0;

 L4712: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (64)])
    goto L4713;
  goto ret0;

 L4713: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (rtx_equal_p (x5, operands[2]))
    goto L4714;
  goto ret0;

 L4714: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4715;
  goto ret0;

 L4715: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 10306 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT))
    {
      return 408;  /* x86_64_shld */
    }
  goto ret0;

 L5039: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L5040;
  goto ret0;

 L5040: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonmemory_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L5041;
    }
  goto ret0;

 L5041: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ASHIFT)
    goto L5042;
  goto ret0;

 L5042: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L5043;
    }
  goto ret0;

 L5043: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == QImode
      && GET_CODE (x4) == MINUS)
    goto L5044;
  goto ret0;

 L5044: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (64)])
    goto L5045;
  goto ret0;

 L5045: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (rtx_equal_p (x5, operands[2]))
    goto L5046;
  goto ret0;

 L5046: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5047;
  goto ret0;

 L5047: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 11281 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT))
    {
      return 429;  /* x86_64_shrd */
    }
  goto ret0;

 L3394: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x86_64_general_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L3395;
    }
  goto ret0;

 L3395: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3396;
  goto ret0;

 L3396: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 8529 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (IOR, DImode, operands)))
    {
      return 315;  /* *iordi_1_rex64 */
    }
  goto ret0;

 L3776: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3777;
    }
  goto ret0;

 L3777: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x86_64_general_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L3778;
    }
  goto ret0;

 L3778: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3779;
  goto ret0;

 L3779: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 8902 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (XOR, DImode, operands)))
    {
      return 337;  /* *xordi_1_rex64 */
    }
  goto ret0;

 L4215: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (general_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L4216;
    }
 L4227: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L4228;
    }
  goto ret0;

 L4216: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4217;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L4227;

 L4217: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 9375 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT
   && ix86_unary_operator_ok (NEG, DImode, operands)))
    {
      return 362;  /* *negdi2_1 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L4227;

 L4228: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4229;
  goto ret0;

 L4229: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 9405 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_unary_operator_ok (NEG, DImode, operands)))
    {
      return 363;  /* *negdi2_1_rex64 */
    }
  goto ret0;

 L4731: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L4732;
    }
  goto ret0;

 L4732: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4733;
    }
  goto ret0;

 L4733: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4734;
  goto ret0;

 L4734: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 10343 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFT, DImode, operands)))
    {
      return 409;  /* *ashldi3_1_rex64 */
    }
  goto ret0;

 L5063: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L5064;
    }
  goto ret0;

 L5064: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L16934;
 L5092: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5093;
    }
  goto ret0;

 L16934: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L5065;
    }
 L16935: ATTRIBUTE_UNUSED_LABEL
  if (const1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5079;
    }
  goto L5092;

 L5065: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5066;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L16935;

 L5066: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 11302 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && INTVAL (operands[2]) == 63
   && (TARGET_USE_CLTD || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)))
    {
      return 430;  /* *ashrdi3_63_rex64 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L16935;

 L5079: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5080;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L5092;

 L5080: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 11319 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (TARGET_SHIFT1 || optimize_size)))
    {
      return 431;  /* *ashrdi3_1_one_bit_rex64 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L5092;

 L5093: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5094;
  goto ret0;

 L5094: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 11333 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)))
    {
      return 432;  /* *ashrdi3_1_rex64 */
    }
  goto ret0;

 L5628: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L5629;
    }
  goto ret0;

 L5629: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5630;
    }
 L5643: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5644;
    }
  goto ret0;

 L5630: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5631;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L5643;

 L5631: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 11981 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size)))
    {
      return 467;  /* *lshrdi3_1_one_bit_rex64 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L5643;

 L5644: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5645;
  goto ret0;

 L5645: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 11995 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)))
    {
      return 468;  /* *lshrdi3_1_rex64 */
    }
  goto ret0;

 L6111: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L6112;
    }
  goto ret0;

 L6112: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L6113;
    }
 L6126: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L6127;
    }
  goto ret0;

 L6113: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L6114;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L6126;

 L6114: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 12546 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (TARGET_SHIFT1 || optimize_size)))
    {
      return 499;  /* *rotlsi3_1_one_bit_rex64 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L6126;

 L6127: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L6128;
  goto ret0;

 L6128: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 12560 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATE, DImode, operands)))
    {
      return 500;  /* *rotldi3_1_rex64 */
    }
  goto ret0;

 L6304: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L6305;
    }
  goto ret0;

 L6305: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L6306;
    }
 L6319: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L6320;
    }
  goto ret0;

 L6306: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L6307;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L6319;

 L6307: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 12770 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (TARGET_SHIFT1 || optimize_size)))
    {
      return 512;  /* *rotrdi3_1_one_bit_rex64 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L6319;

 L6320: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L6321;
  goto ret0;

 L6321: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 12784 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, DImode, operands)))
    {
      return 513;  /* *rotrdi3_1_rex64 */
    }
  goto ret0;

 L16924: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1)
    goto L16936;
  goto ret0;

 L16936: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 66LL:
      goto L7976;
    case 74LL:
      goto L8066;
    case 75LL:
      goto L8216;
    default:
      break;
    }
  goto ret0;

 L7976: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L7977;
    }
  goto ret0;

 L7977: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L7978;
  goto ret0;

 L7978: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L7979;
    }
  goto ret0;

 L7979: ATTRIBUTE_UNUSED_LABEL
  if (
#line 17245 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 669;  /* fistdi2_with_temp */
    }
  goto ret0;

 L8066: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L8067;
    }
  goto ret0;

 L8067: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8068;
  goto ret0;

 L8068: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 17432 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress)))
    {
      return 680;  /* *fistdi2_floor_1 */
    }
  goto ret0;

 L8216: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L8217;
    }
  goto ret0;

 L8217: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8218;
  goto ret0;

 L8218: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 17673 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress)))
    {
      return 691;  /* *fistdi2_ceil_1 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_27 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L1384;
    case MULT:
      goto L2308;
    case DIV:
      goto L2683;
    case UDIV:
      goto L2861;
    case IOR:
      goto L3468;
    case XOR:
      goto L3851;
    case LSHIFTRT:
      goto L4262;
    case ASHIFT:
      goto L4776;
    case ASHIFTRT:
      goto L5167;
    case CTZ:
      goto L7141;
    case MINUS:
      goto L7169;
    case CALL:
      goto L7225;
    case PLUS:
      goto L7330;
    case UNSPEC:
      goto L16955;
    case IF_THEN_ELSE:
      goto L8957;
    case REG:
    case SUBREG:
      goto L16939;
    default:
      goto ret0;
   }
 L16939: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L570;
    }
  goto ret0;

 L1384: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L16956;
  goto ret0;

 L16956: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case PLUS:
      goto L1385;
    case MINUS:
      goto L2117;
    case MULT:
      goto L2337;
    case AND:
      goto L3119;
    case IOR:
      goto L3453;
    case XOR:
      goto L3836;
    case ASHIFT:
      goto L4830;
    case ASHIFTRT:
      goto L5221;
    case LSHIFTRT:
      goto L5777;
    case ROTATE:
      goto L6154;
    case ROTATERT:
      goto L6347;
    default:
     break;
   }
  goto ret0;

 L1385: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L16967;
  goto ret0;

 L16967: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x4) == PLUS)
    goto L1386;
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1593;
    }
  goto ret0;

 L1386: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (ix86_carry_flag_operator (x5, SImode))
    {
      operands[3] = x5;
      goto L1387;
    }
  goto ret0;

 L1387: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (nonimmediate_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L1388;
    }
  goto ret0;

 L1388: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1389;
    }
  goto ret0;

 L1389: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1390;
  goto ret0;

 L1390: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 4888 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (PLUS, SImode, operands)))
    {
      return 190;  /* *addsi3_carry_zext */
    }
  goto ret0;

 L1593: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1594;
    }
  goto ret0;

 L1594: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1595;
  goto ret0;

 L1595: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 5473 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (PLUS, SImode, operands)))
    {
      return 209;  /* addsi_1_zext */
    }
  goto ret0;

 L2117: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2118;
    }
  goto ret0;

 L2118: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == PLUS)
    goto L2119;
  if (general_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2153;
    }
  goto ret0;

 L2119: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (ix86_carry_flag_operator (x5, SImode))
    {
      operands[3] = x5;
      goto L2120;
    }
  goto ret0;

 L2120: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (general_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L2121;
    }
  goto ret0;

 L2121: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2122;
  goto ret0;

 L2122: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 6641 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (MINUS, SImode, operands)))
    {
      return 241;  /* subsi3_carry_zext */
    }
  goto ret0;

 L2153: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2154;
  goto ret0;

 L2154: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 6671 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (MINUS, SImode, operands)))
    {
      return 243;  /* *subsi_1_zext */
    }
  goto ret0;

 L2337: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2338;
    }
  goto ret0;

 L2338: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2339;
    }
  goto ret0;

 L2339: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2340;
  goto ret0;

 L2340: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 6925 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 257;  /* *mulsi3_1_zext */
    }
  goto ret0;

 L3119: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3120;
    }
  goto ret0;

 L3120: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L3121;
    }
  goto ret0;

 L3121: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3122;
  goto ret0;

 L3122: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 8198 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (AND, SImode, operands)))
    {
      return 300;  /* *andsi_1_zext */
    }
  goto ret0;

 L3453: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3454;
    }
  goto ret0;

 L3454: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L3455;
    }
  goto ret0;

 L3455: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3456;
  goto ret0;

 L3456: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 8588 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (IOR, SImode, operands)))
    {
      return 319;  /* *iorsi_1_zext */
    }
  goto ret0;

 L3836: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3837;
    }
  goto ret0;

 L3837: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L3838;
    }
  goto ret0;

 L3838: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3839;
  goto ret0;

 L3839: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 8965 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (XOR, SImode, operands)))
    {
      return 341;  /* *xorsi_1_zext */
    }
  goto ret0;

 L4830: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L4831;
    }
  goto ret0;

 L4831: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonmemory_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L4832;
    }
  goto ret0;

 L4832: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4833;
  goto ret0;

 L4833: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 10673 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFT, SImode, operands)))
    {
      return 415;  /* *ashlsi3_1_zext */
    }
  goto ret0;

 L5221: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L5222;
    }
  goto ret0;

 L5222: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT)
    goto L16969;
 L5282: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L5283;
    }
  goto ret0;

 L16969: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L5223;
    }
 L16970: ATTRIBUTE_UNUSED_LABEL
  if (const1_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L5253;
    }
  goto L5282;

 L5223: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5224;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L16970;

 L5224: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 11507 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_USE_CLTD || optimize_size)
   && INTVAL (operands[2]) == 31
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)))
    {
      return 440;  /* *ashrsi3_31_zext */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L16970;

 L5253: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5254;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L5282;

 L5254: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 11546 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size)))
    {
      return 442;  /* *ashrsi3_1_one_bit_zext */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L5282;

 L5283: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5284;
  goto ret0;

 L5284: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 11569 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)))
    {
      return 444;  /* *ashrsi3_1_zext */
    }
  goto ret0;

 L5777: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L5778;
    }
  goto ret0;

 L5778: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonmemory_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L5779;
    }
  goto ret0;

 L5779: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5780;
  goto ret0;

 L5780: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 12155 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)))
    {
      return 477;  /* *lshrsi3_1_zext */
    }
  goto ret0;

 L6154: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L6155;
    }
  goto ret0;

 L6155: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (const1_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L6156;
    }
 L6185: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L6186;
    }
  goto ret0;

 L6156: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L6157;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L6185;

 L6157: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 12595 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size)))
    {
      return 502;  /* *rotlsi3_1_one_bit_zext */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L6185;

 L6186: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L6187;
  goto ret0;

 L6187: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 12619 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATE, SImode, operands)))
    {
      return 504;  /* *rotlsi3_1_zext */
    }
  goto ret0;

 L6347: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L6348;
    }
  goto ret0;

 L6348: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (const1_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L6349;
    }
 L6378: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L6379;
    }
  goto ret0;

 L6349: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L6350;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L6378;

 L6350: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 12819 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size)))
    {
      return 515;  /* *rotrsi3_1_one_bit_zext */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L6378;

 L6379: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L6380;
  goto ret0;

 L6380: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 12846 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, SImode, operands)))
    {
      return 517;  /* *rotrsi3_1_zext */
    }
  goto ret0;

 L2308: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L16972;
  goto ret0;

 L16972: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case ZERO_EXTEND:
      goto L2435;
    case SIGN_EXTEND:
      goto L2471;
    case REG:
    case SUBREG:
    case MEM:
      goto L16971;
    default:
      goto ret0;
   }
 L16971: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2309;
    }
  goto ret0;

 L2435: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2436;
    }
  goto ret0;

 L2436: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L2437;
  goto ret0;

 L2437: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2438;
    }
  goto ret0;

 L2438: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2439;
  goto ret0;

 L2439: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 7088 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 263;  /* *umulsidi3_insn */
    }
  goto ret0;

 L2471: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2472;
    }
  goto ret0;

 L2472: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L2473;
  goto ret0;

 L2473: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2474;
    }
  goto ret0;

 L2474: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2475;
  goto ret0;

 L2475: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 7140 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 265;  /* *mulsidi3_insn */
    }
  goto ret0;

 L2309: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x86_64_general_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2310;
    }
  goto ret0;

 L2310: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2311;
  goto ret0;

 L2311: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 6869 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 255;  /* *muldi3_1_rex64 */
    }
  goto ret0;

 L2683: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2684;
    }
  goto ret0;

 L2684: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[3] = x3;
      goto L2685;
    }
  goto ret0;

 L2685: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2686;
  goto ret0;

 L2686: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2687;
    }
  goto ret0;

 L2687: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == MOD)
    goto L2688;
  goto ret0;

 L2688: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L2689;
  goto ret0;

 L2689: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[3])
      && 
#line 7424 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && !optimize_size && !TARGET_USE_CLTD)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 274;  /* *divmoddi4_nocltd_rex64 */
    }
 L2713: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x3, operands[3])
      && 
#line 7435 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && (optimize_size || TARGET_USE_CLTD))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 275;  /* *divmoddi4_cltd_rex64 */
    }
  goto ret0;

 L2861: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2862;
    }
  goto ret0;

 L2862: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2863;
    }
  goto ret0;

 L2863: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2864;
  goto ret0;

 L2864: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L2865;
    }
  goto ret0;

 L2865: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == UMOD)
    goto L2866;
  goto ret0;

 L2866: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2867;
  goto ret0;

 L2867: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 7589 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 281;  /* udivmoddi4 */
    }
  goto ret0;

 L3468: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L3469;
  goto ret0;

 L3469: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3470;
    }
  goto ret0;

 L3470: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x86_64_zext_immediate_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L3471;
    }
  goto ret0;

 L3471: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3472;
  goto ret0;

 L3472: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 8598 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT))
    {
      return 320;  /* *iorsi_1_zext_imm */
    }
  goto ret0;

 L3851: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L3852;
  goto ret0;

 L3852: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3853;
    }
  goto ret0;

 L3853: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x86_64_zext_immediate_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L3854;
    }
  goto ret0;

 L3854: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3855;
  goto ret0;

 L3855: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 8975 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (XOR, SImode, operands)))
    {
      return 342;  /* *xorsi_1_zext_imm */
    }
  goto ret0;

 L4262: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L16974;
  goto ret0;

 L16974: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case NEG:
      goto L4263;
    case ZERO_EXTEND:
      goto L5747;
    case REG:
    case SUBREG:
      goto L16975;
    default:
      goto ret0;
   }
 L16975: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L5719;
    }
  goto ret0;

 L4263: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == ASHIFT)
    goto L4264;
  goto ret0;

 L4264: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, DImode))
    {
      operands[1] = x5;
      goto L4265;
    }
  goto ret0;

 L4265: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (32)])
    goto L4266;
  goto ret0;

 L4266: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (32)])
    goto L4267;
  goto ret0;

 L4267: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4268;
  goto ret0;

 L4268: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 9449 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_unary_operator_ok (NEG, SImode, operands)))
    {
      return 366;  /* *negsi2_1_zext */
    }
  goto ret0;

 L5747: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L5748;
    }
  goto ret0;

 L5748: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const1_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5749;
    }
  goto ret0;

 L5749: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5750;
  goto ret0;

 L5750: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 12131 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size)))
    {
      return 475;  /* *lshrsi3_1_one_bit_zext */
    }
  goto ret0;

 L5719: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5720;
    }
  goto ret0;

 L5720: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5721;
  goto ret0;

 L5721: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 12076 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT))
    {
      return 473;  /* *lshrdi3_1 */
    }
  goto ret0;

 L4776: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (reg_or_pm1_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L4777;
    }
  goto ret0;

 L4777: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L4778;
    }
  goto ret0;

 L4778: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4779;
  goto ret0;

 L4779: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 10485 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT))
    {
      return 412;  /* *ashldi3_1 */
    }
  goto ret0;

 L5167: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L5168;
    }
  goto ret0;

 L5168: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L5169;
    }
  goto ret0;

 L5169: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5170;
  goto ret0;

 L5170: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 11414 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT))
    {
      return 437;  /* *ashrdi3_1 */
    }
  goto ret0;

 L7141: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L7142;
    }
  goto ret0;

 L7142: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L7143;
  goto ret0;

 L7143: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 14548 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT))
    {
      return 579;  /* ctzdi2 */
    }
  goto ret0;

 L7169: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (63)])
    goto L7170;
  goto ret0;

 L7170: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == CLZ)
    goto L7171;
  goto ret0;

 L7171: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L7172;
    }
  goto ret0;

 L7172: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L7173;
  goto ret0;

 L7173: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 14590 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT))
    {
      return 581;  /* *bsr_rex64 */
    }
  goto ret0;

 L7225: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == QImode
      && GET_CODE (x3) == MEM)
    goto L7226;
  goto ret0;

 L7226: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode)
    goto L16977;
  goto ret0;

 L16977: ATTRIBUTE_UNUSED_LABEL
  if (call_insn_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L7227;
    }
 L16978: ATTRIBUTE_UNUSED_LABEL
  if (call_insn_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L7273;
    }
  goto ret0;

 L7227: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[3] = x3;
  goto L7228;

 L7228: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 17)
    goto L7229;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L16978;

 L7229: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (tls_symbolic_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L7230;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L16978;

 L7230: ATTRIBUTE_UNUSED_LABEL
  if (
#line 14662 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT))
    {
      return 584;  /* *tls_global_dynamic_64 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L16978;

 L7273: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L7274;

 L7274: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 18)
    goto L7275;
  goto ret0;

 L7275: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && 
#line 14740 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT))
    {
      return 587;  /* *tls_local_dynamic_base_64 */
    }
  goto ret0;

 L7330: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L16979;
  goto ret0;

 L16979: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == UNSPEC)
    goto L16981;
  goto ret0;

 L16981: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x3, 0))
    {
    case 1:
      goto L16983;
    case 3:
      goto L16984;
    default:
      break;
    }
  goto ret0;

 L16983: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x3, 1) == 16)
    goto L7331;
  goto ret0;

 L7331: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L7332;
  goto ret0;

 L7332: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L7333;
    }
  goto ret0;

 L7333: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L7334;
  goto ret0;

 L7334: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 14827 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT))
    {
      return 592;  /* *add_tp_di */
    }
  goto ret0;

 L16984: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x3, 1) == 19)
    goto L7418;
  goto ret0;

 L7418: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (tls_modbase_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L7419;
    }
  goto ret0;

 L7419: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  operands[3] = x4;
  goto L7420;

 L7420: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L7421;
  goto ret0;

 L7421: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == CONST)
    goto L7422;
  goto ret0;

 L7422: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == UNSPEC
      && XVECLEN (x4, 0) == 1
      && XINT (x4, 1) == 6)
    goto L7423;
  goto ret0;

 L7423: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (tls_symbolic_operand (x5, DImode))
    {
      operands[1] = x5;
      goto L7424;
    }
  goto ret0;

 L7424: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L7425;
  goto ret0;

 L7425: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 14954 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_GNU2_TLS))
    {
      return 598;  /* *tls_dynamic_gnu2_combine_64 */
    }
  goto ret0;

 L16955: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 3
      && XINT (x2, 1) == 19)
    goto L7402;
  goto ret0;

 L7402: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (tls_symbolic_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L7403;
    }
  goto ret0;

 L7403: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L7404;
    }
  goto ret0;

 L7404: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L7405;
  goto ret0;

 L7405: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L7406;
  goto ret0;

 L7406: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 14937 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_GNU2_TLS))
    {
      return 597;  /* *tls_dynamic_call_64 */
    }
  goto ret0;

 L8957: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ix86_carry_flag_operator (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L8958;
    }
  goto ret0;

 L8958: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (-1)])
    goto L8959;
  goto ret0;

 L8959: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L8960;
  goto ret0;

 L8960: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L8961;
  goto ret0;

 L8961: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 18898 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT))
    {
      return 733;  /* x86_movdicc_0_m1_rex64 */
    }
  goto ret0;

 L570: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L571;
  goto ret0;

 L571: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L572;
  goto ret0;

 L572: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[0])
      && 
#line 2119 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT))
    {
      return 84;  /* *swapdi_rex64 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_28 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case PLUS:
      goto L1515;
    case NEG:
      goto L1528;
    case MINUS:
      goto L2039;
    case AND:
      goto L3092;
    case IOR:
      goto L3408;
    case XOR:
      goto L3791;
    case NOT:
      goto L4600;
    case ASHIFT:
      goto L4746;
    case ASHIFTRT:
      goto L5106;
    case LSHIFTRT:
      goto L5657;
    case REG:
    case SUBREG:
    case MEM:
      goto L17087;
    default:
      goto ret0;
   }
 L17087: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1545;
    }
  goto ret0;

 L1515: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L1516;
    }
  goto ret0;

 L1516: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x86_64_general_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L1517;
    }
  goto ret0;

 L1517: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L1518;
  goto ret0;

 L1518: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L1519;
    case CLOBBER:
      goto L1564;
    default:
     break;
   }
  goto ret0;

 L1519: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L1520;
    }
  goto ret0;

 L1520: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == PLUS)
    goto L1521;
  goto ret0;

 L1521: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1522;
  goto ret0;

 L1522: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 5195 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, DImode, operands)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode)))
    {
      return 204;  /* *adddi_2_rex64 */
    }
  goto ret0;

 L1564: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L1565;
    }
  goto ret0;

 L1565: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5341 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCGOCmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode)))
    {
      return 207;  /* *adddi_5_rex64 */
    }
  goto ret0;

 L1528: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (x86_64_general_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L1529;
    }
  goto ret0;

 L1529: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x86_64_general_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1530;
    }
  goto ret0;

 L1530: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1531;
  goto ret0;

 L1531: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L1532;
    }
  goto ret0;

 L1532: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5243 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCZmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode)))
    {
      return 205;  /* *adddi_3_rex64 */
    }
  goto ret0;

 L2039: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L2040;
    }
  goto ret0;

 L2040: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x86_64_general_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L2041;
    }
  goto ret0;

 L2041: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2042;
  goto ret0;

 L2042: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2043;
  goto ret0;

 L2043: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L2044;
    }
  goto ret0;

 L2044: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == MINUS)
    goto L2045;
  goto ret0;

 L2045: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2046;
  goto ret0;

 L2046: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 6580 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, DImode, operands)))
    {
      return 236;  /* *subdi_2_rex64 */
    }
  goto ret0;

 L3092: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L3093;
    }
  goto ret0;

 L3093: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x86_64_szext_general_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L3094;
    }
  goto ret0;

 L3094: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3095;
  goto ret0;

 L3095: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3096;
  goto ret0;

 L3096: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L3097;
    }
  goto ret0;

 L3097: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == AND)
    goto L3098;
  goto ret0;

 L3098: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3099;
  goto ret0;

 L3099: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 8099 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, DImode, operands)))
    {
      return 298;  /* *anddi_2 */
    }
  goto ret0;

 L3408: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L3409;
    }
  goto ret0;

 L3409: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x86_64_general_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L3410;
    }
  goto ret0;

 L3410: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3411;
  goto ret0;

 L3411: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L3412;
    case CLOBBER:
      goto L3425;
    default:
     break;
   }
  goto ret0;

 L3412: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L3413;
    }
  goto ret0;

 L3413: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == IOR)
    goto L3414;
  goto ret0;

 L3414: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3415;
  goto ret0;

 L3415: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 8542 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, DImode, operands)))
    {
      return 316;  /* *iordi_2_rex64 */
    }
  goto ret0;

 L3425: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L3426;
    }
  goto ret0;

 L3426: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8555 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, DImode, operands)))
    {
      return 317;  /* *iordi_3_rex64 */
    }
  goto ret0;

 L3791: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L3792;
    }
  goto ret0;

 L3792: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x86_64_general_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L3793;
    }
  goto ret0;

 L3793: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3794;
  goto ret0;

 L3794: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L3795;
    case CLOBBER:
      goto L3808;
    default:
     break;
   }
  goto ret0;

 L3795: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L3796;
    }
  goto ret0;

 L3796: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == XOR)
    goto L3797;
  goto ret0;

 L3797: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3798;
  goto ret0;

 L3798: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 8917 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, DImode, operands)))
    {
      return 338;  /* *xordi_2_rex64 */
    }
  goto ret0;

 L3808: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L3809;
    }
  goto ret0;

 L3809: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8932 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, DImode, operands)))
    {
      return 339;  /* *xordi_3_rex64 */
    }
  goto ret0;

 L4600: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L4601;
    }
  goto ret0;

 L4601: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L4602;
  goto ret0;

 L4602: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4603;
  goto ret0;

 L4603: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L4604;
    }
  goto ret0;

 L4604: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == NOT)
    goto L4605;
  goto ret0;

 L4605: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1])
      && 
#line 10036 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, DImode, operands)))
    {
      return 397;  /* *one_cmpldi2_2_rex64 */
    }
  goto ret0;

 L4746: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L4747;
    }
  goto ret0;

 L4747: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (immediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L4748;
    }
  goto ret0;

 L4748: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L4749;
  goto ret0;

 L4749: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L4750;
    case CLOBBER:
      goto L4763;
    default:
     break;
   }
  goto ret0;

 L4750: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L4751;
    }
  goto ret0;

 L4751: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ASHIFT)
    goto L4752;
  goto ret0;

 L4752: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4753;
  goto ret0;

 L4753: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 10405 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, DImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))))
    {
      return 410;  /* *ashldi3_cmp_rex64 */
    }
  goto ret0;

 L4763: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L4764;
    }
  goto ret0;

 L4764: ATTRIBUTE_UNUSED_LABEL
  if (
#line 10446 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, DImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || TARGET_DOUBLE_WITH_ADD)))))
    {
      return 411;  /* *ashldi3_cconly_rex64 */
    }
  goto ret0;

 L5106: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L5107;
    }
  goto ret0;

 L5107: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT)
    goto L17130;
  goto ret0;

 L17130: ATTRIBUTE_UNUSED_LABEL
  if (const1_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L5108;
    }
 L17131: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L5139;
    }
  goto ret0;

 L5108: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L5109;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17131;

 L5109: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L5110;
    case CLOBBER:
      goto L5123;
    default:
     break;
   }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17131;

 L5110: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L5111;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17131;

 L5111: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ASHIFTRT)
    goto L5112;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17131;

 L5112: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5113;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17131;

 L5113: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 11351 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)))
    {
      return 433;  /* *ashrdi3_one_bit_cmp_rex64 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17131;

 L5123: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L5124;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17131;

 L5124: ATTRIBUTE_UNUSED_LABEL
  if (
#line 11368 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)))
    {
      return 434;  /* *ashrdi3_one_bit_cconly_rex64 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17131;

 L5139: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L5140;
  goto ret0;

 L5140: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L5141;
    case CLOBBER:
      goto L5154;
    default:
     break;
   }
  goto ret0;

 L5141: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L5142;
    }
  goto ret0;

 L5142: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ASHIFTRT)
    goto L5143;
  goto ret0;

 L5143: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5144;
  goto ret0;

 L5144: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 11386 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL)))
    {
      return 435;  /* *ashrdi3_cmp_rex64 */
    }
  goto ret0;

 L5154: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L5155;
    }
  goto ret0;

 L5155: ATTRIBUTE_UNUSED_LABEL
  if (
#line 11401 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL)))
    {
      return 436;  /* *ashrdi3_cconly_rex64 */
    }
  goto ret0;

 L5657: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L5658;
    }
  goto ret0;

 L5658: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT)
    goto L17132;
  goto ret0;

 L17132: ATTRIBUTE_UNUSED_LABEL
  if (const1_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L5659;
    }
 L17133: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L5690;
    }
  goto ret0;

 L5659: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L5660;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17133;

 L5660: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L5661;
    case CLOBBER:
      goto L5674;
    default:
     break;
   }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17133;

 L5661: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L5662;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17133;

 L5662: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L5663;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17133;

 L5663: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5664;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17133;

 L5664: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 12013 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)))
    {
      return 469;  /* *lshrdi3_cmp_one_bit_rex64 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17133;

 L5674: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L5675;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17133;

 L5675: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12030 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)))
    {
      return 470;  /* *lshrdi3_cconly_one_bit_rex64 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17133;

 L5690: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L5691;
  goto ret0;

 L5691: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L5692;
    case CLOBBER:
      goto L5705;
    default:
     break;
   }
  goto ret0;

 L5692: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L5693;
    }
  goto ret0;

 L5693: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L5694;
  goto ret0;

 L5694: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5695;
  goto ret0;

 L5695: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 12048 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL)))
    {
      return 471;  /* *lshrdi3_cmp_rex64 */
    }
  goto ret0;

 L5705: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L5706;
    }
  goto ret0;

 L5706: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12063 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL)))
    {
      return 472;  /* *lshrdi3_cconly_rex64 */
    }
  goto ret0;

 L1545: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x86_64_immediate_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1546;
    }
 L2052: ATTRIBUTE_UNUSED_LABEL
  if (x86_64_general_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2053;
    }
  goto ret0;

 L1546: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1547;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2052;

 L1547: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L1548;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2052;

 L1548: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5300 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   &&  ix86_match_ccmode (insn, CCGCmode)))
    {
      return 206;  /* *adddi_4_rex64 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2052;

 L2053: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2054;
  goto ret0;

 L2054: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L2055;
    }
  goto ret0;

 L2055: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == MINUS)
    goto L2056;
  goto ret0;

 L2056: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2057;
  goto ret0;

 L2057: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 6592 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands)))
    {
      return 237;  /* *subdi_3_rex63 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_29 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case PLUS:
      goto L1608;
    case NEG:
      goto L1635;
    case MINUS:
      goto L2167;
    case AND:
      goto L3135;
    case IOR:
      goto L3485;
    case XOR:
      goto L3868;
    case NOT:
      goto L4622;
    case ASHIFT:
      goto L4846;
    case ASHIFTRT:
      goto L5297;
    case LSHIFTRT:
      goto L5793;
    case REG:
    case SUBREG:
    case MEM:
      goto L17090;
    default:
      goto L17099;
   }
 L17090: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1665;
    }
 L17099: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2205;
    }
  goto ret0;

 L1608: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1609;
    }
  goto ret0;

 L1609: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1610;
    }
  goto ret0;

 L1610: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L1611;
  goto ret0;

 L1611: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L1612;
    case CLOBBER:
      goto L1684;
    default:
     break;
   }
  goto ret0;

 L1612: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L17134;
    case DImode:
      goto L17135;
    default:
      break;
    }
  goto ret0;

 L17134: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1613;
    }
  goto ret0;

 L1613: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L1614;
  goto ret0;

 L1614: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1615;
  goto ret0;

 L1615: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 5541 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode)))
    {
      return 210;  /* *addsi_2 */
    }
  goto ret0;

 L17135: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L1626;
    }
  goto ret0;

 L1626: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L1627;
  goto ret0;

 L1627: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L1628;
  goto ret0;

 L1628: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L1629;
  goto ret0;

 L1629: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && 
#line 5589 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode)))
    {
      return 211;  /* *addsi_2_zext */
    }
  goto ret0;

 L1684: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1685;
    }
  goto ret0;

 L1685: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5766 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode)))
    {
      return 215;  /* *addsi_5 */
    }
  goto ret0;

 L1635: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (general_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1636;
    }
  goto ret0;

 L1636: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1637;
    }
  goto ret0;

 L1637: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case CLOBBER:
      goto L1638;
    case SET:
      goto L1655;
    default:
     break;
   }
  goto ret0;

 L1638: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1639;
    }
  goto ret0;

 L1639: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5631 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCZmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode)))
    {
      return 212;  /* *addsi_3 */
    }
  goto ret0;

 L1655: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L1656;
    }
  goto ret0;

 L1656: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L1657;
  goto ret0;

 L1657: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L1658;
  goto ret0;

 L1658: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L1659;
  goto ret0;

 L1659: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && 
#line 5677 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCZmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode)))
    {
      return 213;  /* *addsi_3_zext */
    }
  goto ret0;

 L2167: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L17136;
  goto ret0;

 L17136: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2168;
    }
 L17137: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2181;
    }
  goto ret0;

 L2168: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2169;
    }
  x4 = XEXP (x3, 0);
  goto L17137;

 L2169: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2170;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17137;

 L2170: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2171;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17137;

 L2171: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2172;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17137;

 L2172: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MINUS)
    goto L2173;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17137;

 L2173: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2174;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17137;

 L2174: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 6684 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands)))
    {
      return 244;  /* *subsi_2 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17137;

 L2181: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2182;
    }
  goto ret0;

 L2182: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2183;
  goto ret0;

 L2183: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2184;
  goto ret0;

 L2184: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L2185;
    }
  goto ret0;

 L2185: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L2186;
  goto ret0;

 L2186: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MINUS)
    goto L2187;
  goto ret0;

 L2187: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L2188;
  goto ret0;

 L2188: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && 
#line 6700 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands)))
    {
      return 245;  /* *subsi_2_zext */
    }
  goto ret0;

 L3135: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L17139;
  goto ret0;

 L17139: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x4) == ZERO_EXTRACT)
    goto L3286;
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3136;
    }
  goto ret0;

 L3286: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (ext_register_operand (x5, VOIDmode))
    {
      operands[1] = x5;
      goto L3287;
    }
  goto ret0;

 L3287: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L3288;
  goto ret0;

 L3288: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 2);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L3289;
  goto ret0;

 L3289: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (const_int_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L3290;
    }
  goto ret0;

 L3290: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3291;
  goto ret0;

 L3291: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3292;
  goto ret0;

 L3292: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTRACT)
    goto L3293;
  goto ret0;

 L3293: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L3294;
    }
  goto ret0;

 L3294: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L3295;
  goto ret0;

 L3295: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L3296;
  goto ret0;

 L3296: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == AND)
    goto L3297;
  goto ret0;

 L3297: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L3298;
  goto ret0;

 L3298: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L3299;
  goto ret0;

 L3299: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L3300;
  goto ret0;

 L3300: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L3301;
  goto ret0;

 L3301: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 8404 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)))
    {
      return 311;  /* *andqi_ext_0_cc */
    }
  goto ret0;

 L3136: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L3137;
    }
  goto ret0;

 L3137: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3138;
  goto ret0;

 L3138: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3139;
  goto ret0;

 L3139: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L17140;
    case DImode:
      goto L17141;
    default:
      break;
    }
  goto ret0;

 L17140: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3140;
    }
  goto ret0;

 L3140: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == AND)
    goto L3141;
  goto ret0;

 L3141: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3142;
  goto ret0;

 L3142: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 8210 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, SImode, operands)))
    {
      return 301;  /* *andsi_2 */
    }
  goto ret0;

 L17141: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L3153;
    }
  goto ret0;

 L3153: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L3154;
  goto ret0;

 L3154: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == AND)
    goto L3155;
  goto ret0;

 L3155: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L3156;
  goto ret0;

 L3156: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && 
#line 8224 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, SImode, operands)))
    {
      return 302;  /* *andsi_2_zext */
    }
  goto ret0;

 L3485: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3486;
    }
  goto ret0;

 L3486: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L3487;
    }
 L3513: ATTRIBUTE_UNUSED_LABEL
  if (x86_64_zext_immediate_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L3514;
    }
  goto ret0;

 L3487: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3488;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3513;

 L3488: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L3489;
    case CLOBBER:
      goto L3530;
    default:
     break;
   }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3513;

 L3489: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L17142;
    case DImode:
      goto L17143;
    default:
      break;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3513;

 L17142: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3490;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3513;

 L3490: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == IOR)
    goto L3491;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3513;

 L3491: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3492;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3513;

 L3492: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 8610 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, SImode, operands)))
    {
      return 321;  /* *iorsi_2 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3513;

 L17143: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L3503;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3513;

 L3503: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L3504;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3513;

 L3504: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == IOR)
    goto L3505;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3513;

 L3505: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L3506;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3513;

 L3506: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && 
#line 8625 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, SImode, operands)))
    {
      return 322;  /* *iorsi_2_zext */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3513;

 L3530: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3531;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3513;

 L3531: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8650 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 324;  /* *iorsi_3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3513;

 L3514: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3515;
  goto ret0;

 L3515: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3516;
  goto ret0;

 L3516: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L3517;
    }
  goto ret0;

 L3517: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == IOR)
    goto L3518;
  goto ret0;

 L3518: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L3519;
  goto ret0;

 L3519: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L3520;
  goto ret0;

 L3520: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 8638 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, SImode, operands)))
    {
      return 323;  /* *iorsi_2_zext_imm */
    }
  goto ret0;

 L3868: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L17145;
  goto ret0;

 L17145: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x4) == ZERO_EXTRACT)
    goto L4161;
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3869;
    }
  goto ret0;

 L4161: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (ext_register_operand (x5, VOIDmode))
    {
      operands[1] = x5;
      goto L4162;
    }
  goto ret0;

 L4162: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L4163;
  goto ret0;

 L4163: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 2);
  if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L4164;
  goto ret0;

 L4164: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L4165;
    }
 L4186: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L4187;
    }
  goto ret0;

 L4165: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L4166;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4186;

 L4166: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4167;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4186;

 L4167: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTRACT)
    goto L4168;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4186;

 L4168: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L4169;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4186;

 L4169: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L4170;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4186;

 L4170: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L4171;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4186;

 L4171: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == XOR)
    goto L4172;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4186;

 L4172: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L4173;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4186;

 L4173: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L4174;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4186;

 L4174: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L4175;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4186;

 L4175: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L4176;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4186;

 L4176: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 9239 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)))
    {
      return 359;  /* *xorqi_cc_ext_1 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L4186;

 L4187: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L4188;
  goto ret0;

 L4188: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4189;
  goto ret0;

 L4189: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTRACT)
    goto L4190;
  goto ret0;

 L4190: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (ext_register_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L4191;
    }
  goto ret0;

 L4191: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L4192;
  goto ret0;

 L4192: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L4193;
  goto ret0;

 L4193: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == XOR)
    goto L4194;
  goto ret0;

 L4194: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L4195;
  goto ret0;

 L4195: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L4196;
  goto ret0;

 L4196: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L4197;
  goto ret0;

 L4197: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (8)])
    goto L4198;
  goto ret0;

 L4198: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 9260 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)))
    {
      return 360;  /* *xorqi_cc_ext_1_rex64 */
    }
  goto ret0;

 L3869: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L3870;
    }
 L3896: ATTRIBUTE_UNUSED_LABEL
  if (x86_64_zext_immediate_operand (x4, VOIDmode))
    {
      operands[2] = x4;
      goto L3897;
    }
  goto ret0;

 L3870: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3871;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3896;

 L3871: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L3872;
    case CLOBBER:
      goto L3913;
    default:
     break;
   }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3896;

 L3872: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L17146;
    case DImode:
      goto L17147;
    default:
      break;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3896;

 L17146: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3873;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3896;

 L3873: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == XOR)
    goto L3874;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3896;

 L3874: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3875;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3896;

 L3875: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 8987 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, SImode, operands)))
    {
      return 343;  /* *xorsi_2 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3896;

 L17147: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L3886;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3896;

 L3886: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L3887;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3896;

 L3887: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == XOR)
    goto L3888;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3896;

 L3888: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L3889;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3896;

 L3889: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && 
#line 9002 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, SImode, operands)))
    {
      return 344;  /* *xorsi_2_zext */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3896;

 L3913: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3914;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3896;

 L3914: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9027 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 346;  /* *xorsi_3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L3896;

 L3897: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3898;
  goto ret0;

 L3898: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3899;
  goto ret0;

 L3899: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L3900;
    }
  goto ret0;

 L3900: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == XOR)
    goto L3901;
  goto ret0;

 L3901: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L3902;
  goto ret0;

 L3902: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L3903;
  goto ret0;

 L3903: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 9015 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, SImode, operands)))
    {
      return 345;  /* *xorsi_2_zext_imm */
    }
  goto ret0;

 L4622: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L17148;
  goto ret0;

 L17148: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L4623;
    }
 L17149: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L4634;
    }
  goto ret0;

 L4623: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L4624;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17149;

 L4624: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4625;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17149;

 L4625: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L4626;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17149;

 L4626: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == NOT)
    goto L4627;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17149;

 L4627: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1])
      && 
#line 10087 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, SImode, operands)))
    {
      return 400;  /* *one_cmplsi2_2 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17149;

 L4634: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L4635;
  goto ret0;

 L4635: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4636;
  goto ret0;

 L4636: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L4637;
    }
  goto ret0;

 L4637: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L4638;
  goto ret0;

 L4638: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == NOT)
    goto L4639;
  goto ret0;

 L4639: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1])
      && 
#line 10115 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, SImode, operands)))
    {
      return 401;  /* *one_cmplsi2_2_zext */
    }
  goto ret0;

 L4846: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L17150;
  goto ret0;

 L17150: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L4847;
    }
 L17151: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L4878;
    }
  goto ret0;

 L4847: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (const_1_to_31_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L4848;
    }
  x4 = XEXP (x3, 0);
  goto L17151;

 L4848: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L4849;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17151;

 L4849: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L4850;
    case CLOBBER:
      goto L4863;
    default:
     break;
   }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17151;

 L4850: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L4851;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17151;

 L4851: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ASHIFT)
    goto L4852;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17151;

 L4852: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4853;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17151;

 L4853: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 10732 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))))
    {
      return 416;  /* *ashlsi3_cmp */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17151;

 L4863: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L4864;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17151;

 L4864: ATTRIBUTE_UNUSED_LABEL
  if (
#line 10773 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || TARGET_DOUBLE_WITH_ADD)))))
    {
      return 417;  /* *ashlsi3_cconly */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17151;

 L4878: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (const_1_to_31_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L4879;
    }
  goto ret0;

 L4879: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L4880;
  goto ret0;

 L4880: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4881;
  goto ret0;

 L4881: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L4882;
    }
  goto ret0;

 L4882: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L4883;
  goto ret0;

 L4883: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ASHIFT)
    goto L4884;
  goto ret0;

 L4884: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L4885;
  goto ret0;

 L4885: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && 
#line 10815 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || TARGET_DOUBLE_WITH_ADD)))))
    {
      return 418;  /* *ashlsi3_cmp_zext */
    }
  goto ret0;

 L5297: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L17152;
  goto ret0;

 L17152: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L5298;
    }
 L17153: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L5329;
    }
  goto ret0;

 L5298: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT)
    goto L17154;
  x4 = XEXP (x3, 0);
  goto L17153;

 L17154: ATTRIBUTE_UNUSED_LABEL
  if (const1_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L5299;
    }
 L17155: ATTRIBUTE_UNUSED_LABEL
  if (const_1_to_31_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L5344;
    }
  x4 = XEXP (x3, 0);
  goto L17153;

 L5299: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L5300;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17155;

 L5300: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L5301;
    case CLOBBER:
      goto L5314;
    default:
     break;
   }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17155;

 L5301: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L5302;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17155;

 L5302: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ASHIFTRT)
    goto L5303;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17155;

 L5303: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5304;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17155;

 L5304: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 11587 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)))
    {
      return 445;  /* *ashrsi3_one_bit_cmp */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17155;

 L5314: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L5315;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17155;

 L5315: ATTRIBUTE_UNUSED_LABEL
  if (
#line 11604 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)))
    {
      return 446;  /* *ashrsi3_one_bit_cconly */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17155;

 L5344: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L5345;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17153;

 L5345: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L5346;
    case CLOBBER:
      goto L5359;
    default:
     break;
   }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17153;

 L5346: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L5347;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17153;

 L5347: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ASHIFTRT)
    goto L5348;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17153;

 L5348: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5349;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17153;

 L5349: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 11637 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL)))
    {
      return 448;  /* *ashrsi3_cmp */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17153;

 L5359: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L5360;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17153;

 L5360: ATTRIBUTE_UNUSED_LABEL
  if (
#line 11652 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL)))
    {
      return 449;  /* *ashrsi3_cconly */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17153;

 L5329: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT)
    goto L17156;
  goto ret0;

 L17156: ATTRIBUTE_UNUSED_LABEL
  if (const1_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L5330;
    }
 L17157: ATTRIBUTE_UNUSED_LABEL
  if (const_1_to_31_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L5375;
    }
  goto ret0;

 L5330: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L5331;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17157;

 L5331: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5332;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17157;

 L5332: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L5333;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17157;

 L5333: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L5334;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17157;

 L5334: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ASHIFTRT)
    goto L5335;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17157;

 L5335: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L5336;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17157;

 L5336: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && 
#line 11619 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)))
    {
      return 447;  /* *ashrsi3_one_bit_cmp_zext */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17157;

 L5375: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L5376;
  goto ret0;

 L5376: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5377;
  goto ret0;

 L5377: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L5378;
    }
  goto ret0;

 L5378: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L5379;
  goto ret0;

 L5379: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ASHIFTRT)
    goto L5380;
  goto ret0;

 L5380: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L5381;
  goto ret0;

 L5381: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && 
#line 11668 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL)))
    {
      return 450;  /* *ashrsi3_cmp_zext */
    }
  goto ret0;

 L5793: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L17158;
  goto ret0;

 L17158: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L5794;
    }
 L17159: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L5825;
    }
  goto ret0;

 L5794: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT)
    goto L17160;
  x4 = XEXP (x3, 0);
  goto L17159;

 L17160: ATTRIBUTE_UNUSED_LABEL
  if (const1_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L5795;
    }
 L17161: ATTRIBUTE_UNUSED_LABEL
  if (const_1_to_31_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L5840;
    }
  x4 = XEXP (x3, 0);
  goto L17159;

 L5795: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L5796;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17161;

 L5796: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L5797;
    case CLOBBER:
      goto L5810;
    default:
     break;
   }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17161;

 L5797: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L5798;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17161;

 L5798: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L5799;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17161;

 L5799: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5800;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17161;

 L5800: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 12173 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)))
    {
      return 478;  /* *lshrsi3_one_bit_cmp */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17161;

 L5810: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L5811;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17161;

 L5811: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12190 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)))
    {
      return 479;  /* *lshrsi3_one_bit_cconly */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17161;

 L5840: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L5841;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17159;

 L5841: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L5842;
    case CLOBBER:
      goto L5855;
    default:
     break;
   }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17159;

 L5842: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L5843;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17159;

 L5843: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L5844;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17159;

 L5844: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5845;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17159;

 L5845: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 12223 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL)))
    {
      return 481;  /* *lshrsi3_cmp */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17159;

 L5855: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L5856;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17159;

 L5856: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12238 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL)))
    {
      return 482;  /* *lshrsi3_cconly */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17159;

 L5825: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT)
    goto L17162;
  goto ret0;

 L17162: ATTRIBUTE_UNUSED_LABEL
  if (const1_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L5826;
    }
 L17163: ATTRIBUTE_UNUSED_LABEL
  if (const_1_to_31_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L5871;
    }
  goto ret0;

 L5826: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L5827;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17163;

 L5827: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5828;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17163;

 L5828: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L5829;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17163;

 L5829: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L5830;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17163;

 L5830: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L5831;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17163;

 L5831: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L5832;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17163;

 L5832: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 12205 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)))
    {
      return 480;  /* *lshrsi3_cmp_one_bit_zext */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17163;

 L5871: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L5872;
  goto ret0;

 L5872: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5873;
  goto ret0;

 L5873: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L5874;
    }
  goto ret0;

 L5874: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L5875;
  goto ret0;

 L5875: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L5876;
  goto ret0;

 L5876: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L5877;
  goto ret0;

 L5877: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 12254 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL)))
    {
      return 483;  /* *lshrsi3_cmp_zext */
    }
  goto ret0;

 L1665: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1666;
    }
 L2194: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2195;
    }
  x3 = XEXP (x2, 0);
  goto L17099;

 L1666: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1667;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2194;

 L1667: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1668;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2194;

 L1668: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5727 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGCmode)
   && (INTVAL (operands[2]) & 0xffffffff) != 0x80000000))
    {
      return 214;  /* *addsi_4 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2194;

 L2195: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2196;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L17099;

 L2196: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2197;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L17099;

 L2197: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MINUS)
    goto L2198;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L17099;

 L2198: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2199;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L17099;

 L2199: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 6712 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands)))
    {
      return 246;  /* *subsi_3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L17099;

 L2205: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2206;
    }
  goto ret0;

 L2206: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2207;
  goto ret0;

 L2207: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L2208;
    }
  goto ret0;

 L2208: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L2209;
  goto ret0;

 L2209: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MINUS)
    goto L2210;
  goto ret0;

 L2210: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L2211;
  goto ret0;

 L2211: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && 
#line 6726 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands)))
    {
      return 247;  /* *subsi_3_zext */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_30 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case PLUS:
      goto L1726;
    case NEG:
      goto L1739;
    case MINUS:
      goto L2231;
    case AND:
      goto L3176;
    case IOR:
      goto L3558;
    case XOR:
      goto L3941;
    case NOT:
      goto L4650;
    case ASHIFT:
      goto L4919;
    case ASHIFTRT:
      goto L5415;
    case LSHIFTRT:
      goto L5911;
    case REG:
    case SUBREG:
    case MEM:
      goto L17093;
    default:
      goto ret0;
   }
 L17093: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1756;
    }
  goto ret0;

 L1726: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L1727;
    }
  goto ret0;

 L1727: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L1728;
    }
  goto ret0;

 L1728: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L1729;
  goto ret0;

 L1729: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L1730;
    case CLOBBER:
      goto L1775;
    default:
     break;
   }
  goto ret0;

 L1730: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L1731;
    }
  goto ret0;

 L1731: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == PLUS)
    goto L1732;
  goto ret0;

 L1732: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1733;
  goto ret0;

 L1733: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 5907 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, HImode, operands)))
    {
      return 218;  /* *addhi_2 */
    }
  goto ret0;

 L1775: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L1776;
    }
  goto ret0;

 L1776: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6026 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 221;  /* *addhi_5 */
    }
  goto ret0;

 L1739: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (general_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L1740;
    }
  goto ret0;

 L1740: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1741;
    }
  goto ret0;

 L1741: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1742;
  goto ret0;

 L1742: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L1743;
    }
  goto ret0;

 L1743: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5946 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCZmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 219;  /* *addhi_3 */
    }
  goto ret0;

 L2231: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L2232;
    }
  goto ret0;

 L2232: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L2233;
    }
  goto ret0;

 L2233: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2234;
  goto ret0;

 L2234: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2235;
  goto ret0;

 L2235: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L2236;
    }
  goto ret0;

 L2236: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == MINUS)
    goto L2237;
  goto ret0;

 L2237: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2238;
  goto ret0;

 L2238: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 6758 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, HImode, operands)))
    {
      return 249;  /* *subhi_2 */
    }
  goto ret0;

 L3176: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L3177;
    }
  goto ret0;

 L3177: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L3178;
    }
  goto ret0;

 L3178: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3179;
  goto ret0;

 L3179: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3180;
  goto ret0;

 L3180: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L3181;
    }
  goto ret0;

 L3181: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == AND)
    goto L3182;
  goto ret0;

 L3182: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3183;
  goto ret0;

 L3183: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 8269 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, HImode, operands)))
    {
      return 304;  /* *andhi_2 */
    }
  goto ret0;

 L3558: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L3559;
    }
  goto ret0;

 L3559: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L3560;
    }
  goto ret0;

 L3560: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3561;
  goto ret0;

 L3561: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L3562;
    case CLOBBER:
      goto L3575;
    default:
     break;
   }
  goto ret0;

 L3562: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L3563;
    }
  goto ret0;

 L3563: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == IOR)
    goto L3564;
  goto ret0;

 L3564: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3565;
  goto ret0;

 L3565: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 8681 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, HImode, operands)))
    {
      return 326;  /* *iorhi_2 */
    }
  goto ret0;

 L3575: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L3576;
    }
  goto ret0;

 L3576: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8693 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 327;  /* *iorhi_3 */
    }
  goto ret0;

 L3941: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L3942;
    }
  goto ret0;

 L3942: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L3943;
    }
  goto ret0;

 L3943: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3944;
  goto ret0;

 L3944: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L3945;
    case CLOBBER:
      goto L3958;
    default:
     break;
   }
  goto ret0;

 L3945: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L3946;
    }
  goto ret0;

 L3946: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == XOR)
    goto L3947;
  goto ret0;

 L3947: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3948;
  goto ret0;

 L3948: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 9058 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, HImode, operands)))
    {
      return 348;  /* *xorhi_2 */
    }
  goto ret0;

 L3958: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L3959;
    }
  goto ret0;

 L3959: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9070 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 349;  /* *xorhi_3 */
    }
  goto ret0;

 L4650: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L4651;
    }
  goto ret0;

 L4651: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L4652;
  goto ret0;

 L4652: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4653;
  goto ret0;

 L4653: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L4654;
    }
  goto ret0;

 L4654: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == NOT)
    goto L4655;
  goto ret0;

 L4655: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1])
      && 
#line 10156 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NEG, HImode, operands)))
    {
      return 403;  /* *one_cmplhi2_2 */
    }
  goto ret0;

 L4919: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L4920;
    }
  goto ret0;

 L4920: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (const_1_to_31_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L4921;
    }
  goto ret0;

 L4921: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L4922;
  goto ret0;

 L4922: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L4923;
    case CLOBBER:
      goto L4936;
    default:
     break;
   }
  goto ret0;

 L4923: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L4924;
    }
  goto ret0;

 L4924: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == ASHIFT)
    goto L4925;
  goto ret0;

 L4925: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4926;
  goto ret0;

 L4926: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 10939 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, HImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))))
    {
      return 421;  /* *ashlhi3_cmp */
    }
  goto ret0;

 L4936: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L4937;
    }
  goto ret0;

 L4937: ATTRIBUTE_UNUSED_LABEL
  if (
#line 10980 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, HImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || TARGET_DOUBLE_WITH_ADD)))))
    {
      return 422;  /* *ashlhi3_cconly */
    }
  goto ret0;

 L5415: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L5416;
    }
  goto ret0;

 L5416: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT)
    goto L17164;
  goto ret0;

 L17164: ATTRIBUTE_UNUSED_LABEL
  if (const1_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L5417;
    }
 L17165: ATTRIBUTE_UNUSED_LABEL
  if (const_1_to_31_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L5448;
    }
  goto ret0;

 L5417: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L5418;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17165;

 L5418: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L5419;
    case CLOBBER:
      goto L5432;
    default:
     break;
   }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17165;

 L5419: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L5420;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17165;

 L5420: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == ASHIFTRT)
    goto L5421;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17165;

 L5421: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5422;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17165;

 L5422: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 11721 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands)))
    {
      return 453;  /* *ashrhi3_one_bit_cmp */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17165;

 L5432: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L5433;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17165;

 L5433: ATTRIBUTE_UNUSED_LABEL
  if (
#line 11738 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands)))
    {
      return 454;  /* *ashrhi3_one_bit_cconly */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17165;

 L5448: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L5449;
  goto ret0;

 L5449: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L5450;
    case CLOBBER:
      goto L5463;
    default:
     break;
   }
  goto ret0;

 L5450: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L5451;
    }
  goto ret0;

 L5451: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == ASHIFTRT)
    goto L5452;
  goto ret0;

 L5452: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5453;
  goto ret0;

 L5453: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 11756 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL)))
    {
      return 455;  /* *ashrhi3_cmp */
    }
  goto ret0;

 L5463: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L5464;
    }
  goto ret0;

 L5464: ATTRIBUTE_UNUSED_LABEL
  if (
#line 11771 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL)))
    {
      return 456;  /* *ashrhi3_cconly */
    }
  goto ret0;

 L5911: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L5912;
    }
  goto ret0;

 L5912: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT)
    goto L17166;
  goto ret0;

 L17166: ATTRIBUTE_UNUSED_LABEL
  if (const1_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L5913;
    }
 L17167: ATTRIBUTE_UNUSED_LABEL
  if (const_1_to_31_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L5944;
    }
  goto ret0;

 L5913: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L5914;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17167;

 L5914: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L5915;
    case CLOBBER:
      goto L5928;
    default:
     break;
   }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17167;

 L5915: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L5916;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17167;

 L5916: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L5917;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17167;

 L5917: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5918;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17167;

 L5918: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 12307 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)))
    {
      return 486;  /* *lshrhi3_one_bit_cmp */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17167;

 L5928: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L5929;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17167;

 L5929: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12324 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)))
    {
      return 487;  /* *lshrhi3_one_bit_cconly */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17167;

 L5944: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L5945;
  goto ret0;

 L5945: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L5946;
    case CLOBBER:
      goto L5959;
    default:
     break;
   }
  goto ret0;

 L5946: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L5947;
    }
  goto ret0;

 L5947: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L5948;
  goto ret0;

 L5948: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5949;
  goto ret0;

 L5949: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 12342 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL)))
    {
      return 488;  /* *lshrhi3_cmp */
    }
  goto ret0;

 L5959: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L5960;
    }
  goto ret0;

 L5960: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12357 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL)))
    {
      return 489;  /* *lshrhi3_cconly */
    }
  goto ret0;

 L1756: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L1757;
    }
 L2244: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L2245;
    }
  goto ret0;

 L1757: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1758;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2244;

 L1758: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L1759;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2244;

 L1759: ATTRIBUTE_UNUSED_LABEL
  if (
#line 5986 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGCmode)
   && (INTVAL (operands[2]) & 0xffff) != 0x8000))
    {
      return 220;  /* *addhi_4 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2244;

 L2245: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2246;
  goto ret0;

 L2246: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L2247;
    }
  goto ret0;

 L2247: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == MINUS)
    goto L2248;
  goto ret0;

 L2248: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2249;
  goto ret0;

 L2249: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 6770 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, HImode, operands)))
    {
      return 250;  /* *subhi_3 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_31 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case PLUS:
      goto L1833;
    case NEG:
      goto L1846;
    case MINUS:
      goto L2285;
    case AND:
      goto L3219;
    case IOR:
      goto L3619;
    case XOR:
      goto L4115;
    case NOT:
      goto L4666;
    case ASHIFT:
      goto L4978;
    case ASHIFTRT:
      goto L5537;
    case LSHIFTRT:
      goto L6033;
    case REG:
    case SUBREG:
    case MEM:
      goto L17096;
    default:
      goto ret0;
   }
 L17096: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L1863;
    }
  goto ret0;

 L1833: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L1834;
    }
  goto ret0;

 L1834: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L1835;
    }
  goto ret0;

 L1835: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L1836;
  goto ret0;

 L1836: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L1837;
    case CLOBBER:
      goto L1882;
    default:
     break;
   }
  goto ret0;

 L1837: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L1838;
    }
  goto ret0;

 L1838: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == PLUS)
    goto L1839;
  goto ret0;

 L1839: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1840;
  goto ret0;

 L1840: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 6213 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, QImode, operands)))
    {
      return 225;  /* *addqi_2 */
    }
  goto ret0;

 L1882: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L1883;
    }
  goto ret0;

 L1883: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6330 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 228;  /* *addqi_5 */
    }
  goto ret0;

 L1846: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (general_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L1847;
    }
  goto ret0;

 L1847: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L1848;
    }
  goto ret0;

 L1848: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1849;
  goto ret0;

 L1849: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L1850;
    }
  goto ret0;

 L1850: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6251 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCZmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 226;  /* *addqi_3 */
    }
  goto ret0;

 L2285: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L2286;
    }
  goto ret0;

 L2286: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L2287;
    }
  goto ret0;

 L2287: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2288;
  goto ret0;

 L2288: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2289;
  goto ret0;

 L2289: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L2290;
    }
  goto ret0;

 L2290: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == MINUS)
    goto L2291;
  goto ret0;

 L2291: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2292;
  goto ret0;

 L2292: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 6813 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, QImode, operands)))
    {
      return 253;  /* *subqi_2 */
    }
  goto ret0;

 L3219: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == QImode)
    goto L17168;
  goto ret0;

 L17168: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L3220;
    }
 L17169: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x4, QImode))
    {
      operands[0] = x4;
      goto L3246;
    }
  goto ret0;

 L3220: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L3221;
    }
  x4 = XEXP (x3, 0);
  goto L17169;

 L3221: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3222;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17169;

 L3222: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3223;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17169;

 L3223: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L3224;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17169;

 L3224: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == AND)
    goto L3225;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17169;

 L3225: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3226;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17169;

 L3226: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 8316 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, QImode, operands)
   && ix86_match_ccmode (insn,
			 GET_CODE (operands[2]) == CONST_INT
			 && INTVAL (operands[2]) >= 0 ? CCNOmode : CCZmode)))
    {
      return 307;  /* *andqi_2_maybe_si */
    }
 L3239: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x3, operands[2])
      && 
#line 8340 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, QImode, operands)))
    {
      return 308;  /* *andqi_2 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17169;

 L3246: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L3247;
    }
  goto ret0;

 L3247: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3248;
  goto ret0;

 L3248: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3249;
  goto ret0;

 L3249: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == STRICT_LOW_PART)
    goto L3250;
  goto ret0;

 L3250: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3251;
  goto ret0;

 L3251: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == AND)
    goto L3252;
  goto ret0;

 L3252: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3253;
  goto ret0;

 L3253: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[1])
      && 
#line 8354 "../.././gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 309;  /* *andqi_2_slp */
    }
  goto ret0;

 L3619: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == QImode)
    goto L17170;
  goto ret0;

 L17170: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L3620;
    }
 L17171: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x4, QImode))
    {
      operands[0] = x4;
      goto L3633;
    }
  goto ret0;

 L3620: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L3621;
    }
  x4 = XEXP (x3, 0);
  goto L17171;

 L3621: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3622;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17171;

 L3622: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L3623;
    case CLOBBER:
      goto L3650;
    default:
     break;
   }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17171;

 L3623: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L3624;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17171;

 L3624: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == IOR)
    goto L3625;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17171;

 L3625: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3626;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17171;

 L3626: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 8739 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, QImode, operands)))
    {
      return 330;  /* *iorqi_2 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17171;

 L3650: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L3651;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17171;

 L3651: ATTRIBUTE_UNUSED_LABEL
  if (
#line 8765 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 332;  /* *iorqi_3 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17171;

 L3633: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L3634;
    }
  goto ret0;

 L3634: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L3635;
  goto ret0;

 L3635: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3636;
  goto ret0;

 L3636: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == STRICT_LOW_PART)
    goto L3637;
  goto ret0;

 L3637: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3638;
  goto ret0;

 L3638: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == IOR)
    goto L3639;
  goto ret0;

 L3639: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3640;
  goto ret0;

 L3640: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[1])
      && 
#line 8752 "../.././gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 331;  /* *iorqi_2_slp */
    }
  goto ret0;

 L4115: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == QImode)
    goto L17172;
  goto ret0;

 L17172: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L4116;
    }
 L17173: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x4, QImode))
    {
      operands[0] = x4;
      goto L4129;
    }
  goto ret0;

 L4116: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L4117;
    }
  x4 = XEXP (x3, 0);
  goto L17173;

 L4117: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L4118;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17173;

 L4118: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L4119;
    case CLOBBER:
      goto L4146;
    default:
     break;
   }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17173;

 L4119: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L4120;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17173;

 L4120: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == XOR)
    goto L4121;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17173;

 L4121: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4122;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17173;

 L4122: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 9190 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, QImode, operands)))
    {
      return 356;  /* *xorqi_cc_1 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17173;

 L4146: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L4147;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17173;

 L4147: ATTRIBUTE_UNUSED_LABEL
  if (
#line 9217 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 358;  /* *xorqi_cc_2 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L17173;

 L4129: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (general_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L4130;
    }
  goto ret0;

 L4130: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L4131;
  goto ret0;

 L4131: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4132;
  goto ret0;

 L4132: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == STRICT_LOW_PART)
    goto L4133;
  goto ret0;

 L4133: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L4134;
  goto ret0;

 L4134: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == XOR)
    goto L4135;
  goto ret0;

 L4135: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L4136;
  goto ret0;

 L4136: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[1])
      && 
#line 9203 "../.././gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)))
    {
      return 357;  /* *xorqi_2_slp */
    }
  goto ret0;

 L4666: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L4667;
    }
  goto ret0;

 L4667: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L4668;
  goto ret0;

 L4668: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L4669;
  goto ret0;

 L4669: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L4670;
    }
  goto ret0;

 L4670: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == NOT)
    goto L4671;
  goto ret0;

 L4671: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1])
      && 
#line 10200 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, QImode, operands)))
    {
      return 405;  /* *one_cmplqi2_2 */
    }
  goto ret0;

 L4978: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L4979;
    }
  goto ret0;

 L4979: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (const_1_to_31_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L4980;
    }
  goto ret0;

 L4980: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L4981;
  goto ret0;

 L4981: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L4982;
    case CLOBBER:
      goto L4995;
    default:
     break;
   }
  goto ret0;

 L4982: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L4983;
    }
  goto ret0;

 L4983: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == ASHIFT)
    goto L4984;
  goto ret0;

 L4984: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L4985;
  goto ret0;

 L4985: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 11143 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, QImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))))
    {
      return 425;  /* *ashlqi3_cmp */
    }
  goto ret0;

 L4995: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L4996;
    }
  goto ret0;

 L4996: ATTRIBUTE_UNUSED_LABEL
  if (
#line 11184 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, QImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || TARGET_DOUBLE_WITH_ADD)))))
    {
      return 426;  /* *ashlqi3_cconly */
    }
  goto ret0;

 L5537: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L5538;
    }
  goto ret0;

 L5538: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT)
    goto L17174;
  goto ret0;

 L17174: ATTRIBUTE_UNUSED_LABEL
  if (const1_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L5539;
    }
 L17175: ATTRIBUTE_UNUSED_LABEL
  if (const_1_to_31_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L5570;
    }
  goto ret0;

 L5539: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L5540;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17175;

 L5540: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L5541;
    case CLOBBER:
      goto L5554;
    default:
     break;
   }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17175;

 L5541: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L5542;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17175;

 L5542: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == ASHIFTRT)
    goto L5543;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17175;

 L5543: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5544;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17175;

 L5544: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 11852 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands)))
    {
      return 461;  /* *ashrqi3_one_bit_cmp */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17175;

 L5554: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L5555;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17175;

 L5555: ATTRIBUTE_UNUSED_LABEL
  if (
#line 11869 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands)))
    {
      return 462;  /* *ashrqi3_one_bit_cconly */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17175;

 L5570: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L5571;
  goto ret0;

 L5571: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L5572;
    case CLOBBER:
      goto L5585;
    default:
     break;
   }
  goto ret0;

 L5572: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L5573;
    }
  goto ret0;

 L5573: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == ASHIFTRT)
    goto L5574;
  goto ret0;

 L5574: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L5575;
  goto ret0;

 L5575: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 11887 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL)))
    {
      return 463;  /* *ashrqi3_cmp */
    }
  goto ret0;

 L5585: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L5586;
    }
  goto ret0;

 L5586: ATTRIBUTE_UNUSED_LABEL
  if (
#line 11902 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL)))
    {
      return 464;  /* *ashrqi3_cconly */
    }
  goto ret0;

 L6033: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L6034;
    }
  goto ret0;

 L6034: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT)
    goto L17176;
  goto ret0;

 L17176: ATTRIBUTE_UNUSED_LABEL
  if (const1_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L6035;
    }
 L17177: ATTRIBUTE_UNUSED_LABEL
  if (const_1_to_31_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L6066;
    }
  goto ret0;

 L6035: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L6036;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17177;

 L6036: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L6037;
    case CLOBBER:
      goto L6050;
    default:
     break;
   }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17177;

 L6037: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L6038;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17177;

 L6038: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L6039;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17177;

 L6039: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6040;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17177;

 L6040: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 12437 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands)))
    {
      return 494;  /* *lshrqi2_one_bit_cmp */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17177;

 L6050: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L6051;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17177;

 L6051: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12454 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands)))
    {
      return 495;  /* *lshrqi2_one_bit_cconly */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L17177;

 L6066: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L6067;
  goto ret0;

 L6067: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L6068;
    case CLOBBER:
      goto L6081;
    default:
     break;
   }
  goto ret0;

 L6068: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L6069;
    }
  goto ret0;

 L6069: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L6070;
  goto ret0;

 L6070: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6071;
  goto ret0;

 L6071: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 12472 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL)))
    {
      return 496;  /* *lshrqi2_cmp */
    }
  goto ret0;

 L6081: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L6082;
    }
  goto ret0;

 L6082: ATTRIBUTE_UNUSED_LABEL
  if (
#line 12487 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL)))
    {
      return 497;  /* *lshrqi2_cconly */
    }
  goto ret0;

 L1863: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1864;
    }
 L2298: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L2299;
    }
  goto ret0;

 L1864: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1865;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2298;

 L1865: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L1866;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2298;

 L1866: ATTRIBUTE_UNUSED_LABEL
  if (
#line 6290 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGCmode)
   && (INTVAL (operands[2]) & 0xff) != 0x80))
    {
      return 227;  /* *addqi_4 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2298;

 L2299: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2300;
  goto ret0;

 L2300: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L2301;
    }
  goto ret0;

 L2301: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == MINUS)
    goto L2302;
  goto ret0;

 L2302: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2303;
  goto ret0;

 L2303: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 6825 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, QImode, operands)))
    {
      return 254;  /* *subqi_3 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_32 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L16716;
    case HImode:
      goto L16719;
    case QImode:
      goto L16720;
    case DImode:
      goto L16721;
    case SFmode:
      goto L16724;
    case DFmode:
      goto L16725;
    case XFmode:
      goto L16726;
    case TImode:
      goto L16733;
    case CCmode:
      goto L16734;
    case CCZmode:
      goto L16738;
    default:
      break;
    }
 L355: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case STRICT_LOW_PART:
      goto L356;
    case REG:
      goto L16743;
    case PC:
      goto L6914;
    default:
     break;
   }
 L9180: ATTRIBUTE_UNUSED_LABEL
  operands[0] = x2;
  goto L9181;
 L9309: ATTRIBUTE_UNUSED_LABEL
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L16744;
    case DImode:
      goto L16745;
    case CCZmode:
      goto L16746;
    case QImode:
      goto L16747;
    case HImode:
      goto L16748;
    case TImode:
      goto L16751;
    default:
      break;
    }
  goto ret0;

 L16716: ATTRIBUTE_UNUSED_LABEL
  tem = recog_23 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L355;

 L16719: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L337;
    }
 L16729: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L957;
    }
 L16732: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L1006;
    }
  goto L355;

 L337: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode)
    goto L16827;
  x2 = XEXP (x1, 0);
  goto L16729;

 L16827: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L671;
    case MULT:
      goto L2352;
    case DIV:
      goto L2837;
    case UNSPEC:
      goto L16831;
    case REG:
    case SUBREG:
      goto L16826;
    default:
      x2 = XEXP (x1, 0);
      goto L16729;
   }
 L16826: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L338;
    }
  x2 = XEXP (x1, 0);
  goto L16729;

 L671: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L672;
    }
  x2 = XEXP (x1, 0);
  goto L16729;

 L672: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L673;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L16729;

 L673: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode)
    goto L16832;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L16729;

 L16832: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L16834;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L16729;

 L16834: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 17)
    goto L16836;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L16729;

 L16836: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3028 "../.././gcc/config/i386/i386.md"
(TARGET_ZERO_EXTEND_WITH_AND && !optimize_size))
    {
      return 104;  /* *zero_extendqihi2_and */
    }
 L16837: ATTRIBUTE_UNUSED_LABEL
  if (
#line 3037 "../.././gcc/config/i386/i386.md"
(!TARGET_ZERO_EXTEND_WITH_AND || optimize_size))
    {
      return 105;  /* *zero_extendqihi2_movzbw_and */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L16729;

 L2352: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode)
    goto L16839;
  x2 = XEXP (x1, 0);
  goto L16729;

 L16839: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case ZERO_EXTEND:
      goto L2381;
    case SIGN_EXTEND:
      goto L2399;
    case REG:
    case SUBREG:
    case MEM:
      goto L16838;
    default:
      x2 = XEXP (x1, 0);
      goto L16729;
   }
 L16838: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L2353;
    }
  x2 = XEXP (x1, 0);
  goto L16729;

 L2381: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L2382;
    }
  x2 = XEXP (x1, 0);
  goto L16729;

 L2382: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L2383;
  x2 = XEXP (x1, 0);
  goto L16729;

 L2383: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L2384;
    }
  x2 = XEXP (x1, 0);
  goto L16729;

 L2384: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2385;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L16729;

 L2385: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 7011 "../.././gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 260;  /* *umulqihi3_1 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L16729;

 L2399: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, QImode))
    {
      operands[1] = x4;
      goto L2400;
    }
  x2 = XEXP (x1, 0);
  goto L16729;

 L2400: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L2401;
  x2 = XEXP (x1, 0);
  goto L16729;

 L2401: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L2402;
    }
  x2 = XEXP (x1, 0);
  goto L16729;

 L2402: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2403;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L16729;

 L2403: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 7035 "../.././gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)))
    {
      return 261;  /* *mulqihi3_insn */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L16729;

 L2353: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L2354;
    }
  x2 = XEXP (x1, 0);
  goto L16729;

 L2354: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2355;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L16729;

 L2355: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 17
      && 
#line 6957 "../.././gcc/config/i386/i386.md"
(GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    {
      return 258;  /* *mulhi3_1 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L16729;

 L2837: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L2838;
    }
  x2 = XEXP (x1, 0);
  goto L16729;

 L2838: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L2839;
    }
  x2 = XEXP (x1, 0);
  goto L16729;

 L2839: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2840;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L16729;

 L2840: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L2841;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L16729;

 L2841: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == MOD)
    goto L2842;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L16729;

 L2842: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2843;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L16729;

 L2843: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && 
#line 7576 "../.././gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 280;  /* divmodhi4 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L16729;

 L16831: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 66)
    goto L8004;
  x2 = XEXP (x1, 0);
  goto L16729;

 L8004: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L8005;
    }
  x2 = XEXP (x1, 0);
  goto L16729;

    goto L8006;