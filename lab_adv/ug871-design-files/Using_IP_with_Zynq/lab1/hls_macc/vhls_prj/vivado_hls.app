<project xmlns="com.autoesl.autopilot.project" name="vhls_prj" top="hls_macc">
    <includePaths/>
    <libraryPaths/>
    <Simulation argv="">
        <SimFlow name="csim" ldflags="" mflags="" setup="false" optimizeCompile="false" clean="false"/>
    </Simulation>
    <files xmlns="">
        <file name="../../hls_macc_test.c" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" csimflags=" -Wno-unknown-pragmas" blackbox="false"/>
        <file name="hls_macc.c" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
    </files>
    <solutions xmlns="">
        <solution name="solution1" status="active"/>
    </solutions>
</project>

