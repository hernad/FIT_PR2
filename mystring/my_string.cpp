<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en">
<head>
<meta http-equiv="content-type" content="text/html; charset=utf-8" />
<title>FIT Mostar - my_string.cpp - bring.out redmine</title>
<meta name="description" content="Redmine" />
<meta name="keywords" content="issue,bug,tracker" />
<link rel='shortcut icon' href='/favicon.ico?1290249824' />
<link href="/themes/alternate/stylesheets/application.css?1290781038" media="all" rel="stylesheet" type="text/css" />

<script src="/javascripts/prototype.js?1290249824" type="text/javascript"></script>
<script src="/javascripts/effects.js?1290249824" type="text/javascript"></script>
<script src="/javascripts/dragdrop.js?1290249824" type="text/javascript"></script>
<script src="/javascripts/controls.js?1290249824" type="text/javascript"></script>
<script src="/javascripts/application.js?1290249865" type="text/javascript"></script>
<link href="/stylesheets/jstoolbar.css?1290249824" media="screen" rel="stylesheet" type="text/css" />
<!--[if IE]>
    <style type="text/css">
      * html body{ width: expression( document.documentElement.clientWidth < 900 ? '900px' : '100%' ); }
      body {behavior: url(/stylesheets/csshover.htc?1290249824);}
    </style>
<![endif]-->

<!-- page specific tags -->
    <link href="/stylesheets/scm.css?1290249824" media="screen" rel="stylesheet" type="text/css" /></head>
<body class="theme-Alternate controller-attachments action-show">
<div id="wrapper">
<div id="wrapper2">
<div id="top-menu">
    <div id="account">
        <ul><li><a href="/my/account" class="my-account">Moj korisnički račun</a></li>
<li><a href="/logout" class="logout">Odjavi se</a></li></ul>    </div>
    <div id="loggedas">Prijavljen kao <a href="/users/4">ernad.husremovic</a></div>
    <ul><li><a href="/" class="home">Početna stranica</a></li>
<li><a href="/my/page" class="my-page">Moja stranica</a></li>
<li><a href="/projects" class="projects">Projekti</a></li>
<li><a href="/timesheet" class="timesheet">Timesheet</a></li>
<li><a href="/admin" class="administration">Administracija</a></li>
<li><a href="http://www.redmine.org/guide" class="help">Pomoć</a></li></ul></div>
      
<div id="header">
    <div id="quick-search">
        <form action="/search/index/hernad-fit" method="get">
        
        <a href="/search/index/hernad-fit" accesskey="4">Traži</a>:
        <input accesskey="f" class="small" id="q" name="q" size="20" type="text" />
        </form>
        <select onchange="if (this.value != '') { window.location = this.value; }"><option value=''>Skoči na projekat...</option><option value="" disabled="disabled">---</option><option value="/projects/b-out-ba?jump=attachments">bring.out</option><option value="/projects/infra-int?jump=attachments">&nbsp;&nbsp;&#187; infrastruktura</option><option value="/projects/infra-int-pwd?jump=attachments">&nbsp;&nbsp;&nbsp;&nbsp;&#187; infrastruktura - int / pwd</option><option value="/projects/office-sc?jump=attachments">&nbsp;&nbsp;&#187; office bring.out</option><option value="/projects/hernad-b-out-ba?jump=attachments">&nbsp;&nbsp;&#187; hernad bring.out.ba</option><option value="/projects/hernad-b-out-ba-pwd?jump=attachments">&nbsp;&nbsp;&nbsp;&nbsp;&#187; henad bring.out.ba pwd</option><option value="/projects/husremi?jump=attachments">Husremovici</option><option value="/projects/dzenana?jump=attachments">&nbsp;&nbsp;&#187; dzenana</option><option selected="selected" value="/projects/hernad-fit?jump=attachments">&nbsp;&nbsp;&#187; FIT Mostar</option><option value="/projects/klijenti?jump=attachments">klijenti bring.out</option><option value="/projects/infra-ext?jump=attachments">&nbsp;&nbsp;&#187; infrastruktura - ext</option><option value="/projects/infra-ext-pwd?jump=attachments">&nbsp;&nbsp;&nbsp;&nbsp;&#187; infrastruktura - ext  pwd</option><option value="/projects/bringout-projekti?jump=attachments">projekti bring.out</option><option value="/projects/alarm-b-out-ba?jump=attachments">&nbsp;&nbsp;&#187; alarm bring.out.ba</option><option value="/projects/fiskalizacija?jump=attachments">&nbsp;&nbsp;&#187; fiskalizacija</option><option value="/projects/fmk-sc?jump=attachments">&nbsp;&nbsp;&#187; fmk bring.out clipper</option><option value="/projects/ld-b-out-ba?jump=attachments">&nbsp;&nbsp;&nbsp;&nbsp;&#187; LD bring.out clipper</option><option value="/projects/rnal-rg?jump=attachments">&nbsp;&nbsp;&nbsp;&nbsp;&#187; RNAL rama-glas</option><option value="/projects/fmk-b-out-ba?jump=attachments">&nbsp;&nbsp;&#187; fmk bring.out harbour</option><option value="/projects/fakt-b-out-ba?jump=attachments">&nbsp;&nbsp;&nbsp;&nbsp;&#187; FAKT bring.out.ba</option><option value="/projects/fin-b-out-ba?jump=attachments">&nbsp;&nbsp;&nbsp;&nbsp;&#187; FIN bring.out.ba</option><option value="/projects/fmk-common-b-out-ba?jump=attachments">&nbsp;&nbsp;&nbsp;&nbsp;&#187; Fmk common</option><option value="/projects/fmk-lib-b-out-ba?jump=attachments">&nbsp;&nbsp;&nbsp;&nbsp;&#187; fmk libs bring.out.ba</option><option value="/projects/kalk-b-out-ba?jump=attachments">&nbsp;&nbsp;&nbsp;&nbsp;&#187; KALK bring.out.ba</option><option value="/projects/knowhow?jump=attachments">&nbsp;&nbsp;&#187; knowhow ERP</option><option value="/projects/toolbox?jump=attachments">toolbox</option><option value="/projects/app-tbox-b-out-ba?jump=attachments">&nbsp;&nbsp;&#187; application toolbox</option><option value="/projects/git-b-out-ba?jump=attachments">&nbsp;&nbsp;&nbsp;&nbsp;&#187; git bring.out.ba</option><option value="/projects/oo-b-out-ba?jump=attachments">&nbsp;&nbsp;&nbsp;&nbsp;&#187; openoffice.org </option><option value="/projects/redmine-b-out-ba?jump=attachments">&nbsp;&nbsp;&nbsp;&nbsp;&#187; redmine bring.out</option><option value="/projects/dev-tbox-b-out-ba?jump=attachments">&nbsp;&nbsp;&#187; developer toolbox</option><option value="/projects/harbour-b-out-ba?jump=attachments">&nbsp;&nbsp;&nbsp;&nbsp;&#187; harbour</option><option value="/projects/java-b-out-ba?jump=attachments">&nbsp;&nbsp;&nbsp;&nbsp;&#187; java bring.out.ba</option><option value="/projects/ruby-b-out-ba?jump=attachments">&nbsp;&nbsp;&nbsp;&nbsp;&#187; ruby</option><option value="/projects/rails-b-out-ba?jump=attachments">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&#187; rails framework</option><option value="/projects/hardware-b-out-ba?jump=attachments">&nbsp;&nbsp;&#187; hardware bring.out</option><option value="/projects/infra-sw-toolbox?jump=attachments">&nbsp;&nbsp;&#187; infrastrukturalni sw</option><option value="/projects/asterisk-b-out-ba?jump=attachments">&nbsp;&nbsp;&nbsp;&nbsp;&#187; voip bring.out.ba</option><option value="/projects/zimbra-b-out-ba?jump=attachments">&nbsp;&nbsp;&nbsp;&nbsp;&#187; zimbra bring.out.ba</option><option value="/projects/labs-b-out-ba?jump=attachments">&nbsp;&nbsp;&#187; labs bring.out.ba</option><option value="/projects/system-toolbox?jump=attachments">&nbsp;&nbsp;&#187; system toolbox</option><option value="/projects/linux?jump=attachments">&nbsp;&nbsp;&nbsp;&nbsp;&#187; linux</option><option value="/projects/openvz-b-out-ba?jump=attachments">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&#187; openvz bring.out.ba</option><option value="/projects/openwrt-b-out-ba?jump=attachments">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&#187; routeri</option><option value="/projects/ubuntu-b-out-ba?jump=attachments">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&#187; ubuntu</option><option value="/projects/windows?jump=attachments">&nbsp;&nbsp;&nbsp;&nbsp;&#187; windowsi</option><option value="/projects/sandbox?jump=attachments">x- sandbox -x</option></select>
    </div>
    
    <h1><a href="/projects/husremi?jump=attachments" class="root">Husremovici</a> &#187; FIT Mostar</h1>
    
    
    <div id="main-menu">
        <ul><li><a href="/projects/hernad-fit" class="overview">Pregled</a></li>
<li><a href="/projects/hernad-fit/activity" class="activity">Operacija</a></li>
<li><a href="/projects/hernad-fit/issues" class="issues">Aktivnosti</a></li>
<li><a href="/projects/hernad-fit/issues/new" accesskey="7" class="new-issue">Nova aktivnost</a></li>
<li><a href="/projects/hernad-fit/issues/gantt" class="gantt">Gantt</a></li>
<li><a href="/projects/hernad-fit/issues/calendar" class="calendar">Kalendar</a></li>
<li><a href="/projects/hernad-fit/news" class="news">Novosti</a></li>
<li><a href="/projects/hernad-fit/documents" class="documents">Dokumenti</a></li>
<li><a href="/projects/hernad-fit/wiki" class="wiki">Wiki stranice</a></li>
<li><a href="/projects/hernad-fit/files" class="files">Fajlovi</a></li>
<li><a href="/projects/hernad-fit/settings" class="settings">Postavke</a></li></ul>
    </div>
    
</div>

<div class="nosidebar" id="main">
    <div id="sidebar">        
        <img alt="Logo" src="/images/logo.png?1290780817" />
        
        
    </div>
    
    <div id="content">
				
        <h2>my_string.cpp</h2>

<div class="attachments">
<p>
   <span class="author">Ernad Husremović, Ponedjeljak, 29. Novembar 2010, 11:11</span></p>
<p><a href="/attachments/download/4951/my_string.cpp">Download</a>   <span class="size">(2,7 KB)</span></p>

</div>
&nbsp;
<div class="autoscroll">
<table class="filecontent syntaxhl">
<tbody>


<tr><th class="line-num" id="L1"><a href="#L1">1</a></th><td class="line-code"><pre><span class="pp">#include</span> <span class="ic">&quot;my_string.h&quot;</span>
</pre></td></tr>


<tr><th class="line-num" id="L2"><a href="#L2">2</a></th><td class="line-code"><pre><span class="pp">#include</span> <span class="ic">&lt;iostream&gt;</span>
</pre></td></tr>


<tr><th class="line-num" id="L3"><a href="#L3">3</a></th><td class="line-code"><pre><span class="pp">#include</span> <span class="ic">&lt;cstring&gt;</span>
</pre></td></tr>


<tr><th class="line-num" id="L4"><a href="#L4">4</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L5"><a href="#L5">5</a></th><td class="line-code"><pre><span class="di">using</span> <span class="r">namespace</span> std;
</pre></td></tr>


<tr><th class="line-num" id="L6"><a href="#L6">6</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L7"><a href="#L7">7</a></th><td class="line-code"><pre>MyString::MyString()
</pre></td></tr>


<tr><th class="line-num" id="L8"><a href="#L8">8</a></th><td class="line-code"><pre>{
</pre></td></tr>


<tr><th class="line-num" id="L9"><a href="#L9">9</a></th><td class="line-code"><pre>        st =<span class="r">new</span> <span class="pt">char</span>[<span class="i">1</span>];
</pre></td></tr>


<tr><th class="line-num" id="L10"><a href="#L10">10</a></th><td class="line-code"><pre>        st[<span class="i">0</span>] = <span class="ch">'\0'</span>;
</pre></td></tr>


<tr><th class="line-num" id="L11"><a href="#L11">11</a></th><td class="line-code"><pre>}
</pre></td></tr>


<tr><th class="line-num" id="L12"><a href="#L12">12</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L13"><a href="#L13">13</a></th><td class="line-code"><pre>MyString::MyString(<span class="pt">char</span> pst[])
</pre></td></tr>


<tr><th class="line-num" id="L14"><a href="#L14">14</a></th><td class="line-code"><pre>{
</pre></td></tr>


<tr><th class="line-num" id="L15"><a href="#L15">15</a></th><td class="line-code"><pre>        <span class="pt">int</span> i=<span class="i">0</span>;
</pre></td></tr>


<tr><th class="line-num" id="L16"><a href="#L16">16</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L17"><a href="#L17">17</a></th><td class="line-code"><pre>        st = <span class="r">new</span> <span class="pt">char</span>[strlen(pst)+<span class="i">1</span>];
</pre></td></tr>


<tr><th class="line-num" id="L18"><a href="#L18">18</a></th><td class="line-code"><pre>        strcpy(st, pst);
</pre></td></tr>


<tr><th class="line-num" id="L19"><a href="#L19">19</a></th><td class="line-code"><pre>}
</pre></td></tr>


<tr><th class="line-num" id="L20"><a href="#L20">20</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L21"><a href="#L21">21</a></th><td class="line-code"><pre><span class="c">// copy constructor</span>
</pre></td></tr>


<tr><th class="line-num" id="L22"><a href="#L22">22</a></th><td class="line-code"><pre>MyString::MyString(<span class="di">const</span> MyString&amp; c) {
</pre></td></tr>


<tr><th class="line-num" id="L23"><a href="#L23">23</a></th><td class="line-code"><pre>        <span class="pt">int</span> i=<span class="i">0</span>;
</pre></td></tr>


<tr><th class="line-num" id="L24"><a href="#L24">24</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L25"><a href="#L25">25</a></th><td class="line-code"><pre>        st=<span class="r">new</span> <span class="pt">char</span>[c.getLength()+<span class="i">1</span>];
</pre></td></tr>


<tr><th class="line-num" id="L26"><a href="#L26">26</a></th><td class="line-code"><pre>        <span class="r">for</span>(i=<span class="i">0</span>; i &lt; c.getLength()+<span class="i">1</span>; i++) {
</pre></td></tr>


<tr><th class="line-num" id="L27"><a href="#L27">27</a></th><td class="line-code"><pre>                st[i] = c.st[i];
</pre></td></tr>


<tr><th class="line-num" id="L28"><a href="#L28">28</a></th><td class="line-code"><pre>        }
</pre></td></tr>


<tr><th class="line-num" id="L29"><a href="#L29">29</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L30"><a href="#L30">30</a></th><td class="line-code"><pre>}
</pre></td></tr>


<tr><th class="line-num" id="L31"><a href="#L31">31</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L32"><a href="#L32">32</a></th><td class="line-code"><pre>MyString::~MyString() {
</pre></td></tr>


<tr><th class="line-num" id="L33"><a href="#L33">33</a></th><td class="line-code"><pre>        <span class="r">delete</span> [] st;
</pre></td></tr>


<tr><th class="line-num" id="L34"><a href="#L34">34</a></th><td class="line-code"><pre>}
</pre></td></tr>


<tr><th class="line-num" id="L35"><a href="#L35">35</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L36"><a href="#L36">36</a></th><td class="line-code"><pre><span class="pt">char</span> MyString::getIthChar (<span class="pt">unsigned</span> <span class="pt">int</span> pos, <span class="pt">bool</span>&amp; err) <span class="di">const</span> {
</pre></td></tr>


<tr><th class="line-num" id="L37"><a href="#L37">37</a></th><td class="line-code"><pre>        <span class="r">if</span> (pos&lt;getLength()) {
</pre></td></tr>


<tr><th class="line-num" id="L38"><a href="#L38">38</a></th><td class="line-code"><pre>                err = <span class="pc">false</span>;
</pre></td></tr>


<tr><th class="line-num" id="L39"><a href="#L39">39</a></th><td class="line-code"><pre>                <span class="r">return</span> st[pos];
</pre></td></tr>


<tr><th class="line-num" id="L40"><a href="#L40">40</a></th><td class="line-code"><pre>        }
</pre></td></tr>


<tr><th class="line-num" id="L41"><a href="#L41">41</a></th><td class="line-code"><pre>        <span class="r">else</span> {
</pre></td></tr>


<tr><th class="line-num" id="L42"><a href="#L42">42</a></th><td class="line-code"><pre>                err = <span class="pc">true</span>;
</pre></td></tr>


<tr><th class="line-num" id="L43"><a href="#L43">43</a></th><td class="line-code"><pre>                <span class="r">return</span> <span class="ch">'\0'</span>;
</pre></td></tr>


<tr><th class="line-num" id="L44"><a href="#L44">44</a></th><td class="line-code"><pre>        }
</pre></td></tr>


<tr><th class="line-num" id="L45"><a href="#L45">45</a></th><td class="line-code"><pre>}
</pre></td></tr>


<tr><th class="line-num" id="L46"><a href="#L46">46</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L47"><a href="#L47">47</a></th><td class="line-code"><pre><span class="pt">unsigned</span> <span class="pt">int</span> MyString::getLength() <span class="di">const</span> {
</pre></td></tr>


<tr><th class="line-num" id="L48"><a href="#L48">48</a></th><td class="line-code"><pre>        <span class="r">return</span> strlen(st);
</pre></td></tr>


<tr><th class="line-num" id="L49"><a href="#L49">49</a></th><td class="line-code"><pre>}
</pre></td></tr>


<tr><th class="line-num" id="L50"><a href="#L50">50</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L51"><a href="#L51">51</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L52"><a href="#L52">52</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L53"><a href="#L53">53</a></th><td class="line-code"><pre><span class="pt">unsigned</span> <span class="pt">int</span> MyString::substring(<span class="di">const</span> MyString&amp; c) <span class="di">const</span> {
</pre></td></tr>


<tr><th class="line-num" id="L54"><a href="#L54">54</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L55"><a href="#L55">55</a></th><td class="line-code"><pre>          <span class="r">return</span> <span class="i">0</span>;
</pre></td></tr>


<tr><th class="line-num" id="L56"><a href="#L56">56</a></th><td class="line-code"><pre>}
</pre></td></tr>


<tr><th class="line-num" id="L57"><a href="#L57">57</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L58"><a href="#L58">58</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L59"><a href="#L59">59</a></th><td class="line-code"><pre>MyString&amp; MyString::<span class="di">operator</span>= (<span class="di">const</span> MyString&amp; c) {
</pre></td></tr>


<tr><th class="line-num" id="L60"><a href="#L60">60</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L61"><a href="#L61">61</a></th><td class="line-code"><pre>        <span class="pt">int</span> i=<span class="i">0</span>;
</pre></td></tr>


<tr><th class="line-num" id="L62"><a href="#L62">62</a></th><td class="line-code"><pre>        <span class="r">delete</span>[] st;
</pre></td></tr>


<tr><th class="line-num" id="L63"><a href="#L63">63</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L64"><a href="#L64">64</a></th><td class="line-code"><pre>        st=<span class="r">new</span> <span class="pt">char</span>[c.getLength()+<span class="i">1</span>];
</pre></td></tr>


<tr><th class="line-num" id="L65"><a href="#L65">65</a></th><td class="line-code"><pre>        strcpy(st, c.st);
</pre></td></tr>


<tr><th class="line-num" id="L66"><a href="#L66">66</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L67"><a href="#L67">67</a></th><td class="line-code"><pre>        <span class="r">return</span> *<span class="lv">this</span>;
</pre></td></tr>


<tr><th class="line-num" id="L68"><a href="#L68">68</a></th><td class="line-code"><pre>}
</pre></td></tr>


<tr><th class="line-num" id="L69"><a href="#L69">69</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L70"><a href="#L70">70</a></th><td class="line-code"><pre><span class="pt">bool</span> MyString::<span class="di">operator</span>== (<span class="di">const</span> MyString&amp; c) <span class="di">const</span>
</pre></td></tr>


<tr><th class="line-num" id="L71"><a href="#L71">71</a></th><td class="line-code"><pre>{
</pre></td></tr>


<tr><th class="line-num" id="L72"><a href="#L72">72</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L73"><a href="#L73">73</a></th><td class="line-code"><pre>        <span class="pt">int</span> i=<span class="i">0</span>;
</pre></td></tr>


<tr><th class="line-num" id="L74"><a href="#L74">74</a></th><td class="line-code"><pre>        <span class="pt">int</span> l;
</pre></td></tr>


<tr><th class="line-num" id="L75"><a href="#L75">75</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L76"><a href="#L76">76</a></th><td class="line-code"><pre>        l=getLength();
</pre></td></tr>


<tr><th class="line-num" id="L77"><a href="#L77">77</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L78"><a href="#L78">78</a></th><td class="line-code"><pre>        <span class="r">if</span> (c.getLength() != <span class="i">1</span>) 
</pre></td></tr>


<tr><th class="line-num" id="L79"><a href="#L79">79</a></th><td class="line-code"><pre>                <span class="r">return</span> <span class="pc">false</span>;
</pre></td></tr>


<tr><th class="line-num" id="L80"><a href="#L80">80</a></th><td class="line-code"><pre>        <span class="r">else</span> {
</pre></td></tr>


<tr><th class="line-num" id="L81"><a href="#L81">81</a></th><td class="line-code"><pre>                <span class="r">while</span>( c.st[i] == st[i] &amp;&amp; i&lt;<span class="i">1</span>) {
</pre></td></tr>


<tr><th class="line-num" id="L82"><a href="#L82">82</a></th><td class="line-code"><pre>                        i=i+<span class="i">1</span>;
</pre></td></tr>


<tr><th class="line-num" id="L83"><a href="#L83">83</a></th><td class="line-code"><pre>                }
</pre></td></tr>


<tr><th class="line-num" id="L84"><a href="#L84">84</a></th><td class="line-code"><pre>                <span class="r">return</span> (c.st[i] == st[i]);
</pre></td></tr>


<tr><th class="line-num" id="L85"><a href="#L85">85</a></th><td class="line-code"><pre>        }
</pre></td></tr>


<tr><th class="line-num" id="L86"><a href="#L86">86</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L87"><a href="#L87">87</a></th><td class="line-code"><pre>}
</pre></td></tr>


<tr><th class="line-num" id="L88"><a href="#L88">88</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L89"><a href="#L89">89</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L90"><a href="#L90">90</a></th><td class="line-code"><pre><span class="pt">bool</span> MyString::<span class="di">operator</span>&lt;=(<span class="di">const</span> MyString&amp; c) <span class="di">const</span> {
</pre></td></tr>


<tr><th class="line-num" id="L91"><a href="#L91">91</a></th><td class="line-code"><pre>        <span class="pt">int</span> i=<span class="i">0</span>;
</pre></td></tr>


<tr><th class="line-num" id="L92"><a href="#L92">92</a></th><td class="line-code"><pre>        <span class="r">while</span> (st[i]==c.st[i] &amp;&amp; st[i]!=<span class="ch">'\0'</span>) {
</pre></td></tr>


<tr><th class="line-num" id="L93"><a href="#L93">93</a></th><td class="line-code"><pre>                i++;
</pre></td></tr>


<tr><th class="line-num" id="L94"><a href="#L94">94</a></th><td class="line-code"><pre>        }
</pre></td></tr>


<tr><th class="line-num" id="L95"><a href="#L95">95</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L96"><a href="#L96">96</a></th><td class="line-code"><pre>        <span class="r">return</span> (st[i] &lt;= c.st[i]);
</pre></td></tr>


<tr><th class="line-num" id="L97"><a href="#L97">97</a></th><td class="line-code"><pre>}
</pre></td></tr>


<tr><th class="line-num" id="L98"><a href="#L98">98</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L99"><a href="#L99">99</a></th><td class="line-code"><pre>MyString&amp; MyString::<span class="di">operator</span>+ (<span class="di">const</span> MyString&amp; c) {
</pre></td></tr>


<tr><th class="line-num" id="L100"><a href="#L100">100</a></th><td class="line-code"><pre>        <span class="pt">int</span> l1, l2;
</pre></td></tr>


<tr><th class="line-num" id="L101"><a href="#L101">101</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L102"><a href="#L102">102</a></th><td class="line-code"><pre>        MyString *aux =<span class="r">new</span> MyString();
</pre></td></tr>


<tr><th class="line-num" id="L103"><a href="#L103">103</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L104"><a href="#L104">104</a></th><td class="line-code"><pre>        l1=getLength();
</pre></td></tr>


<tr><th class="line-num" id="L105"><a href="#L105">105</a></th><td class="line-code"><pre>        l2=c.getLength();
</pre></td></tr>


<tr><th class="line-num" id="L106"><a href="#L106">106</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L107"><a href="#L107">107</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L108"><a href="#L108">108</a></th><td class="line-code"><pre>        aux-&gt;st = <span class="r">new</span> <span class="pt">char</span>[l1+l2+<span class="i">1</span>];
</pre></td></tr>


<tr><th class="line-num" id="L109"><a href="#L109">109</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L110"><a href="#L110">110</a></th><td class="line-code"><pre>        <span class="pt">int</span> i;
</pre></td></tr>


<tr><th class="line-num" id="L111"><a href="#L111">111</a></th><td class="line-code"><pre>        <span class="r">for</span>(i=<span class="i">0</span>; i&lt;l1; i++) {
</pre></td></tr>


<tr><th class="line-num" id="L112"><a href="#L112">112</a></th><td class="line-code"><pre>                aux-&gt;st[i] = <span class="lv">this</span>-&gt;st[i];
</pre></td></tr>


<tr><th class="line-num" id="L113"><a href="#L113">113</a></th><td class="line-code"><pre>                <span class="c">// pored for ja dodao i ovdje i++ :(</span>
</pre></td></tr>


<tr><th class="line-num" id="L114"><a href="#L114">114</a></th><td class="line-code"><pre>                <span class="c">//i++;</span>
</pre></td></tr>


<tr><th class="line-num" id="L115"><a href="#L115">115</a></th><td class="line-code"><pre>        }
</pre></td></tr>


<tr><th class="line-num" id="L116"><a href="#L116">116</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L117"><a href="#L117">117</a></th><td class="line-code"><pre>        <span class="r">for</span>(<span class="pt">int</span> j=<span class="i">0</span>; j&lt;l2; j++) {
</pre></td></tr>


<tr><th class="line-num" id="L118"><a href="#L118">118</a></th><td class="line-code"><pre>                aux-&gt;st[i] = c.st[j];
</pre></td></tr>


<tr><th class="line-num" id="L119"><a href="#L119">119</a></th><td class="line-code"><pre>                <span class="c">//j++;</span>
</pre></td></tr>


<tr><th class="line-num" id="L120"><a href="#L120">120</a></th><td class="line-code"><pre>                i++;
</pre></td></tr>


<tr><th class="line-num" id="L121"><a href="#L121">121</a></th><td class="line-code"><pre>        }
</pre></td></tr>


<tr><th class="line-num" id="L122"><a href="#L122">122</a></th><td class="line-code"><pre>        aux-&gt;st[i]=<span class="ch">'\0'</span>;
</pre></td></tr>


<tr><th class="line-num" id="L123"><a href="#L123">123</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L124"><a href="#L124">124</a></th><td class="line-code"><pre>        <span class="r">return</span> *aux;
</pre></td></tr>


<tr><th class="line-num" id="L125"><a href="#L125">125</a></th><td class="line-code"><pre>}
</pre></td></tr>


<tr><th class="line-num" id="L126"><a href="#L126">126</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L127"><a href="#L127">127</a></th><td class="line-code"><pre><span class="di">void</span> MyString::concat(<span class="pt">char</span>* c) {
</pre></td></tr>


<tr><th class="line-num" id="L128"><a href="#L128">128</a></th><td class="line-code"><pre>        <span class="pt">int</span> i, j, l1, l2;
</pre></td></tr>


<tr><th class="line-num" id="L129"><a href="#L129">129</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L130"><a href="#L130">130</a></th><td class="line-code"><pre>        <span class="pt">char</span>* aux;
</pre></td></tr>


<tr><th class="line-num" id="L131"><a href="#L131">131</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L132"><a href="#L132">132</a></th><td class="line-code"><pre>        aux=<span class="r">new</span> <span class="pt">char</span>[<span class="lv">this</span>-&gt;getLength() + strlen(c) + <span class="i">1</span>];
</pre></td></tr>


<tr><th class="line-num" id="L133"><a href="#L133">133</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L134"><a href="#L134">134</a></th><td class="line-code"><pre>        i=<span class="i">0</span>; j=<span class="i">0</span>;
</pre></td></tr>


<tr><th class="line-num" id="L135"><a href="#L135">135</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L136"><a href="#L136">136</a></th><td class="line-code"><pre>        <span class="r">while</span> (st[i] != <span class="ch">'\0'</span>) {
</pre></td></tr>


<tr><th class="line-num" id="L137"><a href="#L137">137</a></th><td class="line-code"><pre>                aux[i] = st[i];
</pre></td></tr>


<tr><th class="line-num" id="L138"><a href="#L138">138</a></th><td class="line-code"><pre>                i++;
</pre></td></tr>


<tr><th class="line-num" id="L139"><a href="#L139">139</a></th><td class="line-code"><pre>        }
</pre></td></tr>


<tr><th class="line-num" id="L140"><a href="#L140">140</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L141"><a href="#L141">141</a></th><td class="line-code"><pre>        <span class="r">while</span>(c[j] != <span class="ch">'\0'</span>) {
</pre></td></tr>


<tr><th class="line-num" id="L142"><a href="#L142">142</a></th><td class="line-code"><pre>                aux[i] = c[j];
</pre></td></tr>


<tr><th class="line-num" id="L143"><a href="#L143">143</a></th><td class="line-code"><pre>                j++; i++;
</pre></td></tr>


<tr><th class="line-num" id="L144"><a href="#L144">144</a></th><td class="line-code"><pre>        }
</pre></td></tr>


<tr><th class="line-num" id="L145"><a href="#L145">145</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L146"><a href="#L146">146</a></th><td class="line-code"><pre>        aux[i]=<span class="ch">'\0'</span>;
</pre></td></tr>


<tr><th class="line-num" id="L147"><a href="#L147">147</a></th><td class="line-code"><pre>        <span class="r">delete</span> [] st;
</pre></td></tr>


<tr><th class="line-num" id="L148"><a href="#L148">148</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L149"><a href="#L149">149</a></th><td class="line-code"><pre>        st=aux;
</pre></td></tr>


<tr><th class="line-num" id="L150"><a href="#L150">150</a></th><td class="line-code"><pre>}
</pre></td></tr>


<tr><th class="line-num" id="L151"><a href="#L151">151</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L152"><a href="#L152">152</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L153"><a href="#L153">153</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L154"><a href="#L154">154</a></th><td class="line-code"><pre><span class="di">void</span> MyString::get(istream&amp; c, <span class="pt">char</span> test) {
</pre></td></tr>


<tr><th class="line-num" id="L155"><a href="#L155">155</a></th><td class="line-code"><pre>        <span class="di">const</span> <span class="pt">int</span> NCHAR=<span class="i">10</span>;
</pre></td></tr>


<tr><th class="line-num" id="L156"><a href="#L156">156</a></th><td class="line-code"><pre>        <span class="pt">int</span> i;
</pre></td></tr>


<tr><th class="line-num" id="L157"><a href="#L157">157</a></th><td class="line-code"><pre>        <span class="pt">bool</span> end=<span class="pc">false</span>;
</pre></td></tr>


<tr><th class="line-num" id="L158"><a href="#L158">158</a></th><td class="line-code"><pre>        <span class="pt">char</span> aux[NCHAR+<span class="i">1</span>];
</pre></td></tr>


<tr><th class="line-num" id="L159"><a href="#L159">159</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L160"><a href="#L160">160</a></th><td class="line-code"><pre>        <span class="c">// !!!!</span>
</pre></td></tr>


<tr><th class="line-num" id="L161"><a href="#L161">161</a></th><td class="line-code"><pre>        <span class="r">delete</span> [] st;
</pre></td></tr>


<tr><th class="line-num" id="L162"><a href="#L162">162</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L163"><a href="#L163">163</a></th><td class="line-code"><pre>        st = <span class="r">new</span> <span class="pt">char</span>[<span class="i">1</span>]; st[<span class="i">0</span>]=<span class="ch">'\0'</span>;
</pre></td></tr>


<tr><th class="line-num" id="L164"><a href="#L164">164</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L165"><a href="#L165">165</a></th><td class="line-code"><pre>        <span class="r">while</span> (!end) {
</pre></td></tr>


<tr><th class="line-num" id="L166"><a href="#L166">166</a></th><td class="line-code"><pre>                c.get(aux[<span class="i">0</span>]);
</pre></td></tr>


<tr><th class="line-num" id="L167"><a href="#L167">167</a></th><td class="line-code"><pre>                i=<span class="i">0</span>;
</pre></td></tr>


<tr><th class="line-num" id="L168"><a href="#L168">168</a></th><td class="line-code"><pre>                <span class="r">while</span> (aux[i] !=test &amp;&amp; i&lt;NCHAR-<span class="i">1</span>) {
</pre></td></tr>


<tr><th class="line-num" id="L169"><a href="#L169">169</a></th><td class="line-code"><pre>                        i++;
</pre></td></tr>


<tr><th class="line-num" id="L170"><a href="#L170">170</a></th><td class="line-code"><pre>                        c.get(aux[i]);
</pre></td></tr>


<tr><th class="line-num" id="L171"><a href="#L171">171</a></th><td class="line-code"><pre>                }
</pre></td></tr>


<tr><th class="line-num" id="L172"><a href="#L172">172</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L173"><a href="#L173">173</a></th><td class="line-code"><pre>                <span class="r">if</span> (aux[i]==test) {
</pre></td></tr>


<tr><th class="line-num" id="L174"><a href="#L174">174</a></th><td class="line-code"><pre>                        aux[i]=<span class="ch">'\0'</span>;
</pre></td></tr>


<tr><th class="line-num" id="L175"><a href="#L175">175</a></th><td class="line-code"><pre>                        end=<span class="pc">true</span>;
</pre></td></tr>


<tr><th class="line-num" id="L176"><a href="#L176">176</a></th><td class="line-code"><pre>                }
</pre></td></tr>


<tr><th class="line-num" id="L177"><a href="#L177">177</a></th><td class="line-code"><pre>                <span class="r">else</span> aux[i+<span class="i">1</span>]=<span class="ch">'\0'</span>;
</pre></td></tr>


<tr><th class="line-num" id="L178"><a href="#L178">178</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L179"><a href="#L179">179</a></th><td class="line-code"><pre>                <span class="lv">this</span>-&gt;concat(aux);
</pre></td></tr>


<tr><th class="line-num" id="L180"><a href="#L180">180</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L181"><a href="#L181">181</a></th><td class="line-code"><pre>        }
</pre></td></tr>


<tr><th class="line-num" id="L182"><a href="#L182">182</a></th><td class="line-code"><pre>}
</pre></td></tr>


<tr><th class="line-num" id="L183"><a href="#L183">183</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L184"><a href="#L184">184</a></th><td class="line-code"><pre><span class="c">// ovdje sam se puno zadr�ao - stajalo je const Mystring ca ... bez &amp;</span>
</pre></td></tr>


<tr><th class="line-num" id="L185"><a href="#L185">185</a></th><td class="line-code"><pre><span class="c">// kompajler mi to nije prijavio nego je rekao da je ca.st inaccessible</span>
</pre></td></tr>


<tr><th class="line-num" id="L186"><a href="#L186">186</a></th><td class="line-code"><pre>ostream&amp; <span class="di">operator</span>&lt;&lt;  ( ostream&amp; c, <span class="di">const</span> MyString&amp; ca) {
</pre></td></tr>


<tr><th class="line-num" id="L187"><a href="#L187">187</a></th><td class="line-code"><pre>        c &lt;&lt; ca.st;
</pre></td></tr>


<tr><th class="line-num" id="L188"><a href="#L188">188</a></th><td class="line-code"><pre>        <span class="r">return</span> c;
</pre></td></tr>


<tr><th class="line-num" id="L189"><a href="#L189">189</a></th><td class="line-code"><pre>}
</pre></td></tr>


</tbody>
</table>
</div>





        
				<div style="clear:both;"></div>
    </div>
</div>

<div id="ajax-indicator" style="display:none;"><span>Učitavam...</span></div>
	
<div id="footer">
  <div class="bgl"><div class="bgr">
    Powered by <a href="http://www.redmine.org/">Redmine</a> &copy; 2006-2010 Jean-Philippe Lang
  </div></div>
</div>
</div>
</div>

</body>

<script type="text/javascript">

  var _gaq = _gaq || [];
  _gaq.push(['_setAccount', 'UA-19924823-1']);
  _gaq.push(['_trackPageview']);

  (function() {
    var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
    ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
    var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(ga, s);
  })();

</script>

</html>
