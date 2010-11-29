<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en">
<head>
<meta http-equiv="content-type" content="text/html; charset=utf-8" />
<title>FIT Mostar - main.cpp - bring.out redmine</title>
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
				
        <h2>main.cpp</h2>

<div class="attachments">
<p>ovo radi - 
   <span class="author">Ernad Husremović, Ponedjeljak, 29. Novembar 2010, 11:11</span></p>
<p><a href="/attachments/download/4950/main.cpp">Download</a>   <span class="size">(461 Bytes)</span></p>

</div>
&nbsp;
<div class="autoscroll">
<table class="filecontent syntaxhl">
<tbody>


<tr><th class="line-num" id="L1"><a href="#L1">1</a></th><td class="line-code"><pre><span class="pp">#include</span> <span class="ic">&lt;iostream&gt;</span>
</pre></td></tr>


<tr><th class="line-num" id="L2"><a href="#L2">2</a></th><td class="line-code"><pre><span class="di">using</span> <span class="r">namespace</span> std;
</pre></td></tr>


<tr><th class="line-num" id="L3"><a href="#L3">3</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L4"><a href="#L4">4</a></th><td class="line-code"><pre><span class="pp">#include</span> <span class="ic">&quot;my_string.h&quot;</span>
</pre></td></tr>


<tr><th class="line-num" id="L5"><a href="#L5">5</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L6"><a href="#L6">6</a></th><td class="line-code"><pre><span class="pt">int</span> main() {
</pre></td></tr>


<tr><th class="line-num" id="L7"><a href="#L7">7</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L8"><a href="#L8">8</a></th><td class="line-code"><pre>        MyString ss1(<span class="s"><span class="dl">&quot;</span><span class="k">klakla</span><span class="dl">&quot;</span></span>);
</pre></td></tr>


<tr><th class="line-num" id="L9"><a href="#L9">9</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L10"><a href="#L10">10</a></th><td class="line-code"><pre>        MyString ss2;
</pre></td></tr>


<tr><th class="line-num" id="L11"><a href="#L11">11</a></th><td class="line-code"><pre>        ss2.get(cin, <span class="ch">'\n'</span>);
</pre></td></tr>


<tr><th class="line-num" id="L12"><a href="#L12">12</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L13"><a href="#L13">13</a></th><td class="line-code"><pre>        MyString ss3;
</pre></td></tr>


<tr><th class="line-num" id="L14"><a href="#L14">14</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L15"><a href="#L15">15</a></th><td class="line-code"><pre>        ss3 = ss1 + ss2;
</pre></td></tr>


<tr><th class="line-num" id="L16"><a href="#L16">16</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L17"><a href="#L17">17</a></th><td class="line-code"><pre>        MyString ss4(ss3);
</pre></td></tr>


<tr><th class="line-num" id="L18"><a href="#L18">18</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L19"><a href="#L19">19</a></th><td class="line-code"><pre>        MyString ss5 = ss4 + MyString(<span class="s"><span class="dl">&quot;</span><span class="k">kraj</span><span class="dl">&quot;</span></span>);
</pre></td></tr>


<tr><th class="line-num" id="L20"><a href="#L20">20</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L21"><a href="#L21">21</a></th><td class="line-code"><pre>        cout &lt;&lt; <span class="s"><span class="dl">&quot;</span><span class="k">ss1=</span><span class="dl">&quot;</span></span> &lt;&lt; ss1 &lt;&lt; endl;
</pre></td></tr>


<tr><th class="line-num" id="L22"><a href="#L22">22</a></th><td class="line-code"><pre>        cout &lt;&lt; <span class="s"><span class="dl">&quot;</span><span class="k">ss2=</span><span class="dl">&quot;</span></span> &lt;&lt; ss2 &lt;&lt; endl;
</pre></td></tr>


<tr><th class="line-num" id="L23"><a href="#L23">23</a></th><td class="line-code"><pre>        cout &lt;&lt; <span class="s"><span class="dl">&quot;</span><span class="k">ss3=</span><span class="dl">&quot;</span></span> &lt;&lt; ss3 &lt;&lt; endl;
</pre></td></tr>


<tr><th class="line-num" id="L24"><a href="#L24">24</a></th><td class="line-code"><pre>        cout &lt;&lt; <span class="s"><span class="dl">&quot;</span><span class="k">ss4=</span><span class="dl">&quot;</span></span> &lt;&lt; ss4 &lt;&lt; endl;
</pre></td></tr>


<tr><th class="line-num" id="L25"><a href="#L25">25</a></th><td class="line-code"><pre>        cout &lt;&lt; <span class="s"><span class="dl">&quot;</span><span class="k">ss5=</span><span class="dl">&quot;</span></span> &lt;&lt; ss5 &lt;&lt; endl;
</pre></td></tr>


<tr><th class="line-num" id="L26"><a href="#L26">26</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L27"><a href="#L27">27</a></th><td class="line-code"><pre>        system(<span class="s"><span class="dl">&quot;</span><span class="k">pause</span><span class="dl">&quot;</span></span>);
</pre></td></tr>


<tr><th class="line-num" id="L28"><a href="#L28">28</a></th><td class="line-code"><pre>
</pre></td></tr>


<tr><th class="line-num" id="L29"><a href="#L29">29</a></th><td class="line-code"><pre>        <span class="r">return</span> <span class="i">0</span>;
</pre></td></tr>


<tr><th class="line-num" id="L30"><a href="#L30">30</a></th><td class="line-code"><pre>}</pre></td></tr>


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
