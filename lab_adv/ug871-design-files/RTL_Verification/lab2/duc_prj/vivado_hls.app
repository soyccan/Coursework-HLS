<project xmlns="com.autoesl.autopilot.project" name="duc_prj" top="duc">
    <includePaths/>
    <libraryPaths/>
    <libraryFlag/>
    <Simulation argv="">
        <SimFlow name="csim" ldflags="" mflags=""/>
    </Simulation>
    <files xmlns="">
        <file name="../../duc_test.c" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" csimflags=" -Wno-unknown-pragmas" blackbox="false"/>
        <file name="../../golden" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" csimflags=" -Wno-unknown-pragmas" blackbox="false"/>
        <file name="duc.c" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="srrc.c" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="imf1.c" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="imf2.c" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="imf3.c" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="mixer.c" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="dds.c" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="mac.c" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
    </files>
    <solutions xmlns="">
        <solution name="solution1" status="active"/>
    </solutions>
</project>

