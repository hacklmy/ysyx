// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__11(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__11\n"); );
    // Variables
    VlWide<4>/*126:0*/ top__DOT__exu_step__DOT___io_res2rd_T_186;
    VlWide<3>/*95:0*/ __Vtemp845;
    VlWide<3>/*95:0*/ __Vtemp846;
    VlWide<3>/*95:0*/ __Vtemp848;
    VlWide<3>/*95:0*/ __Vtemp849;
    VlWide<3>/*95:0*/ __Vtemp850;
    VlWide<3>/*95:0*/ __Vtemp851;
    VlWide<4>/*127:0*/ __Vtemp852;
    VlWide<4>/*127:0*/ __Vtemp853;
    VlWide<4>/*127:0*/ __Vtemp854;
    VlWide<4>/*127:0*/ __Vtemp855;
    VlWide<4>/*127:0*/ __Vtemp856;
    VlWide<4>/*127:0*/ __Vtemp857;
    VlWide<4>/*127:0*/ __Vtemp858;
    VlWide<4>/*127:0*/ __Vtemp859;
    VlWide<4>/*127:0*/ __Vtemp860;
    VlWide<4>/*127:0*/ __Vtemp861;
    VlWide<4>/*127:0*/ __Vtemp862;
    VlWide<4>/*127:0*/ __Vtemp863;
    VlWide<4>/*127:0*/ __Vtemp864;
    VlWide<4>/*127:0*/ __Vtemp865;
    VlWide<4>/*127:0*/ __Vtemp866;
    VlWide<4>/*127:0*/ __Vtemp891;
    VlWide<4>/*127:0*/ __Vtemp892;
    VlWide<4>/*127:0*/ __Vtemp893;
    VlWide<4>/*127:0*/ __Vtemp894;
    VlWide<4>/*127:0*/ __Vtemp895;
    VlWide<4>/*127:0*/ __Vtemp896;
    VlWide<4>/*127:0*/ __Vtemp897;
    VlWide<4>/*127:0*/ __Vtemp898;
    VlWide<4>/*127:0*/ __Vtemp899;
    VlWide<4>/*127:0*/ __Vtemp900;
    QData/*63:0*/ top__DOT__exu_step__DOT___io_res2rd_T_162;
    // Body
    if (vlSelf->top__DOT__d_cache__DOT__way0_hit) {
        vlSelf->top__DOT__d_cache__DOT___GEN_1825 = vlSelf->top__DOT__d_cache__DOT__ram_1_22;
        vlSelf->top__DOT__d_cache__DOT___GEN_1826 = vlSelf->top__DOT__d_cache__DOT__ram_1_23;
        vlSelf->top__DOT__d_cache__DOT___GEN_1827 = vlSelf->top__DOT__d_cache__DOT__ram_1_24;
        vlSelf->top__DOT__d_cache__DOT___GEN_1828 = vlSelf->top__DOT__d_cache__DOT__ram_1_25;
        vlSelf->top__DOT__d_cache__DOT___GEN_1829 = vlSelf->top__DOT__d_cache__DOT__ram_1_26;
        vlSelf->top__DOT__d_cache__DOT___GEN_1830 = vlSelf->top__DOT__d_cache__DOT__ram_1_27;
        vlSelf->top__DOT__d_cache__DOT___GEN_1831 = vlSelf->top__DOT__d_cache__DOT__ram_1_28;
        vlSelf->top__DOT__d_cache__DOT___GEN_1832 = vlSelf->top__DOT__d_cache__DOT__ram_1_29;
        vlSelf->top__DOT__d_cache__DOT___GEN_1833 = vlSelf->top__DOT__d_cache__DOT__ram_1_30;
        vlSelf->top__DOT__d_cache__DOT___GEN_1834 = vlSelf->top__DOT__d_cache__DOT__ram_1_31;
        vlSelf->top__DOT__d_cache__DOT___GEN_1835 = vlSelf->top__DOT__d_cache__DOT__ram_1_32;
        vlSelf->top__DOT__d_cache__DOT___GEN_1836 = vlSelf->top__DOT__d_cache__DOT__ram_1_33;
        vlSelf->top__DOT__d_cache__DOT___GEN_1837 = vlSelf->top__DOT__d_cache__DOT__ram_1_34;
        vlSelf->top__DOT__d_cache__DOT___GEN_1838 = vlSelf->top__DOT__d_cache__DOT__ram_1_35;
        vlSelf->top__DOT__d_cache__DOT___GEN_1839 = vlSelf->top__DOT__d_cache__DOT__ram_1_36;
        vlSelf->top__DOT__d_cache__DOT___GEN_1840 = vlSelf->top__DOT__d_cache__DOT__ram_1_37;
        vlSelf->top__DOT__d_cache__DOT___GEN_1841 = vlSelf->top__DOT__d_cache__DOT__ram_1_38;
        vlSelf->top__DOT__d_cache__DOT___GEN_1842 = vlSelf->top__DOT__d_cache__DOT__ram_1_39;
        vlSelf->top__DOT__d_cache__DOT___GEN_1843 = vlSelf->top__DOT__d_cache__DOT__ram_1_40;
        vlSelf->top__DOT__d_cache__DOT___GEN_1844 = vlSelf->top__DOT__d_cache__DOT__ram_1_41;
        vlSelf->top__DOT__d_cache__DOT___GEN_1845 = vlSelf->top__DOT__d_cache__DOT__ram_1_42;
        vlSelf->top__DOT__d_cache__DOT___GEN_1846 = vlSelf->top__DOT__d_cache__DOT__ram_1_43;
        vlSelf->top__DOT__d_cache__DOT___GEN_1847 = vlSelf->top__DOT__d_cache__DOT__ram_1_44;
        vlSelf->top__DOT__d_cache__DOT___GEN_1848 = vlSelf->top__DOT__d_cache__DOT__ram_1_45;
        vlSelf->top__DOT__d_cache__DOT___GEN_1849 = vlSelf->top__DOT__d_cache__DOT__ram_1_46;
        vlSelf->top__DOT__d_cache__DOT___GEN_1850 = vlSelf->top__DOT__d_cache__DOT__ram_1_47;
        vlSelf->top__DOT__d_cache__DOT___GEN_1851 = vlSelf->top__DOT__d_cache__DOT__ram_1_48;
        vlSelf->top__DOT__d_cache__DOT___GEN_1852 = vlSelf->top__DOT__d_cache__DOT__ram_1_49;
        vlSelf->top__DOT__d_cache__DOT___GEN_1853 = vlSelf->top__DOT__d_cache__DOT__ram_1_50;
        vlSelf->top__DOT__d_cache__DOT___GEN_1854 = vlSelf->top__DOT__d_cache__DOT__ram_1_51;
        vlSelf->top__DOT__d_cache__DOT___GEN_1855 = vlSelf->top__DOT__d_cache__DOT__ram_1_52;
        vlSelf->top__DOT__d_cache__DOT___GEN_1856 = vlSelf->top__DOT__d_cache__DOT__ram_1_53;
        vlSelf->top__DOT__d_cache__DOT___GEN_1857 = vlSelf->top__DOT__d_cache__DOT__ram_1_54;
        vlSelf->top__DOT__d_cache__DOT___GEN_1858 = vlSelf->top__DOT__d_cache__DOT__ram_1_55;
        vlSelf->top__DOT__d_cache__DOT___GEN_1859 = vlSelf->top__DOT__d_cache__DOT__ram_1_56;
        vlSelf->top__DOT__d_cache__DOT___GEN_1860 = vlSelf->top__DOT__d_cache__DOT__ram_1_57;
        vlSelf->top__DOT__d_cache__DOT___GEN_1861 = vlSelf->top__DOT__d_cache__DOT__ram_1_58;
        vlSelf->top__DOT__d_cache__DOT___GEN_1862 = vlSelf->top__DOT__d_cache__DOT__ram_1_59;
        vlSelf->top__DOT__d_cache__DOT___GEN_1863 = vlSelf->top__DOT__d_cache__DOT__ram_1_60;
        vlSelf->top__DOT__d_cache__DOT___GEN_1864 = vlSelf->top__DOT__d_cache__DOT__ram_1_61;
        vlSelf->top__DOT__d_cache__DOT___GEN_1865 = vlSelf->top__DOT__d_cache__DOT__ram_1_62;
        vlSelf->top__DOT__d_cache__DOT___GEN_1866 = vlSelf->top__DOT__d_cache__DOT__ram_1_63;
        vlSelf->top__DOT__d_cache__DOT___GEN_1867 = vlSelf->top__DOT__d_cache__DOT__ram_1_64;
        vlSelf->top__DOT__d_cache__DOT___GEN_1868 = vlSelf->top__DOT__d_cache__DOT__ram_1_65;
        vlSelf->top__DOT__d_cache__DOT___GEN_1869 = vlSelf->top__DOT__d_cache__DOT__ram_1_66;
        vlSelf->top__DOT__d_cache__DOT___GEN_1870 = vlSelf->top__DOT__d_cache__DOT__ram_1_67;
        vlSelf->top__DOT__d_cache__DOT___GEN_1871 = vlSelf->top__DOT__d_cache__DOT__ram_1_68;
        vlSelf->top__DOT__d_cache__DOT___GEN_1872 = vlSelf->top__DOT__d_cache__DOT__ram_1_69;
        vlSelf->top__DOT__d_cache__DOT___GEN_1873 = vlSelf->top__DOT__d_cache__DOT__ram_1_70;
        vlSelf->top__DOT__d_cache__DOT___GEN_1874 = vlSelf->top__DOT__d_cache__DOT__ram_1_71;
        vlSelf->top__DOT__d_cache__DOT___GEN_1875 = vlSelf->top__DOT__d_cache__DOT__ram_1_72;
        vlSelf->top__DOT__d_cache__DOT___GEN_1876 = vlSelf->top__DOT__d_cache__DOT__ram_1_73;
        vlSelf->top__DOT__d_cache__DOT___GEN_1877 = vlSelf->top__DOT__d_cache__DOT__ram_1_74;
        vlSelf->top__DOT__d_cache__DOT___GEN_1878 = vlSelf->top__DOT__d_cache__DOT__ram_1_75;
        vlSelf->top__DOT__d_cache__DOT___GEN_1879 = vlSelf->top__DOT__d_cache__DOT__ram_1_76;
        vlSelf->top__DOT__d_cache__DOT___GEN_1880 = vlSelf->top__DOT__d_cache__DOT__ram_1_77;
        vlSelf->top__DOT__d_cache__DOT___GEN_1881 = vlSelf->top__DOT__d_cache__DOT__ram_1_78;
        vlSelf->top__DOT__d_cache__DOT___GEN_1882 = vlSelf->top__DOT__d_cache__DOT__ram_1_79;
        vlSelf->top__DOT__d_cache__DOT___GEN_1883 = vlSelf->top__DOT__d_cache__DOT__ram_1_80;
        vlSelf->top__DOT__d_cache__DOT___GEN_1884 = vlSelf->top__DOT__d_cache__DOT__ram_1_81;
        vlSelf->top__DOT__d_cache__DOT___GEN_1885 = vlSelf->top__DOT__d_cache__DOT__ram_1_82;
        vlSelf->top__DOT__d_cache__DOT___GEN_1886 = vlSelf->top__DOT__d_cache__DOT__ram_1_83;
        vlSelf->top__DOT__d_cache__DOT___GEN_1887 = vlSelf->top__DOT__d_cache__DOT__ram_1_84;
        vlSelf->top__DOT__d_cache__DOT___GEN_1888 = vlSelf->top__DOT__d_cache__DOT__ram_1_85;
        vlSelf->top__DOT__d_cache__DOT___GEN_1889 = vlSelf->top__DOT__d_cache__DOT__ram_1_86;
        vlSelf->top__DOT__d_cache__DOT___GEN_1890 = vlSelf->top__DOT__d_cache__DOT__ram_1_87;
        vlSelf->top__DOT__d_cache__DOT___GEN_1891 = vlSelf->top__DOT__d_cache__DOT__ram_1_88;
        vlSelf->top__DOT__d_cache__DOT___GEN_1892 = vlSelf->top__DOT__d_cache__DOT__ram_1_89;
        vlSelf->top__DOT__d_cache__DOT___GEN_1893 = vlSelf->top__DOT__d_cache__DOT__ram_1_90;
        vlSelf->top__DOT__d_cache__DOT___GEN_1894 = vlSelf->top__DOT__d_cache__DOT__ram_1_91;
        vlSelf->top__DOT__d_cache__DOT___GEN_1895 = vlSelf->top__DOT__d_cache__DOT__ram_1_92;
        vlSelf->top__DOT__d_cache__DOT___GEN_1896 = vlSelf->top__DOT__d_cache__DOT__ram_1_93;
        vlSelf->top__DOT__d_cache__DOT___GEN_1897 = vlSelf->top__DOT__d_cache__DOT__ram_1_94;
        vlSelf->top__DOT__d_cache__DOT___GEN_1898 = vlSelf->top__DOT__d_cache__DOT__ram_1_95;
        vlSelf->top__DOT__d_cache__DOT___GEN_1899 = vlSelf->top__DOT__d_cache__DOT__ram_1_96;
        vlSelf->top__DOT__d_cache__DOT___GEN_1900 = vlSelf->top__DOT__d_cache__DOT__ram_1_97;
        vlSelf->top__DOT__d_cache__DOT___GEN_1901 = vlSelf->top__DOT__d_cache__DOT__ram_1_98;
        vlSelf->top__DOT__d_cache__DOT___GEN_1902 = vlSelf->top__DOT__d_cache__DOT__ram_1_99;
        vlSelf->top__DOT__d_cache__DOT___GEN_1903 = vlSelf->top__DOT__d_cache__DOT__ram_1_100;
        vlSelf->top__DOT__d_cache__DOT___GEN_1904 = vlSelf->top__DOT__d_cache__DOT__ram_1_101;
        vlSelf->top__DOT__d_cache__DOT___GEN_1905 = vlSelf->top__DOT__d_cache__DOT__ram_1_102;
        vlSelf->top__DOT__d_cache__DOT___GEN_1906 = vlSelf->top__DOT__d_cache__DOT__ram_1_103;
        vlSelf->top__DOT__d_cache__DOT___GEN_1907 = vlSelf->top__DOT__d_cache__DOT__ram_1_104;
        vlSelf->top__DOT__d_cache__DOT___GEN_1908 = vlSelf->top__DOT__d_cache__DOT__ram_1_105;
        vlSelf->top__DOT__d_cache__DOT___GEN_1909 = vlSelf->top__DOT__d_cache__DOT__ram_1_106;
        vlSelf->top__DOT__d_cache__DOT___GEN_1910 = vlSelf->top__DOT__d_cache__DOT__ram_1_107;
        vlSelf->top__DOT__d_cache__DOT___GEN_1911 = vlSelf->top__DOT__d_cache__DOT__ram_1_108;
        vlSelf->top__DOT__d_cache__DOT___GEN_1912 = vlSelf->top__DOT__d_cache__DOT__ram_1_109;
        vlSelf->top__DOT__d_cache__DOT___GEN_1913 = vlSelf->top__DOT__d_cache__DOT__ram_1_110;
        vlSelf->top__DOT__d_cache__DOT___GEN_1914 = vlSelf->top__DOT__d_cache__DOT__ram_1_111;
        vlSelf->top__DOT__d_cache__DOT___GEN_1915 = vlSelf->top__DOT__d_cache__DOT__ram_1_112;
        vlSelf->top__DOT__d_cache__DOT___GEN_1916 = vlSelf->top__DOT__d_cache__DOT__ram_1_113;
        vlSelf->top__DOT__d_cache__DOT___GEN_1917 = vlSelf->top__DOT__d_cache__DOT__ram_1_114;
        vlSelf->top__DOT__d_cache__DOT___GEN_1918 = vlSelf->top__DOT__d_cache__DOT__ram_1_115;
        vlSelf->top__DOT__d_cache__DOT___GEN_1919 = vlSelf->top__DOT__d_cache__DOT__ram_1_116;
        vlSelf->top__DOT__d_cache__DOT___GEN_1920 = vlSelf->top__DOT__d_cache__DOT__ram_1_117;
        vlSelf->top__DOT__d_cache__DOT___GEN_1921 = vlSelf->top__DOT__d_cache__DOT__ram_1_118;
        vlSelf->top__DOT__d_cache__DOT___GEN_1922 = vlSelf->top__DOT__d_cache__DOT__ram_1_119;
        vlSelf->top__DOT__d_cache__DOT___GEN_1923 = vlSelf->top__DOT__d_cache__DOT__ram_1_120;
        vlSelf->top__DOT__d_cache__DOT___GEN_1924 = vlSelf->top__DOT__d_cache__DOT__ram_1_121;
        vlSelf->top__DOT__d_cache__DOT___GEN_1925 = vlSelf->top__DOT__d_cache__DOT__ram_1_122;
        vlSelf->top__DOT__d_cache__DOT___GEN_1926 = vlSelf->top__DOT__d_cache__DOT__ram_1_123;
        vlSelf->top__DOT__d_cache__DOT___GEN_1927 = vlSelf->top__DOT__d_cache__DOT__ram_1_124;
        vlSelf->top__DOT__d_cache__DOT___GEN_1928 = vlSelf->top__DOT__d_cache__DOT__ram_1_125;
        vlSelf->top__DOT__d_cache__DOT___GEN_1929 = vlSelf->top__DOT__d_cache__DOT__ram_1_126;
        vlSelf->top__DOT__d_cache__DOT___GEN_1930 = vlSelf->top__DOT__d_cache__DOT__ram_1_127;
    } else {
        vlSelf->top__DOT__d_cache__DOT___GEN_1825 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x16U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_22)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_22);
        vlSelf->top__DOT__d_cache__DOT___GEN_1826 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x17U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_23)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_23);
        vlSelf->top__DOT__d_cache__DOT___GEN_1827 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x18U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_24)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_24);
        vlSelf->top__DOT__d_cache__DOT___GEN_1828 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x19U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_25)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_25);
        vlSelf->top__DOT__d_cache__DOT___GEN_1829 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x1aU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_26)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_26);
        vlSelf->top__DOT__d_cache__DOT___GEN_1830 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x1bU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_27)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_27);
        vlSelf->top__DOT__d_cache__DOT___GEN_1831 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x1cU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_28)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_28);
        vlSelf->top__DOT__d_cache__DOT___GEN_1832 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x1dU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_29)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_29);
        vlSelf->top__DOT__d_cache__DOT___GEN_1833 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x1eU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_30)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_30);
        vlSelf->top__DOT__d_cache__DOT___GEN_1834 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x1fU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_31)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_31);
        vlSelf->top__DOT__d_cache__DOT___GEN_1835 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x20U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_32)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_32);
        vlSelf->top__DOT__d_cache__DOT___GEN_1836 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x21U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_33)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_33);
        vlSelf->top__DOT__d_cache__DOT___GEN_1837 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x22U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_34)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_34);
        vlSelf->top__DOT__d_cache__DOT___GEN_1838 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x23U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_35)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_35);
        vlSelf->top__DOT__d_cache__DOT___GEN_1839 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x24U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_36)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_36);
        vlSelf->top__DOT__d_cache__DOT___GEN_1840 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x25U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_37)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_37);
        vlSelf->top__DOT__d_cache__DOT___GEN_1841 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x26U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_38)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_38);
        vlSelf->top__DOT__d_cache__DOT___GEN_1842 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x27U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_39)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_39);
        vlSelf->top__DOT__d_cache__DOT___GEN_1843 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x28U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_40)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_40);
        vlSelf->top__DOT__d_cache__DOT___GEN_1844 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x29U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_41)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_41);
        vlSelf->top__DOT__d_cache__DOT___GEN_1845 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x2aU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_42)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_42);
        vlSelf->top__DOT__d_cache__DOT___GEN_1846 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x2bU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_43)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_43);
        vlSelf->top__DOT__d_cache__DOT___GEN_1847 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x2cU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_44)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_44);
        vlSelf->top__DOT__d_cache__DOT___GEN_1848 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x2dU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_45)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_45);
        vlSelf->top__DOT__d_cache__DOT___GEN_1849 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x2eU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_46)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_46);
        vlSelf->top__DOT__d_cache__DOT___GEN_1850 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x2fU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_47)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_47);
        vlSelf->top__DOT__d_cache__DOT___GEN_1851 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x30U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_48)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_48);
        vlSelf->top__DOT__d_cache__DOT___GEN_1852 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x31U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_49)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_49);
        vlSelf->top__DOT__d_cache__DOT___GEN_1853 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x32U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_50)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_50);
        vlSelf->top__DOT__d_cache__DOT___GEN_1854 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x33U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_51)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_51);
        vlSelf->top__DOT__d_cache__DOT___GEN_1855 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x34U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_52)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_52);
        vlSelf->top__DOT__d_cache__DOT___GEN_1856 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x35U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_53)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_53);
        vlSelf->top__DOT__d_cache__DOT___GEN_1857 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x36U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_54)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_54);
        vlSelf->top__DOT__d_cache__DOT___GEN_1858 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x37U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_55)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_55);
        vlSelf->top__DOT__d_cache__DOT___GEN_1859 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x38U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_56)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_56);
        vlSelf->top__DOT__d_cache__DOT___GEN_1860 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x39U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_57)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_57);
        vlSelf->top__DOT__d_cache__DOT___GEN_1861 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x3aU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_58)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_58);
        vlSelf->top__DOT__d_cache__DOT___GEN_1862 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x3bU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_59)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_59);
        vlSelf->top__DOT__d_cache__DOT___GEN_1863 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x3cU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_60)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_60);
        vlSelf->top__DOT__d_cache__DOT___GEN_1864 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x3dU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_61)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_61);
        vlSelf->top__DOT__d_cache__DOT___GEN_1865 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x3eU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_62)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_62);
        vlSelf->top__DOT__d_cache__DOT___GEN_1866 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x3fU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_63)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_63);
        vlSelf->top__DOT__d_cache__DOT___GEN_1867 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x40U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_64)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_64);
        vlSelf->top__DOT__d_cache__DOT___GEN_1868 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x41U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_65)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_65);
        vlSelf->top__DOT__d_cache__DOT___GEN_1869 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x42U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_66)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_66);
        vlSelf->top__DOT__d_cache__DOT___GEN_1870 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x43U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_67)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_67);
        vlSelf->top__DOT__d_cache__DOT___GEN_1871 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x44U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_68)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_68);
        vlSelf->top__DOT__d_cache__DOT___GEN_1872 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x45U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_69)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_69);
        vlSelf->top__DOT__d_cache__DOT___GEN_1873 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x46U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_70)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_70);
        vlSelf->top__DOT__d_cache__DOT___GEN_1874 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x47U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_71)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_71);
        vlSelf->top__DOT__d_cache__DOT___GEN_1875 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x48U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_72)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_72);
        vlSelf->top__DOT__d_cache__DOT___GEN_1876 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x49U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_73)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_73);
        vlSelf->top__DOT__d_cache__DOT___GEN_1877 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x4aU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_74)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_74);
        vlSelf->top__DOT__d_cache__DOT___GEN_1878 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x4bU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_75)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_75);
        vlSelf->top__DOT__d_cache__DOT___GEN_1879 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x4cU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_76)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_76);
        vlSelf->top__DOT__d_cache__DOT___GEN_1880 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x4dU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_77)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_77);
        vlSelf->top__DOT__d_cache__DOT___GEN_1881 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x4eU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_78)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_78);
        vlSelf->top__DOT__d_cache__DOT___GEN_1882 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x4fU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_79)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_79);
        vlSelf->top__DOT__d_cache__DOT___GEN_1883 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x50U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_80)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_80);
        vlSelf->top__DOT__d_cache__DOT___GEN_1884 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x51U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_81)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_81);
        vlSelf->top__DOT__d_cache__DOT___GEN_1885 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x52U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_82)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_82);
        vlSelf->top__DOT__d_cache__DOT___GEN_1886 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x53U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_83)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_83);
        vlSelf->top__DOT__d_cache__DOT___GEN_1887 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x54U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_84)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_84);
        vlSelf->top__DOT__d_cache__DOT___GEN_1888 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x55U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_85)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_85);
        vlSelf->top__DOT__d_cache__DOT___GEN_1889 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x56U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_86)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_86);
        vlSelf->top__DOT__d_cache__DOT___GEN_1890 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x57U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_87)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_87);
        vlSelf->top__DOT__d_cache__DOT___GEN_1891 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x58U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_88)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_88);
        vlSelf->top__DOT__d_cache__DOT___GEN_1892 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x59U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_89)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_89);
        vlSelf->top__DOT__d_cache__DOT___GEN_1893 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x5aU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_90)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_90);
        vlSelf->top__DOT__d_cache__DOT___GEN_1894 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x5bU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_91)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_91);
        vlSelf->top__DOT__d_cache__DOT___GEN_1895 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x5cU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_92)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_92);
        vlSelf->top__DOT__d_cache__DOT___GEN_1896 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x5dU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_93)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_93);
        vlSelf->top__DOT__d_cache__DOT___GEN_1897 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x5eU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_94)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_94);
        vlSelf->top__DOT__d_cache__DOT___GEN_1898 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x5fU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_95)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_95);
        vlSelf->top__DOT__d_cache__DOT___GEN_1899 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x60U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_96)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_96);
        vlSelf->top__DOT__d_cache__DOT___GEN_1900 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x61U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_97)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_97);
        vlSelf->top__DOT__d_cache__DOT___GEN_1901 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x62U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_98)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_98);
        vlSelf->top__DOT__d_cache__DOT___GEN_1902 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x63U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_99)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_99);
        vlSelf->top__DOT__d_cache__DOT___GEN_1903 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x64U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_100)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_100);
        vlSelf->top__DOT__d_cache__DOT___GEN_1904 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x65U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_101)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_101);
        vlSelf->top__DOT__d_cache__DOT___GEN_1905 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x66U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_102)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_102);
        vlSelf->top__DOT__d_cache__DOT___GEN_1906 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x67U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_103)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_103);
        vlSelf->top__DOT__d_cache__DOT___GEN_1907 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x68U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_104)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_104);
        vlSelf->top__DOT__d_cache__DOT___GEN_1908 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x69U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_105)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_105);
        vlSelf->top__DOT__d_cache__DOT___GEN_1909 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x6aU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_106)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_106);
        vlSelf->top__DOT__d_cache__DOT___GEN_1910 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x6bU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_107)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_107);
        vlSelf->top__DOT__d_cache__DOT___GEN_1911 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x6cU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_108)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_108);
        vlSelf->top__DOT__d_cache__DOT___GEN_1912 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x6dU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_109)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_109);
        vlSelf->top__DOT__d_cache__DOT___GEN_1913 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x6eU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_110)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_110);
        vlSelf->top__DOT__d_cache__DOT___GEN_1914 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x6fU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_111)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_111);
        vlSelf->top__DOT__d_cache__DOT___GEN_1915 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x70U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_112)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_112);
        vlSelf->top__DOT__d_cache__DOT___GEN_1916 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x71U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_113)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_113);
        vlSelf->top__DOT__d_cache__DOT___GEN_1917 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x72U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_114)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_114);
        vlSelf->top__DOT__d_cache__DOT___GEN_1918 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x73U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_115)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_115);
        vlSelf->top__DOT__d_cache__DOT___GEN_1919 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x74U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_116)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_116);
        vlSelf->top__DOT__d_cache__DOT___GEN_1920 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x75U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_117)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_117);
        vlSelf->top__DOT__d_cache__DOT___GEN_1921 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x76U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_118)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_118);
        vlSelf->top__DOT__d_cache__DOT___GEN_1922 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x77U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_119)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_119);
        vlSelf->top__DOT__d_cache__DOT___GEN_1923 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x78U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_120)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_120);
        vlSelf->top__DOT__d_cache__DOT___GEN_1924 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x79U == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_121)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_121);
        vlSelf->top__DOT__d_cache__DOT___GEN_1925 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x7aU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_122)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_122);
        vlSelf->top__DOT__d_cache__DOT___GEN_1926 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x7bU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_123)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_123);
        vlSelf->top__DOT__d_cache__DOT___GEN_1927 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x7cU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_124)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_124);
        vlSelf->top__DOT__d_cache__DOT___GEN_1928 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x7dU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_125)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_125);
        vlSelf->top__DOT__d_cache__DOT___GEN_1929 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x7eU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_126)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_126);
        vlSelf->top__DOT__d_cache__DOT___GEN_1930 = 
            ((IData)(vlSelf->top__DOT__d_cache__DOT__way1_hit)
              ? ((0x7fU == (0x7fU & (IData)((vlSelf->top__DOT__exu_step__DOT__add_res 
                                             >> 3U))))
                  ? (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__d_cache__DOT___ram_1_T_5[0U])))
                  : vlSelf->top__DOT__d_cache__DOT__ram_1_127)
              : vlSelf->top__DOT__d_cache__DOT__ram_1_127);
    }
    top__DOT__exu_step__DOT___io_res2rd_T_162 = ((0x16U 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_59
                                                  : 
                                                 ((0xdU 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__exu_step__DOT__sub_res 
                                                                                >> 0x1fU)))
                                                                      ? 0xffffffffU
                                                                      : 0U))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__sub_res)))
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? vlSelf->top__DOT__exu_step__DOT__and_res
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? vlSelf->top__DOT__exu_step__DOT__and_res
                                                     : 
                                                    ((0xaU 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? vlSelf->top__DOT__exu_step__DOT__xor_res
                                                      : 
                                                     ((0x2eU 
                                                       == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                       ? vlSelf->top__DOT__exu_step__DOT__xor_res
                                                       : 
                                                      ((0x2fU 
                                                        == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                        ? vlSelf->top__DOT__exu_step__DOT__or_res
                                                        : 
                                                       ((0xbU 
                                                         == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                         ? vlSelf->top__DOT__exu_step__DOT__or_res
                                                         : 
                                                        ((0x15U 
                                                          == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                          ? vlSelf->top__DOT__exu_step__DOT__sra_res
                                                          : 
                                                         ((0xfU 
                                                           == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                           ? vlSelf->top__DOT__exu_step__DOT__add_res
                                                           : 
                                                          ((0x10U 
                                                            == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                            ? vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_44
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                             ? vlSelf->top__DOT__exu_step__DOT__sub_res
                                                             : 
                                                            ((0xcU 
                                                              == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                              ? vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_44
                                                              : 
                                                             ((0x25U 
                                                               == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                               ? (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSelf->top__DOT__d_cache_io_to_lsu_rdata))))
                                                               : 
                                                              ((0x3bU 
                                                                == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                                ? 
                                                               ((((1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__d_cache_io_to_lsu_rdata 
                                                                              >> 7U)))
                                                                   ? 0xffffffffffffffULL
                                                                   : 0ULL) 
                                                                 << 8U) 
                                                                | (QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->top__DOT__d_cache_io_to_lsu_rdata)))))
                                                                : vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_132)))))))))))))));
    VL_EXTENDS_WQ(65,64, __Vtemp845, vlSelf->top__DOT__exu_step__DOT__src1_value);
    __Vtemp846[0U] = __Vtemp845[0U];
    __Vtemp846[1U] = __Vtemp845[1U];
    __Vtemp846[2U] = (1U & __Vtemp845[2U]);
    VL_EXTENDS_WQ(65,64, __Vtemp848, vlSelf->top__DOT__exu_step__DOT__src2_value);
    __Vtemp849[0U] = __Vtemp848[0U];
    __Vtemp849[1U] = __Vtemp848[1U];
    __Vtemp849[2U] = (1U & __Vtemp848[2U]);
    VL_DIVS_WWW(65, __Vtemp850, __Vtemp846, __Vtemp849);
    __Vtemp851[0U] = __Vtemp850[0U];
    __Vtemp851[1U] = __Vtemp850[1U];
    __Vtemp851[2U] = (1U & __Vtemp850[2U]);
    VL_EXTEND_WW(127,65, __Vtemp852, __Vtemp851);
    VL_EXTEND_WQ(127,64, __Vtemp853, VL_DIV_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value));
    VL_EXTEND_WQ(127,64, __Vtemp854, (((QData)((IData)(
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu_step__DOT___divw_res_T_4 
                                                                    >> 0x1fU)))
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT___divw_res_T_4))));
    VL_EXTEND_WQ(127,64, __Vtemp855, (((QData)((IData)(
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exu_step__DOT___mluw_res_T_2 
                                                                    >> 0x1fU)))
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT___mluw_res_T_2))));
    VL_EXTEND_WQ(128,64, __Vtemp856, vlSelf->top__DOT__exu_step__DOT__src1_value);
    VL_EXTEND_WQ(128,64, __Vtemp857, vlSelf->top__DOT__exu_step__DOT__src2_value);
    VL_MUL_W(4, __Vtemp858, __Vtemp856, __Vtemp857);
    VL_EXTEND_WQ(127,64, __Vtemp859, (((QData)((IData)(
                                                       __Vtemp858[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __Vtemp858[0U]))));
    VL_EXTEND_WQ(127,64, __Vtemp860, vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_74);
    VL_EXTEND_WQ(127,64, __Vtemp861, vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_69);
    VL_EXTEND_WQ(127,64, __Vtemp862, vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_74);
    VL_EXTEND_WQ(127,64, __Vtemp863, vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_69);
    VL_EXTEND_WQ(127,64, __Vtemp864, vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_59);
    VL_EXTEND_WQ(127,64, __Vtemp865, vlSelf->top__DOT__exu_step__DOT__srl_res);
    VL_EXTEND_WQ(127,64, __Vtemp866, top__DOT__exu_step__DOT___io_res2rd_T_162);
    if ((0x31U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))) {
        top__DOT__exu_step__DOT___io_res2rd_T_186[0U] 
            = __Vtemp852[0U];
        top__DOT__exu_step__DOT___io_res2rd_T_186[1U] 
            = __Vtemp852[1U];
        top__DOT__exu_step__DOT___io_res2rd_T_186[2U] 
            = __Vtemp852[2U];
        top__DOT__exu_step__DOT___io_res2rd_T_186[3U] 
            = __Vtemp852[3U];
    } else {
        top__DOT__exu_step__DOT___io_res2rd_T_186[0U] 
            = ((0x30U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp853[0U] : ((0x13U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                     ? __Vtemp854[0U]
                                     : ((0x12U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                         ? __Vtemp855[0U]
                                         : ((0x11U 
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                             ? __Vtemp859[0U]
                                             : ((0x1dU 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                 ? 
                                                __Vtemp860[0U]
                                                 : 
                                                ((0x1cU 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? 
                                                 __Vtemp861[0U]
                                                  : 
                                                 ((0x1bU 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                   ? 
                                                  __Vtemp862[0U]
                                                   : 
                                                  ((0x1aU 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp863[0U]
                                                    : 
                                                   ((0x19U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp864[0U]
                                                     : 
                                                    ((0x18U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp865[0U]
                                                      : 
                                                     ((0x17U 
                                                       == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                       ? 
                                                      vlSelf->top__DOT__exu_step__DOT__sll_res[0U]
                                                       : 
                                                      __Vtemp866[0U])))))))))));
        top__DOT__exu_step__DOT___io_res2rd_T_186[1U] 
            = ((0x30U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp853[1U] : ((0x13U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                     ? __Vtemp854[1U]
                                     : ((0x12U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                         ? __Vtemp855[1U]
                                         : ((0x11U 
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                             ? __Vtemp859[1U]
                                             : ((0x1dU 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                 ? 
                                                __Vtemp860[1U]
                                                 : 
                                                ((0x1cU 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? 
                                                 __Vtemp861[1U]
                                                  : 
                                                 ((0x1bU 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                   ? 
                                                  __Vtemp862[1U]
                                                   : 
                                                  ((0x1aU 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp863[1U]
                                                    : 
                                                   ((0x19U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp864[1U]
                                                     : 
                                                    ((0x18U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp865[1U]
                                                      : 
                                                     ((0x17U 
                                                       == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                       ? 
                                                      vlSelf->top__DOT__exu_step__DOT__sll_res[1U]
                                                       : 
                                                      __Vtemp866[1U])))))))))));
        top__DOT__exu_step__DOT___io_res2rd_T_186[2U] 
            = ((0x30U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp853[2U] : ((0x13U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                     ? __Vtemp854[2U]
                                     : ((0x12U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                         ? __Vtemp855[2U]
                                         : ((0x11U 
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                             ? __Vtemp859[2U]
                                             : ((0x1dU 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                 ? 
                                                __Vtemp860[2U]
                                                 : 
                                                ((0x1cU 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? 
                                                 __Vtemp861[2U]
                                                  : 
                                                 ((0x1bU 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                   ? 
                                                  __Vtemp862[2U]
                                                   : 
                                                  ((0x1aU 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp863[2U]
                                                    : 
                                                   ((0x19U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp864[2U]
                                                     : 
                                                    ((0x18U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp865[2U]
                                                      : 
                                                     ((0x17U 
                                                       == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                       ? 
                                                      vlSelf->top__DOT__exu_step__DOT__sll_res[2U]
                                                       : 
                                                      __Vtemp866[2U])))))))))));
        top__DOT__exu_step__DOT___io_res2rd_T_186[3U] 
            = ((0x30U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp853[3U] : ((0x13U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                     ? __Vtemp854[3U]
                                     : ((0x12U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                         ? __Vtemp855[3U]
                                         : ((0x11U 
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                             ? __Vtemp859[3U]
                                             : ((0x1dU 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                 ? 
                                                __Vtemp860[3U]
                                                 : 
                                                ((0x1cU 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? 
                                                 __Vtemp861[3U]
                                                  : 
                                                 ((0x1bU 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                   ? 
                                                  __Vtemp862[3U]
                                                   : 
                                                  ((0x1aU 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp863[3U]
                                                    : 
                                                   ((0x19U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp864[3U]
                                                     : 
                                                    ((0x18U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp865[3U]
                                                      : 
                                                     ((0x17U 
                                                       == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                       ? 
                                                      vlSelf->top__DOT__exu_step__DOT__sll_res[3U]
                                                       : 
                                                      __Vtemp866[3U])))))))))));
    }
    VL_EXTEND_WQ(127,64, __Vtemp891, vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                 [((0x342U == (0xfffU & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                    ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))]);
    VL_EXTEND_WQ(127,64, __Vtemp892, vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                 [((0x342U == (0xfffU & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                    ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))]);
    VL_EXTEND_WQ(127,64, __Vtemp893, vlSelf->top__DOT__exu_step__DOT__CSR_Reg
                 [((0x342U == (0xfffU & (IData)(vlSelf->top__DOT__idu_step_io_imm)))
                    ? 3U : (IData)(vlSelf->top__DOT__exu_step__DOT___csr_index_T_5))]);
    VL_EXTEND_WQ(127,64, __Vtemp894, vlSelf->top__DOT__exu_step__DOT__srl_res);
    VL_EXTEND_WQ(127,64, __Vtemp895, vlSelf->top__DOT__exu_step__DOT__sra_res);
    VL_EXTEND_WQ(127,64, __Vtemp896, VL_MODDIVS_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value));
    VL_EXTEND_WQ(127,64, __Vtemp897, VL_MODDIV_QQQ(64, vlSelf->top__DOT__exu_step__DOT__src1_value, vlSelf->top__DOT__exu_step__DOT__src2_value));
    VL_EXTEND_WQ(127,64, __Vtemp898, (((QData)((IData)(
                                                       ((vlSelf->top__DOT__exu_step__DOT__remuw_res 
                                                         >> 0x1fU)
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__remuw_res))));
    VL_EXTEND_WQ(127,64, __Vtemp899, (((QData)((IData)(
                                                       ((vlSelf->top__DOT__exu_step__DOT__remw_res 
                                                         >> 0x1fU)
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__remw_res))));
    VL_EXTEND_WQ(127,64, __Vtemp900, (((QData)((IData)(
                                                       ((vlSelf->top__DOT__exu_step__DOT__divuw_res 
                                                         >> 0x1fU)
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT__divuw_res))));
    if ((0x47U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))) {
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[0U] 
            = __Vtemp891[0U];
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[1U] 
            = __Vtemp891[1U];
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[2U] 
            = __Vtemp891[2U];
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[3U] 
            = __Vtemp891[3U];
    } else {
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[0U] 
            = ((0x46U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp892[0U] : ((0x3fU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                     ? __Vtemp893[0U]
                                     : ((0x38U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                         ? __Vtemp894[0U]
                                         : ((0x39U 
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                             ? __Vtemp895[0U]
                                             : ((0x37U 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                 ? 
                                                vlSelf->top__DOT__exu_step__DOT__sll_res[0U]
                                                 : 
                                                ((0x34U 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? 
                                                 __Vtemp896[0U]
                                                  : 
                                                 ((0x33U 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                   ? 
                                                  __Vtemp897[0U]
                                                   : 
                                                  ((0x32U 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp898[0U]
                                                    : 
                                                   ((0x14U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp899[0U]
                                                     : 
                                                    ((0x35U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp900[0U]
                                                      : 
                                                     top__DOT__exu_step__DOT___io_res2rd_T_186[0U]))))))))));
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[1U] 
            = ((0x46U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp892[1U] : ((0x3fU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                     ? __Vtemp893[1U]
                                     : ((0x38U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                         ? __Vtemp894[1U]
                                         : ((0x39U 
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                             ? __Vtemp895[1U]
                                             : ((0x37U 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                 ? 
                                                vlSelf->top__DOT__exu_step__DOT__sll_res[1U]
                                                 : 
                                                ((0x34U 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? 
                                                 __Vtemp896[1U]
                                                  : 
                                                 ((0x33U 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                   ? 
                                                  __Vtemp897[1U]
                                                   : 
                                                  ((0x32U 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp898[1U]
                                                    : 
                                                   ((0x14U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp899[1U]
                                                     : 
                                                    ((0x35U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp900[1U]
                                                      : 
                                                     top__DOT__exu_step__DOT___io_res2rd_T_186[1U]))))))))));
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[2U] 
            = ((0x46U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp892[2U] : ((0x3fU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                     ? __Vtemp893[2U]
                                     : ((0x38U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                         ? __Vtemp894[2U]
                                         : ((0x39U 
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                             ? __Vtemp895[2U]
                                             : ((0x37U 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                 ? 
                                                vlSelf->top__DOT__exu_step__DOT__sll_res[2U]
                                                 : 
                                                ((0x34U 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? 
                                                 __Vtemp896[2U]
                                                  : 
                                                 ((0x33U 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                   ? 
                                                  __Vtemp897[2U]
                                                   : 
                                                  ((0x32U 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp898[2U]
                                                    : 
                                                   ((0x14U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp899[2U]
                                                     : 
                                                    ((0x35U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp900[2U]
                                                      : 
                                                     top__DOT__exu_step__DOT___io_res2rd_T_186[2U]))))))))));
        vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[3U] 
            = ((0x46U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                ? __Vtemp892[3U] : ((0x3fU == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                     ? __Vtemp893[3U]
                                     : ((0x38U == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                         ? __Vtemp894[3U]
                                         : ((0x39U 
                                             == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                             ? __Vtemp895[3U]
                                             : ((0x37U 
                                                 == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                 ? 
                                                vlSelf->top__DOT__exu_step__DOT__sll_res[3U]
                                                 : 
                                                ((0x34U 
                                                  == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                  ? 
                                                 __Vtemp896[3U]
                                                  : 
                                                 ((0x33U 
                                                   == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                   ? 
                                                  __Vtemp897[3U]
                                                   : 
                                                  ((0x32U 
                                                    == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                    ? 
                                                   __Vtemp898[3U]
                                                    : 
                                                   ((0x14U 
                                                     == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                     ? 
                                                    __Vtemp899[3U]
                                                     : 
                                                    ((0x35U 
                                                      == (IData)(vlSelf->top__DOT__idu_step__DOT___inst_now_T_194))
                                                      ? 
                                                     __Vtemp900[3U]
                                                      : 
                                                     top__DOT__exu_step__DOT___io_res2rd_T_186[3U]))))))))));
    }
    vlSelf->io_outval = (((QData)((IData)(vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[0U])));
    vlSelf->top__DOT__exu_step__DOT__Regfile_MPORT_data 
        = (((((0x100073U != vlSelf->top__DOT__idu_step_io_inst) 
              & ((0x3023U != (0x707fU & vlSelf->top__DOT__idu_step_io_inst)) 
                 & ((0x1023U != (0x707fU & vlSelf->top__DOT__idu_step_io_inst)) 
                    & ((0x23U != (0x707fU & vlSelf->top__DOT__idu_step_io_inst)) 
                       & ((0x2023U != (0x707fU & vlSelf->top__DOT__idu_step_io_inst)) 
                          & ((0x1063U != (0x707fU & vlSelf->top__DOT__idu_step_io_inst)) 
                             & ((0x63U != (0x707fU 
                                           & vlSelf->top__DOT__idu_step_io_inst)) 
                                & ((0x5063U != (0x707fU 
                                                & vlSelf->top__DOT__idu_step_io_inst)) 
                                   & ((0x4063U != (0x707fU 
                                                   & vlSelf->top__DOT__idu_step_io_inst)) 
                                      & ((0x6063U != 
                                          (0x707fU 
                                           & vlSelf->top__DOT__idu_step_io_inst)) 
                                         & ((0x7063U 
                                             != (0x707fU 
                                                 & vlSelf->top__DOT__idu_step_io_inst)) 
                                            & ((0x73U 
                                                != vlSelf->top__DOT__idu_step_io_inst) 
                                               & (0x30200073U 
                                                  != vlSelf->top__DOT__idu_step_io_inst))))))))))))) 
             & (0U != (0x1fU & (vlSelf->top__DOT__idu_step_io_inst 
                                >> 7U)))) & (((IData)(vlSelf->top__DOT__i_cache_io_to_ifu_rvalid) 
                                              & (~ (IData)(vlSelf->top__DOT__idu_step_io_ctrl_sign_Readmem_en))) 
                                             | ((IData)(vlSelf->top__DOT__idu_step_io_ctrl_sign_Readmem_en) 
                                                & (IData)(vlSelf->top__DOT__d_cache_io_to_lsu_rvalid))))
            ? (((QData)((IData)(vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu_step__DOT___io_res2rd_T_208[0U])))
            : ((0U == (0x1fU & (vlSelf->top__DOT__idu_step_io_inst 
                                >> 7U))) ? 0ULL : vlSelf->top__DOT__exu_step__DOT__Regfile
               [(0x1fU & (vlSelf->top__DOT__idu_step_io_inst 
                          >> 7U))]));
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__12(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__12\n"); );
    // Body
    vlSelf->top__DOT__d_cache__DOT___GEN_16277 = ((IData)(vlSelf->reset)
                                                   ? 0ULL
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                    ? (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr))
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                     ? (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr))
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                      ? (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr))
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                       ? (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr))
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                        ? (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr))
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelf->top__DOT__d_cache__DOT__state))
                                                         ? 
                                                        ((1U 
                                                          == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                          ? (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr))
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSelf->top__DOT__d_cache__DOT__unuse_way))
                                                           ? (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr))
                                                           : 
                                                          ((IData)(vlSelf->top__DOT__d_cache__DOT__quene)
                                                            ? 
                                                           ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_4497)
                                                             ? 
                                                            (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_384)) 
                                                              << 0xaU) 
                                                             | (QData)((IData)(
                                                                               (0x3f8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                                >> 3U)) 
                                                                                << 3U)))))
                                                             : (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr)))
                                                            : 
                                                           ((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_2957)
                                                             ? 
                                                            (((QData)((IData)(vlSelf->top__DOT__d_cache__DOT___GEN_127)) 
                                                              << 0xaU) 
                                                             | (QData)((IData)(
                                                                               (0x3f8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__exu_step__DOT__add_res 
                                                                                >> 3U)) 
                                                                                << 3U)))))
                                                             : (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr))))))
                                                         : (QData)((IData)(vlSelf->top__DOT__d_cache__DOT__write_back_addr)))))))));
}

void Vtop___024root___sequent__TOP__6(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__7(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__8(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__9(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__10(Vtop___024root* vlSelf);

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vtop___024root___sequent__TOP__6(vlSelf);
        Vtop___024root___sequent__TOP__7(vlSelf);
        Vtop___024root___sequent__TOP__8(vlSelf);
        Vtop___024root___sequent__TOP__9(vlSelf);
        Vtop___024root___sequent__TOP__10(vlSelf);
        Vtop___024root___sequent__TOP__11(vlSelf);
    }
    Vtop___024root___combo__TOP__12(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
